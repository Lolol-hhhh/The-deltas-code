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
double lean_float_of_nat(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
double lean_float_mul(double, double);
double lean_float_sub(double, double);
double lean_float_add(double, double);
lean_object* lean_nat_add(lean_object*, lean_object*);
double lean_float_negate(double);
double pow(double, double);
double sqrt(double);
double atan2(double, double);
double exp(double);
double log(double);
double cos(double);
double sin(double);
double lean_float_div(double, double);
lean_object* lean_float_to_string(double);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instAdd___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instAdd___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_cns_ComplexFloat_instAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_ComplexFloat_instAdd___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_ComplexFloat_instAdd___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instAdd___closed__0_value;
LEAN_EXPORT const lean_object* lp_cns_ComplexFloat_instAdd = (const lean_object*)&lp_cns_ComplexFloat_instAdd___closed__0_value;
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instSub___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instSub___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_cns_ComplexFloat_instSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_ComplexFloat_instSub___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_ComplexFloat_instSub___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instSub___closed__0_value;
LEAN_EXPORT const lean_object* lp_cns_ComplexFloat_instSub = (const lean_object*)&lp_cns_ComplexFloat_instSub___closed__0_value;
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instMul___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instMul___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_cns_ComplexFloat_instMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_ComplexFloat_instMul___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_ComplexFloat_instMul___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instMul___closed__0_value;
LEAN_EXPORT const lean_object* lp_cns_ComplexFloat_instMul = (const lean_object*)&lp_cns_ComplexFloat_instMul___closed__0_value;
static lean_once_cell_t lp_cns_ComplexFloat_instDiv___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_cns_ComplexFloat_instDiv___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instDiv___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instDiv___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_cns_ComplexFloat_instDiv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_ComplexFloat_instDiv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_ComplexFloat_instDiv___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instDiv___closed__0_value;
LEAN_EXPORT const lean_object* lp_cns_ComplexFloat_instDiv = (const lean_object*)&lp_cns_ComplexFloat_instDiv___closed__0_value;
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instNeg___lam__0(lean_object*);
static const lean_closure_object lp_cns_ComplexFloat_instNeg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_ComplexFloat_instNeg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_ComplexFloat_instNeg___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instNeg___closed__0_value;
LEAN_EXPORT const lean_object* lp_cns_ComplexFloat_instNeg = (const lean_object*)&lp_cns_ComplexFloat_instNeg___closed__0_value;
static const lean_string_object lp_cns_ComplexFloat_instToString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* lp_cns_ComplexFloat_instToString___lam__0___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instToString___lam__0___closed__0_value;
static const lean_string_object lp_cns_ComplexFloat_instToString___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* lp_cns_ComplexFloat_instToString___lam__0___closed__1 = (const lean_object*)&lp_cns_ComplexFloat_instToString___lam__0___closed__1_value;
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instToString___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instToString___lam__0___boxed(lean_object*);
static const lean_closure_object lp_cns_ComplexFloat_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_ComplexFloat_instToString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_ComplexFloat_instToString___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instToString___closed__0_value;
LEAN_EXPORT const lean_object* lp_cns_ComplexFloat_instToString = (const lean_object*)&lp_cns_ComplexFloat_instToString___closed__0_value;
static lean_once_cell_t lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instCoeFloat___lam__0(double);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instCoeFloat___lam__0___boxed(lean_object*);
static const lean_closure_object lp_cns_ComplexFloat_instCoeFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_ComplexFloat_instCoeFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_ComplexFloat_instCoeFloat___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instCoeFloat___closed__0_value;
LEAN_EXPORT const lean_object* lp_cns_ComplexFloat_instCoeFloat = (const lean_object*)&lp_cns_ComplexFloat_instCoeFloat___closed__0_value;
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instOfNat(lean_object*);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instPow___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instPow___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_cns_ComplexFloat_instPow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_ComplexFloat_instPow___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_ComplexFloat_instPow___closed__0 = (const lean_object*)&lp_cns_ComplexFloat_instPow___closed__0_value;
LEAN_EXPORT const lean_object* lp_cns_ComplexFloat_instPow = (const lean_object*)&lp_cns_ComplexFloat_instPow___closed__0_value;
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
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parse2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___lam__0(uint32_t);
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object lp_cns_CNS_parse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cns_CNS_parse___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cns_CNS_parse___redArg___closed__0 = (const lean_object*)&lp_cns_CNS_parse___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_cns_CNS_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instAdd___lam__0(lean_object* v_x_1_, lean_object* v_y_2_){
_start:
{
double v_re_3_; double v_im_4_; double v_re_5_; double v_im_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_15_; 
v_re_3_ = lean_ctor_get_float(v_x_1_, 0);
v_im_4_ = lean_ctor_get_float(v_x_1_, 8);
v_re_5_ = lean_ctor_get_float(v_y_2_, 0);
v_im_6_ = lean_ctor_get_float(v_y_2_, 8);
v_isSharedCheck_15_ = !lean_is_exclusive(v_y_2_);
if (v_isSharedCheck_15_ == 0)
{
v___x_8_ = v_y_2_;
v_isShared_9_ = v_isSharedCheck_15_;
goto v_resetjp_7_;
}
else
{
lean_dec(v_y_2_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_15_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
double v___x_10_; double v___x_11_; lean_object* v___x_13_; 
v___x_10_ = lean_float_add(v_re_3_, v_re_5_);
v___x_11_ = lean_float_add(v_im_4_, v_im_6_);
if (v_isShared_9_ == 0)
{
v___x_13_ = v___x_8_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(0, 0, 16);
v___x_13_ = v_reuseFailAlloc_14_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
lean_ctor_set_float(v___x_13_, 0, v___x_10_);
lean_ctor_set_float(v___x_13_, 8, v___x_11_);
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instAdd___lam__0___boxed(lean_object* v_x_16_, lean_object* v_y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lp_cns_ComplexFloat_instAdd___lam__0(v_x_16_, v_y_17_);
lean_dec_ref(v_x_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instSub___lam__0(lean_object* v_x_21_, lean_object* v_y_22_){
_start:
{
double v_re_23_; double v_im_24_; double v_re_25_; double v_im_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_35_; 
v_re_23_ = lean_ctor_get_float(v_x_21_, 0);
v_im_24_ = lean_ctor_get_float(v_x_21_, 8);
v_re_25_ = lean_ctor_get_float(v_y_22_, 0);
v_im_26_ = lean_ctor_get_float(v_y_22_, 8);
v_isSharedCheck_35_ = !lean_is_exclusive(v_y_22_);
if (v_isSharedCheck_35_ == 0)
{
v___x_28_ = v_y_22_;
v_isShared_29_ = v_isSharedCheck_35_;
goto v_resetjp_27_;
}
else
{
lean_dec(v_y_22_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_35_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
double v___x_30_; double v___x_31_; lean_object* v___x_33_; 
v___x_30_ = lean_float_sub(v_re_23_, v_re_25_);
v___x_31_ = lean_float_sub(v_im_24_, v_im_26_);
if (v_isShared_29_ == 0)
{
v___x_33_ = v___x_28_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 0, 16);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_ctor_set_float(v___x_33_, 0, v___x_30_);
lean_ctor_set_float(v___x_33_, 8, v___x_31_);
return v___x_33_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instSub___lam__0___boxed(lean_object* v_x_36_, lean_object* v_y_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = lp_cns_ComplexFloat_instSub___lam__0(v_x_36_, v_y_37_);
lean_dec_ref(v_x_36_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instMul___lam__0(lean_object* v_x_41_, lean_object* v_y_42_){
_start:
{
double v_re_43_; double v_im_44_; double v_re_45_; double v_im_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_59_; 
v_re_43_ = lean_ctor_get_float(v_x_41_, 0);
v_im_44_ = lean_ctor_get_float(v_x_41_, 8);
v_re_45_ = lean_ctor_get_float(v_y_42_, 0);
v_im_46_ = lean_ctor_get_float(v_y_42_, 8);
v_isSharedCheck_59_ = !lean_is_exclusive(v_y_42_);
if (v_isSharedCheck_59_ == 0)
{
v___x_48_ = v_y_42_;
v_isShared_49_ = v_isSharedCheck_59_;
goto v_resetjp_47_;
}
else
{
lean_dec(v_y_42_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_59_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
double v___x_50_; double v___x_51_; double v___x_52_; double v___x_53_; double v___x_54_; double v___x_55_; lean_object* v___x_57_; 
v___x_50_ = lean_float_mul(v_re_43_, v_re_45_);
v___x_51_ = lean_float_mul(v_im_44_, v_im_46_);
v___x_52_ = lean_float_sub(v___x_50_, v___x_51_);
v___x_53_ = lean_float_mul(v_re_43_, v_im_46_);
v___x_54_ = lean_float_mul(v_im_44_, v_re_45_);
v___x_55_ = lean_float_add(v___x_53_, v___x_54_);
if (v_isShared_49_ == 0)
{
v___x_57_ = v___x_48_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 0, 16);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
lean_ctor_set_float(v___x_57_, 0, v___x_52_);
lean_ctor_set_float(v___x_57_, 8, v___x_55_);
return v___x_57_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instMul___lam__0___boxed(lean_object* v_x_60_, lean_object* v_y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_cns_ComplexFloat_instMul___lam__0(v_x_60_, v_y_61_);
lean_dec_ref(v_x_60_);
return v_res_62_;
}
}
static double _init_lp_cns_ComplexFloat_instDiv___lam__0___closed__0(void){
_start:
{
lean_object* v___x_65_; double v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(2u);
v___x_66_ = lean_float_of_nat(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instDiv___lam__0(lean_object* v_x_67_, lean_object* v_y_68_){
_start:
{
double v_re_69_; double v_im_70_; double v_re_71_; double v_im_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_91_; 
v_re_69_ = lean_ctor_get_float(v_x_67_, 0);
v_im_70_ = lean_ctor_get_float(v_x_67_, 8);
v_re_71_ = lean_ctor_get_float(v_y_68_, 0);
v_im_72_ = lean_ctor_get_float(v_y_68_, 8);
v_isSharedCheck_91_ = !lean_is_exclusive(v_y_68_);
if (v_isSharedCheck_91_ == 0)
{
v___x_74_ = v_y_68_;
v_isShared_75_ = v_isSharedCheck_91_;
goto v_resetjp_73_;
}
else
{
lean_dec(v_y_68_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_91_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
double v___x_76_; double v___x_77_; double v___x_78_; double v___x_79_; double v___x_80_; double v___x_81_; double v___x_82_; double v___x_83_; double v___x_84_; double v___x_85_; double v___x_86_; double v___x_87_; lean_object* v___x_89_; 
v___x_76_ = lean_float_mul(v_re_69_, v_re_71_);
v___x_77_ = lean_float_mul(v_im_70_, v_im_72_);
v___x_78_ = lean_float_add(v___x_76_, v___x_77_);
v___x_79_ = lean_float_once(&lp_cns_ComplexFloat_instDiv___lam__0___closed__0, &lp_cns_ComplexFloat_instDiv___lam__0___closed__0_once, _init_lp_cns_ComplexFloat_instDiv___lam__0___closed__0);
v___x_80_ = pow(v_re_71_, v___x_79_);
v___x_81_ = pow(v_im_72_, v___x_79_);
v___x_82_ = lean_float_add(v___x_80_, v___x_81_);
v___x_83_ = lean_float_div(v___x_78_, v___x_82_);
v___x_84_ = lean_float_mul(v_im_70_, v_re_71_);
v___x_85_ = lean_float_mul(v_re_69_, v_im_72_);
v___x_86_ = lean_float_sub(v___x_84_, v___x_85_);
v___x_87_ = lean_float_div(v___x_86_, v___x_82_);
if (v_isShared_75_ == 0)
{
v___x_89_ = v___x_74_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 0, 16);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_ctor_set_float(v___x_89_, 0, v___x_83_);
lean_ctor_set_float(v___x_89_, 8, v___x_87_);
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instDiv___lam__0___boxed(lean_object* v_x_92_, lean_object* v_y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = lp_cns_ComplexFloat_instDiv___lam__0(v_x_92_, v_y_93_);
lean_dec_ref(v_x_92_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instNeg___lam__0(lean_object* v_x_97_){
_start:
{
double v_re_98_; double v_im_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_108_; 
v_re_98_ = lean_ctor_get_float(v_x_97_, 0);
v_im_99_ = lean_ctor_get_float(v_x_97_, 8);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_97_);
if (v_isSharedCheck_108_ == 0)
{
v___x_101_ = v_x_97_;
v_isShared_102_ = v_isSharedCheck_108_;
goto v_resetjp_100_;
}
else
{
lean_dec(v_x_97_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_108_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
double v___x_103_; double v___x_104_; lean_object* v___x_106_; 
v___x_103_ = lean_float_negate(v_re_98_);
v___x_104_ = lean_float_negate(v_im_99_);
if (v_isShared_102_ == 0)
{
v___x_106_ = v___x_101_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 0, 16);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_ctor_set_float(v___x_106_, 0, v___x_103_);
lean_ctor_set_float(v___x_106_, 8, v___x_104_);
return v___x_106_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instToString___lam__0(lean_object* v_x_113_){
_start:
{
double v_re_114_; double v_im_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_re_114_ = lean_ctor_get_float(v_x_113_, 0);
v_im_115_ = lean_ctor_get_float(v_x_113_, 8);
v___x_116_ = lean_float_to_string(v_re_114_);
v___x_117_ = ((lean_object*)(lp_cns_ComplexFloat_instToString___lam__0___closed__0));
v___x_118_ = lean_string_append(v___x_116_, v___x_117_);
v___x_119_ = lean_float_to_string(v_im_115_);
v___x_120_ = lean_string_append(v___x_118_, v___x_119_);
lean_dec_ref(v___x_119_);
v___x_121_ = ((lean_object*)(lp_cns_ComplexFloat_instToString___lam__0___closed__1));
v___x_122_ = lean_string_append(v___x_120_, v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instToString___lam__0___boxed(lean_object* v_x_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = lp_cns_ComplexFloat_instToString___lam__0(v_x_123_);
lean_dec_ref(v_x_123_);
return v_res_124_;
}
}
static double _init_lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0(void){
_start:
{
lean_object* v___x_127_; double v___x_128_; 
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = lean_float_of_nat(v___x_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instCoeFloat___lam__0(double v_n_129_){
_start:
{
double v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_float_once(&lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0, &lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0_once, _init_lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0);
v___x_131_ = lean_alloc_ctor(0, 0, 16);
lean_ctor_set_float(v___x_131_, 0, v_n_129_);
lean_ctor_set_float(v___x_131_, 8, v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instCoeFloat___lam__0___boxed(lean_object* v_n_132_){
_start:
{
double v_n_boxed_133_; lean_object* v_res_134_; 
v_n_boxed_133_ = lean_unbox_float(v_n_132_);
lean_dec_ref(v_n_132_);
v_res_134_ = lp_cns_ComplexFloat_instCoeFloat___lam__0(v_n_boxed_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instOfNat(lean_object* v_n_137_){
_start:
{
double v___x_138_; double v___x_139_; lean_object* v___x_140_; 
v___x_138_ = lean_float_of_nat(v_n_137_);
v___x_139_ = lean_float_once(&lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0, &lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0_once, _init_lp_cns_ComplexFloat_instCoeFloat___lam__0___closed__0);
v___x_140_ = lean_alloc_ctor(0, 0, 16);
lean_ctor_set_float(v___x_140_, 0, v___x_138_);
lean_ctor_set_float(v___x_140_, 8, v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instPow___lam__0(lean_object* v_x_141_, lean_object* v_y_142_){
_start:
{
double v_re_143_; double v_im_144_; double v___x_145_; double v___x_146_; double v_re_147_; double v_im_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_175_; 
v_re_143_ = lean_ctor_get_float(v_x_141_, 0);
v_im_144_ = lean_ctor_get_float(v_x_141_, 8);
v___x_145_ = lean_float_once(&lp_cns_ComplexFloat_instDiv___lam__0___closed__0, &lp_cns_ComplexFloat_instDiv___lam__0___closed__0_once, _init_lp_cns_ComplexFloat_instDiv___lam__0___closed__0);
v___x_146_ = pow(v_re_143_, v___x_145_);
v_re_147_ = lean_ctor_get_float(v_y_142_, 0);
v_im_148_ = lean_ctor_get_float(v_y_142_, 8);
v_isSharedCheck_175_ = !lean_is_exclusive(v_y_142_);
if (v_isSharedCheck_175_ == 0)
{
v___x_150_ = v_y_142_;
v_isShared_151_ = v_isSharedCheck_175_;
goto v_resetjp_149_;
}
else
{
lean_dec(v_y_142_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_175_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
double v___x_152_; double v___x_153_; double v_r_154_; double v_00_u03b8_155_; double v___x_156_; double v___x_157_; double v___x_158_; double v___x_159_; double v___x_160_; double v___x_161_; double v___x_162_; double v___x_163_; double v___x_164_; double v___x_165_; double v___x_166_; double v___x_167_; double v___x_168_; double v___x_169_; double v___x_170_; double v___x_171_; lean_object* v___x_173_; 
v___x_152_ = pow(v_im_144_, v___x_145_);
v___x_153_ = lean_float_add(v___x_146_, v___x_152_);
v_r_154_ = sqrt(v___x_153_);
v_00_u03b8_155_ = atan2(v_im_144_, v_re_143_);
v___x_156_ = pow(v_r_154_, v_re_147_);
v___x_157_ = lean_float_negate(v_im_148_);
v___x_158_ = lean_float_mul(v___x_157_, v_00_u03b8_155_);
v___x_159_ = exp(v___x_158_);
v___x_160_ = lean_float_mul(v___x_156_, v___x_159_);
v___x_161_ = log(v_r_154_);
v___x_162_ = lean_float_mul(v_im_148_, v___x_161_);
v___x_163_ = lean_float_mul(v_re_147_, v_00_u03b8_155_);
v___x_164_ = lean_float_add(v___x_162_, v___x_163_);
v___x_165_ = cos(v___x_164_);
v___x_166_ = lean_float_mul(v___x_160_, v___x_165_);
v___x_167_ = lean_float_mul(v_im_148_, v_00_u03b8_155_);
v___x_168_ = exp(v___x_167_);
v___x_169_ = lean_float_mul(v___x_156_, v___x_168_);
v___x_170_ = sin(v___x_164_);
v___x_171_ = lean_float_mul(v___x_169_, v___x_170_);
if (v_isShared_151_ == 0)
{
v___x_173_ = v___x_150_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 0, 16);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_ctor_set_float(v___x_173_, 0, v___x_166_);
lean_ctor_set_float(v___x_173_, 8, v___x_171_);
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_ComplexFloat_instPow___lam__0___boxed(lean_object* v_x_176_, lean_object* v_y_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = lp_cns_ComplexFloat_instPow___lam__0(v_x_176_, v_y_177_);
lean_dec_ref(v_x_176_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorIdx(uint8_t v_x_181_){
_start:
{
switch(v_x_181_)
{
case 0:
{
lean_object* v___x_182_; 
v___x_182_ = lean_unsigned_to_nat(0u);
return v___x_182_;
}
case 1:
{
lean_object* v___x_183_; 
v___x_183_ = lean_unsigned_to_nat(1u);
return v___x_183_;
}
case 2:
{
lean_object* v___x_184_; 
v___x_184_ = lean_unsigned_to_nat(2u);
return v___x_184_;
}
case 3:
{
lean_object* v___x_185_; 
v___x_185_ = lean_unsigned_to_nat(3u);
return v___x_185_;
}
case 4:
{
lean_object* v___x_186_; 
v___x_186_ = lean_unsigned_to_nat(4u);
return v___x_186_;
}
case 5:
{
lean_object* v___x_187_; 
v___x_187_ = lean_unsigned_to_nat(5u);
return v___x_187_;
}
case 6:
{
lean_object* v___x_188_; 
v___x_188_ = lean_unsigned_to_nat(6u);
return v___x_188_;
}
case 7:
{
lean_object* v___x_189_; 
v___x_189_ = lean_unsigned_to_nat(7u);
return v___x_189_;
}
case 8:
{
lean_object* v___x_190_; 
v___x_190_ = lean_unsigned_to_nat(8u);
return v___x_190_;
}
case 9:
{
lean_object* v___x_191_; 
v___x_191_ = lean_unsigned_to_nat(9u);
return v___x_191_;
}
default: 
{
lean_object* v___x_192_; 
v___x_192_ = lean_unsigned_to_nat(10u);
return v___x_192_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorIdx___boxed(lean_object* v_x_193_){
_start:
{
uint8_t v_x_boxed_194_; lean_object* v_res_195_; 
v_x_boxed_194_ = lean_unbox(v_x_193_);
v_res_195_ = lp_cns_CNS_Number_ctorIdx(v_x_boxed_194_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_toCtorIdx(uint8_t v_x_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = lp_cns_CNS_Number_ctorIdx(v_x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_toCtorIdx___boxed(lean_object* v_x_198_){
_start:
{
uint8_t v_x_4__boxed_199_; lean_object* v_res_200_; 
v_x_4__boxed_199_ = lean_unbox(v_x_198_);
v_res_200_ = lp_cns_CNS_Number_toCtorIdx(v_x_4__boxed_199_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___redArg(lean_object* v_k_201_){
_start:
{
lean_inc(v_k_201_);
return v_k_201_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___redArg___boxed(lean_object* v_k_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = lp_cns_CNS_Number_ctorElim___redArg(v_k_202_);
lean_dec(v_k_202_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim(lean_object* v_motive_204_, lean_object* v_ctorIdx_205_, uint8_t v_t_206_, lean_object* v_h_207_, lean_object* v_k_208_){
_start:
{
lean_inc(v_k_208_);
return v_k_208_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_ctorElim___boxed(lean_object* v_motive_209_, lean_object* v_ctorIdx_210_, lean_object* v_t_211_, lean_object* v_h_212_, lean_object* v_k_213_){
_start:
{
uint8_t v_t_boxed_214_; lean_object* v_res_215_; 
v_t_boxed_214_ = lean_unbox(v_t_211_);
v_res_215_ = lp_cns_CNS_Number_ctorElim(v_motive_209_, v_ctorIdx_210_, v_t_boxed_214_, v_h_212_, v_k_213_);
lean_dec(v_k_213_);
lean_dec(v_ctorIdx_210_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___redArg(lean_object* v_O_216_){
_start:
{
lean_inc(v_O_216_);
return v_O_216_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___redArg___boxed(lean_object* v_O_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = lp_cns_CNS_Number_O_elim___redArg(v_O_217_);
lean_dec(v_O_217_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim(lean_object* v_motive_219_, uint8_t v_t_220_, lean_object* v_h_221_, lean_object* v_O_222_){
_start:
{
lean_inc(v_O_222_);
return v_O_222_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_O_elim___boxed(lean_object* v_motive_223_, lean_object* v_t_224_, lean_object* v_h_225_, lean_object* v_O_226_){
_start:
{
uint8_t v_t_boxed_227_; lean_object* v_res_228_; 
v_t_boxed_227_ = lean_unbox(v_t_224_);
v_res_228_ = lp_cns_CNS_Number_O_elim(v_motive_223_, v_t_boxed_227_, v_h_225_, v_O_226_);
lean_dec(v_O_226_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___redArg(lean_object* v_T_229_){
_start:
{
lean_inc(v_T_229_);
return v_T_229_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___redArg___boxed(lean_object* v_T_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = lp_cns_CNS_Number_T_elim___redArg(v_T_230_);
lean_dec(v_T_230_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim(lean_object* v_motive_232_, uint8_t v_t_233_, lean_object* v_h_234_, lean_object* v_T_235_){
_start:
{
lean_inc(v_T_235_);
return v_T_235_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_T_elim___boxed(lean_object* v_motive_236_, lean_object* v_t_237_, lean_object* v_h_238_, lean_object* v_T_239_){
_start:
{
uint8_t v_t_boxed_240_; lean_object* v_res_241_; 
v_t_boxed_240_ = lean_unbox(v_t_237_);
v_res_241_ = lp_cns_CNS_Number_T_elim(v_motive_236_, v_t_boxed_240_, v_h_238_, v_T_239_);
lean_dec(v_T_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___redArg(lean_object* v_I_242_){
_start:
{
lean_inc(v_I_242_);
return v_I_242_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___redArg___boxed(lean_object* v_I_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = lp_cns_CNS_Number_I_elim___redArg(v_I_243_);
lean_dec(v_I_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim(lean_object* v_motive_245_, uint8_t v_t_246_, lean_object* v_h_247_, lean_object* v_I_248_){
_start:
{
lean_inc(v_I_248_);
return v_I_248_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_I_elim___boxed(lean_object* v_motive_249_, lean_object* v_t_250_, lean_object* v_h_251_, lean_object* v_I_252_){
_start:
{
uint8_t v_t_boxed_253_; lean_object* v_res_254_; 
v_t_boxed_253_ = lean_unbox(v_t_250_);
v_res_254_ = lp_cns_CNS_Number_I_elim(v_motive_249_, v_t_boxed_253_, v_h_251_, v_I_252_);
lean_dec(v_I_252_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___redArg(lean_object* v_F_255_){
_start:
{
lean_inc(v_F_255_);
return v_F_255_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___redArg___boxed(lean_object* v_F_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = lp_cns_CNS_Number_F_elim___redArg(v_F_256_);
lean_dec(v_F_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim(lean_object* v_motive_258_, uint8_t v_t_259_, lean_object* v_h_260_, lean_object* v_F_261_){
_start:
{
lean_inc(v_F_261_);
return v_F_261_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_F_elim___boxed(lean_object* v_motive_262_, lean_object* v_t_263_, lean_object* v_h_264_, lean_object* v_F_265_){
_start:
{
uint8_t v_t_boxed_266_; lean_object* v_res_267_; 
v_t_boxed_266_ = lean_unbox(v_t_263_);
v_res_267_ = lp_cns_CNS_Number_F_elim(v_motive_262_, v_t_boxed_266_, v_h_264_, v_F_265_);
lean_dec(v_F_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___redArg(lean_object* v_V_268_){
_start:
{
lean_inc(v_V_268_);
return v_V_268_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___redArg___boxed(lean_object* v_V_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = lp_cns_CNS_Number_V_elim___redArg(v_V_269_);
lean_dec(v_V_269_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim(lean_object* v_motive_271_, uint8_t v_t_272_, lean_object* v_h_273_, lean_object* v_V_274_){
_start:
{
lean_inc(v_V_274_);
return v_V_274_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_V_elim___boxed(lean_object* v_motive_275_, lean_object* v_t_276_, lean_object* v_h_277_, lean_object* v_V_278_){
_start:
{
uint8_t v_t_boxed_279_; lean_object* v_res_280_; 
v_t_boxed_279_ = lean_unbox(v_t_276_);
v_res_280_ = lp_cns_CNS_Number_V_elim(v_motive_275_, v_t_boxed_279_, v_h_277_, v_V_278_);
lean_dec(v_V_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___redArg(lean_object* v_S_281_){
_start:
{
lean_inc(v_S_281_);
return v_S_281_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___redArg___boxed(lean_object* v_S_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = lp_cns_CNS_Number_S_elim___redArg(v_S_282_);
lean_dec(v_S_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim(lean_object* v_motive_284_, uint8_t v_t_285_, lean_object* v_h_286_, lean_object* v_S_287_){
_start:
{
lean_inc(v_S_287_);
return v_S_287_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_S_elim___boxed(lean_object* v_motive_288_, lean_object* v_t_289_, lean_object* v_h_290_, lean_object* v_S_291_){
_start:
{
uint8_t v_t_boxed_292_; lean_object* v_res_293_; 
v_t_boxed_292_ = lean_unbox(v_t_289_);
v_res_293_ = lp_cns_CNS_Number_S_elim(v_motive_288_, v_t_boxed_292_, v_h_290_, v_S_291_);
lean_dec(v_S_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___redArg(lean_object* v_X_294_){
_start:
{
lean_inc(v_X_294_);
return v_X_294_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___redArg___boxed(lean_object* v_X_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = lp_cns_CNS_Number_X_elim___redArg(v_X_295_);
lean_dec(v_X_295_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim(lean_object* v_motive_297_, uint8_t v_t_298_, lean_object* v_h_299_, lean_object* v_X_300_){
_start:
{
lean_inc(v_X_300_);
return v_X_300_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_X_elim___boxed(lean_object* v_motive_301_, lean_object* v_t_302_, lean_object* v_h_303_, lean_object* v_X_304_){
_start:
{
uint8_t v_t_boxed_305_; lean_object* v_res_306_; 
v_t_boxed_305_ = lean_unbox(v_t_302_);
v_res_306_ = lp_cns_CNS_Number_X_elim(v_motive_301_, v_t_boxed_305_, v_h_303_, v_X_304_);
lean_dec(v_X_304_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___redArg(lean_object* v_H_307_){
_start:
{
lean_inc(v_H_307_);
return v_H_307_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___redArg___boxed(lean_object* v_H_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = lp_cns_CNS_Number_H_elim___redArg(v_H_308_);
lean_dec(v_H_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim(lean_object* v_motive_310_, uint8_t v_t_311_, lean_object* v_h_312_, lean_object* v_H_313_){
_start:
{
lean_inc(v_H_313_);
return v_H_313_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_H_elim___boxed(lean_object* v_motive_314_, lean_object* v_t_315_, lean_object* v_h_316_, lean_object* v_H_317_){
_start:
{
uint8_t v_t_boxed_318_; lean_object* v_res_319_; 
v_t_boxed_318_ = lean_unbox(v_t_315_);
v_res_319_ = lp_cns_CNS_Number_H_elim(v_motive_314_, v_t_boxed_318_, v_h_316_, v_H_317_);
lean_dec(v_H_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___redArg(lean_object* v_C_320_){
_start:
{
lean_inc(v_C_320_);
return v_C_320_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___redArg___boxed(lean_object* v_C_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = lp_cns_CNS_Number_C_elim___redArg(v_C_321_);
lean_dec(v_C_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim(lean_object* v_motive_323_, uint8_t v_t_324_, lean_object* v_h_325_, lean_object* v_C_326_){
_start:
{
lean_inc(v_C_326_);
return v_C_326_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_C_elim___boxed(lean_object* v_motive_327_, lean_object* v_t_328_, lean_object* v_h_329_, lean_object* v_C_330_){
_start:
{
uint8_t v_t_boxed_331_; lean_object* v_res_332_; 
v_t_boxed_331_ = lean_unbox(v_t_328_);
v_res_332_ = lp_cns_CNS_Number_C_elim(v_motive_327_, v_t_boxed_331_, v_h_329_, v_C_330_);
lean_dec(v_C_330_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___redArg(lean_object* v_J_333_){
_start:
{
lean_inc(v_J_333_);
return v_J_333_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___redArg___boxed(lean_object* v_J_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = lp_cns_CNS_Number_J_elim___redArg(v_J_334_);
lean_dec(v_J_334_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim(lean_object* v_motive_336_, uint8_t v_t_337_, lean_object* v_h_338_, lean_object* v_J_339_){
_start:
{
lean_inc(v_J_339_);
return v_J_339_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_J_elim___boxed(lean_object* v_motive_340_, lean_object* v_t_341_, lean_object* v_h_342_, lean_object* v_J_343_){
_start:
{
uint8_t v_t_boxed_344_; lean_object* v_res_345_; 
v_t_boxed_344_ = lean_unbox(v_t_341_);
v_res_345_ = lp_cns_CNS_Number_J_elim(v_motive_340_, v_t_boxed_344_, v_h_342_, v_J_343_);
lean_dec(v_J_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___redArg(lean_object* v_N_346_){
_start:
{
lean_inc(v_N_346_);
return v_N_346_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___redArg___boxed(lean_object* v_N_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = lp_cns_CNS_Number_N_elim___redArg(v_N_347_);
lean_dec(v_N_347_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim(lean_object* v_motive_349_, uint8_t v_t_350_, lean_object* v_h_351_, lean_object* v_N_352_){
_start:
{
lean_inc(v_N_352_);
return v_N_352_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_N_elim___boxed(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_N_356_){
_start:
{
uint8_t v_t_boxed_357_; lean_object* v_res_358_; 
v_t_boxed_357_ = lean_unbox(v_t_354_);
v_res_358_ = lp_cns_CNS_Number_N_elim(v_motive_353_, v_t_boxed_357_, v_h_355_, v_N_356_);
lean_dec(v_N_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorIdx(uint8_t v_x_359_){
_start:
{
switch(v_x_359_)
{
case 0:
{
lean_object* v___x_360_; 
v___x_360_ = lean_unsigned_to_nat(0u);
return v___x_360_;
}
case 1:
{
lean_object* v___x_361_; 
v___x_361_ = lean_unsigned_to_nat(1u);
return v___x_361_;
}
case 2:
{
lean_object* v___x_362_; 
v___x_362_ = lean_unsigned_to_nat(2u);
return v___x_362_;
}
case 3:
{
lean_object* v___x_363_; 
v___x_363_ = lean_unsigned_to_nat(3u);
return v___x_363_;
}
case 4:
{
lean_object* v___x_364_; 
v___x_364_ = lean_unsigned_to_nat(4u);
return v___x_364_;
}
case 5:
{
lean_object* v___x_365_; 
v___x_365_ = lean_unsigned_to_nat(5u);
return v___x_365_;
}
case 6:
{
lean_object* v___x_366_; 
v___x_366_ = lean_unsigned_to_nat(6u);
return v___x_366_;
}
default: 
{
lean_object* v___x_367_; 
v___x_367_ = lean_unsigned_to_nat(7u);
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorIdx___boxed(lean_object* v_x_368_){
_start:
{
uint8_t v_x_boxed_369_; lean_object* v_res_370_; 
v_x_boxed_369_ = lean_unbox(v_x_368_);
v_res_370_ = lp_cns_CNS_Operation_ctorIdx(v_x_boxed_369_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_toCtorIdx(uint8_t v_x_371_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lp_cns_CNS_Operation_ctorIdx(v_x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_toCtorIdx___boxed(lean_object* v_x_373_){
_start:
{
uint8_t v_x_4__boxed_374_; lean_object* v_res_375_; 
v_x_4__boxed_374_ = lean_unbox(v_x_373_);
v_res_375_ = lp_cns_CNS_Operation_toCtorIdx(v_x_4__boxed_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___redArg(lean_object* v_k_376_){
_start:
{
lean_inc(v_k_376_);
return v_k_376_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___redArg___boxed(lean_object* v_k_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = lp_cns_CNS_Operation_ctorElim___redArg(v_k_377_);
lean_dec(v_k_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim(lean_object* v_motive_379_, lean_object* v_ctorIdx_380_, uint8_t v_t_381_, lean_object* v_h_382_, lean_object* v_k_383_){
_start:
{
lean_inc(v_k_383_);
return v_k_383_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_ctorElim___boxed(lean_object* v_motive_384_, lean_object* v_ctorIdx_385_, lean_object* v_t_386_, lean_object* v_h_387_, lean_object* v_k_388_){
_start:
{
uint8_t v_t_boxed_389_; lean_object* v_res_390_; 
v_t_boxed_389_ = lean_unbox(v_t_386_);
v_res_390_ = lp_cns_CNS_Operation_ctorElim(v_motive_384_, v_ctorIdx_385_, v_t_boxed_389_, v_h_387_, v_k_388_);
lean_dec(v_k_388_);
lean_dec(v_ctorIdx_385_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___redArg(lean_object* v_P_391_){
_start:
{
lean_inc(v_P_391_);
return v_P_391_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___redArg___boxed(lean_object* v_P_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = lp_cns_CNS_Operation_P_elim___redArg(v_P_392_);
lean_dec(v_P_392_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim(lean_object* v_motive_394_, uint8_t v_t_395_, lean_object* v_h_396_, lean_object* v_P_397_){
_start:
{
lean_inc(v_P_397_);
return v_P_397_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_P_elim___boxed(lean_object* v_motive_398_, lean_object* v_t_399_, lean_object* v_h_400_, lean_object* v_P_401_){
_start:
{
uint8_t v_t_boxed_402_; lean_object* v_res_403_; 
v_t_boxed_402_ = lean_unbox(v_t_399_);
v_res_403_ = lp_cns_CNS_Operation_P_elim(v_motive_398_, v_t_boxed_402_, v_h_400_, v_P_401_);
lean_dec(v_P_401_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___redArg(lean_object* v_S_404_){
_start:
{
lean_inc(v_S_404_);
return v_S_404_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___redArg___boxed(lean_object* v_S_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = lp_cns_CNS_Operation_S_elim___redArg(v_S_405_);
lean_dec(v_S_405_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim(lean_object* v_motive_407_, uint8_t v_t_408_, lean_object* v_h_409_, lean_object* v_S_410_){
_start:
{
lean_inc(v_S_410_);
return v_S_410_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_S_elim___boxed(lean_object* v_motive_411_, lean_object* v_t_412_, lean_object* v_h_413_, lean_object* v_S_414_){
_start:
{
uint8_t v_t_boxed_415_; lean_object* v_res_416_; 
v_t_boxed_415_ = lean_unbox(v_t_412_);
v_res_416_ = lp_cns_CNS_Operation_S_elim(v_motive_411_, v_t_boxed_415_, v_h_413_, v_S_414_);
lean_dec(v_S_414_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___redArg(lean_object* v_M_417_){
_start:
{
lean_inc(v_M_417_);
return v_M_417_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___redArg___boxed(lean_object* v_M_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = lp_cns_CNS_Operation_M_elim___redArg(v_M_418_);
lean_dec(v_M_418_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim(lean_object* v_motive_420_, uint8_t v_t_421_, lean_object* v_h_422_, lean_object* v_M_423_){
_start:
{
lean_inc(v_M_423_);
return v_M_423_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_M_elim___boxed(lean_object* v_motive_424_, lean_object* v_t_425_, lean_object* v_h_426_, lean_object* v_M_427_){
_start:
{
uint8_t v_t_boxed_428_; lean_object* v_res_429_; 
v_t_boxed_428_ = lean_unbox(v_t_425_);
v_res_429_ = lp_cns_CNS_Operation_M_elim(v_motive_424_, v_t_boxed_428_, v_h_426_, v_M_427_);
lean_dec(v_M_427_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___redArg(lean_object* v_D_430_){
_start:
{
lean_inc(v_D_430_);
return v_D_430_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___redArg___boxed(lean_object* v_D_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = lp_cns_CNS_Operation_D_elim___redArg(v_D_431_);
lean_dec(v_D_431_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim(lean_object* v_motive_433_, uint8_t v_t_434_, lean_object* v_h_435_, lean_object* v_D_436_){
_start:
{
lean_inc(v_D_436_);
return v_D_436_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_D_elim___boxed(lean_object* v_motive_437_, lean_object* v_t_438_, lean_object* v_h_439_, lean_object* v_D_440_){
_start:
{
uint8_t v_t_boxed_441_; lean_object* v_res_442_; 
v_t_boxed_441_ = lean_unbox(v_t_438_);
v_res_442_ = lp_cns_CNS_Operation_D_elim(v_motive_437_, v_t_boxed_441_, v_h_439_, v_D_440_);
lean_dec(v_D_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___redArg(lean_object* v_C_443_){
_start:
{
lean_inc(v_C_443_);
return v_C_443_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___redArg___boxed(lean_object* v_C_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = lp_cns_CNS_Operation_C_elim___redArg(v_C_444_);
lean_dec(v_C_444_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim(lean_object* v_motive_446_, uint8_t v_t_447_, lean_object* v_h_448_, lean_object* v_C_449_){
_start:
{
lean_inc(v_C_449_);
return v_C_449_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_C_elim___boxed(lean_object* v_motive_450_, lean_object* v_t_451_, lean_object* v_h_452_, lean_object* v_C_453_){
_start:
{
uint8_t v_t_boxed_454_; lean_object* v_res_455_; 
v_t_boxed_454_ = lean_unbox(v_t_451_);
v_res_455_ = lp_cns_CNS_Operation_C_elim(v_motive_450_, v_t_boxed_454_, v_h_452_, v_C_453_);
lean_dec(v_C_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___redArg(lean_object* v_R_456_){
_start:
{
lean_inc(v_R_456_);
return v_R_456_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___redArg___boxed(lean_object* v_R_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = lp_cns_CNS_Operation_R_elim___redArg(v_R_457_);
lean_dec(v_R_457_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim(lean_object* v_motive_459_, uint8_t v_t_460_, lean_object* v_h_461_, lean_object* v_R_462_){
_start:
{
lean_inc(v_R_462_);
return v_R_462_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_R_elim___boxed(lean_object* v_motive_463_, lean_object* v_t_464_, lean_object* v_h_465_, lean_object* v_R_466_){
_start:
{
uint8_t v_t_boxed_467_; lean_object* v_res_468_; 
v_t_boxed_467_ = lean_unbox(v_t_464_);
v_res_468_ = lp_cns_CNS_Operation_R_elim(v_motive_463_, v_t_boxed_467_, v_h_465_, v_R_466_);
lean_dec(v_R_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___redArg(lean_object* v_U_469_){
_start:
{
lean_inc(v_U_469_);
return v_U_469_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___redArg___boxed(lean_object* v_U_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = lp_cns_CNS_Operation_U_elim___redArg(v_U_470_);
lean_dec(v_U_470_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim(lean_object* v_motive_472_, uint8_t v_t_473_, lean_object* v_h_474_, lean_object* v_U_475_){
_start:
{
lean_inc(v_U_475_);
return v_U_475_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_U_elim___boxed(lean_object* v_motive_476_, lean_object* v_t_477_, lean_object* v_h_478_, lean_object* v_U_479_){
_start:
{
uint8_t v_t_boxed_480_; lean_object* v_res_481_; 
v_t_boxed_480_ = lean_unbox(v_t_477_);
v_res_481_ = lp_cns_CNS_Operation_U_elim(v_motive_476_, v_t_boxed_480_, v_h_478_, v_U_479_);
lean_dec(v_U_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___redArg(lean_object* v_K_482_){
_start:
{
lean_inc(v_K_482_);
return v_K_482_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___redArg___boxed(lean_object* v_K_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = lp_cns_CNS_Operation_K_elim___redArg(v_K_483_);
lean_dec(v_K_483_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim(lean_object* v_motive_485_, uint8_t v_t_486_, lean_object* v_h_487_, lean_object* v_K_488_){
_start:
{
lean_inc(v_K_488_);
return v_K_488_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Operation_K_elim___boxed(lean_object* v_motive_489_, lean_object* v_t_490_, lean_object* v_h_491_, lean_object* v_K_492_){
_start:
{
uint8_t v_t_boxed_493_; lean_object* v_res_494_; 
v_t_boxed_493_ = lean_unbox(v_t_490_);
v_res_494_ = lp_cns_CNS_Operation_K_elim(v_motive_489_, v_t_boxed_493_, v_h_491_, v_K_492_);
lean_dec(v_K_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorIdx(lean_object* v_x_495_){
_start:
{
switch(lean_obj_tag(v_x_495_))
{
case 0:
{
lean_object* v___x_496_; 
v___x_496_ = lean_unsigned_to_nat(0u);
return v___x_496_;
}
case 1:
{
lean_object* v___x_497_; 
v___x_497_ = lean_unsigned_to_nat(1u);
return v___x_497_;
}
case 2:
{
lean_object* v___x_498_; 
v___x_498_ = lean_unsigned_to_nat(2u);
return v___x_498_;
}
default: 
{
lean_object* v___x_499_; 
v___x_499_ = lean_unsigned_to_nat(3u);
return v___x_499_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorIdx___boxed(lean_object* v_x_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = lp_cns_CNS_Term_ctorIdx(v_x_500_);
lean_dec_ref(v_x_500_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim___redArg(lean_object* v_t_502_, lean_object* v_k_503_){
_start:
{
switch(lean_obj_tag(v_t_502_))
{
case 0:
{
uint8_t v_o_504_; uint8_t v_n_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_o_504_ = lean_ctor_get_uint8(v_t_502_, 0);
v_n_505_ = lean_ctor_get_uint8(v_t_502_, 1);
lean_dec_ref_known(v_t_502_, 0);
v___x_506_ = lean_box(v_o_504_);
v___x_507_ = lean_box(v_n_505_);
v___x_508_ = lean_apply_2(v_k_503_, v___x_506_, v___x_507_);
return v___x_508_;
}
case 3:
{
lean_object* v_l_509_; lean_object* v___x_510_; 
v_l_509_ = lean_ctor_get(v_t_502_, 0);
lean_inc(v_l_509_);
lean_dec_ref_known(v_t_502_, 1);
v___x_510_ = lean_apply_1(v_k_503_, v_l_509_);
return v___x_510_;
}
default: 
{
uint32_t v_symbol_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v_symbol_511_ = lean_ctor_get_uint32(v_t_502_, 0);
lean_dec_ref(v_t_502_);
v___x_512_ = lean_box_uint32(v_symbol_511_);
v___x_513_ = lean_apply_1(v_k_503_, v___x_512_);
return v___x_513_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim(lean_object* v_motive__1_514_, lean_object* v_ctorIdx_515_, lean_object* v_t_516_, lean_object* v_h_517_, lean_object* v_k_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_516_, v_k_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_ctorElim___boxed(lean_object* v_motive__1_520_, lean_object* v_ctorIdx_521_, lean_object* v_t_522_, lean_object* v_h_523_, lean_object* v_k_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = lp_cns_CNS_Term_ctorElim(v_motive__1_520_, v_ctorIdx_521_, v_t_522_, v_h_523_, v_k_524_);
lean_dec(v_ctorIdx_521_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_block_elim___redArg(lean_object* v_t_526_, lean_object* v_block_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_526_, v_block_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_block_elim(lean_object* v_motive__1_529_, lean_object* v_t_530_, lean_object* v_h_531_, lean_object* v_block_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_530_, v_block_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_V_elim___redArg(lean_object* v_t_534_, lean_object* v_V_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_534_, v_V_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_V_elim(lean_object* v_motive__1_537_, lean_object* v_t_538_, lean_object* v_h_539_, lean_object* v_V_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_538_, v_V_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_F_elim___redArg(lean_object* v_t_542_, lean_object* v_F_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_542_, v_F_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_F_elim(lean_object* v_motive__1_545_, lean_object* v_t_546_, lean_object* v_h_547_, lean_object* v_F_548_){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_546_, v_F_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_group_elim___redArg(lean_object* v_t_550_, lean_object* v_group_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_550_, v_group_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Term_group_elim(lean_object* v_motive__1_553_, lean_object* v_t_554_, lean_object* v_h_555_, lean_object* v_group_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = lp_cns_CNS_Term_ctorElim___redArg(v_t_554_, v_group_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___redArg(lean_object* v_inst_558_, lean_object* v_inst_559_, lean_object* v_inst_560_, lean_object* v_inst_561_, lean_object* v_inst_562_, lean_object* v_inst_563_, lean_object* v_inst_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_inst_567_, uint8_t v_x_568_){
_start:
{
switch(v_x_568_)
{
case 0:
{
lean_object* v___x_569_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
lean_dec(v_inst_558_);
v___x_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_569_, 0, v_inst_559_);
return v___x_569_;
}
case 1:
{
lean_object* v___x_570_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_570_, 0, v_inst_560_);
return v___x_570_;
}
case 2:
{
lean_object* v___x_571_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_560_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_571_, 0, v_inst_561_);
return v___x_571_;
}
case 3:
{
lean_object* v___x_572_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_572_, 0, v_inst_562_);
return v___x_572_;
}
case 4:
{
lean_object* v___x_573_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_573_, 0, v_inst_563_);
return v___x_573_;
}
case 5:
{
lean_object* v___x_574_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_574_, 0, v_inst_564_);
return v___x_574_;
}
case 6:
{
lean_object* v___x_575_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_575_, 0, v_inst_565_);
return v___x_575_;
}
case 7:
{
lean_object* v___x_576_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_576_, 0, v_inst_566_);
return v___x_576_;
}
case 8:
{
lean_object* v___x_577_; 
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_577_, 0, v_inst_567_);
return v___x_577_;
}
case 9:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
v___x_578_ = lean_apply_1(v_inst_558_, v_inst_559_);
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
default: 
{
lean_object* v___x_580_; 
lean_dec(v_inst_567_);
lean_dec(v_inst_566_);
lean_dec(v_inst_565_);
lean_dec(v_inst_564_);
lean_dec(v_inst_563_);
lean_dec(v_inst_562_);
lean_dec(v_inst_561_);
lean_dec(v_inst_560_);
lean_dec(v_inst_559_);
lean_dec(v_inst_558_);
v___x_580_ = lean_box(0);
return v___x_580_;
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___redArg___boxed(lean_object* v_inst_581_, lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_inst_585_, lean_object* v_inst_586_, lean_object* v_inst_587_, lean_object* v_inst_588_, lean_object* v_inst_589_, lean_object* v_inst_590_, lean_object* v_x_591_){
_start:
{
uint8_t v_x_137__boxed_592_; lean_object* v_res_593_; 
v_x_137__boxed_592_ = lean_unbox(v_x_591_);
v_res_593_ = lp_cns_CNS_Number_parse___redArg(v_inst_581_, v_inst_582_, v_inst_583_, v_inst_584_, v_inst_585_, v_inst_586_, v_inst_587_, v_inst_588_, v_inst_589_, v_inst_590_, v_x_137__boxed_592_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse(lean_object* v_00_u03b1_594_, lean_object* v_inst_595_, lean_object* v_inst_596_, lean_object* v_inst_597_, lean_object* v_inst_598_, lean_object* v_inst_599_, lean_object* v_inst_600_, lean_object* v_inst_601_, lean_object* v_inst_602_, lean_object* v_inst_603_, lean_object* v_inst_604_, uint8_t v_x_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = lp_cns_CNS_Number_parse___redArg(v_inst_595_, v_inst_596_, v_inst_597_, v_inst_598_, v_inst_599_, v_inst_600_, v_inst_601_, v_inst_602_, v_inst_603_, v_inst_604_, v_x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_Number_parse___boxed(lean_object* v_00_u03b1_607_, lean_object* v_inst_608_, lean_object* v_inst_609_, lean_object* v_inst_610_, lean_object* v_inst_611_, lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v_inst_614_, lean_object* v_inst_615_, lean_object* v_inst_616_, lean_object* v_inst_617_, lean_object* v_x_618_){
_start:
{
uint8_t v_x_194__boxed_619_; lean_object* v_res_620_; 
v_x_194__boxed_619_ = lean_unbox(v_x_618_);
v_res_620_ = lp_cns_CNS_Number_parse(v_00_u03b1_607_, v_inst_608_, v_inst_609_, v_inst_610_, v_inst_611_, v_inst_612_, v_inst_613_, v_inst_614_, v_inst_615_, v_inst_616_, v_inst_617_, v_x_194__boxed_619_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize(lean_object* v_x_621_){
_start:
{
if (lean_obj_tag(v_x_621_) == 0)
{
lean_object* v___x_622_; 
v___x_622_ = lean_unsigned_to_nat(0u);
return v___x_622_;
}
else
{
lean_object* v_head_623_; 
v_head_623_ = lean_ctor_get(v_x_621_, 0);
switch(lean_obj_tag(v_head_623_))
{
case 0:
{
lean_object* v_tail_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v_tail_624_ = lean_ctor_get(v_x_621_, 1);
v___x_625_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_tail_624_);
v___x_626_ = lean_unsigned_to_nat(1u);
v___x_627_ = lean_nat_add(v___x_625_, v___x_626_);
lean_dec(v___x_625_);
return v___x_627_;
}
case 3:
{
lean_object* v_tail_628_; lean_object* v_l_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v_tail_628_ = lean_ctor_get(v_x_621_, 1);
v_l_629_ = lean_ctor_get(v_head_623_, 0);
v___x_630_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_l_629_);
v___x_631_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_tail_628_);
v___x_632_ = lean_nat_add(v___x_630_, v___x_631_);
lean_dec(v___x_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_unsigned_to_nat(1u);
v___x_634_ = lean_nat_add(v___x_632_, v___x_633_);
lean_dec(v___x_632_);
return v___x_634_;
}
default: 
{
lean_object* v_tail_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v_tail_635_ = lean_ctor_get(v_x_621_, 1);
v___x_636_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_tail_635_);
v___x_637_ = lean_unsigned_to_nat(1u);
v___x_638_ = lean_nat_add(v___x_636_, v___x_637_);
lean_dec(v___x_636_);
return v___x_638_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize___boxed(lean_object* v_x_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = lp_cns___private_CNS_Basic_0__CNS_codesize(v_x_639_);
lean_dec(v_x_639_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize_match__1_splitter___redArg(lean_object* v_x_641_, lean_object* v_h__1_642_, lean_object* v_h__2_643_, lean_object* v_h__3_644_, lean_object* v_h__4_645_, lean_object* v_h__5_646_){
_start:
{
if (lean_obj_tag(v_x_641_) == 0)
{
lean_object* v___x_647_; lean_object* v___x_648_; 
lean_dec(v_h__5_646_);
lean_dec(v_h__4_645_);
lean_dec(v_h__3_644_);
lean_dec(v_h__2_643_);
v___x_647_ = lean_box(0);
v___x_648_ = lean_apply_1(v_h__1_642_, v___x_647_);
return v___x_648_;
}
else
{
lean_object* v_head_649_; 
lean_dec(v_h__1_642_);
v_head_649_ = lean_ctor_get(v_x_641_, 0);
lean_inc(v_head_649_);
switch(lean_obj_tag(v_head_649_))
{
case 0:
{
lean_object* v_tail_650_; uint8_t v_o_651_; uint8_t v_n_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
lean_dec(v_h__4_645_);
lean_dec(v_h__3_644_);
lean_dec(v_h__2_643_);
v_tail_650_ = lean_ctor_get(v_x_641_, 1);
lean_inc(v_tail_650_);
lean_dec_ref_known(v_x_641_, 2);
v_o_651_ = lean_ctor_get_uint8(v_head_649_, 0);
v_n_652_ = lean_ctor_get_uint8(v_head_649_, 1);
lean_dec_ref_known(v_head_649_, 0);
v___x_653_ = lean_box(v_o_651_);
v___x_654_ = lean_box(v_n_652_);
v___x_655_ = lean_apply_3(v_h__5_646_, v___x_653_, v___x_654_, v_tail_650_);
return v___x_655_;
}
case 1:
{
lean_object* v_tail_656_; uint32_t v_symbol_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
lean_dec(v_h__5_646_);
lean_dec(v_h__4_645_);
lean_dec(v_h__2_643_);
v_tail_656_ = lean_ctor_get(v_x_641_, 1);
lean_inc(v_tail_656_);
lean_dec_ref_known(v_x_641_, 2);
v_symbol_657_ = lean_ctor_get_uint32(v_head_649_, 0);
lean_dec_ref_known(v_head_649_, 0);
v___x_658_ = lean_box_uint32(v_symbol_657_);
v___x_659_ = lean_apply_2(v_h__3_644_, v___x_658_, v_tail_656_);
return v___x_659_;
}
case 2:
{
lean_object* v_tail_660_; uint32_t v_symbol_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
lean_dec(v_h__5_646_);
lean_dec(v_h__3_644_);
lean_dec(v_h__2_643_);
v_tail_660_ = lean_ctor_get(v_x_641_, 1);
lean_inc(v_tail_660_);
lean_dec_ref_known(v_x_641_, 2);
v_symbol_661_ = lean_ctor_get_uint32(v_head_649_, 0);
lean_dec_ref_known(v_head_649_, 0);
v___x_662_ = lean_box_uint32(v_symbol_661_);
v___x_663_ = lean_apply_2(v_h__4_645_, v___x_662_, v_tail_660_);
return v___x_663_;
}
default: 
{
lean_object* v_tail_664_; lean_object* v_l_665_; lean_object* v___x_666_; 
lean_dec(v_h__5_646_);
lean_dec(v_h__4_645_);
lean_dec(v_h__3_644_);
v_tail_664_ = lean_ctor_get(v_x_641_, 1);
lean_inc(v_tail_664_);
lean_dec_ref_known(v_x_641_, 2);
v_l_665_ = lean_ctor_get(v_head_649_, 0);
lean_inc(v_l_665_);
lean_dec_ref_known(v_head_649_, 1);
v___x_666_ = lean_apply_2(v_h__2_643_, v_l_665_, v_tail_664_);
return v___x_666_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cns___private_CNS_Basic_0__CNS_codesize_match__1_splitter(lean_object* v_motive_667_, lean_object* v_x_668_, lean_object* v_h__1_669_, lean_object* v_h__2_670_, lean_object* v_h__3_671_, lean_object* v_h__4_672_, lean_object* v_h__5_673_){
_start:
{
if (lean_obj_tag(v_x_668_) == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec(v_h__5_673_);
lean_dec(v_h__4_672_);
lean_dec(v_h__3_671_);
lean_dec(v_h__2_670_);
v___x_674_ = lean_box(0);
v___x_675_ = lean_apply_1(v_h__1_669_, v___x_674_);
return v___x_675_;
}
else
{
lean_object* v_head_676_; 
lean_dec(v_h__1_669_);
v_head_676_ = lean_ctor_get(v_x_668_, 0);
lean_inc(v_head_676_);
switch(lean_obj_tag(v_head_676_))
{
case 0:
{
lean_object* v_tail_677_; uint8_t v_o_678_; uint8_t v_n_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
lean_dec(v_h__4_672_);
lean_dec(v_h__3_671_);
lean_dec(v_h__2_670_);
v_tail_677_ = lean_ctor_get(v_x_668_, 1);
lean_inc(v_tail_677_);
lean_dec_ref_known(v_x_668_, 2);
v_o_678_ = lean_ctor_get_uint8(v_head_676_, 0);
v_n_679_ = lean_ctor_get_uint8(v_head_676_, 1);
lean_dec_ref_known(v_head_676_, 0);
v___x_680_ = lean_box(v_o_678_);
v___x_681_ = lean_box(v_n_679_);
v___x_682_ = lean_apply_3(v_h__5_673_, v___x_680_, v___x_681_, v_tail_677_);
return v___x_682_;
}
case 1:
{
lean_object* v_tail_683_; uint32_t v_symbol_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
lean_dec(v_h__5_673_);
lean_dec(v_h__4_672_);
lean_dec(v_h__2_670_);
v_tail_683_ = lean_ctor_get(v_x_668_, 1);
lean_inc(v_tail_683_);
lean_dec_ref_known(v_x_668_, 2);
v_symbol_684_ = lean_ctor_get_uint32(v_head_676_, 0);
lean_dec_ref_known(v_head_676_, 0);
v___x_685_ = lean_box_uint32(v_symbol_684_);
v___x_686_ = lean_apply_2(v_h__3_671_, v___x_685_, v_tail_683_);
return v___x_686_;
}
case 2:
{
lean_object* v_tail_687_; uint32_t v_symbol_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
lean_dec(v_h__5_673_);
lean_dec(v_h__3_671_);
lean_dec(v_h__2_670_);
v_tail_687_ = lean_ctor_get(v_x_668_, 1);
lean_inc(v_tail_687_);
lean_dec_ref_known(v_x_668_, 2);
v_symbol_688_ = lean_ctor_get_uint32(v_head_676_, 0);
lean_dec_ref_known(v_head_676_, 0);
v___x_689_ = lean_box_uint32(v_symbol_688_);
v___x_690_ = lean_apply_2(v_h__4_672_, v___x_689_, v_tail_687_);
return v___x_690_;
}
default: 
{
lean_object* v_tail_691_; lean_object* v_l_692_; lean_object* v___x_693_; 
lean_dec(v_h__5_673_);
lean_dec(v_h__4_672_);
lean_dec(v_h__3_671_);
v_tail_691_ = lean_ctor_get(v_x_668_, 1);
lean_inc(v_tail_691_);
lean_dec_ref_known(v_x_668_, 2);
v_l_692_ = lean_ctor_get(v_head_676_, 0);
lean_inc(v_l_692_);
lean_dec_ref_known(v_head_676_, 1);
v___x_693_ = lean_apply_2(v_h__2_670_, v_l_692_, v_tail_691_);
return v___x_693_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_assignments_694_ = _args[0];
lean_object* v_inst_695_ = _args[1];
lean_object* v_inst_696_ = _args[2];
lean_object* v_inst_697_ = _args[3];
lean_object* v_inst_698_ = _args[4];
lean_object* v_inst_699_ = _args[5];
lean_object* v_inst_700_ = _args[6];
lean_object* v_inst_701_ = _args[7];
lean_object* v_inst_702_ = _args[8];
lean_object* v_inst_703_ = _args[9];
lean_object* v_inst_704_ = _args[10];
lean_object* v_inst_705_ = _args[11];
lean_object* v_inst_706_ = _args[12];
lean_object* v_inst_707_ = _args[13];
lean_object* v_inst_708_ = _args[14];
lean_object* v_inst_709_ = _args[15];
lean_object* v_inst_710_ = _args[16];
lean_object* v_tail_711_ = _args[17];
lean_object* v_functions_712_ = _args[18];
lean_object* v_acc_713_ = _args[19];
lean_object* v_x_714_ = _args[20];
_start:
{
uint32_t v_x_boxed_715_; lean_object* v_res_716_; 
v_x_boxed_715_ = lean_unbox_uint32(v_x_714_);
lean_dec(v_x_714_);
v_res_716_ = lp_cns_CNS_parseAux___redArg___lam__0(v_assignments_694_, v_inst_695_, v_inst_696_, v_inst_697_, v_inst_698_, v_inst_699_, v_inst_700_, v_inst_701_, v_inst_702_, v_inst_703_, v_inst_704_, v_inst_705_, v_inst_706_, v_inst_707_, v_inst_708_, v_inst_709_, v_inst_710_, v_tail_711_, v_functions_712_, v_acc_713_, v_x_boxed_715_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg(lean_object* v_inst_717_, lean_object* v_inst_718_, lean_object* v_inst_719_, lean_object* v_inst_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_inst_724_, lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_inst_727_, lean_object* v_inst_728_, lean_object* v_inst_729_, lean_object* v_inst_730_, lean_object* v_inst_731_, lean_object* v_inst_732_, lean_object* v_c_733_, lean_object* v_acc_734_, lean_object* v_assignments_735_, lean_object* v_functions_736_){
_start:
{
if (lean_obj_tag(v_c_733_) == 0)
{
lean_object* v___x_737_; 
lean_dec_ref(v_functions_736_);
lean_dec_ref(v_assignments_735_);
lean_dec(v_inst_732_);
lean_dec(v_inst_731_);
lean_dec(v_inst_730_);
lean_dec(v_inst_729_);
lean_dec(v_inst_728_);
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
v___x_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_737_, 0, v_acc_734_);
return v___x_737_;
}
else
{
lean_object* v_head_738_; 
v_head_738_ = lean_ctor_get(v_c_733_, 0);
lean_inc(v_head_738_);
switch(lean_obj_tag(v_head_738_))
{
case 0:
{
lean_object* v_tail_739_; uint8_t v_o_740_; uint8_t v_n_741_; lean_object* v___x_742_; 
v_tail_739_ = lean_ctor_get(v_c_733_, 1);
lean_inc(v_tail_739_);
lean_dec_ref_known(v_c_733_, 2);
v_o_740_ = lean_ctor_get_uint8(v_head_738_, 0);
v_n_741_ = lean_ctor_get_uint8(v_head_738_, 1);
lean_dec_ref_known(v_head_738_, 0);
lean_inc(v_inst_731_);
lean_inc(v_inst_730_);
lean_inc(v_inst_729_);
lean_inc(v_inst_728_);
lean_inc(v_inst_727_);
lean_inc(v_inst_726_);
lean_inc(v_inst_725_);
lean_inc(v_inst_724_);
lean_inc(v_inst_723_);
lean_inc(v_inst_721_);
v___x_742_ = lp_cns_CNS_Number_parse___redArg(v_inst_721_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_n_741_);
if (lean_obj_tag(v___x_742_) == 0)
{
switch(v_o_740_)
{
case 0:
{
lean_object* v___x_743_; 
lean_inc(v_inst_717_);
v___x_743_ = lp_cns_CNS_parse2___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_inst_732_, v_tail_739_, v_assignments_735_, v_functions_736_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_dec(v_acc_734_);
lean_dec(v_inst_717_);
return v___x_743_;
}
else
{
lean_object* v_val_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_752_; 
v_val_744_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_752_ == 0)
{
v___x_746_ = v___x_743_;
v_isShared_747_ = v_isSharedCheck_752_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_val_744_);
lean_dec(v___x_743_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_752_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_748_ = lean_apply_2(v_inst_717_, v_acc_734_, v_val_744_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_748_);
v___x_750_ = v___x_746_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v___x_748_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
case 1:
{
lean_object* v___x_753_; 
lean_inc(v_inst_718_);
v___x_753_ = lp_cns_CNS_parse2___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_inst_732_, v_tail_739_, v_assignments_735_, v_functions_736_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_dec(v_acc_734_);
lean_dec(v_inst_718_);
return v___x_753_;
}
else
{
lean_object* v_val_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_762_; 
v_val_754_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_762_ == 0)
{
v___x_756_ = v___x_753_;
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_val_754_);
lean_dec(v___x_753_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_762_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; lean_object* v___x_760_; 
v___x_758_ = lean_apply_2(v_inst_718_, v_acc_734_, v_val_754_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_758_);
v___x_760_ = v___x_756_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_758_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
case 2:
{
lean_object* v___x_763_; 
lean_inc(v_inst_719_);
v___x_763_ = lp_cns_CNS_parse2___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_inst_732_, v_tail_739_, v_assignments_735_, v_functions_736_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_dec(v_acc_734_);
lean_dec(v_inst_719_);
return v___x_763_;
}
else
{
lean_object* v_val_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_772_; 
v_val_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_772_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_772_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_val_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_772_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v___x_770_; 
v___x_768_ = lean_apply_2(v_inst_719_, v_acc_734_, v_val_764_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_768_);
v___x_770_ = v___x_766_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_768_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
case 3:
{
lean_object* v___x_773_; 
lean_inc(v_inst_720_);
v___x_773_ = lp_cns_CNS_parse2___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_inst_732_, v_tail_739_, v_assignments_735_, v_functions_736_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_dec(v_acc_734_);
lean_dec(v_inst_720_);
return v___x_773_;
}
else
{
lean_object* v_val_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_782_; 
v_val_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_782_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_782_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_val_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_782_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_778_ = lean_apply_2(v_inst_720_, v_acc_734_, v_val_774_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_778_);
v___x_780_ = v___x_776_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
case 4:
{
lean_object* v___x_783_; 
lean_inc(v_inst_722_);
v___x_783_ = lp_cns_CNS_parse2___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_inst_732_, v_tail_739_, v_assignments_735_, v_functions_736_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_dec(v_acc_734_);
lean_dec(v_inst_722_);
return v___x_783_;
}
else
{
lean_object* v_val_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_792_; 
v_val_784_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_792_ == 0)
{
v___x_786_ = v___x_783_;
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_val_784_);
lean_dec(v___x_783_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_788_ = lean_apply_2(v_inst_722_, v_acc_734_, v_val_784_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v___x_788_);
v___x_790_ = v___x_786_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
case 5:
{
lean_object* v___x_793_; 
lean_inc(v_inst_723_);
lean_inc(v_inst_722_);
lean_inc(v_inst_720_);
v___x_793_ = lp_cns_CNS_parse2___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_inst_732_, v_tail_739_, v_assignments_735_, v_functions_736_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_dec(v_acc_734_);
lean_dec(v_inst_723_);
lean_dec(v_inst_722_);
lean_dec(v_inst_720_);
return v___x_793_;
}
else
{
lean_object* v_val_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_803_; 
v_val_794_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_803_ == 0)
{
v___x_796_ = v___x_793_;
v_isShared_797_ = v_isSharedCheck_803_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_val_794_);
lean_dec(v___x_793_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_803_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_801_; 
v___x_798_ = lean_apply_2(v_inst_720_, v_inst_723_, v_val_794_);
v___x_799_ = lean_apply_2(v_inst_722_, v_acc_734_, v___x_798_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v___x_799_);
v___x_801_ = v___x_796_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_799_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
default: 
{
lean_dec(v_tail_739_);
lean_dec_ref(v_functions_736_);
lean_dec_ref(v_assignments_735_);
lean_dec(v_acc_734_);
lean_dec(v_inst_732_);
lean_dec(v_inst_731_);
lean_dec(v_inst_730_);
lean_dec(v_inst_729_);
lean_dec(v_inst_728_);
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
return v___x_742_;
}
}
}
else
{
switch(v_o_740_)
{
case 0:
{
lean_object* v_val_804_; lean_object* v___x_805_; 
v_val_804_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_val_804_);
lean_dec_ref_known(v___x_742_, 1);
lean_inc(v_inst_717_);
v___x_805_ = lean_apply_2(v_inst_717_, v_acc_734_, v_val_804_);
v_c_733_ = v_tail_739_;
v_acc_734_ = v___x_805_;
goto _start;
}
case 1:
{
lean_object* v_val_807_; lean_object* v___x_808_; 
v_val_807_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_val_807_);
lean_dec_ref_known(v___x_742_, 1);
lean_inc(v_inst_718_);
v___x_808_ = lean_apply_2(v_inst_718_, v_acc_734_, v_val_807_);
v_c_733_ = v_tail_739_;
v_acc_734_ = v___x_808_;
goto _start;
}
case 2:
{
lean_object* v_val_810_; lean_object* v___x_811_; 
v_val_810_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_val_810_);
lean_dec_ref_known(v___x_742_, 1);
lean_inc(v_inst_719_);
v___x_811_ = lean_apply_2(v_inst_719_, v_acc_734_, v_val_810_);
v_c_733_ = v_tail_739_;
v_acc_734_ = v___x_811_;
goto _start;
}
case 3:
{
lean_object* v_val_813_; lean_object* v___x_814_; 
v_val_813_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_val_813_);
lean_dec_ref_known(v___x_742_, 1);
lean_inc(v_inst_720_);
v___x_814_ = lean_apply_2(v_inst_720_, v_acc_734_, v_val_813_);
v_c_733_ = v_tail_739_;
v_acc_734_ = v___x_814_;
goto _start;
}
case 4:
{
lean_object* v_val_816_; lean_object* v___x_817_; 
v_val_816_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_val_816_);
lean_dec_ref_known(v___x_742_, 1);
lean_inc(v_inst_722_);
v___x_817_ = lean_apply_2(v_inst_722_, v_acc_734_, v_val_816_);
v_c_733_ = v_tail_739_;
v_acc_734_ = v___x_817_;
goto _start;
}
case 5:
{
lean_object* v_val_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v_val_819_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_val_819_);
lean_dec_ref_known(v___x_742_, 1);
lean_inc(v_inst_720_);
lean_inc(v_inst_723_);
v___x_820_ = lean_apply_2(v_inst_720_, v_inst_723_, v_val_819_);
lean_inc(v_inst_722_);
v___x_821_ = lean_apply_2(v_inst_722_, v_acc_734_, v___x_820_);
v_c_733_ = v_tail_739_;
v_acc_734_ = v___x_821_;
goto _start;
}
default: 
{
lean_object* v___x_823_; 
lean_dec_ref_known(v___x_742_, 1);
lean_dec(v_tail_739_);
lean_dec_ref(v_functions_736_);
lean_dec_ref(v_assignments_735_);
lean_dec(v_acc_734_);
lean_dec(v_inst_732_);
lean_dec(v_inst_731_);
lean_dec(v_inst_730_);
lean_dec(v_inst_729_);
lean_dec(v_inst_728_);
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
v___x_823_ = lean_box(0);
return v___x_823_;
}
}
}
}
case 1:
{
lean_object* v_tail_824_; uint32_t v_symbol_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_tail_824_ = lean_ctor_get(v_c_733_, 1);
lean_inc(v_tail_824_);
lean_dec_ref_known(v_c_733_, 2);
v_symbol_825_ = lean_ctor_get_uint32(v_head_738_, 0);
lean_dec_ref_known(v_head_738_, 0);
v___x_826_ = lean_box_uint32(v_symbol_825_);
lean_inc_ref(v_assignments_735_);
v___x_827_ = lean_apply_1(v_assignments_735_, v___x_826_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_dec(v_tail_824_);
lean_dec_ref(v_functions_736_);
lean_dec_ref(v_assignments_735_);
lean_dec(v_acc_734_);
lean_dec(v_inst_732_);
lean_dec(v_inst_731_);
lean_dec(v_inst_730_);
lean_dec(v_inst_729_);
lean_dec(v_inst_728_);
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
return v___x_827_;
}
else
{
lean_object* v_val_828_; lean_object* v___x_829_; 
v_val_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_val_828_);
lean_dec_ref_known(v___x_827_, 1);
lean_inc(v_inst_719_);
v___x_829_ = lean_apply_2(v_inst_719_, v_acc_734_, v_val_828_);
v_c_733_ = v_tail_824_;
v_acc_734_ = v___x_829_;
goto _start;
}
}
case 2:
{
lean_object* v_tail_831_; uint32_t v_symbol_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_tail_831_ = lean_ctor_get(v_c_733_, 1);
lean_inc(v_tail_831_);
lean_dec_ref_known(v_c_733_, 2);
v_symbol_832_ = lean_ctor_get_uint32(v_head_738_, 0);
lean_dec_ref_known(v_head_738_, 0);
v___x_833_ = lean_box_uint32(v_symbol_832_);
lean_inc_ref(v_functions_736_);
v___x_834_ = lean_apply_1(v_functions_736_, v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v___x_835_; 
lean_dec(v_tail_831_);
lean_dec_ref(v_functions_736_);
lean_dec_ref(v_assignments_735_);
lean_dec(v_acc_734_);
lean_dec(v_inst_732_);
lean_dec(v_inst_731_);
lean_dec(v_inst_730_);
lean_dec(v_inst_729_);
lean_dec(v_inst_728_);
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
v___x_835_ = lean_box(0);
return v___x_835_;
}
else
{
lean_object* v_val_836_; lean_object* v___f_837_; lean_object* v___x_838_; 
v_val_836_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_val_836_);
lean_dec_ref_known(v___x_834_, 1);
lean_inc_ref(v_functions_736_);
lean_inc(v_inst_732_);
lean_inc(v_inst_731_);
lean_inc(v_inst_730_);
lean_inc(v_inst_729_);
lean_inc(v_inst_728_);
lean_inc(v_inst_727_);
lean_inc(v_inst_726_);
lean_inc(v_inst_725_);
lean_inc(v_inst_724_);
lean_inc(v_inst_723_);
lean_inc(v_inst_722_);
lean_inc(v_inst_721_);
lean_inc(v_inst_720_);
lean_inc(v_inst_719_);
lean_inc(v_inst_718_);
lean_inc(v_inst_717_);
v___f_837_ = lean_alloc_closure((void*)(lp_cns_CNS_parseAux___redArg___lam__0___boxed), 21, 20);
lean_closure_set(v___f_837_, 0, v_assignments_735_);
lean_closure_set(v___f_837_, 1, v_inst_717_);
lean_closure_set(v___f_837_, 2, v_inst_718_);
lean_closure_set(v___f_837_, 3, v_inst_719_);
lean_closure_set(v___f_837_, 4, v_inst_720_);
lean_closure_set(v___f_837_, 5, v_inst_721_);
lean_closure_set(v___f_837_, 6, v_inst_722_);
lean_closure_set(v___f_837_, 7, v_inst_723_);
lean_closure_set(v___f_837_, 8, v_inst_724_);
lean_closure_set(v___f_837_, 9, v_inst_725_);
lean_closure_set(v___f_837_, 10, v_inst_726_);
lean_closure_set(v___f_837_, 11, v_inst_727_);
lean_closure_set(v___f_837_, 12, v_inst_728_);
lean_closure_set(v___f_837_, 13, v_inst_729_);
lean_closure_set(v___f_837_, 14, v_inst_730_);
lean_closure_set(v___f_837_, 15, v_inst_731_);
lean_closure_set(v___f_837_, 16, v_inst_732_);
lean_closure_set(v___f_837_, 17, v_tail_831_);
lean_closure_set(v___f_837_, 18, v_functions_736_);
lean_closure_set(v___f_837_, 19, v_acc_734_);
v___x_838_ = lp_cns_CNS_parse2___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_inst_732_, v_val_836_, v___f_837_, v_functions_736_);
return v___x_838_;
}
}
default: 
{
lean_object* v_tail_839_; lean_object* v_l_840_; lean_object* v___x_841_; 
lean_dec(v_acc_734_);
v_tail_839_ = lean_ctor_get(v_c_733_, 1);
lean_inc(v_tail_839_);
lean_dec_ref_known(v_c_733_, 2);
v_l_840_ = lean_ctor_get(v_head_738_, 0);
lean_inc(v_l_840_);
lean_dec_ref_known(v_head_738_, 1);
lean_inc_ref(v_functions_736_);
lean_inc_ref(v_assignments_735_);
lean_inc(v_inst_732_);
lean_inc(v_inst_731_);
lean_inc(v_inst_730_);
lean_inc(v_inst_729_);
lean_inc(v_inst_728_);
lean_inc(v_inst_727_);
lean_inc(v_inst_726_);
lean_inc(v_inst_725_);
lean_inc(v_inst_724_);
lean_inc(v_inst_723_);
lean_inc(v_inst_722_);
lean_inc(v_inst_721_);
lean_inc(v_inst_720_);
lean_inc(v_inst_719_);
lean_inc(v_inst_718_);
lean_inc(v_inst_717_);
v___x_841_ = lp_cns_CNS_parse2___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_inst_730_, v_inst_731_, v_inst_732_, v_l_840_, v_assignments_735_, v_functions_736_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_dec(v_tail_839_);
lean_dec_ref(v_functions_736_);
lean_dec_ref(v_assignments_735_);
lean_dec(v_inst_732_);
lean_dec(v_inst_731_);
lean_dec(v_inst_730_);
lean_dec(v_inst_729_);
lean_dec(v_inst_728_);
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
return v___x_841_;
}
else
{
lean_object* v_val_842_; 
v_val_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_val_842_);
lean_dec_ref_known(v___x_841_, 1);
v_c_733_ = v_tail_839_;
v_acc_734_ = v_val_842_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___redArg(lean_object* v_inst_844_, lean_object* v_inst_845_, lean_object* v_inst_846_, lean_object* v_inst_847_, lean_object* v_inst_848_, lean_object* v_inst_849_, lean_object* v_inst_850_, lean_object* v_inst_851_, lean_object* v_inst_852_, lean_object* v_inst_853_, lean_object* v_inst_854_, lean_object* v_inst_855_, lean_object* v_inst_856_, lean_object* v_inst_857_, lean_object* v_inst_858_, lean_object* v_inst_859_, lean_object* v_c_860_, lean_object* v_assignments_861_, lean_object* v_functions_862_){
_start:
{
if (lean_obj_tag(v_c_860_) == 1)
{
lean_object* v_head_863_; 
v_head_863_ = lean_ctor_get(v_c_860_, 0);
switch(lean_obj_tag(v_head_863_))
{
case 1:
{
lean_object* v___x_864_; 
lean_inc(v_inst_850_);
v___x_864_ = lp_cns_CNS_parseAux___redArg(v_inst_844_, v_inst_845_, v_inst_846_, v_inst_847_, v_inst_848_, v_inst_849_, v_inst_850_, v_inst_851_, v_inst_852_, v_inst_853_, v_inst_854_, v_inst_855_, v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_c_860_, v_inst_850_, v_assignments_861_, v_functions_862_);
return v___x_864_;
}
case 0:
{
uint8_t v_o_865_; 
v_o_865_ = lean_ctor_get_uint8(v_head_863_, 0);
switch(v_o_865_)
{
case 2:
{
lean_object* v___x_866_; 
lean_inc(v_inst_850_);
v___x_866_ = lp_cns_CNS_parseAux___redArg(v_inst_844_, v_inst_845_, v_inst_846_, v_inst_847_, v_inst_848_, v_inst_849_, v_inst_850_, v_inst_851_, v_inst_852_, v_inst_853_, v_inst_854_, v_inst_855_, v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_c_860_, v_inst_850_, v_assignments_861_, v_functions_862_);
return v___x_866_;
}
case 3:
{
lean_object* v___x_867_; 
lean_inc(v_inst_850_);
v___x_867_ = lp_cns_CNS_parseAux___redArg(v_inst_844_, v_inst_845_, v_inst_846_, v_inst_847_, v_inst_848_, v_inst_849_, v_inst_850_, v_inst_851_, v_inst_852_, v_inst_853_, v_inst_854_, v_inst_855_, v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_c_860_, v_inst_850_, v_assignments_861_, v_functions_862_);
return v___x_867_;
}
default: 
{
lean_object* v___x_868_; 
lean_inc(v_inst_859_);
v___x_868_ = lp_cns_CNS_parseAux___redArg(v_inst_844_, v_inst_845_, v_inst_846_, v_inst_847_, v_inst_848_, v_inst_849_, v_inst_850_, v_inst_851_, v_inst_852_, v_inst_853_, v_inst_854_, v_inst_855_, v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_c_860_, v_inst_859_, v_assignments_861_, v_functions_862_);
return v___x_868_;
}
}
}
default: 
{
lean_object* v___x_869_; 
lean_inc(v_inst_859_);
v___x_869_ = lp_cns_CNS_parseAux___redArg(v_inst_844_, v_inst_845_, v_inst_846_, v_inst_847_, v_inst_848_, v_inst_849_, v_inst_850_, v_inst_851_, v_inst_852_, v_inst_853_, v_inst_854_, v_inst_855_, v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_c_860_, v_inst_859_, v_assignments_861_, v_functions_862_);
return v___x_869_;
}
}
}
else
{
lean_object* v___x_870_; 
lean_inc(v_inst_859_);
v___x_870_ = lp_cns_CNS_parseAux___redArg(v_inst_844_, v_inst_845_, v_inst_846_, v_inst_847_, v_inst_848_, v_inst_849_, v_inst_850_, v_inst_851_, v_inst_852_, v_inst_853_, v_inst_854_, v_inst_855_, v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_c_860_, v_inst_859_, v_assignments_861_, v_functions_862_);
return v___x_870_;
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___lam__0(lean_object* v_assignments_871_, lean_object* v_inst_872_, lean_object* v_inst_873_, lean_object* v_inst_874_, lean_object* v_inst_875_, lean_object* v_inst_876_, lean_object* v_inst_877_, lean_object* v_inst_878_, lean_object* v_inst_879_, lean_object* v_inst_880_, lean_object* v_inst_881_, lean_object* v_inst_882_, lean_object* v_inst_883_, lean_object* v_inst_884_, lean_object* v_inst_885_, lean_object* v_inst_886_, lean_object* v_inst_887_, lean_object* v_tail_888_, lean_object* v_functions_889_, lean_object* v_acc_890_, uint32_t v_x_891_){
_start:
{
uint32_t v___x_892_; uint8_t v___x_893_; 
v___x_892_ = 76;
v___x_893_ = lean_uint32_dec_eq(v_x_891_, v___x_892_);
if (v___x_893_ == 0)
{
uint32_t v___x_894_; uint8_t v___x_895_; 
lean_dec(v_acc_890_);
v___x_894_ = 82;
v___x_895_ = lean_uint32_dec_eq(v_x_891_, v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec_ref(v_functions_889_);
lean_dec(v_tail_888_);
lean_dec(v_inst_887_);
lean_dec(v_inst_886_);
lean_dec(v_inst_885_);
lean_dec(v_inst_884_);
lean_dec(v_inst_883_);
lean_dec(v_inst_882_);
lean_dec(v_inst_881_);
lean_dec(v_inst_880_);
lean_dec(v_inst_879_);
lean_dec(v_inst_878_);
lean_dec(v_inst_877_);
lean_dec(v_inst_876_);
lean_dec(v_inst_875_);
lean_dec(v_inst_874_);
lean_dec(v_inst_873_);
lean_dec(v_inst_872_);
v___x_896_ = lean_box_uint32(v_x_891_);
v___x_897_ = lean_apply_1(v_assignments_871_, v___x_896_);
return v___x_897_;
}
else
{
lean_object* v___x_898_; 
v___x_898_ = lp_cns_CNS_parse2___redArg(v_inst_872_, v_inst_873_, v_inst_874_, v_inst_875_, v_inst_876_, v_inst_877_, v_inst_878_, v_inst_879_, v_inst_880_, v_inst_881_, v_inst_882_, v_inst_883_, v_inst_884_, v_inst_885_, v_inst_886_, v_inst_887_, v_tail_888_, v_assignments_871_, v_functions_889_);
return v___x_898_;
}
}
else
{
lean_object* v___x_899_; 
lean_dec_ref(v_functions_889_);
lean_dec(v_tail_888_);
lean_dec(v_inst_887_);
lean_dec(v_inst_886_);
lean_dec(v_inst_885_);
lean_dec(v_inst_884_);
lean_dec(v_inst_883_);
lean_dec(v_inst_882_);
lean_dec(v_inst_881_);
lean_dec(v_inst_880_);
lean_dec(v_inst_879_);
lean_dec(v_inst_878_);
lean_dec(v_inst_877_);
lean_dec(v_inst_876_);
lean_dec(v_inst_875_);
lean_dec(v_inst_874_);
lean_dec(v_inst_873_);
lean_dec(v_inst_872_);
lean_dec_ref(v_assignments_871_);
v___x_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_899_, 0, v_acc_890_);
return v___x_899_;
}
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___redArg___boxed(lean_object** _args){
lean_object* v_inst_900_ = _args[0];
lean_object* v_inst_901_ = _args[1];
lean_object* v_inst_902_ = _args[2];
lean_object* v_inst_903_ = _args[3];
lean_object* v_inst_904_ = _args[4];
lean_object* v_inst_905_ = _args[5];
lean_object* v_inst_906_ = _args[6];
lean_object* v_inst_907_ = _args[7];
lean_object* v_inst_908_ = _args[8];
lean_object* v_inst_909_ = _args[9];
lean_object* v_inst_910_ = _args[10];
lean_object* v_inst_911_ = _args[11];
lean_object* v_inst_912_ = _args[12];
lean_object* v_inst_913_ = _args[13];
lean_object* v_inst_914_ = _args[14];
lean_object* v_inst_915_ = _args[15];
lean_object* v_c_916_ = _args[16];
lean_object* v_assignments_917_ = _args[17];
lean_object* v_functions_918_ = _args[18];
_start:
{
lean_object* v_res_919_; 
v_res_919_ = lp_cns_CNS_parse2___redArg(v_inst_900_, v_inst_901_, v_inst_902_, v_inst_903_, v_inst_904_, v_inst_905_, v_inst_906_, v_inst_907_, v_inst_908_, v_inst_909_, v_inst_910_, v_inst_911_, v_inst_912_, v_inst_913_, v_inst_914_, v_inst_915_, v_c_916_, v_assignments_917_, v_functions_918_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___redArg___boxed(lean_object** _args){
lean_object* v_inst_920_ = _args[0];
lean_object* v_inst_921_ = _args[1];
lean_object* v_inst_922_ = _args[2];
lean_object* v_inst_923_ = _args[3];
lean_object* v_inst_924_ = _args[4];
lean_object* v_inst_925_ = _args[5];
lean_object* v_inst_926_ = _args[6];
lean_object* v_inst_927_ = _args[7];
lean_object* v_inst_928_ = _args[8];
lean_object* v_inst_929_ = _args[9];
lean_object* v_inst_930_ = _args[10];
lean_object* v_inst_931_ = _args[11];
lean_object* v_inst_932_ = _args[12];
lean_object* v_inst_933_ = _args[13];
lean_object* v_inst_934_ = _args[14];
lean_object* v_inst_935_ = _args[15];
lean_object* v_c_936_ = _args[16];
lean_object* v_acc_937_ = _args[17];
lean_object* v_assignments_938_ = _args[18];
lean_object* v_functions_939_ = _args[19];
_start:
{
lean_object* v_res_940_; 
v_res_940_ = lp_cns_CNS_parseAux___redArg(v_inst_920_, v_inst_921_, v_inst_922_, v_inst_923_, v_inst_924_, v_inst_925_, v_inst_926_, v_inst_927_, v_inst_928_, v_inst_929_, v_inst_930_, v_inst_931_, v_inst_932_, v_inst_933_, v_inst_934_, v_inst_935_, v_c_936_, v_acc_937_, v_assignments_938_, v_functions_939_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux(lean_object* v_00_u03b1_941_, lean_object* v_inst_942_, lean_object* v_inst_943_, lean_object* v_inst_944_, lean_object* v_inst_945_, lean_object* v_inst_946_, lean_object* v_inst_947_, lean_object* v_inst_948_, lean_object* v_inst_949_, lean_object* v_inst_950_, lean_object* v_inst_951_, lean_object* v_inst_952_, lean_object* v_inst_953_, lean_object* v_inst_954_, lean_object* v_inst_955_, lean_object* v_inst_956_, lean_object* v_inst_957_, lean_object* v_c_958_, lean_object* v_acc_959_, lean_object* v_assignments_960_, lean_object* v_functions_961_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = lp_cns_CNS_parseAux___redArg(v_inst_942_, v_inst_943_, v_inst_944_, v_inst_945_, v_inst_946_, v_inst_947_, v_inst_948_, v_inst_949_, v_inst_950_, v_inst_951_, v_inst_952_, v_inst_953_, v_inst_954_, v_inst_955_, v_inst_956_, v_inst_957_, v_c_958_, v_acc_959_, v_assignments_960_, v_functions_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parseAux___boxed(lean_object** _args){
lean_object* v_00_u03b1_963_ = _args[0];
lean_object* v_inst_964_ = _args[1];
lean_object* v_inst_965_ = _args[2];
lean_object* v_inst_966_ = _args[3];
lean_object* v_inst_967_ = _args[4];
lean_object* v_inst_968_ = _args[5];
lean_object* v_inst_969_ = _args[6];
lean_object* v_inst_970_ = _args[7];
lean_object* v_inst_971_ = _args[8];
lean_object* v_inst_972_ = _args[9];
lean_object* v_inst_973_ = _args[10];
lean_object* v_inst_974_ = _args[11];
lean_object* v_inst_975_ = _args[12];
lean_object* v_inst_976_ = _args[13];
lean_object* v_inst_977_ = _args[14];
lean_object* v_inst_978_ = _args[15];
lean_object* v_inst_979_ = _args[16];
lean_object* v_c_980_ = _args[17];
lean_object* v_acc_981_ = _args[18];
lean_object* v_assignments_982_ = _args[19];
lean_object* v_functions_983_ = _args[20];
_start:
{
lean_object* v_res_984_; 
v_res_984_ = lp_cns_CNS_parseAux(v_00_u03b1_963_, v_inst_964_, v_inst_965_, v_inst_966_, v_inst_967_, v_inst_968_, v_inst_969_, v_inst_970_, v_inst_971_, v_inst_972_, v_inst_973_, v_inst_974_, v_inst_975_, v_inst_976_, v_inst_977_, v_inst_978_, v_inst_979_, v_c_980_, v_acc_981_, v_assignments_982_, v_functions_983_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse2(lean_object* v_00_u03b1_985_, lean_object* v_inst_986_, lean_object* v_inst_987_, lean_object* v_inst_988_, lean_object* v_inst_989_, lean_object* v_inst_990_, lean_object* v_inst_991_, lean_object* v_inst_992_, lean_object* v_inst_993_, lean_object* v_inst_994_, lean_object* v_inst_995_, lean_object* v_inst_996_, lean_object* v_inst_997_, lean_object* v_inst_998_, lean_object* v_inst_999_, lean_object* v_inst_1000_, lean_object* v_inst_1001_, lean_object* v_c_1002_, lean_object* v_assignments_1003_, lean_object* v_functions_1004_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = lp_cns_CNS_parse2___redArg(v_inst_986_, v_inst_987_, v_inst_988_, v_inst_989_, v_inst_990_, v_inst_991_, v_inst_992_, v_inst_993_, v_inst_994_, v_inst_995_, v_inst_996_, v_inst_997_, v_inst_998_, v_inst_999_, v_inst_1000_, v_inst_1001_, v_c_1002_, v_assignments_1003_, v_functions_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse2___boxed(lean_object** _args){
lean_object* v_00_u03b1_1006_ = _args[0];
lean_object* v_inst_1007_ = _args[1];
lean_object* v_inst_1008_ = _args[2];
lean_object* v_inst_1009_ = _args[3];
lean_object* v_inst_1010_ = _args[4];
lean_object* v_inst_1011_ = _args[5];
lean_object* v_inst_1012_ = _args[6];
lean_object* v_inst_1013_ = _args[7];
lean_object* v_inst_1014_ = _args[8];
lean_object* v_inst_1015_ = _args[9];
lean_object* v_inst_1016_ = _args[10];
lean_object* v_inst_1017_ = _args[11];
lean_object* v_inst_1018_ = _args[12];
lean_object* v_inst_1019_ = _args[13];
lean_object* v_inst_1020_ = _args[14];
lean_object* v_inst_1021_ = _args[15];
lean_object* v_inst_1022_ = _args[16];
lean_object* v_c_1023_ = _args[17];
lean_object* v_assignments_1024_ = _args[18];
lean_object* v_functions_1025_ = _args[19];
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = lp_cns_CNS_parse2(v_00_u03b1_1006_, v_inst_1007_, v_inst_1008_, v_inst_1009_, v_inst_1010_, v_inst_1011_, v_inst_1012_, v_inst_1013_, v_inst_1014_, v_inst_1015_, v_inst_1016_, v_inst_1017_, v_inst_1018_, v_inst_1019_, v_inst_1020_, v_inst_1021_, v_inst_1022_, v_c_1023_, v_assignments_1024_, v_functions_1025_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___lam__0(uint32_t v_x_1027_){
_start:
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_box(0);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg___lam__0___boxed(lean_object* v_x_1029_){
_start:
{
uint32_t v_x_41__boxed_1030_; lean_object* v_res_1031_; 
v_x_41__boxed_1030_ = lean_unbox_uint32(v_x_1029_);
lean_dec(v_x_1029_);
v_res_1031_ = lp_cns_CNS_parse___redArg___lam__0(v_x_41__boxed_1030_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___redArg(lean_object* v_inst_1033_, lean_object* v_inst_1034_, lean_object* v_inst_1035_, lean_object* v_inst_1036_, lean_object* v_inst_1037_, lean_object* v_inst_1038_, lean_object* v_inst_1039_, lean_object* v_inst_1040_, lean_object* v_inst_1041_, lean_object* v_inst_1042_, lean_object* v_inst_1043_, lean_object* v_inst_1044_, lean_object* v_inst_1045_, lean_object* v_inst_1046_, lean_object* v_inst_1047_, lean_object* v_inst_1048_, lean_object* v_c_1049_, lean_object* v_functions_1050_){
_start:
{
lean_object* v___f_1051_; lean_object* v___x_1052_; 
v___f_1051_ = ((lean_object*)(lp_cns_CNS_parse___redArg___closed__0));
v___x_1052_ = lp_cns_CNS_parse2___redArg(v_inst_1033_, v_inst_1034_, v_inst_1035_, v_inst_1036_, v_inst_1037_, v_inst_1038_, v_inst_1039_, v_inst_1040_, v_inst_1041_, v_inst_1042_, v_inst_1043_, v_inst_1044_, v_inst_1045_, v_inst_1046_, v_inst_1047_, v_inst_1048_, v_c_1049_, v___f_1051_, v_functions_1050_);
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
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = lp_cns_CNS_parse___redArg(v_inst_1053_, v_inst_1054_, v_inst_1055_, v_inst_1056_, v_inst_1057_, v_inst_1058_, v_inst_1059_, v_inst_1060_, v_inst_1061_, v_inst_1062_, v_inst_1063_, v_inst_1064_, v_inst_1065_, v_inst_1066_, v_inst_1067_, v_inst_1068_, v_c_1069_, v_functions_1070_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse(lean_object* v_00_u03b1_1072_, lean_object* v_inst_1073_, lean_object* v_inst_1074_, lean_object* v_inst_1075_, lean_object* v_inst_1076_, lean_object* v_inst_1077_, lean_object* v_inst_1078_, lean_object* v_inst_1079_, lean_object* v_inst_1080_, lean_object* v_inst_1081_, lean_object* v_inst_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_inst_1085_, lean_object* v_inst_1086_, lean_object* v_inst_1087_, lean_object* v_inst_1088_, lean_object* v_c_1089_, lean_object* v_functions_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = lp_cns_CNS_parse___redArg(v_inst_1073_, v_inst_1074_, v_inst_1075_, v_inst_1076_, v_inst_1077_, v_inst_1078_, v_inst_1079_, v_inst_1080_, v_inst_1081_, v_inst_1082_, v_inst_1083_, v_inst_1084_, v_inst_1085_, v_inst_1086_, v_inst_1087_, v_inst_1088_, v_c_1089_, v_functions_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* lp_cns_CNS_parse___boxed(lean_object** _args){
lean_object* v_00_u03b1_1092_ = _args[0];
lean_object* v_inst_1093_ = _args[1];
lean_object* v_inst_1094_ = _args[2];
lean_object* v_inst_1095_ = _args[3];
lean_object* v_inst_1096_ = _args[4];
lean_object* v_inst_1097_ = _args[5];
lean_object* v_inst_1098_ = _args[6];
lean_object* v_inst_1099_ = _args[7];
lean_object* v_inst_1100_ = _args[8];
lean_object* v_inst_1101_ = _args[9];
lean_object* v_inst_1102_ = _args[10];
lean_object* v_inst_1103_ = _args[11];
lean_object* v_inst_1104_ = _args[12];
lean_object* v_inst_1105_ = _args[13];
lean_object* v_inst_1106_ = _args[14];
lean_object* v_inst_1107_ = _args[15];
lean_object* v_inst_1108_ = _args[16];
lean_object* v_c_1109_ = _args[17];
lean_object* v_functions_1110_ = _args[18];
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = lp_cns_CNS_parse(v_00_u03b1_1092_, v_inst_1093_, v_inst_1094_, v_inst_1095_, v_inst_1096_, v_inst_1097_, v_inst_1098_, v_inst_1099_, v_inst_1100_, v_inst_1101_, v_inst_1102_, v_inst_1103_, v_inst_1104_, v_inst_1105_, v_inst_1106_, v_inst_1107_, v_inst_1108_, v_c_1109_, v_functions_1110_);
return v_res_1111_;
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
