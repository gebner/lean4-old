prelude
import init.io

universes u v

structure bundled_task : Type (u+1) :=
(α : Type u) (t : task α)

namespace bundled_task

instance {α : Type u} : has_coe (task α) bundled_task :=
⟨λ t, ⟨_, t⟩⟩

end bundled_task