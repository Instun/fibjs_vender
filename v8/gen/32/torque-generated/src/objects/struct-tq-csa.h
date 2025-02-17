#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_STRUCT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_STRUCT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
TNode<Struct> Cast_Struct_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=8&c=1
TNode<Tuple2> Cast_Tuple2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=13&c=1
TNode<ClassPositions> Cast_ClassPositions_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=18&c=1
TNode<AccessorPair> Cast_AccessorPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=3
TNode<Object> LoadAccessorPairGetter_0(compiler::CodeAssemblerState* state_, TNode<AccessorPair> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=3
void StoreAccessorPairGetter_0(compiler::CodeAssemblerState* state_, TNode<AccessorPair> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
TNode<Object> LoadAccessorPairSetter_0(compiler::CodeAssemblerState* state_, TNode<AccessorPair> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
void StoreAccessorPairSetter_0(compiler::CodeAssemblerState* state_, TNode<AccessorPair> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=3
TNode<Smi> LoadClassPositionsStart_0(compiler::CodeAssemblerState* state_, TNode<ClassPositions> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=3
void StoreClassPositionsStart_0(compiler::CodeAssemblerState* state_, TNode<ClassPositions> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
TNode<Smi> LoadClassPositionsEnd_0(compiler::CodeAssemblerState* state_, TNode<ClassPositions> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
void StoreClassPositionsEnd_0(compiler::CodeAssemblerState* state_, TNode<ClassPositions> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=3
TNode<Object> LoadTuple2Value1_0(compiler::CodeAssemblerState* state_, TNode<Tuple2> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=3
void StoreTuple2Value1_0(compiler::CodeAssemblerState* state_, TNode<Tuple2> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
TNode<Object> LoadTuple2Value2_0(compiler::CodeAssemblerState* state_, TNode<Tuple2> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
void StoreTuple2Value2_0(compiler::CodeAssemblerState* state_, TNode<Tuple2> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
TNode<Struct> DownCastForTorqueClass_Struct_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=8&c=1
TNode<Tuple2> DownCastForTorqueClass_Tuple2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=13&c=1
TNode<ClassPositions> DownCastForTorqueClass_ClassPositions_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=18&c=1
TNode<AccessorPair> DownCastForTorqueClass_AccessorPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_STRUCT_TQ_CSA_H_
