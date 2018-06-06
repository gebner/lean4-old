/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "kernel/instantiate.h"
#include "library/placeholder.h"
#include "library/explicit.h"
#include "library/choice.h"
#include "library/quote.h"
#include "library/vm/vm.h"
#include "library/vm/vm_expr.h"
#include "library/vm/vm_name.h"
#include "library/vm/vm_list.h"
#include "library/vm/vm_option.h"
#include "frontends/lean/util.h"
#include "frontends/lean/structure_instance.h"

namespace lean {
vm_obj pexpr_of_expr(vm_obj const & e) {
    return to_obj(mk_as_is(to_expr(e)));
}

vm_obj pexpr_to_expr(vm_obj const & e) {
    return e;
}

vm_obj pexpr_reflect(vm_obj const & e) {
    return to_obj(mk_pexpr_quote_and_substs(to_expr(e), /* is_strict */ false));
}

void initialize_vm_pexpr() {
    DECLARE_VM_BUILTIN(name({"pexpr", "of_expr"}),        pexpr_of_expr);
    DECLARE_VM_BUILTIN(name({"pexpr", "to_expr"}),        pexpr_to_expr);
    DECLARE_VM_BUILTIN(name({"pexpr", "reflect"}),        pexpr_reflect);
}

void finalize_vm_pexpr() {
}
}
