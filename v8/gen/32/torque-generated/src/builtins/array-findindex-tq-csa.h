#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_FINDINDEX_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_FINDINDEX_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-findindex.tq?l=90&c=1
TNode<Number> FastArrayFindIndex_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_0);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-findindex.tq?l=87&c=10
TNode<Smi> Convert_Smi_constexpr_IntegerLiteral_0(compiler::CodeAssemblerState* state_, IntegerLiteral p_i);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_FINDINDEX_TQ_CSA_H_
