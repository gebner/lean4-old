/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <iostream>
#include <chrono>
#include <iomanip>
#include "runtime/io.h"
namespace lean {
static obj_res const REAL_WORLD = box(0);

obj_res mk_io_result(obj_arg r) {
    object * res = alloc_cnstr(0, 2, 0);
    cnstr_set(res, 0, r);
    cnstr_set(res, 1, REAL_WORLD);
    return res;
}

/* `(r : α) → (except ε α × real_world)` */
obj_res mk_ioe_result(obj_arg r) {
    object * res = alloc_cnstr(1, 1, 0);
    cnstr_set(res, 0, r);
    return mk_io_result(res);
}

obj_res mk_ioe_error(obj_arg r) {
    object * res = alloc_cnstr(0, 1, 0);
    cnstr_set(res, 0, r);
    return mk_io_result(res);
}

extern "C" obj_res lean_io_prim_put_str(b_obj_arg s, obj_arg /* w */) {
    // TODO(Leo): this is a temporary hack for testing
    std::cout << string_to_std(s);
    return mk_ioe_result(box(0));
}

extern "C" obj_res lean_io_prim_get_line(obj_arg /* w */) {
    // TODO(gabriel): temporary hack for testing the server
    std::string line;
    std::getline(std::cin, line);
    if (std::cin.good()) {
        return mk_ioe_result(mk_string(line));
    } else {
        return mk_ioe_error(mk_string("eof reached"));
    }
}

extern "C" obj_res lean_io_prim_get_bytes(obj_arg n, obj_arg /* w */) {
    usize nbytes = usize_of_nat(n);
    // TODO(gabriel): temporary hack for testing the server
    std::string buf(nbytes, '\0');
    std::cin.read(&buf[0], nbytes);
    if (std::cin.good()) {
        return mk_ioe_result(mk_string(buf));
    } else {
        return mk_ioe_error(mk_string("eof reached"));
    }
}

/* handle.mk (s : string) (m : mode) (bin : bool := ff) : eio handle */
extern "C" obj_res lean_io_prim_handle_mk(b_obj_arg /* s */, uint8 /* mode */, uint8 /* bin */, obj_arg /* w */) {
    // not implemented yet
    lean_unreachable();
}

/* handle.is_eof : handle → eio bool */
extern "C" obj_res lean_io_prim_handle_is_eof(b_obj_arg /* h */, obj_arg /* w */) {
    // not implemented yet
    lean_unreachable();
}

/* handle.flush : handle → eio bool */
extern "C" obj_res lean_io_prim_handle_flush(b_obj_arg /* h */, obj_arg /* w */) {
    // not implemented yet
    lean_unreachable();
}

/* handle.close : handle → eio unit */
extern "C" obj_res lean_io_prim_handle_close(b_obj_arg /* h */, obj_arg /* w */) {
    // not implemented yet
    lean_unreachable();
}

/* handle.get_line : handle → eio unit */
extern "C" obj_res lean_io_prim_handle_get_line(b_obj_arg /* h */, obj_arg /* w */) {
    // not implemented yet
    lean_unreachable();
}

/* unsafe_io {α : Type} (fn : io α) : α */
extern "C" obj_res lean_io_unsafe(obj_arg, obj_arg fn) {
    object * r = apply_1(fn, REAL_WORLD);
    object * a = cnstr_get(r, 0);
    inc(a); dec(r);
    return a;
}

/* timeit {α : Type} (msg : string) (fn : io α) : io α */
extern "C" obj_res lean_io_timeit(obj_arg, obj_arg msg, obj_arg fn, obj_arg w) {
    auto start = std::chrono::steady_clock::now();
    object * r = apply_1(fn, w);
    auto end   = std::chrono::steady_clock::now();
    auto diff  = std::chrono::duration<double>(end - start);
    std::ostream & out = std::cout; // TODO(Leo): replace
    out << std::setprecision(3);
    if (diff < std::chrono::duration<double>(1)) {
        out << string_cstr(msg) << " " << std::chrono::duration<double, std::milli>(diff).count() << "ms\n";
    } else {
        out << string_cstr(msg) << " " << diff.count() << "s\n";
    }
    return r;
}

extern "C" obj_res lean_io_wait_any(obj_arg, obj_arg tasks, obj_arg, obj_arg) {
    object * finished_task = io_wait_any_core(tasks);
    inc(finished_task);
    dec(tasks);
    return mk_io_result(finished_task);
}

extern "C" obj_res lean_io_wait_any_2(obj_arg tasks, obj_arg) {
    if (!is_scalar(tasks)) {
        io_wait_any_core(tasks);
    }
    dec(tasks);
    return mk_io_result(box(0));
}

extern "C" obj_res lean_task_has_finished(obj_arg, obj_arg t) {
    return mk_io_result(box(!!io_has_finished_core(t)));
}

static obj_res io_mk_task_fn(obj_arg t, obj_arg) {
    object * r = apply_1(t, REAL_WORLD);
    object * x = cnstr_get(r, 0);
    inc(x);
    dec(r);
    return x;
}

typedef object * (*lean_cfun2)(object *, object *); // NOLINT

static obj_res mk_closure_2_1(lean_cfun2 fn, obj_arg a) {
    object * c = alloc_closure(fn, 1);
    closure_set(c, 0, a);
    return c;
}

extern "C" obj_res lean_io_mk_task(obj_arg, obj_arg t, obj_arg) {
    return mk_io_result(mk_task(mk_closure_2_1(io_mk_task_fn, t)));
}

}
