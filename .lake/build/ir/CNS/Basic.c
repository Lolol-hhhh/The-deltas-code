// Lean compiler output
// Module: CNS.Basic
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_block_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_block_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_V_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_V_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_F_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_F_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_group_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Term_group_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize(lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parse2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___lam__0(uint32_t);
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object lp_cns_CNS_parse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_CNS_parse___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_CNS_parse___redArg___closed__0 = (const lean_object*)&lp_cns_CNS_parse___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parse___boxed(lean_object**);
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(66, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__0 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__0_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(4, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__1 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__1_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 10, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__2 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__2_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(65, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__3 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__3_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(67, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__4 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__4_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 3, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__5 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__5_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__6 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__6_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__4_value),((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__6_value)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__7 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__7_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__3_value),((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__7_value)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__8 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__8_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__2_value),((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__8_value)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__9 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__9_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__1_value),((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__9_value)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__10 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__10_value;
static const lean_ctor_object lp_cns_CNS_quadratic_discriminant___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__0_value),((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__10_value)}};
static const lean_object* lp_cns_CNS_quadratic_discriminant___closed__11 = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__11_value;
LEAN_EXPORT const lean_object* lp_cns_CNS_quadratic_discriminant = (const lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__11_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 9, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic___closed__0 = (const lean_object*)&lp_cns_CNS_quadratic___closed__0_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 10, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic___closed__1 = (const lean_object*)&lp_cns_CNS_quadratic___closed__1_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__11_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__2 = (const lean_object*)&lp_cns_CNS_quadratic___closed__2_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(5, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic___closed__3 = (const lean_object*)&lp_cns_CNS_quadratic___closed__3_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_cns_CNS_quadratic___closed__4 = (const lean_object*)&lp_cns_CNS_quadratic___closed__4_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic___closed__2_value),((lean_object*)&lp_cns_CNS_quadratic___closed__4_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__5 = (const lean_object*)&lp_cns_CNS_quadratic___closed__5_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic___closed__1_value),((lean_object*)&lp_cns_CNS_quadratic___closed__5_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__6 = (const lean_object*)&lp_cns_CNS_quadratic___closed__6_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic___closed__0_value),((lean_object*)&lp_cns_CNS_quadratic___closed__6_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__7 = (const lean_object*)&lp_cns_CNS_quadratic___closed__7_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__0_value),((lean_object*)&lp_cns_CNS_quadratic___closed__7_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__8 = (const lean_object*)&lp_cns_CNS_quadratic___closed__8_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic___closed__8_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__9 = (const lean_object*)&lp_cns_CNS_quadratic___closed__9_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(3, 10, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic___closed__10 = (const lean_object*)&lp_cns_CNS_quadratic___closed__10_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_cns_CNS_quadratic___closed__11 = (const lean_object*)&lp_cns_CNS_quadratic___closed__11_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_cns_CNS_quadratic___closed__12 = (const lean_object*)&lp_cns_CNS_quadratic___closed__12_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic_discriminant___closed__3_value),((lean_object*)&lp_cns_CNS_quadratic___closed__12_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__13 = (const lean_object*)&lp_cns_CNS_quadratic___closed__13_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic___closed__10_value),((lean_object*)&lp_cns_CNS_quadratic___closed__13_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__14 = (const lean_object*)&lp_cns_CNS_quadratic___closed__14_value;
static const lean_ctor_object lp_cns_CNS_quadratic___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_cns_CNS_quadratic___closed__9_value),((lean_object*)&lp_cns_CNS_quadratic___closed__14_value)}};
static const lean_object* lp_cns_CNS_quadratic___closed__15 = (const lean_object*)&lp_cns_CNS_quadratic___closed__15_value;
LEAN_EXPORT const lean_object* lp_cns_CNS_quadratic = (const lean_object*)&lp_cns_CNS_quadratic___closed__15_value;
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
case 6:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
case 7:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(7u);
return v___x_9_;
}
case 8:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(8u);
return v___x_10_;
}
case 9:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(9u);
return v___x_11_;
}
default: 
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(10u);
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorIdx___boxed(lean_object* v_x_13_){
_start:
{
uint8_t v_x_boxed_14_; lean_object* v_res_15_; 
v_x_boxed_14_ = lean_unbox(v_x_13_);
v_res_15_ = lp_cns_CNS_Number_ctorIdx(v_x_boxed_14_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_toCtorIdx(uint8_t v_x_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lp_cns_CNS_Number_ctorIdx(v_x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_toCtorIdx___boxed(lean_object* v_x_18_){
_start:
{
uint8_t v_x_4__boxed_19_; lean_object* v_res_20_; 
v_x_4__boxed_19_ = lean_unbox(v_x_18_);
v_res_20_ = lp_cns_CNS_Number_toCtorIdx(v_x_4__boxed_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___redArg(lean_object* v_k_21_){
_start:
{
lean_inc(v_k_21_);
return v_k_21_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___redArg___boxed(lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = lp_cns_CNS_Number_ctorElim___redArg(v_k_22_);
lean_dec(v_k_22_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim(lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_inc(v_k_28_);
return v_k_28_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___boxed(lean_object* v_motive_29_, lean_object* v_ctorIdx_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_k_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = lp_cns_CNS_Number_ctorElim(v_motive_29_, v_ctorIdx_30_, v_t_boxed_34_, v_h_32_, v_k_33_);
lean_dec(v_k_33_);
lean_dec(v_ctorIdx_30_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___redArg(lean_object* v_O_36_){
_start:
{
lean_inc(v_O_36_);
return v_O_36_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___redArg___boxed(lean_object* v_O_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = lp_cns_CNS_Number_O_elim___redArg(v_O_37_);
lean_dec(v_O_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_O_42_){
_start:
{
lean_inc(v_O_42_);
return v_O_42_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_O_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = lp_cns_CNS_Number_O_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_O_46_);
lean_dec(v_O_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___redArg(lean_object* v_T_49_){
_start:
{
lean_inc(v_T_49_);
return v_T_49_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___redArg___boxed(lean_object* v_T_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = lp_cns_CNS_Number_T_elim___redArg(v_T_50_);
lean_dec(v_T_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_T_55_){
_start:
{
lean_inc(v_T_55_);
return v_T_55_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_T_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = lp_cns_CNS_Number_T_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_T_59_);
lean_dec(v_T_59_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___redArg(lean_object* v_I_62_){
_start:
{
lean_inc(v_I_62_);
return v_I_62_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___redArg___boxed(lean_object* v_I_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = lp_cns_CNS_Number_I_elim___redArg(v_I_63_);
lean_dec(v_I_63_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim(lean_object* v_motive_65_, uint8_t v_t_66_, lean_object* v_h_67_, lean_object* v_I_68_){
_start:
{
lean_inc(v_I_68_);
return v_I_68_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___boxed(lean_object* v_motive_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_I_72_){
_start:
{
uint8_t v_t_boxed_73_; lean_object* v_res_74_; 
v_t_boxed_73_ = lean_unbox(v_t_70_);
v_res_74_ = lp_cns_CNS_Number_I_elim(v_motive_69_, v_t_boxed_73_, v_h_71_, v_I_72_);
lean_dec(v_I_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___redArg(lean_object* v_F_75_){
_start:
{
lean_inc(v_F_75_);
return v_F_75_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___redArg___boxed(lean_object* v_F_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = lp_cns_CNS_Number_F_elim___redArg(v_F_76_);
lean_dec(v_F_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim(lean_object* v_motive_78_, uint8_t v_t_79_, lean_object* v_h_80_, lean_object* v_F_81_){
_start:
{
lean_inc(v_F_81_);
return v_F_81_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___boxed(lean_object* v_motive_82_, lean_object* v_t_83_, lean_object* v_h_84_, lean_object* v_F_85_){
_start:
{
uint8_t v_t_boxed_86_; lean_object* v_res_87_; 
v_t_boxed_86_ = lean_unbox(v_t_83_);
v_res_87_ = lp_cns_CNS_Number_F_elim(v_motive_82_, v_t_boxed_86_, v_h_84_, v_F_85_);
lean_dec(v_F_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___redArg(lean_object* v_V_88_){
_start:
{
lean_inc(v_V_88_);
return v_V_88_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___redArg___boxed(lean_object* v_V_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = lp_cns_CNS_Number_V_elim___redArg(v_V_89_);
lean_dec(v_V_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim(lean_object* v_motive_91_, uint8_t v_t_92_, lean_object* v_h_93_, lean_object* v_V_94_){
_start:
{
lean_inc(v_V_94_);
return v_V_94_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___boxed(lean_object* v_motive_95_, lean_object* v_t_96_, lean_object* v_h_97_, lean_object* v_V_98_){
_start:
{
uint8_t v_t_boxed_99_; lean_object* v_res_100_; 
v_t_boxed_99_ = lean_unbox(v_t_96_);
v_res_100_ = lp_cns_CNS_Number_V_elim(v_motive_95_, v_t_boxed_99_, v_h_97_, v_V_98_);
lean_dec(v_V_98_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___redArg(lean_object* v_S_101_){
_start:
{
lean_inc(v_S_101_);
return v_S_101_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___redArg___boxed(lean_object* v_S_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = lp_cns_CNS_Number_S_elim___redArg(v_S_102_);
lean_dec(v_S_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim(lean_object* v_motive_104_, uint8_t v_t_105_, lean_object* v_h_106_, lean_object* v_S_107_){
_start:
{
lean_inc(v_S_107_);
return v_S_107_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___boxed(lean_object* v_motive_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_S_111_){
_start:
{
uint8_t v_t_boxed_112_; lean_object* v_res_113_; 
v_t_boxed_112_ = lean_unbox(v_t_109_);
v_res_113_ = lp_cns_CNS_Number_S_elim(v_motive_108_, v_t_boxed_112_, v_h_110_, v_S_111_);
lean_dec(v_S_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___redArg(lean_object* v_X_114_){
_start:
{
lean_inc(v_X_114_);
return v_X_114_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___redArg___boxed(lean_object* v_X_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = lp_cns_CNS_Number_X_elim___redArg(v_X_115_);
lean_dec(v_X_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim(lean_object* v_motive_117_, uint8_t v_t_118_, lean_object* v_h_119_, lean_object* v_X_120_){
_start:
{
lean_inc(v_X_120_);
return v_X_120_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___boxed(lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_X_124_){
_start:
{
uint8_t v_t_boxed_125_; lean_object* v_res_126_; 
v_t_boxed_125_ = lean_unbox(v_t_122_);
v_res_126_ = lp_cns_CNS_Number_X_elim(v_motive_121_, v_t_boxed_125_, v_h_123_, v_X_124_);
lean_dec(v_X_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___redArg(lean_object* v_H_127_){
_start:
{
lean_inc(v_H_127_);
return v_H_127_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___redArg___boxed(lean_object* v_H_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = lp_cns_CNS_Number_H_elim___redArg(v_H_128_);
lean_dec(v_H_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim(lean_object* v_motive_130_, uint8_t v_t_131_, lean_object* v_h_132_, lean_object* v_H_133_){
_start:
{
lean_inc(v_H_133_);
return v_H_133_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___boxed(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_H_137_){
_start:
{
uint8_t v_t_boxed_138_; lean_object* v_res_139_; 
v_t_boxed_138_ = lean_unbox(v_t_135_);
v_res_139_ = lp_cns_CNS_Number_H_elim(v_motive_134_, v_t_boxed_138_, v_h_136_, v_H_137_);
lean_dec(v_H_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___redArg(lean_object* v_C_140_){
_start:
{
lean_inc(v_C_140_);
return v_C_140_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___redArg___boxed(lean_object* v_C_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = lp_cns_CNS_Number_C_elim___redArg(v_C_141_);
lean_dec(v_C_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim(lean_object* v_motive_143_, uint8_t v_t_144_, lean_object* v_h_145_, lean_object* v_C_146_){
_start:
{
lean_inc(v_C_146_);
return v_C_146_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___boxed(lean_object* v_motive_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_C_150_){
_start:
{
uint8_t v_t_boxed_151_; lean_object* v_res_152_; 
v_t_boxed_151_ = lean_unbox(v_t_148_);
v_res_152_ = lp_cns_CNS_Number_C_elim(v_motive_147_, v_t_boxed_151_, v_h_149_, v_C_150_);
lean_dec(v_C_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___redArg(lean_object* v_J_153_){
_start:
{
lean_inc(v_J_153_);
return v_J_153_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___redArg___boxed(lean_object* v_J_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = lp_cns_CNS_Number_J_elim___redArg(v_J_154_);
lean_dec(v_J_154_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim(lean_object* v_motive_156_, uint8_t v_t_157_, lean_object* v_h_158_, lean_object* v_J_159_){
_start:
{
lean_inc(v_J_159_);
return v_J_159_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___boxed(lean_object* v_motive_160_, lean_object* v_t_161_, lean_object* v_h_162_, lean_object* v_J_163_){
_start:
{
uint8_t v_t_boxed_164_; lean_object* v_res_165_; 
v_t_boxed_164_ = lean_unbox(v_t_161_);
v_res_165_ = lp_cns_CNS_Number_J_elim(v_motive_160_, v_t_boxed_164_, v_h_162_, v_J_163_);
lean_dec(v_J_163_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___redArg(lean_object* v_N_166_){
_start:
{
lean_inc(v_N_166_);
return v_N_166_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___redArg___boxed(lean_object* v_N_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = lp_cns_CNS_Number_N_elim___redArg(v_N_167_);
lean_dec(v_N_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim(lean_object* v_motive_169_, uint8_t v_t_170_, lean_object* v_h_171_, lean_object* v_N_172_){
_start:
{
lean_inc(v_N_172_);
return v_N_172_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___boxed(lean_object* v_motive_173_, lean_object* v_t_174_, lean_object* v_h_175_, lean_object* v_N_176_){
_start:
{
uint8_t v_t_boxed_177_; lean_object* v_res_178_; 
v_t_boxed_177_ = lean_unbox(v_t_174_);
v_res_178_ = lp_cns_CNS_Number_N_elim(v_motive_173_, v_t_boxed_177_, v_h_175_, v_N_176_);
lean_dec(v_N_176_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorIdx(uint8_t v_x_179_){
_start:
{
switch(v_x_179_)
{
case 0:
{
lean_object* v___x_180_; 
v___x_180_ = lean_unsigned_to_nat(0u);
return v___x_180_;
}
case 1:
{
lean_object* v___x_181_; 
v___x_181_ = lean_unsigned_to_nat(1u);
return v___x_181_;
}
case 2:
{
lean_object* v___x_182_; 
v___x_182_ = lean_unsigned_to_nat(2u);
return v___x_182_;
}
case 3:
{
lean_object* v___x_183_; 
v___x_183_ = lean_unsigned_to_nat(3u);
return v___x_183_;
}
case 4:
{
lean_object* v___x_184_; 
v___x_184_ = lean_unsigned_to_nat(4u);
return v___x_184_;
}
case 5:
{
lean_object* v___x_185_; 
v___x_185_ = lean_unsigned_to_nat(5u);
return v___x_185_;
}
case 6:
{
lean_object* v___x_186_; 
v___x_186_ = lean_unsigned_to_nat(6u);
return v___x_186_;
}
default: 
{
lean_object* v___x_187_; 
v___x_187_ = lean_unsigned_to_nat(7u);
return v___x_187_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorIdx___boxed(lean_object* v_x_188_){
_start:
{
uint8_t v_x_boxed_189_; lean_object* v_res_190_; 
v_x_boxed_189_ = lean_unbox(v_x_188_);
v_res_190_ = lp_cns_CNS_Operation_ctorIdx(v_x_boxed_189_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_toCtorIdx(uint8_t v_x_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lp_cns_CNS_Operation_ctorIdx(v_x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_toCtorIdx___boxed(lean_object* v_x_193_){
_start:
{
uint8_t v_x_4__boxed_194_; lean_object* v_res_195_; 
v_x_4__boxed_194_ = lean_unbox(v_x_193_);
v_res_195_ = lp_cns_CNS_Operation_toCtorIdx(v_x_4__boxed_194_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___redArg(lean_object* v_k_196_){
_start:
{
lean_inc(v_k_196_);
return v_k_196_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___redArg___boxed(lean_object* v_k_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = lp_cns_CNS_Operation_ctorElim___redArg(v_k_197_);
lean_dec(v_k_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim(lean_object* v_motive_199_, lean_object* v_ctorIdx_200_, uint8_t v_t_201_, lean_object* v_h_202_, lean_object* v_k_203_){
_start:
{
lean_inc(v_k_203_);
return v_k_203_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___boxed(lean_object* v_motive_204_, lean_object* v_ctorIdx_205_, lean_object* v_t_206_, lean_object* v_h_207_, lean_object* v_k_208_){
_start:
{
uint8_t v_t_boxed_209_; lean_object* v_res_210_; 
v_t_boxed_209_ = lean_unbox(v_t_206_);
v_res_210_ = lp_cns_CNS_Operation_ctorElim(v_motive_204_, v_ctorIdx_205_, v_t_boxed_209_, v_h_207_, v_k_208_);
lean_dec(v_k_208_);
lean_dec(v_ctorIdx_205_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___redArg(lean_object* v_P_211_){
_start:
{
lean_inc(v_P_211_);
return v_P_211_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___redArg___boxed(lean_object* v_P_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = lp_cns_CNS_Operation_P_elim___redArg(v_P_212_);
lean_dec(v_P_212_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim(lean_object* v_motive_214_, uint8_t v_t_215_, lean_object* v_h_216_, lean_object* v_P_217_){
_start:
{
lean_inc(v_P_217_);
return v_P_217_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___boxed(lean_object* v_motive_218_, lean_object* v_t_219_, lean_object* v_h_220_, lean_object* v_P_221_){
_start:
{
uint8_t v_t_boxed_222_; lean_object* v_res_223_; 
v_t_boxed_222_ = lean_unbox(v_t_219_);
v_res_223_ = lp_cns_CNS_Operation_P_elim(v_motive_218_, v_t_boxed_222_, v_h_220_, v_P_221_);
lean_dec(v_P_221_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___redArg(lean_object* v_S_224_){
_start:
{
lean_inc(v_S_224_);
return v_S_224_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___redArg___boxed(lean_object* v_S_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = lp_cns_CNS_Operation_S_elim___redArg(v_S_225_);
lean_dec(v_S_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim(lean_object* v_motive_227_, uint8_t v_t_228_, lean_object* v_h_229_, lean_object* v_S_230_){
_start:
{
lean_inc(v_S_230_);
return v_S_230_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___boxed(lean_object* v_motive_231_, lean_object* v_t_232_, lean_object* v_h_233_, lean_object* v_S_234_){
_start:
{
uint8_t v_t_boxed_235_; lean_object* v_res_236_; 
v_t_boxed_235_ = lean_unbox(v_t_232_);
v_res_236_ = lp_cns_CNS_Operation_S_elim(v_motive_231_, v_t_boxed_235_, v_h_233_, v_S_234_);
lean_dec(v_S_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___redArg(lean_object* v_M_237_){
_start:
{
lean_inc(v_M_237_);
return v_M_237_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___redArg___boxed(lean_object* v_M_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = lp_cns_CNS_Operation_M_elim___redArg(v_M_238_);
lean_dec(v_M_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim(lean_object* v_motive_240_, uint8_t v_t_241_, lean_object* v_h_242_, lean_object* v_M_243_){
_start:
{
lean_inc(v_M_243_);
return v_M_243_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___boxed(lean_object* v_motive_244_, lean_object* v_t_245_, lean_object* v_h_246_, lean_object* v_M_247_){
_start:
{
uint8_t v_t_boxed_248_; lean_object* v_res_249_; 
v_t_boxed_248_ = lean_unbox(v_t_245_);
v_res_249_ = lp_cns_CNS_Operation_M_elim(v_motive_244_, v_t_boxed_248_, v_h_246_, v_M_247_);
lean_dec(v_M_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___redArg(lean_object* v_D_250_){
_start:
{
lean_inc(v_D_250_);
return v_D_250_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___redArg___boxed(lean_object* v_D_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = lp_cns_CNS_Operation_D_elim___redArg(v_D_251_);
lean_dec(v_D_251_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim(lean_object* v_motive_253_, uint8_t v_t_254_, lean_object* v_h_255_, lean_object* v_D_256_){
_start:
{
lean_inc(v_D_256_);
return v_D_256_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___boxed(lean_object* v_motive_257_, lean_object* v_t_258_, lean_object* v_h_259_, lean_object* v_D_260_){
_start:
{
uint8_t v_t_boxed_261_; lean_object* v_res_262_; 
v_t_boxed_261_ = lean_unbox(v_t_258_);
v_res_262_ = lp_cns_CNS_Operation_D_elim(v_motive_257_, v_t_boxed_261_, v_h_259_, v_D_260_);
lean_dec(v_D_260_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___redArg(lean_object* v_C_263_){
_start:
{
lean_inc(v_C_263_);
return v_C_263_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___redArg___boxed(lean_object* v_C_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = lp_cns_CNS_Operation_C_elim___redArg(v_C_264_);
lean_dec(v_C_264_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim(lean_object* v_motive_266_, uint8_t v_t_267_, lean_object* v_h_268_, lean_object* v_C_269_){
_start:
{
lean_inc(v_C_269_);
return v_C_269_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___boxed(lean_object* v_motive_270_, lean_object* v_t_271_, lean_object* v_h_272_, lean_object* v_C_273_){
_start:
{
uint8_t v_t_boxed_274_; lean_object* v_res_275_; 
v_t_boxed_274_ = lean_unbox(v_t_271_);
v_res_275_ = lp_cns_CNS_Operation_C_elim(v_motive_270_, v_t_boxed_274_, v_h_272_, v_C_273_);
lean_dec(v_C_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___redArg(lean_object* v_R_276_){
_start:
{
lean_inc(v_R_276_);
return v_R_276_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___redArg___boxed(lean_object* v_R_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = lp_cns_CNS_Operation_R_elim___redArg(v_R_277_);
lean_dec(v_R_277_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim(lean_object* v_motive_279_, uint8_t v_t_280_, lean_object* v_h_281_, lean_object* v_R_282_){
_start:
{
lean_inc(v_R_282_);
return v_R_282_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___boxed(lean_object* v_motive_283_, lean_object* v_t_284_, lean_object* v_h_285_, lean_object* v_R_286_){
_start:
{
uint8_t v_t_boxed_287_; lean_object* v_res_288_; 
v_t_boxed_287_ = lean_unbox(v_t_284_);
v_res_288_ = lp_cns_CNS_Operation_R_elim(v_motive_283_, v_t_boxed_287_, v_h_285_, v_R_286_);
lean_dec(v_R_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___redArg(lean_object* v_U_289_){
_start:
{
lean_inc(v_U_289_);
return v_U_289_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___redArg___boxed(lean_object* v_U_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = lp_cns_CNS_Operation_U_elim___redArg(v_U_290_);
lean_dec(v_U_290_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim(lean_object* v_motive_292_, uint8_t v_t_293_, lean_object* v_h_294_, lean_object* v_U_295_){
_start:
{
lean_inc(v_U_295_);
return v_U_295_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___boxed(lean_object* v_motive_296_, lean_object* v_t_297_, lean_object* v_h_298_, lean_object* v_U_299_){
_start:
{
uint8_t v_t_boxed_300_; lean_object* v_res_301_; 
v_t_boxed_300_ = lean_unbox(v_t_297_);
v_res_301_ = lp_cns_CNS_Operation_U_elim(v_motive_296_, v_t_boxed_300_, v_h_298_, v_U_299_);
lean_dec(v_U_299_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___redArg(lean_object* v_K_302_){
_start:
{
lean_inc(v_K_302_);
return v_K_302_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___redArg___boxed(lean_object* v_K_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = lp_cns_CNS_Operation_K_elim___redArg(v_K_303_);
lean_dec(v_K_303_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim(lean_object* v_motive_305_, uint8_t v_t_306_, lean_object* v_h_307_, lean_object* v_K_308_){
_start:
{
lean_inc(v_K_308_);
return v_K_308_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___boxed(lean_object* v_motive_309_, lean_object* v_t_310_, lean_object* v_h_311_, lean_object* v_K_312_){
_start:
{
uint8_t v_t_boxed_313_; lean_object* v_res_314_; 
v_t_boxed_313_ = lean_unbox(v_t_310_);
v_res_314_ = lp_cns_CNS_Operation_K_elim(v_motive_309_, v_t_boxed_313_, v_h_311_, v_K_312_);
lean_dec(v_K_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorIdx(lean_object* v_x_315_){
_start:
{
switch(lean_obj_tag(v_x_315_))
{
case 0:
{
lean_object* v___x_316_; 
v___x_316_ = lean_unsigned_to_nat(0u);
return v___x_316_;
}
case 1:
{
lean_object* v___x_317_; 
v___x_317_ = lean_unsigned_to_nat(1u);
return v___x_317_;
}
case 2:
{
lean_object* v___x_318_; 
v___x_318_ = lean_unsigned_to_nat(2u);
return v___x_318_;
}
default: 
{
lean_object* v___x_319_; 
v___x_319_ = lean_unsigned_to_nat(3u);
return v___x_319_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorIdx___boxed(lean_object* v_x_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = lp_cns_CNS_Term_ctorIdx(v_x_320_);
lean_dec_ref(v_x_320_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim___redArg(lean_object* v_t_322_, lean_object* v_k_323_){
_start:
{
switch(lean_obj_tag(v_t_322_))
{
case 0:
{
uint8_t v_o_324_; uint8_t v_n_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_o_324_ = lean_ctor_get_uint8(v_t_322_, 0);
v_n_325_ = lean_ctor_get_uint8(v_t_322_, 1);
lean_dec_ref_known(v_t_322_, 0);
v___x_326_ = lean_box(v_o_324_);
v___x_327_ = lean_box(v_n_325_);
v___x_328_ = lean_apply_2(v_k_323_, v___x_326_, v___x_327_);
return v___x_328_;
}
case 3:
{
lean_object* v_l_329_; lean_object* v___x_330_; 
v_l_329_ = lean_ctor_get(v_t_322_, 0);
lean_inc(v_l_329_);
lean_dec_ref_known(v_t_322_, 1);
v___x_330_ = lean_apply_1(v_k_323_, v_l_329_);
return v___x_330_;
}
default: 
{
uint32_t v_symbol_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_symbol_331_ = lean_ctor_get_uint32(v_t_322_, 0);
lean_dec_ref(v_t_322_);
v___x_332_ = lean_box_uint32(v_symbol_331_);
v___x_333_ = lean_apply_1(v_k_323_, v___x_332_);
return v___x_333_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim(lean_object* v_motive__1_334_, lean_object* v_ctorIdx_335_, lean_object* v_t_336_, lean_object* v_h_337_, lean_object* v_k_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_336_, v_k_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim___boxed(lean_object* v_motive__1_340_, lean_object* v_ctorIdx_341_, lean_object* v_t_342_, lean_object* v_h_343_, lean_object* v_k_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = lp_cns_CNS_Term_ctorElim(v_motive__1_340_, v_ctorIdx_341_, v_t_342_, v_h_343_, v_k_344_);
lean_dec(v_ctorIdx_341_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_block_elim___redArg(lean_object* v_t_346_, lean_object* v_block_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_346_, v_block_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_block_elim(lean_object* v_motive__1_349_, lean_object* v_t_350_, lean_object* v_h_351_, lean_object* v_block_352_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_350_, v_block_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_V_elim___redArg(lean_object* v_t_354_, lean_object* v_V_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_354_, v_V_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_V_elim(lean_object* v_motive__1_357_, lean_object* v_t_358_, lean_object* v_h_359_, lean_object* v_V_360_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_358_, v_V_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_F_elim___redArg(lean_object* v_t_362_, lean_object* v_F_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_362_, v_F_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_F_elim(lean_object* v_motive__1_365_, lean_object* v_t_366_, lean_object* v_h_367_, lean_object* v_F_368_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_366_, v_F_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_group_elim___redArg(lean_object* v_t_370_, lean_object* v_group_371_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_370_, v_group_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_group_elim(lean_object* v_motive__1_373_, lean_object* v_t_374_, lean_object* v_h_375_, lean_object* v_group_376_){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_374_, v_group_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___redArg(lean_object* v_inst_378_, lean_object* v_inst_379_, lean_object* v_inst_380_, lean_object* v_inst_381_, lean_object* v_inst_382_, lean_object* v_inst_383_, lean_object* v_inst_384_, lean_object* v_inst_385_, lean_object* v_inst_386_, lean_object* v_inst_387_, uint8_t v_x_388_){
_start:
{
switch(v_x_388_)
{
case 0:
{
lean_object* v___x_389_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
lean_dec(v_inst_378_);
v___x_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_389_, 0, v_inst_379_);
return v___x_389_;
}
case 1:
{
lean_object* v___x_390_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_390_, 0, v_inst_380_);
return v___x_390_;
}
case 2:
{
lean_object* v___x_391_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_380_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_391_, 0, v_inst_381_);
return v___x_391_;
}
case 3:
{
lean_object* v___x_392_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_392_, 0, v_inst_382_);
return v___x_392_;
}
case 4:
{
lean_object* v___x_393_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_393_, 0, v_inst_383_);
return v___x_393_;
}
case 5:
{
lean_object* v___x_394_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_394_, 0, v_inst_384_);
return v___x_394_;
}
case 6:
{
lean_object* v___x_395_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v_inst_385_);
return v___x_395_;
}
case 7:
{
lean_object* v___x_396_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v_inst_386_);
return v___x_396_;
}
case 8:
{
lean_object* v___x_397_; 
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v_inst_387_);
return v___x_397_;
}
case 9:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
v___x_398_ = lean_apply_1(v_inst_378_, v_inst_379_);
v___x_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
return v___x_399_;
}
default: 
{
lean_object* v___x_400_; 
lean_dec(v_inst_387_);
lean_dec(v_inst_386_);
lean_dec(v_inst_385_);
lean_dec(v_inst_384_);
lean_dec(v_inst_383_);
lean_dec(v_inst_382_);
lean_dec(v_inst_381_);
lean_dec(v_inst_380_);
lean_dec(v_inst_379_);
lean_dec(v_inst_378_);
v___x_400_ = lean_box(0);
return v___x_400_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___redArg___boxed(lean_object* v_inst_401_, lean_object* v_inst_402_, lean_object* v_inst_403_, lean_object* v_inst_404_, lean_object* v_inst_405_, lean_object* v_inst_406_, lean_object* v_inst_407_, lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_inst_410_, lean_object* v_x_411_){
_start:
{
uint8_t v_x_137__boxed_412_; lean_object* v_res_413_; 
v_x_137__boxed_412_ = lean_unbox(v_x_411_);
v_res_413_ = lp_cns_CNS_Number_parse___redArg(v_inst_401_, v_inst_402_, v_inst_403_, v_inst_404_, v_inst_405_, v_inst_406_, v_inst_407_, v_inst_408_, v_inst_409_, v_inst_410_, v_x_137__boxed_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse(lean_object* v_00_u03b1_414_, lean_object* v_inst_415_, lean_object* v_inst_416_, lean_object* v_inst_417_, lean_object* v_inst_418_, lean_object* v_inst_419_, lean_object* v_inst_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_inst_423_, lean_object* v_inst_424_, uint8_t v_x_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = lp_cns_CNS_Number_parse___redArg(v_inst_415_, v_inst_416_, v_inst_417_, v_inst_418_, v_inst_419_, v_inst_420_, v_inst_421_, v_inst_422_, v_inst_423_, v_inst_424_, v_x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___boxed(lean_object* v_00_u03b1_427_, lean_object* v_inst_428_, lean_object* v_inst_429_, lean_object* v_inst_430_, lean_object* v_inst_431_, lean_object* v_inst_432_, lean_object* v_inst_433_, lean_object* v_inst_434_, lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v_inst_437_, lean_object* v_x_438_){
_start:
{
uint8_t v_x_194__boxed_439_; lean_object* v_res_440_; 
v_x_194__boxed_439_ = lean_unbox(v_x_438_);
v_res_440_ = lp_cns_CNS_Number_parse(v_00_u03b1_427_, v_inst_428_, v_inst_429_, v_inst_430_, v_inst_431_, v_inst_432_, v_inst_433_, v_inst_434_, v_inst_435_, v_inst_436_, v_inst_437_, v_x_194__boxed_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize(lean_object* v_x_441_){
_start:
{
if (lean_obj_tag(v_x_441_) == 0)
{
lean_object* v___x_442_; 
v___x_442_ = lean_unsigned_to_nat(0u);
return v___x_442_;
}
else
{
lean_object* v_head_443_; 
v_head_443_ = lean_ctor_get(v_x_441_, 0);
switch(lean_obj_tag(v_head_443_))
{
case 0:
{
lean_object* v_tail_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v_tail_444_ = lean_ctor_get(v_x_441_, 1);
v___x_445_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_tail_444_);
v___x_446_ = lean_unsigned_to_nat(1u);
v___x_447_ = lean_nat_add(v___x_445_, v___x_446_);
lean_dec(v___x_445_);
return v___x_447_;
}
case 3:
{
lean_object* v_tail_448_; lean_object* v_l_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_tail_448_ = lean_ctor_get(v_x_441_, 1);
v_l_449_ = lean_ctor_get(v_head_443_, 0);
v___x_450_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_l_449_);
v___x_451_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_tail_448_);
v___x_452_ = lean_nat_add(v___x_450_, v___x_451_);
lean_dec(v___x_451_);
lean_dec(v___x_450_);
v___x_453_ = lean_unsigned_to_nat(1u);
v___x_454_ = lean_nat_add(v___x_452_, v___x_453_);
lean_dec(v___x_452_);
return v___x_454_;
}
default: 
{
lean_object* v_tail_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_tail_455_ = lean_ctor_get(v_x_441_, 1);
v___x_456_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_tail_455_);
v___x_457_ = lean_unsigned_to_nat(1u);
v___x_458_ = lean_nat_add(v___x_456_, v___x_457_);
lean_dec(v___x_456_);
return v___x_458_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize___boxed(lean_object* v_x_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_x_459_);
lean_dec(v_x_459_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize_match__1_splitter___redArg(lean_object* v_x_461_, lean_object* v_h__1_462_, lean_object* v_h__2_463_, lean_object* v_h__3_464_, lean_object* v_h__4_465_, lean_object* v_h__5_466_){
_start:
{
if (lean_obj_tag(v_x_461_) == 0)
{
lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec(v_h__5_466_);
lean_dec(v_h__4_465_);
lean_dec(v_h__3_464_);
lean_dec(v_h__2_463_);
v___x_467_ = lean_box(0);
v___x_468_ = lean_apply_1(v_h__1_462_, v___x_467_);
return v___x_468_;
}
else
{
lean_object* v_head_469_; 
lean_dec(v_h__1_462_);
v_head_469_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_head_469_);
switch(lean_obj_tag(v_head_469_))
{
case 0:
{
lean_object* v_tail_470_; uint8_t v_o_471_; uint8_t v_n_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec(v_h__4_465_);
lean_dec(v_h__3_464_);
lean_dec(v_h__2_463_);
v_tail_470_ = lean_ctor_get(v_x_461_, 1);
lean_inc(v_tail_470_);
lean_dec_ref_known(v_x_461_, 2);
v_o_471_ = lean_ctor_get_uint8(v_head_469_, 0);
v_n_472_ = lean_ctor_get_uint8(v_head_469_, 1);
lean_dec_ref_known(v_head_469_, 0);
v___x_473_ = lean_box(v_o_471_);
v___x_474_ = lean_box(v_n_472_);
v___x_475_ = lean_apply_3(v_h__5_466_, v___x_473_, v___x_474_, v_tail_470_);
return v___x_475_;
}
case 1:
{
lean_object* v_tail_476_; uint32_t v_symbol_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
lean_dec(v_h__5_466_);
lean_dec(v_h__4_465_);
lean_dec(v_h__2_463_);
v_tail_476_ = lean_ctor_get(v_x_461_, 1);
lean_inc(v_tail_476_);
lean_dec_ref_known(v_x_461_, 2);
v_symbol_477_ = lean_ctor_get_uint32(v_head_469_, 0);
lean_dec_ref_known(v_head_469_, 0);
v___x_478_ = lean_box_uint32(v_symbol_477_);
v___x_479_ = lean_apply_2(v_h__3_464_, v___x_478_, v_tail_476_);
return v___x_479_;
}
case 2:
{
lean_object* v_tail_480_; uint32_t v_symbol_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec(v_h__5_466_);
lean_dec(v_h__3_464_);
lean_dec(v_h__2_463_);
v_tail_480_ = lean_ctor_get(v_x_461_, 1);
lean_inc(v_tail_480_);
lean_dec_ref_known(v_x_461_, 2);
v_symbol_481_ = lean_ctor_get_uint32(v_head_469_, 0);
lean_dec_ref_known(v_head_469_, 0);
v___x_482_ = lean_box_uint32(v_symbol_481_);
v___x_483_ = lean_apply_2(v_h__4_465_, v___x_482_, v_tail_480_);
return v___x_483_;
}
default: 
{
lean_object* v_tail_484_; lean_object* v_l_485_; lean_object* v___x_486_; 
lean_dec(v_h__5_466_);
lean_dec(v_h__4_465_);
lean_dec(v_h__3_464_);
v_tail_484_ = lean_ctor_get(v_x_461_, 1);
lean_inc(v_tail_484_);
lean_dec_ref_known(v_x_461_, 2);
v_l_485_ = lean_ctor_get(v_head_469_, 0);
lean_inc(v_l_485_);
lean_dec_ref_known(v_head_469_, 1);
v___x_486_ = lean_apply_2(v_h__2_463_, v_l_485_, v_tail_484_);
return v___x_486_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize_match__1_splitter(lean_object* v_motive_487_, lean_object* v_x_488_, lean_object* v_h__1_489_, lean_object* v_h__2_490_, lean_object* v_h__3_491_, lean_object* v_h__4_492_, lean_object* v_h__5_493_){
_start:
{
if (lean_obj_tag(v_x_488_) == 0)
{
lean_object* v___x_494_; lean_object* v___x_495_; 
lean_dec(v_h__5_493_);
lean_dec(v_h__4_492_);
lean_dec(v_h__3_491_);
lean_dec(v_h__2_490_);
v___x_494_ = lean_box(0);
v___x_495_ = lean_apply_1(v_h__1_489_, v___x_494_);
return v___x_495_;
}
else
{
lean_object* v_head_496_; 
lean_dec(v_h__1_489_);
v_head_496_ = lean_ctor_get(v_x_488_, 0);
lean_inc(v_head_496_);
switch(lean_obj_tag(v_head_496_))
{
case 0:
{
lean_object* v_tail_497_; uint8_t v_o_498_; uint8_t v_n_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
lean_dec(v_h__4_492_);
lean_dec(v_h__3_491_);
lean_dec(v_h__2_490_);
v_tail_497_ = lean_ctor_get(v_x_488_, 1);
lean_inc(v_tail_497_);
lean_dec_ref_known(v_x_488_, 2);
v_o_498_ = lean_ctor_get_uint8(v_head_496_, 0);
v_n_499_ = lean_ctor_get_uint8(v_head_496_, 1);
lean_dec_ref_known(v_head_496_, 0);
v___x_500_ = lean_box(v_o_498_);
v___x_501_ = lean_box(v_n_499_);
v___x_502_ = lean_apply_3(v_h__5_493_, v___x_500_, v___x_501_, v_tail_497_);
return v___x_502_;
}
case 1:
{
lean_object* v_tail_503_; uint32_t v_symbol_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
lean_dec(v_h__5_493_);
lean_dec(v_h__4_492_);
lean_dec(v_h__2_490_);
v_tail_503_ = lean_ctor_get(v_x_488_, 1);
lean_inc(v_tail_503_);
lean_dec_ref_known(v_x_488_, 2);
v_symbol_504_ = lean_ctor_get_uint32(v_head_496_, 0);
lean_dec_ref_known(v_head_496_, 0);
v___x_505_ = lean_box_uint32(v_symbol_504_);
v___x_506_ = lean_apply_2(v_h__3_491_, v___x_505_, v_tail_503_);
return v___x_506_;
}
case 2:
{
lean_object* v_tail_507_; uint32_t v_symbol_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
lean_dec(v_h__5_493_);
lean_dec(v_h__3_491_);
lean_dec(v_h__2_490_);
v_tail_507_ = lean_ctor_get(v_x_488_, 1);
lean_inc(v_tail_507_);
lean_dec_ref_known(v_x_488_, 2);
v_symbol_508_ = lean_ctor_get_uint32(v_head_496_, 0);
lean_dec_ref_known(v_head_496_, 0);
v___x_509_ = lean_box_uint32(v_symbol_508_);
v___x_510_ = lean_apply_2(v_h__4_492_, v___x_509_, v_tail_507_);
return v___x_510_;
}
default: 
{
lean_object* v_tail_511_; lean_object* v_l_512_; lean_object* v___x_513_; 
lean_dec(v_h__5_493_);
lean_dec(v_h__4_492_);
lean_dec(v_h__3_491_);
v_tail_511_ = lean_ctor_get(v_x_488_, 1);
lean_inc(v_tail_511_);
lean_dec_ref_known(v_x_488_, 2);
v_l_512_ = lean_ctor_get(v_head_496_, 0);
lean_inc(v_l_512_);
lean_dec_ref_known(v_head_496_, 1);
v___x_513_ = lean_apply_2(v_h__2_490_, v_l_512_, v_tail_511_);
return v___x_513_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_assignments_514_ = _args[0];
lean_object* v_n_515_ = _args[1];
lean_object* v_inst_516_ = _args[2];
lean_object* v_inst_517_ = _args[3];
lean_object* v_inst_518_ = _args[4];
lean_object* v_inst_519_ = _args[5];
lean_object* v_inst_520_ = _args[6];
lean_object* v_inst_521_ = _args[7];
lean_object* v_inst_522_ = _args[8];
lean_object* v_inst_523_ = _args[9];
lean_object* v_inst_524_ = _args[10];
lean_object* v_inst_525_ = _args[11];
lean_object* v_inst_526_ = _args[12];
lean_object* v_inst_527_ = _args[13];
lean_object* v_inst_528_ = _args[14];
lean_object* v_inst_529_ = _args[15];
lean_object* v_inst_530_ = _args[16];
lean_object* v_inst_531_ = _args[17];
lean_object* v_tail_532_ = _args[18];
lean_object* v_functions_533_ = _args[19];
lean_object* v_acc_534_ = _args[20];
lean_object* v_x_535_ = _args[21];
_start:
{
uint32_t v_x_boxed_536_; lean_object* v_res_537_; 
v_x_boxed_536_ = lean_unbox_uint32(v_x_535_);
lean_dec(v_x_535_);
v_res_537_ = lp_cns_CNS_parseAux___redArg___lam__0(v_assignments_514_, v_n_515_, v_inst_516_, v_inst_517_, v_inst_518_, v_inst_519_, v_inst_520_, v_inst_521_, v_inst_522_, v_inst_523_, v_inst_524_, v_inst_525_, v_inst_526_, v_inst_527_, v_inst_528_, v_inst_529_, v_inst_530_, v_inst_531_, v_tail_532_, v_functions_533_, v_acc_534_, v_x_boxed_536_);
lean_dec(v_n_515_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg(lean_object* v_inst_538_, lean_object* v_inst_539_, lean_object* v_inst_540_, lean_object* v_inst_541_, lean_object* v_inst_542_, lean_object* v_inst_543_, lean_object* v_inst_544_, lean_object* v_inst_545_, lean_object* v_inst_546_, lean_object* v_inst_547_, lean_object* v_inst_548_, lean_object* v_inst_549_, lean_object* v_inst_550_, lean_object* v_inst_551_, lean_object* v_inst_552_, lean_object* v_inst_553_, lean_object* v_c_554_, lean_object* v_acc_555_, lean_object* v_assignments_556_, lean_object* v_functions_557_, lean_object* v_stack_558_){
_start:
{
lean_object* v_zero_559_; uint8_t v_isZero_560_; 
v_zero_559_ = lean_unsigned_to_nat(0u);
v_isZero_560_ = lean_nat_dec_eq(v_stack_558_, v_zero_559_);
if (v_isZero_560_ == 1)
{
lean_object* v___x_561_; 
lean_dec(v_stack_558_);
lean_dec_ref(v_functions_557_);
lean_dec_ref(v_assignments_556_);
lean_dec(v_acc_555_);
lean_dec(v_c_554_);
lean_dec(v_inst_553_);
lean_dec(v_inst_552_);
lean_dec(v_inst_551_);
lean_dec(v_inst_550_);
lean_dec(v_inst_549_);
lean_dec(v_inst_548_);
lean_dec(v_inst_547_);
lean_dec(v_inst_546_);
lean_dec(v_inst_545_);
lean_dec(v_inst_544_);
lean_dec(v_inst_543_);
lean_dec(v_inst_542_);
lean_dec(v_inst_541_);
lean_dec(v_inst_540_);
lean_dec(v_inst_539_);
lean_dec(v_inst_538_);
v___x_561_ = lean_box(0);
return v___x_561_;
}
else
{
if (lean_obj_tag(v_c_554_) == 0)
{
lean_object* v___x_562_; 
lean_dec(v_stack_558_);
lean_dec_ref(v_functions_557_);
lean_dec_ref(v_assignments_556_);
lean_dec(v_inst_553_);
lean_dec(v_inst_552_);
lean_dec(v_inst_551_);
lean_dec(v_inst_550_);
lean_dec(v_inst_549_);
lean_dec(v_inst_548_);
lean_dec(v_inst_547_);
lean_dec(v_inst_546_);
lean_dec(v_inst_545_);
lean_dec(v_inst_544_);
lean_dec(v_inst_543_);
lean_dec(v_inst_542_);
lean_dec(v_inst_541_);
lean_dec(v_inst_540_);
lean_dec(v_inst_539_);
lean_dec(v_inst_538_);
v___x_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_562_, 0, v_acc_555_);
return v___x_562_;
}
else
{
lean_object* v_head_563_; lean_object* v_tail_564_; lean_object* v_one_565_; lean_object* v_n_566_; 
v_head_563_ = lean_ctor_get(v_c_554_, 0);
lean_inc(v_head_563_);
v_tail_564_ = lean_ctor_get(v_c_554_, 1);
lean_inc(v_tail_564_);
lean_dec_ref_known(v_c_554_, 2);
v_one_565_ = lean_unsigned_to_nat(1u);
v_n_566_ = lean_nat_sub(v_stack_558_, v_one_565_);
lean_dec(v_stack_558_);
switch(lean_obj_tag(v_head_563_))
{
case 0:
{
uint8_t v_o_567_; uint8_t v_n_568_; lean_object* v___x_569_; 
v_o_567_ = lean_ctor_get_uint8(v_head_563_, 0);
v_n_568_ = lean_ctor_get_uint8(v_head_563_, 1);
lean_dec_ref_known(v_head_563_, 0);
lean_inc(v_inst_552_);
lean_inc(v_inst_551_);
lean_inc(v_inst_550_);
lean_inc(v_inst_549_);
lean_inc(v_inst_548_);
lean_inc(v_inst_547_);
lean_inc(v_inst_546_);
lean_inc(v_inst_545_);
lean_inc(v_inst_544_);
lean_inc(v_inst_542_);
v___x_569_ = lp_cns_CNS_Number_parse___redArg(v_inst_542_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_n_568_);
if (lean_obj_tag(v___x_569_) == 0)
{
switch(v_o_567_)
{
case 0:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
lean_inc(v_inst_538_);
v___x_571_ = lp_cns_CNS_parse2___redArg(v_inst_538_, v_inst_539_, v_inst_540_, v_inst_541_, v_inst_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_tail_564_, v_assignments_556_, v_functions_557_, v___x_570_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_dec(v_acc_555_);
lean_dec(v_inst_538_);
return v___x_571_;
}
else
{
lean_object* v_val_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_580_; 
v_val_572_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_580_ == 0)
{
v___x_574_ = v___x_571_;
v_isShared_575_ = v_isSharedCheck_580_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_val_572_);
lean_dec(v___x_571_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_580_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_578_; 
v___x_576_ = lean_apply_2(v_inst_538_, v_acc_555_, v_val_572_);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_576_);
v___x_578_ = v___x_574_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
case 1:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
lean_inc(v_inst_539_);
v___x_582_ = lp_cns_CNS_parse2___redArg(v_inst_538_, v_inst_539_, v_inst_540_, v_inst_541_, v_inst_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_tail_564_, v_assignments_556_, v_functions_557_, v___x_581_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_dec(v_acc_555_);
lean_dec(v_inst_539_);
return v___x_582_;
}
else
{
lean_object* v_val_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_591_; 
v_val_583_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_591_ == 0)
{
v___x_585_ = v___x_582_;
v_isShared_586_ = v_isSharedCheck_591_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_val_583_);
lean_dec(v___x_582_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_591_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_587_; lean_object* v___x_589_; 
v___x_587_ = lean_apply_2(v_inst_539_, v_acc_555_, v_val_583_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v___x_587_);
v___x_589_ = v___x_585_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
case 2:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
lean_inc(v_inst_540_);
v___x_593_ = lp_cns_CNS_parse2___redArg(v_inst_538_, v_inst_539_, v_inst_540_, v_inst_541_, v_inst_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_tail_564_, v_assignments_556_, v_functions_557_, v___x_592_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_dec(v_acc_555_);
lean_dec(v_inst_540_);
return v___x_593_;
}
else
{
lean_object* v_val_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_602_; 
v_val_594_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_602_ == 0)
{
v___x_596_ = v___x_593_;
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_val_594_);
lean_dec(v___x_593_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_598_ = lean_apply_2(v_inst_540_, v_acc_555_, v_val_594_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_598_);
v___x_600_ = v___x_596_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
case 3:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
lean_inc(v_inst_541_);
v___x_604_ = lp_cns_CNS_parse2___redArg(v_inst_538_, v_inst_539_, v_inst_540_, v_inst_541_, v_inst_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_tail_564_, v_assignments_556_, v_functions_557_, v___x_603_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_dec(v_acc_555_);
lean_dec(v_inst_541_);
return v___x_604_;
}
else
{
lean_object* v_val_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_613_; 
v_val_605_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_613_ == 0)
{
v___x_607_ = v___x_604_;
v_isShared_608_ = v_isSharedCheck_613_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_val_605_);
lean_dec(v___x_604_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_613_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_609_ = lean_apply_2(v_inst_541_, v_acc_555_, v_val_605_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_609_);
v___x_611_ = v___x_607_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v___x_609_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
case 4:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
lean_inc(v_inst_543_);
v___x_615_ = lp_cns_CNS_parse2___redArg(v_inst_538_, v_inst_539_, v_inst_540_, v_inst_541_, v_inst_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_tail_564_, v_assignments_556_, v_functions_557_, v___x_614_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_dec(v_acc_555_);
lean_dec(v_inst_543_);
return v___x_615_;
}
else
{
lean_object* v_val_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_624_; 
v_val_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_624_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_624_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_val_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_624_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_620_ = lean_apply_2(v_inst_543_, v_acc_555_, v_val_616_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_620_);
v___x_622_ = v___x_618_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
case 5:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
lean_inc(v_inst_544_);
lean_inc(v_inst_543_);
lean_inc(v_inst_541_);
v___x_626_ = lp_cns_CNS_parse2___redArg(v_inst_538_, v_inst_539_, v_inst_540_, v_inst_541_, v_inst_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_tail_564_, v_assignments_556_, v_functions_557_, v___x_625_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_dec(v_acc_555_);
lean_dec(v_inst_544_);
lean_dec(v_inst_543_);
lean_dec(v_inst_541_);
return v___x_626_;
}
else
{
lean_object* v_val_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_636_; 
v_val_627_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_636_ == 0)
{
v___x_629_ = v___x_626_;
v_isShared_630_ = v_isSharedCheck_636_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_val_627_);
lean_dec(v___x_626_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_636_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_631_ = lean_apply_2(v_inst_541_, v_inst_544_, v_val_627_);
v___x_632_ = lean_apply_2(v_inst_543_, v_acc_555_, v___x_631_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 0, v___x_632_);
v___x_634_ = v___x_629_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_632_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
default: 
{
lean_dec(v_n_566_);
lean_dec(v_tail_564_);
lean_dec_ref(v_functions_557_);
lean_dec_ref(v_assignments_556_);
lean_dec(v_acc_555_);
lean_dec(v_inst_553_);
lean_dec(v_inst_552_);
lean_dec(v_inst_551_);
lean_dec(v_inst_550_);
lean_dec(v_inst_549_);
lean_dec(v_inst_548_);
lean_dec(v_inst_547_);
lean_dec(v_inst_546_);
lean_dec(v_inst_545_);
lean_dec(v_inst_544_);
lean_dec(v_inst_543_);
lean_dec(v_inst_542_);
lean_dec(v_inst_541_);
lean_dec(v_inst_540_);
lean_dec(v_inst_539_);
lean_dec(v_inst_538_);
return v___x_569_;
}
}
}
else
{
switch(v_o_567_)
{
case 0:
{
lean_object* v_val_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v_val_637_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_637_);
lean_dec_ref_known(v___x_569_, 1);
lean_inc(v_inst_538_);
v___x_638_ = lean_apply_2(v_inst_538_, v_acc_555_, v_val_637_);
v___x_639_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
v_c_554_ = v_tail_564_;
v_acc_555_ = v___x_638_;
v_stack_558_ = v___x_639_;
goto _start;
}
case 1:
{
lean_object* v_val_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_val_641_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_641_);
lean_dec_ref_known(v___x_569_, 1);
lean_inc(v_inst_539_);
v___x_642_ = lean_apply_2(v_inst_539_, v_acc_555_, v_val_641_);
v___x_643_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
v_c_554_ = v_tail_564_;
v_acc_555_ = v___x_642_;
v_stack_558_ = v___x_643_;
goto _start;
}
case 2:
{
lean_object* v_val_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v_val_645_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_645_);
lean_dec_ref_known(v___x_569_, 1);
lean_inc(v_inst_540_);
v___x_646_ = lean_apply_2(v_inst_540_, v_acc_555_, v_val_645_);
v___x_647_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
v_c_554_ = v_tail_564_;
v_acc_555_ = v___x_646_;
v_stack_558_ = v___x_647_;
goto _start;
}
case 3:
{
lean_object* v_val_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_val_649_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_649_);
lean_dec_ref_known(v___x_569_, 1);
lean_inc(v_inst_541_);
v___x_650_ = lean_apply_2(v_inst_541_, v_acc_555_, v_val_649_);
v___x_651_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
v_c_554_ = v_tail_564_;
v_acc_555_ = v___x_650_;
v_stack_558_ = v___x_651_;
goto _start;
}
case 4:
{
lean_object* v_val_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v_val_653_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_653_);
lean_dec_ref_known(v___x_569_, 1);
lean_inc(v_inst_543_);
v___x_654_ = lean_apply_2(v_inst_543_, v_acc_555_, v_val_653_);
v___x_655_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
v_c_554_ = v_tail_564_;
v_acc_555_ = v___x_654_;
v_stack_558_ = v___x_655_;
goto _start;
}
case 5:
{
lean_object* v_val_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v_val_657_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_657_);
lean_dec_ref_known(v___x_569_, 1);
lean_inc(v_inst_541_);
lean_inc(v_inst_544_);
v___x_658_ = lean_apply_2(v_inst_541_, v_inst_544_, v_val_657_);
lean_inc(v_inst_543_);
v___x_659_ = lean_apply_2(v_inst_543_, v_acc_555_, v___x_658_);
v___x_660_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
v_c_554_ = v_tail_564_;
v_acc_555_ = v___x_659_;
v_stack_558_ = v___x_660_;
goto _start;
}
default: 
{
lean_object* v___x_662_; 
lean_dec_ref_known(v___x_569_, 1);
lean_dec(v_n_566_);
lean_dec(v_tail_564_);
lean_dec_ref(v_functions_557_);
lean_dec_ref(v_assignments_556_);
lean_dec(v_acc_555_);
lean_dec(v_inst_553_);
lean_dec(v_inst_552_);
lean_dec(v_inst_551_);
lean_dec(v_inst_550_);
lean_dec(v_inst_549_);
lean_dec(v_inst_548_);
lean_dec(v_inst_547_);
lean_dec(v_inst_546_);
lean_dec(v_inst_545_);
lean_dec(v_inst_544_);
lean_dec(v_inst_543_);
lean_dec(v_inst_542_);
lean_dec(v_inst_541_);
lean_dec(v_inst_540_);
lean_dec(v_inst_539_);
lean_dec(v_inst_538_);
v___x_662_ = lean_box(0);
return v___x_662_;
}
}
}
}
case 1:
{
uint32_t v_symbol_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_symbol_663_ = lean_ctor_get_uint32(v_head_563_, 0);
lean_dec_ref_known(v_head_563_, 0);
v___x_664_ = lean_box_uint32(v_symbol_663_);
lean_inc_ref(v_assignments_556_);
v___x_665_ = lean_apply_1(v_assignments_556_, v___x_664_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_dec(v_n_566_);
lean_dec(v_tail_564_);
lean_dec_ref(v_functions_557_);
lean_dec_ref(v_assignments_556_);
lean_dec(v_acc_555_);
lean_dec(v_inst_553_);
lean_dec(v_inst_552_);
lean_dec(v_inst_551_);
lean_dec(v_inst_550_);
lean_dec(v_inst_549_);
lean_dec(v_inst_548_);
lean_dec(v_inst_547_);
lean_dec(v_inst_546_);
lean_dec(v_inst_545_);
lean_dec(v_inst_544_);
lean_dec(v_inst_543_);
lean_dec(v_inst_542_);
lean_dec(v_inst_541_);
lean_dec(v_inst_540_);
lean_dec(v_inst_539_);
lean_dec(v_inst_538_);
return v___x_665_;
}
else
{
lean_object* v_val_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_val_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_val_666_);
lean_dec_ref_known(v___x_665_, 1);
lean_inc(v_inst_540_);
v___x_667_ = lean_apply_2(v_inst_540_, v_acc_555_, v_val_666_);
v___x_668_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
v_c_554_ = v_tail_564_;
v_acc_555_ = v___x_667_;
v_stack_558_ = v___x_668_;
goto _start;
}
}
case 2:
{
uint32_t v_symbol_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_symbol_670_ = lean_ctor_get_uint32(v_head_563_, 0);
lean_dec_ref_known(v_head_563_, 0);
v___x_671_ = lean_box_uint32(v_symbol_670_);
lean_inc_ref(v_functions_557_);
v___x_672_ = lean_apply_1(v_functions_557_, v___x_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v___x_673_; 
lean_dec(v_n_566_);
lean_dec(v_tail_564_);
lean_dec_ref(v_functions_557_);
lean_dec_ref(v_assignments_556_);
lean_dec(v_acc_555_);
lean_dec(v_inst_553_);
lean_dec(v_inst_552_);
lean_dec(v_inst_551_);
lean_dec(v_inst_550_);
lean_dec(v_inst_549_);
lean_dec(v_inst_548_);
lean_dec(v_inst_547_);
lean_dec(v_inst_546_);
lean_dec(v_inst_545_);
lean_dec(v_inst_544_);
lean_dec(v_inst_543_);
lean_dec(v_inst_542_);
lean_dec(v_inst_541_);
lean_dec(v_inst_540_);
lean_dec(v_inst_539_);
lean_dec(v_inst_538_);
v___x_673_ = lean_box(0);
return v___x_673_;
}
else
{
lean_object* v_val_674_; lean_object* v___f_675_; lean_object* v___x_676_; 
v_val_674_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_val_674_);
lean_dec_ref_known(v___x_672_, 1);
lean_inc_ref(v_functions_557_);
lean_inc(v_inst_553_);
lean_inc(v_inst_552_);
lean_inc(v_inst_551_);
lean_inc(v_inst_550_);
lean_inc(v_inst_549_);
lean_inc(v_inst_548_);
lean_inc(v_inst_547_);
lean_inc(v_inst_546_);
lean_inc(v_inst_545_);
lean_inc(v_inst_544_);
lean_inc(v_inst_543_);
lean_inc(v_inst_542_);
lean_inc(v_inst_541_);
lean_inc(v_inst_540_);
lean_inc(v_inst_539_);
lean_inc(v_inst_538_);
lean_inc(v_n_566_);
v___f_675_ = lean_alloc_closure((void*)(lp_cns_CNS_parseAux___redArg___lam__0___boxed), 22, 21);
lean_closure_set(v___f_675_, 0, v_assignments_556_);
lean_closure_set(v___f_675_, 1, v_n_566_);
lean_closure_set(v___f_675_, 2, v_inst_538_);
lean_closure_set(v___f_675_, 3, v_inst_539_);
lean_closure_set(v___f_675_, 4, v_inst_540_);
lean_closure_set(v___f_675_, 5, v_inst_541_);
lean_closure_set(v___f_675_, 6, v_inst_542_);
lean_closure_set(v___f_675_, 7, v_inst_543_);
lean_closure_set(v___f_675_, 8, v_inst_544_);
lean_closure_set(v___f_675_, 9, v_inst_545_);
lean_closure_set(v___f_675_, 10, v_inst_546_);
lean_closure_set(v___f_675_, 11, v_inst_547_);
lean_closure_set(v___f_675_, 12, v_inst_548_);
lean_closure_set(v___f_675_, 13, v_inst_549_);
lean_closure_set(v___f_675_, 14, v_inst_550_);
lean_closure_set(v___f_675_, 15, v_inst_551_);
lean_closure_set(v___f_675_, 16, v_inst_552_);
lean_closure_set(v___f_675_, 17, v_inst_553_);
lean_closure_set(v___f_675_, 18, v_tail_564_);
lean_closure_set(v___f_675_, 19, v_functions_557_);
lean_closure_set(v___f_675_, 20, v_acc_555_);
v___x_676_ = lp_cns_CNS_parse2___redArg(v_inst_538_, v_inst_539_, v_inst_540_, v_inst_541_, v_inst_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_val_674_, v___f_675_, v_functions_557_, v_n_566_);
return v___x_676_;
}
}
default: 
{
lean_object* v_l_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec(v_acc_555_);
v_l_677_ = lean_ctor_get(v_head_563_, 0);
lean_inc(v_l_677_);
lean_dec_ref_known(v_head_563_, 1);
v___x_678_ = lean_nat_add(v_n_566_, v_one_565_);
lean_dec(v_n_566_);
lean_inc(v___x_678_);
lean_inc_ref(v_functions_557_);
lean_inc_ref(v_assignments_556_);
lean_inc(v_inst_553_);
lean_inc(v_inst_552_);
lean_inc(v_inst_551_);
lean_inc(v_inst_550_);
lean_inc(v_inst_549_);
lean_inc(v_inst_548_);
lean_inc(v_inst_547_);
lean_inc(v_inst_546_);
lean_inc(v_inst_545_);
lean_inc(v_inst_544_);
lean_inc(v_inst_543_);
lean_inc(v_inst_542_);
lean_inc(v_inst_541_);
lean_inc(v_inst_540_);
lean_inc(v_inst_539_);
lean_inc(v_inst_538_);
v___x_679_ = lp_cns_CNS_parse2___redArg(v_inst_538_, v_inst_539_, v_inst_540_, v_inst_541_, v_inst_542_, v_inst_543_, v_inst_544_, v_inst_545_, v_inst_546_, v_inst_547_, v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_l_677_, v_assignments_556_, v_functions_557_, v___x_678_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_dec(v___x_678_);
lean_dec(v_tail_564_);
lean_dec_ref(v_functions_557_);
lean_dec_ref(v_assignments_556_);
lean_dec(v_inst_553_);
lean_dec(v_inst_552_);
lean_dec(v_inst_551_);
lean_dec(v_inst_550_);
lean_dec(v_inst_549_);
lean_dec(v_inst_548_);
lean_dec(v_inst_547_);
lean_dec(v_inst_546_);
lean_dec(v_inst_545_);
lean_dec(v_inst_544_);
lean_dec(v_inst_543_);
lean_dec(v_inst_542_);
lean_dec(v_inst_541_);
lean_dec(v_inst_540_);
lean_dec(v_inst_539_);
lean_dec(v_inst_538_);
return v___x_679_;
}
else
{
lean_object* v_val_680_; 
v_val_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_val_680_);
lean_dec_ref_known(v___x_679_, 1);
v_c_554_ = v_tail_564_;
v_acc_555_ = v_val_680_;
v_stack_558_ = v___x_678_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___redArg(lean_object* v_inst_682_, lean_object* v_inst_683_, lean_object* v_inst_684_, lean_object* v_inst_685_, lean_object* v_inst_686_, lean_object* v_inst_687_, lean_object* v_inst_688_, lean_object* v_inst_689_, lean_object* v_inst_690_, lean_object* v_inst_691_, lean_object* v_inst_692_, lean_object* v_inst_693_, lean_object* v_inst_694_, lean_object* v_inst_695_, lean_object* v_inst_696_, lean_object* v_inst_697_, lean_object* v_c_698_, lean_object* v_assignments_699_, lean_object* v_functions_700_, lean_object* v_stack_701_){
_start:
{
if (lean_obj_tag(v_c_698_) == 1)
{
lean_object* v_head_702_; 
v_head_702_ = lean_ctor_get(v_c_698_, 0);
switch(lean_obj_tag(v_head_702_))
{
case 1:
{
lean_object* v___x_703_; 
lean_inc(v_inst_688_);
v___x_703_ = lp_cns_CNS_parseAux___redArg(v_inst_682_, v_inst_683_, v_inst_684_, v_inst_685_, v_inst_686_, v_inst_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_inst_697_, v_c_698_, v_inst_688_, v_assignments_699_, v_functions_700_, v_stack_701_);
return v___x_703_;
}
case 0:
{
uint8_t v_o_704_; 
v_o_704_ = lean_ctor_get_uint8(v_head_702_, 0);
switch(v_o_704_)
{
case 2:
{
lean_object* v___x_705_; 
lean_inc(v_inst_688_);
v___x_705_ = lp_cns_CNS_parseAux___redArg(v_inst_682_, v_inst_683_, v_inst_684_, v_inst_685_, v_inst_686_, v_inst_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_inst_697_, v_c_698_, v_inst_688_, v_assignments_699_, v_functions_700_, v_stack_701_);
return v___x_705_;
}
case 3:
{
lean_object* v___x_706_; 
lean_inc(v_inst_688_);
v___x_706_ = lp_cns_CNS_parseAux___redArg(v_inst_682_, v_inst_683_, v_inst_684_, v_inst_685_, v_inst_686_, v_inst_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_inst_697_, v_c_698_, v_inst_688_, v_assignments_699_, v_functions_700_, v_stack_701_);
return v___x_706_;
}
default: 
{
lean_object* v___x_707_; 
lean_inc(v_inst_697_);
v___x_707_ = lp_cns_CNS_parseAux___redArg(v_inst_682_, v_inst_683_, v_inst_684_, v_inst_685_, v_inst_686_, v_inst_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_inst_697_, v_c_698_, v_inst_697_, v_assignments_699_, v_functions_700_, v_stack_701_);
return v___x_707_;
}
}
}
default: 
{
lean_object* v___x_708_; 
lean_inc(v_inst_697_);
v___x_708_ = lp_cns_CNS_parseAux___redArg(v_inst_682_, v_inst_683_, v_inst_684_, v_inst_685_, v_inst_686_, v_inst_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_inst_697_, v_c_698_, v_inst_697_, v_assignments_699_, v_functions_700_, v_stack_701_);
return v___x_708_;
}
}
}
else
{
lean_object* v___x_709_; 
lean_inc(v_inst_697_);
v___x_709_ = lp_cns_CNS_parseAux___redArg(v_inst_682_, v_inst_683_, v_inst_684_, v_inst_685_, v_inst_686_, v_inst_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_inst_697_, v_c_698_, v_inst_697_, v_assignments_699_, v_functions_700_, v_stack_701_);
return v___x_709_;
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___lam__0(lean_object* v_assignments_710_, lean_object* v_n_711_, lean_object* v_inst_712_, lean_object* v_inst_713_, lean_object* v_inst_714_, lean_object* v_inst_715_, lean_object* v_inst_716_, lean_object* v_inst_717_, lean_object* v_inst_718_, lean_object* v_inst_719_, lean_object* v_inst_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_inst_724_, lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_inst_727_, lean_object* v_tail_728_, lean_object* v_functions_729_, lean_object* v_acc_730_, uint32_t v_x_731_){
_start:
{
uint32_t v___x_732_; uint8_t v___x_733_; 
v___x_732_ = 76;
v___x_733_ = lean_uint32_dec_eq(v_x_731_, v___x_732_);
if (v___x_733_ == 0)
{
uint32_t v___x_734_; uint8_t v___x_735_; 
lean_dec(v_acc_730_);
v___x_734_ = 82;
v___x_735_ = lean_uint32_dec_eq(v_x_731_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; lean_object* v___x_737_; 
lean_dec_ref(v_functions_729_);
lean_dec(v_tail_728_);
lean_dec(v_inst_727_);
lean_dec(v_inst_726_);
lean_dec(v_inst_725_);
lean_dec(v_inst_724_);
lean_dec(v_inst_723_);
lean_dec(v_inst_722_);
lean_dec(v_inst_721_);
lean_dec(v_inst_720_);
lean_dec(v_inst_719_);
lean_dec(v_inst_718_);
lean_dec(v_inst_717_);
lean_dec(v_inst_716_);
lean_dec(v_inst_715_);
lean_dec(v_inst_714_);
lean_dec(v_inst_713_);
lean_dec(v_inst_712_);
v___x_736_ = lean_box_uint32(v_x_731_);
v___x_737_ = lean_apply_1(v_assignments_710_, v___x_736_);
return v___x_737_;
}
else
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_738_ = lean_unsigned_to_nat(1u);
v___x_739_ = lean_nat_add(v_n_711_, v___x_738_);
v___x_740_ = lp_cns_CNS_parse2___redArg(v_inst_712_, v_inst_713_, v_inst_714_, v_inst_715_, v_inst_716_, v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_tail_728_, v_assignments_710_, v_functions_729_, v___x_739_);
return v___x_740_;
}
}
else
{
lean_object* v___x_741_; 
lean_dec_ref(v_functions_729_);
lean_dec(v_tail_728_);
lean_dec(v_inst_727_);
lean_dec(v_inst_726_);
lean_dec(v_inst_725_);
lean_dec(v_inst_724_);
lean_dec(v_inst_723_);
lean_dec(v_inst_722_);
lean_dec(v_inst_721_);
lean_dec(v_inst_720_);
lean_dec(v_inst_719_);
lean_dec(v_inst_718_);
lean_dec(v_inst_717_);
lean_dec(v_inst_716_);
lean_dec(v_inst_715_);
lean_dec(v_inst_714_);
lean_dec(v_inst_713_);
lean_dec(v_inst_712_);
lean_dec_ref(v_assignments_710_);
v___x_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_741_, 0, v_acc_730_);
return v___x_741_;
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___redArg___boxed(lean_object** _args){
lean_object* v_inst_742_ = _args[0];
lean_object* v_inst_743_ = _args[1];
lean_object* v_inst_744_ = _args[2];
lean_object* v_inst_745_ = _args[3];
lean_object* v_inst_746_ = _args[4];
lean_object* v_inst_747_ = _args[5];
lean_object* v_inst_748_ = _args[6];
lean_object* v_inst_749_ = _args[7];
lean_object* v_inst_750_ = _args[8];
lean_object* v_inst_751_ = _args[9];
lean_object* v_inst_752_ = _args[10];
lean_object* v_inst_753_ = _args[11];
lean_object* v_inst_754_ = _args[12];
lean_object* v_inst_755_ = _args[13];
lean_object* v_inst_756_ = _args[14];
lean_object* v_inst_757_ = _args[15];
lean_object* v_c_758_ = _args[16];
lean_object* v_assignments_759_ = _args[17];
lean_object* v_functions_760_ = _args[18];
lean_object* v_stack_761_ = _args[19];
_start:
{
lean_object* v_res_762_; 
v_res_762_ = lp_cns_CNS_parse2___redArg(v_inst_742_, v_inst_743_, v_inst_744_, v_inst_745_, v_inst_746_, v_inst_747_, v_inst_748_, v_inst_749_, v_inst_750_, v_inst_751_, v_inst_752_, v_inst_753_, v_inst_754_, v_inst_755_, v_inst_756_, v_inst_757_, v_c_758_, v_assignments_759_, v_functions_760_, v_stack_761_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___boxed(lean_object** _args){
lean_object* v_inst_763_ = _args[0];
lean_object* v_inst_764_ = _args[1];
lean_object* v_inst_765_ = _args[2];
lean_object* v_inst_766_ = _args[3];
lean_object* v_inst_767_ = _args[4];
lean_object* v_inst_768_ = _args[5];
lean_object* v_inst_769_ = _args[6];
lean_object* v_inst_770_ = _args[7];
lean_object* v_inst_771_ = _args[8];
lean_object* v_inst_772_ = _args[9];
lean_object* v_inst_773_ = _args[10];
lean_object* v_inst_774_ = _args[11];
lean_object* v_inst_775_ = _args[12];
lean_object* v_inst_776_ = _args[13];
lean_object* v_inst_777_ = _args[14];
lean_object* v_inst_778_ = _args[15];
lean_object* v_c_779_ = _args[16];
lean_object* v_acc_780_ = _args[17];
lean_object* v_assignments_781_ = _args[18];
lean_object* v_functions_782_ = _args[19];
lean_object* v_stack_783_ = _args[20];
_start:
{
lean_object* v_res_784_; 
v_res_784_ = lp_cns_CNS_parseAux___redArg(v_inst_763_, v_inst_764_, v_inst_765_, v_inst_766_, v_inst_767_, v_inst_768_, v_inst_769_, v_inst_770_, v_inst_771_, v_inst_772_, v_inst_773_, v_inst_774_, v_inst_775_, v_inst_776_, v_inst_777_, v_inst_778_, v_c_779_, v_acc_780_, v_assignments_781_, v_functions_782_, v_stack_783_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux(lean_object* v_00_u03b1_785_, lean_object* v_inst_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_inst_789_, lean_object* v_inst_790_, lean_object* v_inst_791_, lean_object* v_inst_792_, lean_object* v_inst_793_, lean_object* v_inst_794_, lean_object* v_inst_795_, lean_object* v_inst_796_, lean_object* v_inst_797_, lean_object* v_inst_798_, lean_object* v_inst_799_, lean_object* v_inst_800_, lean_object* v_inst_801_, lean_object* v_c_802_, lean_object* v_acc_803_, lean_object* v_assignments_804_, lean_object* v_functions_805_, lean_object* v_stack_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = lp_cns_CNS_parseAux___redArg(v_inst_786_, v_inst_787_, v_inst_788_, v_inst_789_, v_inst_790_, v_inst_791_, v_inst_792_, v_inst_793_, v_inst_794_, v_inst_795_, v_inst_796_, v_inst_797_, v_inst_798_, v_inst_799_, v_inst_800_, v_inst_801_, v_c_802_, v_acc_803_, v_assignments_804_, v_functions_805_, v_stack_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___boxed(lean_object** _args){
lean_object* v_00_u03b1_808_ = _args[0];
lean_object* v_inst_809_ = _args[1];
lean_object* v_inst_810_ = _args[2];
lean_object* v_inst_811_ = _args[3];
lean_object* v_inst_812_ = _args[4];
lean_object* v_inst_813_ = _args[5];
lean_object* v_inst_814_ = _args[6];
lean_object* v_inst_815_ = _args[7];
lean_object* v_inst_816_ = _args[8];
lean_object* v_inst_817_ = _args[9];
lean_object* v_inst_818_ = _args[10];
lean_object* v_inst_819_ = _args[11];
lean_object* v_inst_820_ = _args[12];
lean_object* v_inst_821_ = _args[13];
lean_object* v_inst_822_ = _args[14];
lean_object* v_inst_823_ = _args[15];
lean_object* v_inst_824_ = _args[16];
lean_object* v_c_825_ = _args[17];
lean_object* v_acc_826_ = _args[18];
lean_object* v_assignments_827_ = _args[19];
lean_object* v_functions_828_ = _args[20];
lean_object* v_stack_829_ = _args[21];
_start:
{
lean_object* v_res_830_; 
v_res_830_ = lp_cns_CNS_parseAux(v_00_u03b1_808_, v_inst_809_, v_inst_810_, v_inst_811_, v_inst_812_, v_inst_813_, v_inst_814_, v_inst_815_, v_inst_816_, v_inst_817_, v_inst_818_, v_inst_819_, v_inst_820_, v_inst_821_, v_inst_822_, v_inst_823_, v_inst_824_, v_c_825_, v_acc_826_, v_assignments_827_, v_functions_828_, v_stack_829_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse2(lean_object* v_00_u03b1_831_, lean_object* v_inst_832_, lean_object* v_inst_833_, lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_inst_836_, lean_object* v_inst_837_, lean_object* v_inst_838_, lean_object* v_inst_839_, lean_object* v_inst_840_, lean_object* v_inst_841_, lean_object* v_inst_842_, lean_object* v_inst_843_, lean_object* v_inst_844_, lean_object* v_inst_845_, lean_object* v_inst_846_, lean_object* v_inst_847_, lean_object* v_c_848_, lean_object* v_assignments_849_, lean_object* v_functions_850_, lean_object* v_stack_851_){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = lp_cns_CNS_parse2___redArg(v_inst_832_, v_inst_833_, v_inst_834_, v_inst_835_, v_inst_836_, v_inst_837_, v_inst_838_, v_inst_839_, v_inst_840_, v_inst_841_, v_inst_842_, v_inst_843_, v_inst_844_, v_inst_845_, v_inst_846_, v_inst_847_, v_c_848_, v_assignments_849_, v_functions_850_, v_stack_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___boxed(lean_object** _args){
lean_object* v_00_u03b1_853_ = _args[0];
lean_object* v_inst_854_ = _args[1];
lean_object* v_inst_855_ = _args[2];
lean_object* v_inst_856_ = _args[3];
lean_object* v_inst_857_ = _args[4];
lean_object* v_inst_858_ = _args[5];
lean_object* v_inst_859_ = _args[6];
lean_object* v_inst_860_ = _args[7];
lean_object* v_inst_861_ = _args[8];
lean_object* v_inst_862_ = _args[9];
lean_object* v_inst_863_ = _args[10];
lean_object* v_inst_864_ = _args[11];
lean_object* v_inst_865_ = _args[12];
lean_object* v_inst_866_ = _args[13];
lean_object* v_inst_867_ = _args[14];
lean_object* v_inst_868_ = _args[15];
lean_object* v_inst_869_ = _args[16];
lean_object* v_c_870_ = _args[17];
lean_object* v_assignments_871_ = _args[18];
lean_object* v_functions_872_ = _args[19];
lean_object* v_stack_873_ = _args[20];
_start:
{
lean_object* v_res_874_; 
v_res_874_ = lp_cns_CNS_parse2(v_00_u03b1_853_, v_inst_854_, v_inst_855_, v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_inst_860_, v_inst_861_, v_inst_862_, v_inst_863_, v_inst_864_, v_inst_865_, v_inst_866_, v_inst_867_, v_inst_868_, v_inst_869_, v_c_870_, v_assignments_871_, v_functions_872_, v_stack_873_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter___redArg(lean_object* v_stack_875_, lean_object* v_h__1_876_, lean_object* v_h__2_877_){
_start:
{
lean_object* v_zero_878_; uint8_t v_isZero_879_; 
v_zero_878_ = lean_unsigned_to_nat(0u);
v_isZero_879_ = lean_nat_dec_eq(v_stack_875_, v_zero_878_);
if (v_isZero_879_ == 1)
{
lean_object* v___x_880_; lean_object* v___x_881_; 
lean_dec(v_h__2_877_);
v___x_880_ = lean_box(0);
v___x_881_ = lean_apply_1(v_h__1_876_, v___x_880_);
return v___x_881_;
}
else
{
lean_object* v_one_882_; lean_object* v_n_883_; lean_object* v___x_884_; 
lean_dec(v_h__1_876_);
v_one_882_ = lean_unsigned_to_nat(1u);
v_n_883_ = lean_nat_sub(v_stack_875_, v_one_882_);
v___x_884_ = lean_apply_1(v_h__2_877_, v_n_883_);
return v___x_884_;
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter___redArg___boxed(lean_object* v_stack_885_, lean_object* v_h__1_886_, lean_object* v_h__2_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter___redArg(v_stack_885_, v_h__1_886_, v_h__2_887_);
lean_dec(v_stack_885_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter(lean_object* v_motive_889_, lean_object* v_stack_890_, lean_object* v_h__1_891_, lean_object* v_h__2_892_){
_start:
{
lean_object* v_zero_893_; uint8_t v_isZero_894_; 
v_zero_893_ = lean_unsigned_to_nat(0u);
v_isZero_894_ = lean_nat_dec_eq(v_stack_890_, v_zero_893_);
if (v_isZero_894_ == 1)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec(v_h__2_892_);
v___x_895_ = lean_box(0);
v___x_896_ = lean_apply_1(v_h__1_891_, v___x_895_);
return v___x_896_;
}
else
{
lean_object* v_one_897_; lean_object* v_n_898_; lean_object* v___x_899_; 
lean_dec(v_h__1_891_);
v_one_897_ = lean_unsigned_to_nat(1u);
v_n_898_ = lean_nat_sub(v_stack_890_, v_one_897_);
v___x_899_ = lean_apply_1(v_h__2_892_, v_n_898_);
return v___x_899_;
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter___boxed(lean_object* v_motive_900_, lean_object* v_stack_901_, lean_object* v_h__1_902_, lean_object* v_h__2_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = lp_cns___private_CNS_Basic_0__CNS_parseAux_match__9_splitter(v_motive_900_, v_stack_901_, v_h__1_902_, v_h__2_903_);
lean_dec(v_stack_901_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__1_splitter___redArg(lean_object* v_x_905_, lean_object* v_h__1_906_, lean_object* v_h__2_907_){
_start:
{
if (lean_obj_tag(v_x_905_) == 0)
{
lean_object* v___x_908_; lean_object* v___x_909_; 
lean_dec(v_h__1_906_);
v___x_908_ = lean_box(0);
v___x_909_ = lean_apply_1(v_h__2_907_, v___x_908_);
return v___x_909_;
}
else
{
lean_object* v_val_910_; lean_object* v___x_911_; 
lean_dec(v_h__2_907_);
v_val_910_ = lean_ctor_get(v_x_905_, 0);
lean_inc(v_val_910_);
lean_dec_ref_known(v_x_905_, 1);
v___x_911_ = lean_apply_1(v_h__1_906_, v_val_910_);
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__1_splitter(lean_object* v_00_u03b1_912_, lean_object* v_motive_913_, lean_object* v_x_914_, lean_object* v_h__1_915_, lean_object* v_h__2_916_){
_start:
{
if (lean_obj_tag(v_x_914_) == 0)
{
lean_object* v___x_917_; lean_object* v___x_918_; 
lean_dec(v_h__1_915_);
v___x_917_ = lean_box(0);
v___x_918_ = lean_apply_1(v_h__2_916_, v___x_917_);
return v___x_918_;
}
else
{
lean_object* v_val_919_; lean_object* v___x_920_; 
lean_dec(v_h__2_916_);
v_val_919_ = lean_ctor_get(v_x_914_, 0);
lean_inc(v_val_919_);
lean_dec_ref_known(v_x_914_, 1);
v___x_920_ = lean_apply_1(v_h__1_915_, v_val_919_);
return v___x_920_;
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__3_splitter___redArg(lean_object* v_x_921_, lean_object* v_h__1_922_, lean_object* v_h__2_923_){
_start:
{
if (lean_obj_tag(v_x_921_) == 0)
{
lean_object* v___x_924_; lean_object* v___x_925_; 
lean_dec(v_h__1_922_);
v___x_924_ = lean_box(0);
v___x_925_ = lean_apply_1(v_h__2_923_, v___x_924_);
return v___x_925_;
}
else
{
lean_object* v_val_926_; lean_object* v___x_927_; 
lean_dec(v_h__2_923_);
v_val_926_ = lean_ctor_get(v_x_921_, 0);
lean_inc(v_val_926_);
lean_dec_ref_known(v_x_921_, 1);
v___x_927_ = lean_apply_1(v_h__1_922_, v_val_926_);
return v___x_927_;
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__3_splitter(lean_object* v_motive_928_, lean_object* v_x_929_, lean_object* v_h__1_930_, lean_object* v_h__2_931_){
_start:
{
if (lean_obj_tag(v_x_929_) == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec(v_h__1_930_);
v___x_932_ = lean_box(0);
v___x_933_ = lean_apply_1(v_h__2_931_, v___x_932_);
return v___x_933_;
}
else
{
lean_object* v_val_934_; lean_object* v___x_935_; 
lean_dec(v_h__2_931_);
v_val_934_ = lean_ctor_get(v_x_929_, 0);
lean_inc(v_val_934_);
lean_dec_ref_known(v_x_929_, 1);
v___x_935_ = lean_apply_1(v_h__1_930_, v_val_934_);
return v___x_935_;
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__7_splitter___redArg(lean_object* v_x_936_, lean_object* v_h__1_937_, lean_object* v_h__2_938_){
_start:
{
if (lean_obj_tag(v_x_936_) == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; 
lean_dec(v_h__2_938_);
v___x_939_ = lean_box(0);
v___x_940_ = lean_apply_1(v_h__1_937_, v___x_939_);
return v___x_940_;
}
else
{
lean_object* v_val_941_; lean_object* v___x_942_; 
lean_dec(v_h__1_937_);
v_val_941_ = lean_ctor_get(v_x_936_, 0);
lean_inc(v_val_941_);
lean_dec_ref_known(v_x_936_, 1);
v___x_942_ = lean_apply_1(v_h__2_938_, v_val_941_);
return v___x_942_;
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__7_splitter(lean_object* v_00_u03b1_943_, lean_object* v_motive_944_, lean_object* v_x_945_, lean_object* v_h__1_946_, lean_object* v_h__2_947_){
_start:
{
if (lean_obj_tag(v_x_945_) == 0)
{
lean_object* v___x_948_; lean_object* v___x_949_; 
lean_dec(v_h__2_947_);
v___x_948_ = lean_box(0);
v___x_949_ = lean_apply_1(v_h__1_946_, v___x_948_);
return v___x_949_;
}
else
{
lean_object* v_val_950_; lean_object* v___x_951_; 
lean_dec(v_h__1_946_);
v_val_950_ = lean_ctor_get(v_x_945_, 0);
lean_inc(v_val_950_);
lean_dec_ref_known(v_x_945_, 1);
v___x_951_ = lean_apply_1(v_h__2_947_, v_val_950_);
return v___x_951_;
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter___redArg(uint8_t v_x_952_, lean_object* v_h__1_953_, lean_object* v_h__2_954_, lean_object* v_h__3_955_, lean_object* v_h__4_956_, lean_object* v_h__5_957_, lean_object* v_h__6_958_, lean_object* v_h__7_959_, lean_object* v_h__8_960_){
_start:
{
switch(v_x_952_)
{
case 0:
{
lean_object* v___x_961_; lean_object* v___x_962_; 
lean_dec(v_h__8_960_);
lean_dec(v_h__7_959_);
lean_dec(v_h__6_958_);
lean_dec(v_h__5_957_);
lean_dec(v_h__4_956_);
lean_dec(v_h__3_955_);
lean_dec(v_h__2_954_);
v___x_961_ = lean_box(0);
v___x_962_ = lean_apply_1(v_h__1_953_, v___x_961_);
return v___x_962_;
}
case 1:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec(v_h__8_960_);
lean_dec(v_h__7_959_);
lean_dec(v_h__6_958_);
lean_dec(v_h__5_957_);
lean_dec(v_h__4_956_);
lean_dec(v_h__3_955_);
lean_dec(v_h__1_953_);
v___x_963_ = lean_box(0);
v___x_964_ = lean_apply_1(v_h__2_954_, v___x_963_);
return v___x_964_;
}
case 2:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
lean_dec(v_h__8_960_);
lean_dec(v_h__7_959_);
lean_dec(v_h__6_958_);
lean_dec(v_h__5_957_);
lean_dec(v_h__4_956_);
lean_dec(v_h__2_954_);
lean_dec(v_h__1_953_);
v___x_965_ = lean_box(0);
v___x_966_ = lean_apply_1(v_h__3_955_, v___x_965_);
return v___x_966_;
}
case 3:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v_h__8_960_);
lean_dec(v_h__7_959_);
lean_dec(v_h__6_958_);
lean_dec(v_h__5_957_);
lean_dec(v_h__3_955_);
lean_dec(v_h__2_954_);
lean_dec(v_h__1_953_);
v___x_967_ = lean_box(0);
v___x_968_ = lean_apply_1(v_h__4_956_, v___x_967_);
return v___x_968_;
}
case 4:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
lean_dec(v_h__8_960_);
lean_dec(v_h__7_959_);
lean_dec(v_h__6_958_);
lean_dec(v_h__4_956_);
lean_dec(v_h__3_955_);
lean_dec(v_h__2_954_);
lean_dec(v_h__1_953_);
v___x_969_ = lean_box(0);
v___x_970_ = lean_apply_1(v_h__5_957_, v___x_969_);
return v___x_970_;
}
case 5:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
lean_dec(v_h__8_960_);
lean_dec(v_h__7_959_);
lean_dec(v_h__5_957_);
lean_dec(v_h__4_956_);
lean_dec(v_h__3_955_);
lean_dec(v_h__2_954_);
lean_dec(v_h__1_953_);
v___x_971_ = lean_box(0);
v___x_972_ = lean_apply_1(v_h__6_958_, v___x_971_);
return v___x_972_;
}
case 6:
{
lean_object* v___x_973_; lean_object* v___x_974_; 
lean_dec(v_h__8_960_);
lean_dec(v_h__6_958_);
lean_dec(v_h__5_957_);
lean_dec(v_h__4_956_);
lean_dec(v_h__3_955_);
lean_dec(v_h__2_954_);
lean_dec(v_h__1_953_);
v___x_973_ = lean_box(0);
v___x_974_ = lean_apply_1(v_h__7_959_, v___x_973_);
return v___x_974_;
}
default: 
{
lean_object* v___x_975_; lean_object* v___x_976_; 
lean_dec(v_h__7_959_);
lean_dec(v_h__6_958_);
lean_dec(v_h__5_957_);
lean_dec(v_h__4_956_);
lean_dec(v_h__3_955_);
lean_dec(v_h__2_954_);
lean_dec(v_h__1_953_);
v___x_975_ = lean_box(0);
v___x_976_ = lean_apply_1(v_h__8_960_, v___x_975_);
return v___x_976_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter___redArg___boxed(lean_object* v_x_977_, lean_object* v_h__1_978_, lean_object* v_h__2_979_, lean_object* v_h__3_980_, lean_object* v_h__4_981_, lean_object* v_h__5_982_, lean_object* v_h__6_983_, lean_object* v_h__7_984_, lean_object* v_h__8_985_){
_start:
{
uint8_t v_x_78__boxed_986_; lean_object* v_res_987_; 
v_x_78__boxed_986_ = lean_unbox(v_x_977_);
v_res_987_ = lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter___redArg(v_x_78__boxed_986_, v_h__1_978_, v_h__2_979_, v_h__3_980_, v_h__4_981_, v_h__5_982_, v_h__6_983_, v_h__7_984_, v_h__8_985_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter(lean_object* v_motive_988_, uint8_t v_x_989_, lean_object* v_h__1_990_, lean_object* v_h__2_991_, lean_object* v_h__3_992_, lean_object* v_h__4_993_, lean_object* v_h__5_994_, lean_object* v_h__6_995_, lean_object* v_h__7_996_, lean_object* v_h__8_997_){
_start:
{
switch(v_x_989_)
{
case 0:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
lean_dec(v_h__8_997_);
lean_dec(v_h__7_996_);
lean_dec(v_h__6_995_);
lean_dec(v_h__5_994_);
lean_dec(v_h__4_993_);
lean_dec(v_h__3_992_);
lean_dec(v_h__2_991_);
v___x_998_ = lean_box(0);
v___x_999_ = lean_apply_1(v_h__1_990_, v___x_998_);
return v___x_999_;
}
case 1:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
lean_dec(v_h__8_997_);
lean_dec(v_h__7_996_);
lean_dec(v_h__6_995_);
lean_dec(v_h__5_994_);
lean_dec(v_h__4_993_);
lean_dec(v_h__3_992_);
lean_dec(v_h__1_990_);
v___x_1000_ = lean_box(0);
v___x_1001_ = lean_apply_1(v_h__2_991_, v___x_1000_);
return v___x_1001_;
}
case 2:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
lean_dec(v_h__8_997_);
lean_dec(v_h__7_996_);
lean_dec(v_h__6_995_);
lean_dec(v_h__5_994_);
lean_dec(v_h__4_993_);
lean_dec(v_h__2_991_);
lean_dec(v_h__1_990_);
v___x_1002_ = lean_box(0);
v___x_1003_ = lean_apply_1(v_h__3_992_, v___x_1002_);
return v___x_1003_;
}
case 3:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
lean_dec(v_h__8_997_);
lean_dec(v_h__7_996_);
lean_dec(v_h__6_995_);
lean_dec(v_h__5_994_);
lean_dec(v_h__3_992_);
lean_dec(v_h__2_991_);
lean_dec(v_h__1_990_);
v___x_1004_ = lean_box(0);
v___x_1005_ = lean_apply_1(v_h__4_993_, v___x_1004_);
return v___x_1005_;
}
case 4:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec(v_h__8_997_);
lean_dec(v_h__7_996_);
lean_dec(v_h__6_995_);
lean_dec(v_h__4_993_);
lean_dec(v_h__3_992_);
lean_dec(v_h__2_991_);
lean_dec(v_h__1_990_);
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_apply_1(v_h__5_994_, v___x_1006_);
return v___x_1007_;
}
case 5:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
lean_dec(v_h__8_997_);
lean_dec(v_h__7_996_);
lean_dec(v_h__5_994_);
lean_dec(v_h__4_993_);
lean_dec(v_h__3_992_);
lean_dec(v_h__2_991_);
lean_dec(v_h__1_990_);
v___x_1008_ = lean_box(0);
v___x_1009_ = lean_apply_1(v_h__6_995_, v___x_1008_);
return v___x_1009_;
}
case 6:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
lean_dec(v_h__8_997_);
lean_dec(v_h__6_995_);
lean_dec(v_h__5_994_);
lean_dec(v_h__4_993_);
lean_dec(v_h__3_992_);
lean_dec(v_h__2_991_);
lean_dec(v_h__1_990_);
v___x_1010_ = lean_box(0);
v___x_1011_ = lean_apply_1(v_h__7_996_, v___x_1010_);
return v___x_1011_;
}
default: 
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
lean_dec(v_h__7_996_);
lean_dec(v_h__6_995_);
lean_dec(v_h__5_994_);
lean_dec(v_h__4_993_);
lean_dec(v_h__3_992_);
lean_dec(v_h__2_991_);
lean_dec(v_h__1_990_);
v___x_1012_ = lean_box(0);
v___x_1013_ = lean_apply_1(v_h__8_997_, v___x_1012_);
return v___x_1013_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter___boxed(lean_object* v_motive_1014_, lean_object* v_x_1015_, lean_object* v_h__1_1016_, lean_object* v_h__2_1017_, lean_object* v_h__3_1018_, lean_object* v_h__4_1019_, lean_object* v_h__5_1020_, lean_object* v_h__6_1021_, lean_object* v_h__7_1022_, lean_object* v_h__8_1023_){
_start:
{
uint8_t v_x_113__boxed_1024_; lean_object* v_res_1025_; 
v_x_113__boxed_1024_ = lean_unbox(v_x_1015_);
v_res_1025_ = lp_cns___private_CNS_Basic_0__CNS_parseAux_match__5_splitter(v_motive_1014_, v_x_113__boxed_1024_, v_h__1_1016_, v_h__2_1017_, v_h__3_1018_, v_h__4_1019_, v_h__5_1020_, v_h__6_1021_, v_h__7_1022_, v_h__8_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___lam__0(uint32_t v_x_1026_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_box(0);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___lam__0___boxed(lean_object* v_x_1028_){
_start:
{
uint32_t v_x_41__boxed_1029_; lean_object* v_res_1030_; 
v_x_41__boxed_1029_ = lean_unbox_uint32(v_x_1028_);
lean_dec(v_x_1028_);
v_res_1030_ = lp_cns_CNS_parse___redArg___lam__0(v_x_41__boxed_1029_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg(lean_object* v_inst_1032_, lean_object* v_inst_1033_, lean_object* v_inst_1034_, lean_object* v_inst_1035_, lean_object* v_inst_1036_, lean_object* v_inst_1037_, lean_object* v_inst_1038_, lean_object* v_inst_1039_, lean_object* v_inst_1040_, lean_object* v_inst_1041_, lean_object* v_inst_1042_, lean_object* v_inst_1043_, lean_object* v_inst_1044_, lean_object* v_inst_1045_, lean_object* v_inst_1046_, lean_object* v_inst_1047_, lean_object* v_c_1048_, lean_object* v_functions_1049_, lean_object* v_stack_1050_){
_start:
{
lean_object* v___f_1051_; lean_object* v___x_1052_; 
v___f_1051_ = ((lean_object*)(lp_cns_CNS_parse___redArg___closed__0));
v___x_1052_ = lp_cns_CNS_parse2___redArg(v_inst_1032_, v_inst_1033_, v_inst_1034_, v_inst_1035_, v_inst_1036_, v_inst_1037_, v_inst_1038_, v_inst_1039_, v_inst_1040_, v_inst_1041_, v_inst_1042_, v_inst_1043_, v_inst_1044_, v_inst_1045_, v_inst_1046_, v_inst_1047_, v_c_1048_, v___f_1051_, v_functions_1049_, v_stack_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___boxed(lean_object** _args){
lean_object* v_inst_1053_ = _args[0];
lean_object* v_inst_1054_ = _args[1];
lean_object* v_inst_1055_ = _args[2];
lean_object* v_inst_1056_ = _args[3];
lean_object* v_inst_1057_ = _args[4];
lean_object* v_inst_1058_ = _args[5];
lean_object* v_inst_1059_ = _args[6];
lean_object* v_inst_1060_ = _args[7];
lean_object* v_inst_1061_ = _args[8];
lean_object* v_inst_1062_ = _args[9];
lean_object* v_inst_1063_ = _args[10];
lean_object* v_inst_1064_ = _args[11];
lean_object* v_inst_1065_ = _args[12];
lean_object* v_inst_1066_ = _args[13];
lean_object* v_inst_1067_ = _args[14];
lean_object* v_inst_1068_ = _args[15];
lean_object* v_c_1069_ = _args[16];
lean_object* v_functions_1070_ = _args[17];
lean_object* v_stack_1071_ = _args[18];
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = lp_cns_CNS_parse___redArg(v_inst_1053_, v_inst_1054_, v_inst_1055_, v_inst_1056_, v_inst_1057_, v_inst_1058_, v_inst_1059_, v_inst_1060_, v_inst_1061_, v_inst_1062_, v_inst_1063_, v_inst_1064_, v_inst_1065_, v_inst_1066_, v_inst_1067_, v_inst_1068_, v_c_1069_, v_functions_1070_, v_stack_1071_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse(lean_object* v_00_u03b1_1073_, lean_object* v_inst_1074_, lean_object* v_inst_1075_, lean_object* v_inst_1076_, lean_object* v_inst_1077_, lean_object* v_inst_1078_, lean_object* v_inst_1079_, lean_object* v_inst_1080_, lean_object* v_inst_1081_, lean_object* v_inst_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_inst_1085_, lean_object* v_inst_1086_, lean_object* v_inst_1087_, lean_object* v_inst_1088_, lean_object* v_inst_1089_, lean_object* v_c_1090_, lean_object* v_functions_1091_, lean_object* v_stack_1092_){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = lp_cns_CNS_parse___redArg(v_inst_1074_, v_inst_1075_, v_inst_1076_, v_inst_1077_, v_inst_1078_, v_inst_1079_, v_inst_1080_, v_inst_1081_, v_inst_1082_, v_inst_1083_, v_inst_1084_, v_inst_1085_, v_inst_1086_, v_inst_1087_, v_inst_1088_, v_inst_1089_, v_c_1090_, v_functions_1091_, v_stack_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___boxed(lean_object** _args){
lean_object* v_00_u03b1_1094_ = _args[0];
lean_object* v_inst_1095_ = _args[1];
lean_object* v_inst_1096_ = _args[2];
lean_object* v_inst_1097_ = _args[3];
lean_object* v_inst_1098_ = _args[4];
lean_object* v_inst_1099_ = _args[5];
lean_object* v_inst_1100_ = _args[6];
lean_object* v_inst_1101_ = _args[7];
lean_object* v_inst_1102_ = _args[8];
lean_object* v_inst_1103_ = _args[9];
lean_object* v_inst_1104_ = _args[10];
lean_object* v_inst_1105_ = _args[11];
lean_object* v_inst_1106_ = _args[12];
lean_object* v_inst_1107_ = _args[13];
lean_object* v_inst_1108_ = _args[14];
lean_object* v_inst_1109_ = _args[15];
lean_object* v_inst_1110_ = _args[16];
lean_object* v_c_1111_ = _args[17];
lean_object* v_functions_1112_ = _args[18];
lean_object* v_stack_1113_ = _args[19];
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = lp_cns_CNS_parse(v_00_u03b1_1094_, v_inst_1095_, v_inst_1096_, v_inst_1097_, v_inst_1098_, v_inst_1099_, v_inst_1100_, v_inst_1101_, v_inst_1102_, v_inst_1103_, v_inst_1104_, v_inst_1105_, v_inst_1106_, v_inst_1107_, v_inst_1108_, v_inst_1109_, v_inst_1110_, v_c_1111_, v_functions_1112_, v_stack_1113_);
return v_res_1114_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_cns_CNS_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
