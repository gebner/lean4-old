/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Gabriel Ebner, Sebastian Ullrich
-/
import Leanpkg.Resolve
import Leanpkg.Git

namespace Leanpkg

def readManifest : IO Manifest := do
  let m ← Manifest.fromFile leanpkgTomlFn
  if m.leanVersion ≠ leanVersionString then
    IO.eprintln $ "\nWARNING: Lean version mismatch: installed version is " ++ leanVersionString
       ++ ", but package requires " ++ m.leanVersion ++ "\n"
  return m

def writeManifest (manifest : Lean.Syntax) (fn : String) : IO Unit := do
  IO.FS.writeFile fn manifest.reprint.get!

def lockFileName := ".leanpkg-lock"

partial def withLockFile (x : IO α) : IO α := do
  acquire
  try
    x
  finally
    IO.removeFile lockFileName
  where
    acquire (firstTime := true) :=
      try
        -- TODO: lock file should ideally contain PID
        if !System.Platform.isWindows then
          discard <| IO.Prim.Handle.mk lockFileName "wx"
        else
          -- `x` mode doesn't seem to work on Windows even though it's listed at
          -- https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/fopen-wfopen?view=msvc-160
          -- ...? Let's use the slightly racy approach then.
          if ← IO.fileExists lockFileName then
            throw <| IO.Error.alreadyExists 0 ""
          discard <| IO.Prim.Handle.mk lockFileName "w"
      catch
        | IO.Error.alreadyExists _ _ => do
          if firstTime then
            IO.eprintln s!"Waiting for prior leanpkg invocation to finish... (remove '{lockFileName}' if stuck)"
          IO.sleep (ms := 300)
          acquire (firstTime := false)
        | e => throw e

structure Configuration :=
  leanPath    : String
  leanSrcPath : String

def configure : IO Configuration := do
  let d ← readManifest
  IO.eprintln $ "configuring " ++ d.name ++ " " ++ d.version
  let assg ← solveDeps d
  let paths ← constructPath assg
  for path in paths do
    unless path == "./." do
      -- build recursively
      -- TODO: share build of common dependencies
      execCmd {
        cmd := (← IO.appPath)
        cwd := path
        args := #["build"]
      }
  let sep := System.FilePath.searchPathSeparator.toString
  return {
    leanPath    := sep.intercalate <| paths.map (· ++ "/build")
    leanSrcPath := sep.intercalate paths
  }

def execMake (makeArgs leanArgs : List String) (leanPath : String) : IO Unit := withLockFile do
  let manifest ← readManifest
  let leanArgs := (match manifest.timeout with | some t => ["-T", toString t] | none => []) ++ leanArgs
  let mut spawnArgs := {
    cmd := "sh"
    cwd := manifest.effectivePath
    args := #["-c", s!"\"{← IO.appDir}/leanmake\" LEAN_OPTS=\"{" ".intercalate leanArgs}\" LEAN_PATH=\"{leanPath}\" {" ".intercalate makeArgs} >&2"]
  }
  execCmd spawnArgs

def buildImports (imports : List String) (leanArgs : List String) : IO Unit := do
  unless (← IO.fileExists leanpkgTomlFn) do
    return
  let manifest ← readManifest
  let cfg ← configure
  let imports := imports.map (·.toName)
  -- TODO: shoddy check
  let localImports := imports.filter fun i => i.getRoot.toString.toLower == manifest.name.toLower
  if localImports != [] then
    let oleans := localImports.map fun i => s!"\"build{Lean.modPathToFilePath i}.olean\""
    execMake oleans leanArgs cfg.leanPath
  IO.println cfg.leanPath
  IO.println cfg.leanSrcPath

def build (makeArgs leanArgs : List String) : IO Unit := do
  execMake makeArgs leanArgs (← configure).leanPath

def initGitignoreContents :=
  "/build
"

def initPkg (n : String) (fromNew : Bool) : IO Unit := do
  IO.FS.writeFile leanpkgTomlFn s!"[package]
name = \"{n}\"
version = \"0.1\"
lean_version = \"{leanVersionString}\"
"
  IO.FS.writeFile s!"{n.capitalize}.lean" "def main : IO Unit :=
  IO.println \"Hello, world!\"
"
  let h ← IO.FS.Handle.mk ".gitignore" IO.FS.Mode.append (bin := false)
  h.putStr initGitignoreContents
  let gitEx ← IO.isDir ".git"
  unless gitEx do
    (do
      execCmd {cmd := "git", args := #["init", "-q"]}
      unless upstreamGitBranch = "master" do
        execCmd {cmd := "git", args := #["checkout", "-B", upstreamGitBranch]}
    ) <|> IO.eprintln "WARNING: failed to initialize git repository"

def init (n : String) := initPkg n false

def usage :=
  "Lean package manager, version " ++ uiLeanVersionString ++ "

Usage: leanpkg <command>

init <name>      create a Lean package in the current directory
configure        download and build dependencies
build [<args>]   configure and build *.olean files

See `leanpkg help <command>` for more information on a specific command."

def main : (cmd : String) → (leanpkgArgs leanArgs : List String) → IO Unit
  | "init",      [Name], []        => init Name
  | "configure", [],     []        => discard <| configure
  | "print-paths", leanpkgArgs, leanArgs => buildImports leanpkgArgs leanArgs
  | "build",     makeArgs, leanArgs  => build makeArgs leanArgs
  | "help",      ["configure"], [] => IO.println "Download dependencies

Usage:
  leanpkg configure

This command sets up the `build/deps` directory.

For each (transitive) git dependency, the specified commit is checked out
into a sub-directory of `build/deps`. If there are dependencies on multiple
versions of the same package, the version materialized is undefined. No copy
is made of local dependencies."
  | "help",       ["build"], []    => IO.println "download dependencies and build *.olean files

Usage:
  leanpkg build [<leanmake-args>] [-- <lean-args>]

This command invokes `leanpkg configure` followed by `leanmake <leanmake-args> LEAN_OPTS=<lean-args>`.
If defined, the `package.timeout` configuration value is passed to Lean via its `-T` parameter.
If no <lean-args> are given, only .olean files will be produced in `build/`. If `lib` or `bin`
is passed instead, the extracted C code is compiled with `c++` and a static library in `build/lib`
or an executable in `build/bin`, respectively, is created. `leanpkg build bin` requires a declaration
of name `main` in the root namespace, which must return `IO Unit` or `IO UInt32` (the exit code) and
may accept the program's command line arguments as a `List String` parameter.

NOTE: building and linking dependent libraries currently has to be done manually, e.g.
```
$ (cd a; leanpkg build lib)
$ (cd b; leanpkg build bin LINK_OPTS=../a/build/lib/libA.a)
```"
  | "help",       ["init"], []     => IO.println "Create a new Lean package in the current directory

Usage:
  leanpkg init <name>

This command creates a new Lean package with the given name in the current
directory."
  | "help",       _,     []        => IO.println usage
  | _,            _,     _         => throw <| IO.userError usage

private def splitCmdlineArgsCore : List String → List String × List String
  | []           => ([], [])
  | (arg::args)  => if arg == "--"
                    then ([], args)
                    else
                      let (outerArgs, innerArgs) := splitCmdlineArgsCore args
                      (arg::outerArgs, innerArgs)

def splitCmdlineArgs : List String → IO (String × List String × List String)
| [] => throw <| IO.userError usage
| [cmd] => return (cmd, [], [])
| (cmd::rest) =>
  let (outerArgs, innerArgs) := splitCmdlineArgsCore rest
  return (cmd, outerArgs, innerArgs)

end Leanpkg

def main (args : List String) : IO Unit := do
  Lean.initSearchPath none  -- HACK
  let (cmd, outerArgs, innerArgs) ← Leanpkg.splitCmdlineArgs args
  Leanpkg.main cmd outerArgs innerArgs
