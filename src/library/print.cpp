/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <utility>
#include "util/escaped.h"
#include "kernel/environment.h"
#include "kernel/find_fn.h"
#include "kernel/instantiate.h"
#include "library/formatter.h"
#include "library/annotation.h"
#include "library/util.h"
#include "library/print.h"

namespace lean {
bool is_used_name(expr const & t, name const & n) {
    bool found = false;
    for_each(t, [&](expr const & e, unsigned) {
            if (found) return false; // already found
            if ((is_constant(e) && const_name(e).get_root() == n)  // t has a constant starting with n
                || (is_local(e) && (local_name(e) == n || local_pp_name(e) == n))) { // t has a local constant named n
                found = true;
                return false; // found it
            }
            if (is_local(e) || is_metavar(e))
                return false; // do not search their types
            return true; // continue search
        });
    return found;
}

name pick_unused_name(expr const & t, name const & s) {
    name r = s;
    unsigned i = 1;
    while (is_used_name(t, r)) {
        r = name(s).append_after(i);
        i++;
    }
    return r;
}

bool is_numerical_name(name n) {
    while (!n.is_atomic())
        n = n.get_prefix();
    return n.is_numeral();
}

static name * g_M   = nullptr;
static name * g_x   = nullptr;

void initialize_print() {
    g_M = new name("M");
    g_x = new name("x");
}

void finalize_print() {
    delete g_M;
    delete g_x;
}

static name cleanup_name(name const & n) {
    if (is_numerical_name(n))
        return *g_x;
    else
        return n;
}

pair<expr, expr> binding_body_fresh(expr const & b, bool preserve_type) {
    lean_assert(is_binding(b));
    name n = cleanup_name(binding_name(b));
    n = pick_unused_name(binding_body(b), n);
    expr c = mk_local(n, preserve_type ? binding_domain(b) : expr(), binding_info(b));
    return mk_pair(instantiate(binding_body(b), c), c);
}

pair<expr, expr> let_body_fresh(expr const & b, bool preserve_type) {
    lean_assert(is_let(b));
    name n = cleanup_name(let_name(b));
    n = pick_unused_name(let_body(b), n);
    expr c = mk_local(n, preserve_type ? let_type(b) : expr());
    return mk_pair(instantiate(let_body(b), c), c);
}

name fix_name(name const & a) {
    if (a.is_atomic()) {
        if (a.is_numeral())
            return *g_M;
        else
            return a;
    } else {
        name p = fix_name(a.get_prefix());
        if (p == a.get_prefix())
            return a;
        else if (a.is_numeral())
            return name(p, a.get_numeral());
        else
            return name(p, a.get_string());
    }
}

/**
   \brief Very basic printer for expressions.
   It is mainly used when debugging code.
*/
struct print_expr_fn {
    std::ostream & m_out;

    std::ostream & out() { return m_out; }

    bool is_atomic(expr const & a) {
        return ::lean::is_atomic(a) || is_mlocal(a);
    }

    void print_child(expr const & a) {
        if (is_atomic(a)) {
            print(a);
        } else {
            out() << "("; print(a); out() << ")";
        }
    }

    void print_sort(expr const & a) {
        if (is_zero(sort_level(a))) {
            out() << "Prop";
        } else if (is_one(sort_level(a))) {
            out() << "Type";
        } else if (is_succ(sort_level(a))) {
            out() << "Type.{" << succ_of(sort_level(a)) << "}";
        } else {
            out() << "Sort.{" << sort_level(a) << "}";
        }
    }

    void print_app(expr const & e) {
        expr const & f = app_fn(e);
        if (is_app(f))
            print(f);
        else
            print_child(f);
        out() << " ";
        print_child(app_arg(e));
    }

    void print_arrow_body(expr const & a) {
        if (is_atomic(a) || is_arrow(a))
            return print(a);
        else
            return print_child(a);
    }

    void print_binding(char const * bname, expr e) {
        expr_kind k = e.kind();
        out() << bname;
        while (e.kind() == k) {
            out() << " ";
            auto p = binding_body_fresh(e);
            expr const & n = p.second;
            binder_info bi = binding_info(e);
            if (is_implicit(bi))
                out() << "{";
            else if (is_inst_implicit(bi))
                out() << "[";
            else if (is_strict_implicit(bi))
                out() << "{{";
            else
                out() << "(";
            out() << n << " : ";
            print(binding_domain(e));
            if (is_implicit(bi))
                out() << "}";
            else if (is_inst_implicit(bi))
                out() << "]";
            else if (is_strict_implicit(bi))
                out() << "}}";
            else
                out() << ")";
            e = p.first;
        }
        out() << ", ";
        print_child(e);
    }

    void print_let(expr const & e) {
        out() << "let " << let_name(e) << " : ";
        print(let_type(e));
        out() << " := ";
        print(let_value(e));
        out() << " in ";
        print(let_body(e));
    }

    void print_const(expr const & a) {
        levels const & ls = const_levels(a);
        out() << const_name(a);
        if (!is_nil(ls)) {
            out() << ".{";
            bool first = true;
            for (auto l : ls) {
                if (first) first = false; else out() << " ";
                if (is_max(l) || is_imax(l))
                    out() << "(" << l << ")";
                else
                    out() << l;
            }
            out() << "}";
        }
    }

    void print(expr const & a) {
        switch (a.kind()) {
        case expr_kind::MVar:
            out() << "?" << fix_name(mvar_name(a));
            break;
        case expr_kind::FVar:
            out() << fix_name(local_pp_name(a));
            break;
        case expr_kind::MData:
            out() << "[mdata "; print(mdata_expr(a)); out() << "]";
            break;
        case expr_kind::Proj:
            print(proj_expr(a)); out() << "." << proj_idx(a).to_mpz();
            break;
        case expr_kind::BVar:
            out() << "#" << bvar_idx(a);
            break;
        case expr_kind::Const:
            print_const(a);
            break;
        case expr_kind::App:
            print_app(a);
            break;
        case expr_kind::Let:
            print_let(a);
            break;
        case expr_kind::Lambda:
            print_binding("fun", a);
            break;
        case expr_kind::Pi:
            if (!is_arrow(a)) {
                print_binding("Pi", a);
            } else {
                print_child(binding_domain(a));
                out() << " -> ";
                print_arrow_body(lower_loose_bvars(binding_body(a), 1));
            }
            break;
        case expr_kind::Sort:
            print_sort(a);
            break;
        case expr_kind::Lit:
            switch (lit_value(a).kind()) {
            case literal_kind::Nat: out() << lit_value(a).get_nat().to_mpz(); break;
            case literal_kind::String: out() << escaped(lit_value(a).get_string().data()); break; // HACK Lean string as C string
            }
            break;
        case expr_kind::Quote:
            out() << "quote " << quote_is_reflected(a) << " ";
            print(quote_value(a));
            break;
        }
    }

    print_expr_fn(std::ostream & out):m_out(out) {}

    void operator()(expr const & e) {
        print(e);
    }
};

formatter_factory mk_print_formatter_factory() {
    return [](environment const &, options const & o, abstract_type_context &) { // NOLINT
        return formatter(o, [=](expr const & e, options const &) {
                std::ostringstream s;
                print_expr_fn pr(s);
                pr(e);
                return format(s.str());
            });
    };
}

void init_default_print_fn() {
    set_print_fn([](std::ostream & out, expr const & e) {
            print_expr_fn pr(out);
            pr(e);
        });
}
}
