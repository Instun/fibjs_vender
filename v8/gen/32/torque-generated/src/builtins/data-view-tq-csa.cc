#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-call-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-object-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-disposable-stack.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-iterator-helpers.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator-inl.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/objects/turboshaft-types.h"
#include "src/torque/runtime-support.h"
#include "src/wasm/value-type.h"
#include "src/wasm/wasm-linkage.h"
#include "src/codegen/code-stub-assembler-inl.h"
// Required Builtins:
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/builtins-bigint-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/bigint-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=9&c=1
const char* kBuiltinNameByteLength_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "get DataView.prototype.byteLength";}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=11&c=1
const char* kBuiltinNameByteOffset_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "get DataView.prototype.byteOffset";}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=14&c=1
TNode<String> MakeDataViewGetterNameString_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT8_ELEMENTS)))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  TNode<String> tmp0;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getUint8");
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT8_ELEMENTS)))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  TNode<String> tmp1;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp1 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getInt8");
    ca_.Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT16_ELEMENTS)))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  TNode<String> tmp2;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp2 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getUint16");
    ca_.Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT16_ELEMENTS)))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  TNode<String> tmp3;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp3 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getInt16");
    ca_.Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT32_ELEMENTS)))) {
      ca_.Goto(&block14);
    } else {
      ca_.Goto(&block15);
    }
  }

  TNode<String> tmp4;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp4 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getUint32");
    ca_.Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT32_ELEMENTS)))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  TNode<String> tmp5;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp5 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getInt32");
    ca_.Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT16_ELEMENTS)))) {
      ca_.Goto(&block20);
    } else {
      ca_.Goto(&block21);
    }
  }

  TNode<String> tmp6;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp6 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getFloat16");
    ca_.Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block23);
    } else {
      ca_.Goto(&block24);
    }
  }

  TNode<String> tmp7;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp7 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getFloat32");
    ca_.Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  TNode<String> tmp8;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp8 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getFloat64");
    ca_.Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  TNode<String> tmp9;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp9 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getBigInt64");
    ca_.Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block32);
    } else {
      ca_.Goto(&block33);
    }
  }

  TNode<String> tmp10;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp10 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.getBigUint64");
    ca_.Goto(&block1, tmp10);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    ca_.Goto(&block35, phi_bb1_0);
  }

  TNode<String> phi_bb35_0;
    ca_.Bind(&block35, &phi_bb35_0);
  return TNode<String>{phi_bb35_0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=42&c=1
TNode<String> MakeDataViewSetterNameString_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT8_ELEMENTS)))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  TNode<String> tmp0;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setUint8");
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT8_ELEMENTS)))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  TNode<String> tmp1;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp1 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setInt8");
    ca_.Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT16_ELEMENTS)))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  TNode<String> tmp2;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp2 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setUint16");
    ca_.Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT16_ELEMENTS)))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  TNode<String> tmp3;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp3 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setInt16");
    ca_.Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT32_ELEMENTS)))) {
      ca_.Goto(&block14);
    } else {
      ca_.Goto(&block15);
    }
  }

  TNode<String> tmp4;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp4 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setUint32");
    ca_.Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT32_ELEMENTS)))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  TNode<String> tmp5;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp5 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setInt32");
    ca_.Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT16_ELEMENTS)))) {
      ca_.Goto(&block20);
    } else {
      ca_.Goto(&block21);
    }
  }

  TNode<String> tmp6;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp6 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setFloat16");
    ca_.Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block23);
    } else {
      ca_.Goto(&block24);
    }
  }

  TNode<String> tmp7;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp7 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setFloat32");
    ca_.Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  TNode<String> tmp8;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp8 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setFloat64");
    ca_.Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  TNode<String> tmp9;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp9 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setBigInt64");
    ca_.Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block32);
    } else {
      ca_.Goto(&block33);
    }
  }

  TNode<String> tmp10;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp10 = FromConstexpr_String_constexpr_string_0(state_, "DataView.prototype.setBigUint64");
    ca_.Goto(&block1, tmp10);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    ca_.Goto(&block35, phi_bb1_0);
  }

  TNode<String> phi_bb35_0;
    ca_.Bind(&block35, &phi_bb35_0);
  return TNode<String>{phi_bb35_0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=70&c=1
TNode<BoolT> WasDetached_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_view) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSArrayBuffer> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp1 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{p_view, tmp0});
    tmp2 = IsDetachedBuffer_0(state_, TNode<JSArrayBuffer>{tmp1});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BoolT>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=74&c=1
TNode<JSDataViewOrRabGsabDataView> ValidateDataView_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDataViewOrRabGsabDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSDataView> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSDataView_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<JSRabGsabDataView> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSRabGsabDataView_1(state_, TNode<Context>{p_context}, TNode<Object>{ca_.UncheckedCast<Object>(p_o)}, &label3);
    ca_.Goto(&block8);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block9);
    }
  }

  TNode<JSDataView> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = UnsafeCast_JSDataView_0(state_, TNode<Context>{p_context}, TNode<Object>{p_o});
    ca_.Goto(&block1, tmp4);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{p_method}, TNode<Object>{p_o});
  }

  TNode<JSRabGsabDataView> tmp5;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp5 = UnsafeCast_JSRabGsabDataView_0(state_, TNode<Context>{p_context}, TNode<Object>{p_o});
    ca_.Goto(&block1, tmp5);
  }

  TNode<JSDataViewOrRabGsabDataView> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
  return TNode<JSDataViewOrRabGsabDataView>{phi_bb1_3};
}

TF_BUILTIN(DataViewPrototypeGetBuffer, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<JSDataViewOrRabGsabDataView> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<JSArrayBuffer> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, "get DataView.prototype.buffer");
    tmp1 = ValidateDataView_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<String>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp2});
    arguments.PopAndReturn(tmp3);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<JSDataViewOrRabGsabDataView> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, "get DataView.prototype.byteLength");
    tmp1 = ValidateDataView_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<String>{tmp0});
    tmp2 = IsVariableLengthJSArrayBufferView_0(state_, TNode<JSArrayBufferView>{tmp1});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp3;
  TNode<JSArrayBuffer> tmp4;
  TNode<UintPtrT> tmp5;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp4 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp3});
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = CodeStubAssembler(state_).LoadVariableLengthJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp1}, TNode<JSArrayBuffer>{tmp4}, &label6);
    ca_.Goto(&block6);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block7);
    }
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameByteLength_0(state_));
  }

  TNode<Number> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp5});
    arguments.PopAndReturn(tmp7);
  }

  TNode<BoolT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp8 = WasDetached_0(state_, TNode<JSArrayBufferView>{tmp1});
    ca_.Branch(tmp8, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameByteLength_0(state_));
  }

  TNode<UintPtrT> tmp9;
  TNode<Number> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp9 = CodeStubAssembler(state_).LoadJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp1});
    tmp10 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp9});
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<JSDataViewOrRabGsabDataView> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, "get DataView.prototype.byteOffset");
    tmp1 = ValidateDataView_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<String>{tmp0});
    compiler::CodeAssemblerLabel label2(&ca_);
    compiler::CodeAssemblerLabel label3(&ca_);
    CodeStubAssembler(state_).IsJSArrayBufferViewDetachedOrOutOfBounds(TNode<JSArrayBufferView>{tmp1}, &label2, &label3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block5);
    }
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameByteOffset_0(state_));
  }

  TNode<UintPtrT> tmp4;
  TNode<Number> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp4 = CodeStubAssembler(state_).LoadJSArrayBufferViewByteOffset(TNode<JSArrayBufferView>{tmp1});
    tmp5 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp4});
    arguments.PopAndReturn(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=148&c=1
TNode<Smi> LoadDataView8_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if ((p_signed)) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  TNode<RawPtrT> tmp0;
  TNode<Int32T> tmp1;
  TNode<Smi> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = DataViewBuiltinsAssembler(state_).LoadInt8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset});
    tmp2 = Convert_Smi_int32_0(state_, TNode<Int32T>{tmp1});
    ca_.Goto(&block1, tmp2);
  }

  TNode<RawPtrT> tmp3;
  TNode<Uint32T> tmp4;
  TNode<Smi> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp4 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{p_offset});
    tmp5 = Convert_Smi_uint32_0(state_, TNode<Uint32T>{tmp4});
    ca_.Goto(&block1, tmp5);
  }

  TNode<Smi> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Smi>{phi_bb1_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=157&c=1
TNode<Number> LoadDataView16_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    ca_.Branch(p_requestedLittleEndian, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<Int32T> tmp5;
  TNode<Int32T> tmp6;
  TNode<Int32T> tmp7;
  TNode<Int32T> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset});
    tmp2 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp1});
    tmp3 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp4 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp3});
    tmp5 = DataViewBuiltinsAssembler(state_).LoadInt8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp4});
    tmp6 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp7 = CodeStubAssembler(state_).Word32Shl(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp6});
    tmp8 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp7}, TNode<Int32T>{tmp2});
    ca_.Goto(&block4, tmp2, tmp5, tmp8);
  }

  TNode<Int32T> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<Uint32T> tmp12;
  TNode<Int32T> tmp13;
  TNode<Int32T> tmp14;
  TNode<Int32T> tmp15;
  TNode<Int32T> tmp16;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp9 = DataViewBuiltinsAssembler(state_).LoadInt8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset});
    tmp10 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp11 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp10});
    tmp12 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp11});
    tmp13 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp12});
    tmp14 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp15 = CodeStubAssembler(state_).Word32Shl(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp15}, TNode<Int32T>{tmp13});
    ca_.Goto(&block4, tmp9, tmp13, tmp16);
  }

  TNode<Int32T> phi_bb4_4;
  TNode<Int32T> phi_bb4_5;
  TNode<Int32T> phi_bb4_6;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4, &phi_bb4_5, &phi_bb4_6);
    if ((p_signed)) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  TNode<Smi> tmp17;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp17 = Convert_Smi_int32_0(state_, TNode<Int32T>{phi_bb4_6});
    ca_.Goto(&block1, tmp17);
  }

  TNode<Int32T> tmp18;
  TNode<Int32T> tmp19;
  TNode<Smi> tmp20;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp18 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffffull));
    tmp19 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{phi_bb4_6}, TNode<Int32T>{tmp18});
    tmp20 = Convert_Smi_int32_0(state_, TNode<Int32T>{tmp19});
    ca_.Goto(&block1, tmp20);
  }

  TNode<Number> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
  return TNode<Number>{phi_bb1_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=184&c=1
TNode<Number> LoadDataView32_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<Uint32T> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<Uint32T> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<Uint32T> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset});
    tmp2 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp2});
    tmp4 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp3});
    tmp5 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp6 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp5});
    tmp7 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp6});
    tmp8 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp9 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp8});
    tmp10 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp9});
    ca_.Branch(p_requestedLittleEndian, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp11;
  TNode<Uint32T> tmp12;
  TNode<Uint32T> tmp13;
  TNode<Uint32T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<Uint32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<Uint32T> tmp19;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp12 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp10}, TNode<Uint32T>{tmp11});
    tmp13 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp14 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp13});
    tmp15 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp12}, TNode<Uint32T>{tmp14});
    tmp16 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp17 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp16});
    tmp18 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp15}, TNode<Uint32T>{tmp17});
    tmp19 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp18}, TNode<Uint32T>{tmp1});
    ca_.Goto(&block4, tmp19);
  }

  TNode<Uint32T> tmp20;
  TNode<Uint32T> tmp21;
  TNode<Uint32T> tmp22;
  TNode<Uint32T> tmp23;
  TNode<Uint32T> tmp24;
  TNode<Uint32T> tmp25;
  TNode<Uint32T> tmp26;
  TNode<Uint32T> tmp27;
  TNode<Uint32T> tmp28;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp20 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp21 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp20});
    tmp22 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp23 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp22});
    tmp24 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp21}, TNode<Uint32T>{tmp23});
    tmp25 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp26 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp25});
    tmp27 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp24}, TNode<Uint32T>{tmp26});
    tmp28 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp27}, TNode<Uint32T>{tmp10});
    ca_.Goto(&block4, tmp28);
  }

  TNode<Uint32T> phi_bb4_8;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT32_ELEMENTS)))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  TNode<Int32T> tmp29;
  TNode<Number> tmp30;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp29 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{phi_bb4_8});
    tmp30 = Convert_Number_int32_0(state_, TNode<Int32T>{tmp29});
    ca_.Goto(&block1, tmp30);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT32_ELEMENTS)))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  TNode<Number> tmp31;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp31 = Convert_Number_uint32_0(state_, TNode<Uint32T>{phi_bb4_8});
    ca_.Goto(&block1, tmp31);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  TNode<Float32T> tmp32;
  TNode<Float64T> tmp33;
  TNode<Number> tmp34;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp32 = CodeStubAssembler(state_).BitcastInt32ToFloat32(TNode<Uint32T>{phi_bb4_8});
    tmp33 = Convert_float64_float32_0(state_, TNode<Float32T>{tmp32});
    tmp34 = Convert_Number_float64_0(state_, TNode<Float64T>{tmp33});
    ca_.Goto(&block1, tmp34);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block14, phi_bb1_3);
  }

  TNode<Number> phi_bb14_3;
    ca_.Bind(&block14, &phi_bb14_3);
  return TNode<Number>{phi_bb14_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=212&c=1
TNode<Number> LoadDataViewFloat16_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<Uint32T> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset});
    tmp2 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp2});
    tmp4 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp3});
    ca_.Branch(p_requestedLittleEndian, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<Uint32T> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp6 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp5});
    tmp7 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp6}, TNode<Uint32T>{tmp1});
    ca_.Goto(&block4, tmp7);
  }

  TNode<Uint32T> tmp8;
  TNode<Uint32T> tmp9;
  TNode<Uint32T> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp8 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp9 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp8});
    tmp10 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp9}, TNode<Uint32T>{tmp4});
    ca_.Goto(&block4, tmp10);
  }

  TNode<Uint32T> phi_bb4_6;
  TNode<Float16T> tmp11;
  TNode<Float64T> tmp12;
  TNode<Number> tmp13;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6);
    tmp11 = CodeStubAssembler(state_).BitcastUint32ToFloat16(TNode<Uint32T>{phi_bb4_6});
    tmp12 = Convert_float64_float16_0(state_, TNode<Float16T>{tmp11});
    tmp13 = Convert_Number_float64_0(state_, TNode<Float64T>{tmp12});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Number>{tmp13};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=230&c=1
TNode<Number> LoadDataViewFloat64_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<Uint32T> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<Uint32T> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<Uint32T> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<UintPtrT> tmp12;
  TNode<Uint32T> tmp13;
  TNode<UintPtrT> tmp14;
  TNode<UintPtrT> tmp15;
  TNode<Uint32T> tmp16;
  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<Uint32T> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<UintPtrT> tmp21;
  TNode<Uint32T> tmp22;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset});
    tmp2 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp2});
    tmp4 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp3});
    tmp5 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp6 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp5});
    tmp7 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp6});
    tmp8 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp9 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp8});
    tmp10 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp9});
    tmp11 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp12 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp11});
    tmp13 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp12});
    tmp14 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp15 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp14});
    tmp16 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp15});
    tmp17 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp18 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp17});
    tmp19 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp18});
    tmp20 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp21 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp20});
    tmp22 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp21});
    ca_.Branch(p_requestedLittleEndian, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp23;
  TNode<Uint32T> tmp24;
  TNode<Uint32T> tmp25;
  TNode<Uint32T> tmp26;
  TNode<Uint32T> tmp27;
  TNode<Uint32T> tmp28;
  TNode<Uint32T> tmp29;
  TNode<Uint32T> tmp30;
  TNode<Uint32T> tmp31;
  TNode<Uint32T> tmp32;
  TNode<Uint32T> tmp33;
  TNode<Uint32T> tmp34;
  TNode<Uint32T> tmp35;
  TNode<Uint32T> tmp36;
  TNode<Uint32T> tmp37;
  TNode<Uint32T> tmp38;
  TNode<Uint32T> tmp39;
  TNode<Uint32T> tmp40;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp23 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp24 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp10}, TNode<Uint32T>{tmp23});
    tmp25 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp26 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp25});
    tmp27 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp24}, TNode<Uint32T>{tmp26});
    tmp28 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp29 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp28});
    tmp30 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp27}, TNode<Uint32T>{tmp29});
    tmp31 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp30}, TNode<Uint32T>{tmp1});
    tmp32 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp33 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp22}, TNode<Uint32T>{tmp32});
    tmp34 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp35 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp19}, TNode<Uint32T>{tmp34});
    tmp36 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp33}, TNode<Uint32T>{tmp35});
    tmp37 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp38 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp16}, TNode<Uint32T>{tmp37});
    tmp39 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp38});
    tmp40 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp39}, TNode<Uint32T>{tmp13});
    ca_.Goto(&block4, tmp31, tmp40);
  }

  TNode<Uint32T> tmp41;
  TNode<Uint32T> tmp42;
  TNode<Uint32T> tmp43;
  TNode<Uint32T> tmp44;
  TNode<Uint32T> tmp45;
  TNode<Uint32T> tmp46;
  TNode<Uint32T> tmp47;
  TNode<Uint32T> tmp48;
  TNode<Uint32T> tmp49;
  TNode<Uint32T> tmp50;
  TNode<Uint32T> tmp51;
  TNode<Uint32T> tmp52;
  TNode<Uint32T> tmp53;
  TNode<Uint32T> tmp54;
  TNode<Uint32T> tmp55;
  TNode<Uint32T> tmp56;
  TNode<Uint32T> tmp57;
  TNode<Uint32T> tmp58;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp41 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp42 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp41});
    tmp43 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp44 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp43});
    tmp45 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp42}, TNode<Uint32T>{tmp44});
    tmp46 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp47 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp46});
    tmp48 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp45}, TNode<Uint32T>{tmp47});
    tmp49 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp48}, TNode<Uint32T>{tmp10});
    tmp50 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp51 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp13}, TNode<Uint32T>{tmp50});
    tmp52 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp53 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp16}, TNode<Uint32T>{tmp52});
    tmp54 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp51}, TNode<Uint32T>{tmp53});
    tmp55 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp56 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp19}, TNode<Uint32T>{tmp55});
    tmp57 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp54}, TNode<Uint32T>{tmp56});
    tmp58 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp57}, TNode<Uint32T>{tmp22});
    ca_.Goto(&block4, tmp58, tmp49);
  }

  TNode<Uint32T> phi_bb4_12;
  TNode<Uint32T> phi_bb4_13;
  TNode<Float64T> tmp59;
  TNode<Float64T> tmp60;
  TNode<Float64T> tmp61;
  TNode<Number> tmp62;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_12, &phi_bb4_13);
    tmp59 = FromConstexpr_float64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp60 = CodeStubAssembler(state_).Float64InsertLowWord32(TNode<Float64T>{tmp59}, TNode<Uint32T>{phi_bb4_12});
    tmp61 = CodeStubAssembler(state_).Float64InsertHighWord32(TNode<Float64T>{tmp60}, TNode<Uint32T>{phi_bb4_13});
    tmp62 = Convert_Number_float64_0(state_, TNode<Float64T>{tmp61});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<Number>{tmp62};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=261&c=1
int31_t kZeroDigitBigInt_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull)));}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=262&c=1
int31_t kOneDigitBigInt_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull)));}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=263&c=1
int31_t kTwoDigitBigInt_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull)));}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=266&c=1
TNode<BigInt> MakeBigIntOn64Bit_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{p_lowWord}, TNode<Uint32T>{tmp0});
    ca_.Branch(tmp1, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{p_highWord}, TNode<Uint32T>{tmp2});
    ca_.Goto(&block6, tmp3);
  }

  TNode<BoolT> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block6, tmp4);
  }

  TNode<BoolT> phi_bb6_4;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_4);
    ca_.Branch(phi_bb6_4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp5;
  TNode<BigInt> tmp6;
  TNode<BigInt> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, kZeroDigitBigInt_0(state_));
    tmp6 = CodeStubAssembler(state_).AllocateBigInt(TNode<IntPtrT>{tmp5});
    tmp7 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

  TNode<Uint32T> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp8 = kPositiveSign_0(state_);
    tmp9 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{p_highWord});
    tmp10 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp9});
    tmp11 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{p_lowWord});
    tmp12 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp11});
    tmp13 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x20ull));
    tmp14 = CodeStubAssembler(state_).WordShl(TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp13});
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp12});
    if ((p_signed)) {
      ca_.Goto(&block7);
    } else {
      ca_.Goto(&block8);
    }
  }

  TNode<IntPtrT> tmp16;
  TNode<BoolT> tmp17;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp16 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp17 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp15}, TNode<IntPtrT>{tmp16});
    ca_.Branch(tmp17, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{tmp8, tmp15});
  }

  TNode<Uint32T> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp18 = kNegativeSign_0(state_);
    tmp19 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp20 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp15});
    ca_.Goto(&block11, tmp18, tmp20);
  }

  TNode<Uint32T> phi_bb11_3;
  TNode<IntPtrT> phi_bb11_6;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_3, &phi_bb11_6);
    ca_.Goto(&block9, phi_bb11_3, phi_bb11_6);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block9, tmp8, tmp15);
  }

  TNode<Uint32T> phi_bb9_3;
  TNode<IntPtrT> phi_bb9_6;
  TNode<IntPtrT> tmp21;
  TNode<BigInt> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<BigInt> tmp25;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_3, &phi_bb9_6);
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, kOneDigitBigInt_0(state_));
    tmp22 = AllocateEmptyBigInt_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{phi_bb9_3}, TNode<IntPtrT>{tmp21});
    tmp23 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{phi_bb9_6});
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreBigIntDigit(TNode<BigInt>{tmp22}, TNode<IntPtrT>{tmp24}, TNode<UintPtrT>{tmp23});
    tmp25 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp22});
    ca_.Goto(&block1, tmp25);
  }

  TNode<BigInt> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block12, phi_bb1_3);
  }

  TNode<BigInt> phi_bb12_3;
    ca_.Bind(&block12, &phi_bb12_3);
  return TNode<BigInt>{phi_bb12_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=295&c=1
TNode<BigInt> MakeBigIntOn32Bit_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Uint32T, Int32T, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Uint32T, Int32T, Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Uint32T, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Uint32T, Int32T, Int32T> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Uint32T, Int32T, Int32T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Uint32T, Int32T, Int32T, BigInt> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Uint32T, Int32T, Int32T> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Uint32T, Int32T, Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{p_lowWord}, TNode<Uint32T>{tmp0});
    ca_.Branch(tmp1, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{p_highWord}, TNode<Uint32T>{tmp2});
    ca_.Goto(&block6, tmp3);
  }

  TNode<BoolT> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block6, tmp4);
  }

  TNode<BoolT> phi_bb6_4;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_4);
    ca_.Branch(phi_bb6_4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp5;
  TNode<BigInt> tmp6;
  TNode<BigInt> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, kZeroDigitBigInt_0(state_));
    tmp6 = CodeStubAssembler(state_).AllocateBigInt(TNode<IntPtrT>{tmp5});
    tmp7 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

  TNode<BoolT> tmp8;
  TNode<Uint32T> tmp9;
  TNode<Int32T> tmp10;
  TNode<Int32T> tmp11;
  TNode<Uint32T> tmp12;
  TNode<BoolT> tmp13;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp9 = kPositiveSign_0(state_);
    tmp10 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{p_lowWord});
    tmp11 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{p_highWord});
    tmp12 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp13 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{p_highWord}, TNode<Uint32T>{tmp12});
    ca_.Branch(tmp13, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{tmp8, tmp9, tmp10, tmp11});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    if ((p_signed)) {
      ca_.Goto(&block9);
    } else {
      ca_.Goto(&block10);
    }
  }

  TNode<Int32T> tmp14;
  TNode<BoolT> tmp15;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp14 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = CodeStubAssembler(state_).Int32LessThan(TNode<Int32T>{tmp11}, TNode<Int32T>{tmp14});
    ca_.Branch(tmp15, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp16;
  TNode<Int32T> tmp17;
  TNode<Int32T> tmp18;
  TNode<Int32T> tmp19;
  TNode<BoolT> tmp20;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp16 = kNegativeSign_0(state_);
    tmp17 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp18 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp17}, TNode<Int32T>{tmp11});
    tmp19 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp20 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp10}, TNode<Int32T>{tmp19});
    ca_.Branch(tmp20, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{tmp18});
  }

  TNode<Int32T> tmp21;
  TNode<Int32T> tmp22;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp21 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp22 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp18}, TNode<Int32T>{tmp21});
    ca_.Goto(&block16, tmp22);
  }

  TNode<Int32T> phi_bb16_6;
  TNode<Int32T> tmp23;
  TNode<Int32T> tmp24;
  TNode<Int32T> tmp25;
  TNode<BoolT> tmp26;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_6);
    tmp23 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp24 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp23}, TNode<Int32T>{tmp10});
    tmp25 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp26 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{phi_bb16_6}, TNode<Int32T>{tmp25});
    ca_.Branch(tmp26, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{tmp8});
  }

  TNode<BoolT> tmp27;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp27 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block18, tmp27);
  }

  TNode<BoolT> phi_bb18_3;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_3);
    ca_.Goto(&block14, phi_bb18_3, tmp16, tmp24, phi_bb16_6);
  }

  TNode<BoolT> tmp28;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp28 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block14, tmp28, tmp9, tmp10, tmp11);
  }

  TNode<BoolT> phi_bb14_3;
  TNode<Uint32T> phi_bb14_4;
  TNode<Int32T> phi_bb14_5;
  TNode<Int32T> phi_bb14_6;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_3, &phi_bb14_4, &phi_bb14_5, &phi_bb14_6);
    ca_.Goto(&block11, phi_bb14_3, phi_bb14_4, phi_bb14_5, phi_bb14_6);
  }

  TNode<BoolT> tmp29;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block11, tmp29, tmp9, tmp10, tmp11);
  }

  TNode<BoolT> phi_bb11_3;
  TNode<Uint32T> phi_bb11_4;
  TNode<Int32T> phi_bb11_5;
  TNode<Int32T> phi_bb11_6;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_3, &phi_bb11_4, &phi_bb11_5, &phi_bb11_6);
    ca_.Goto(&block8, phi_bb11_3, phi_bb11_4, phi_bb11_5, phi_bb11_6);
  }

  TNode<BoolT> phi_bb8_3;
  TNode<Uint32T> phi_bb8_4;
  TNode<Int32T> phi_bb8_5;
  TNode<Int32T> phi_bb8_6;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_3, &phi_bb8_4, &phi_bb8_5, &phi_bb8_6);
    ca_.Branch(phi_bb8_3, &block19, std::vector<compiler::Node*>{phi_bb8_3, phi_bb8_4, phi_bb8_5, phi_bb8_6}, &block20, std::vector<compiler::Node*>{phi_bb8_3, phi_bb8_4, phi_bb8_5, phi_bb8_6});
  }

  TNode<BoolT> phi_bb19_3;
  TNode<Uint32T> phi_bb19_4;
  TNode<Int32T> phi_bb19_5;
  TNode<Int32T> phi_bb19_6;
  TNode<IntPtrT> tmp30;
  TNode<BigInt> tmp31;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_3, &phi_bb19_4, &phi_bb19_5, &phi_bb19_6);
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, kTwoDigitBigInt_0(state_));
    tmp31 = AllocateEmptyBigInt_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{phi_bb19_4}, TNode<IntPtrT>{tmp30});
    ca_.Goto(&block21, phi_bb19_3, phi_bb19_4, phi_bb19_5, phi_bb19_6, tmp31);
  }

  TNode<BoolT> phi_bb20_3;
  TNode<Uint32T> phi_bb20_4;
  TNode<Int32T> phi_bb20_5;
  TNode<Int32T> phi_bb20_6;
  TNode<IntPtrT> tmp32;
  TNode<BigInt> tmp33;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_3, &phi_bb20_4, &phi_bb20_5, &phi_bb20_6);
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, kOneDigitBigInt_0(state_));
    tmp33 = AllocateEmptyBigInt_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{phi_bb20_4}, TNode<IntPtrT>{tmp32});
    ca_.Goto(&block21, phi_bb20_3, phi_bb20_4, phi_bb20_5, phi_bb20_6, tmp33);
  }

  TNode<BoolT> phi_bb21_3;
  TNode<Uint32T> phi_bb21_4;
  TNode<Int32T> phi_bb21_5;
  TNode<Int32T> phi_bb21_6;
  TNode<BigInt> phi_bb21_7;
  TNode<IntPtrT> tmp34;
  TNode<UintPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_3, &phi_bb21_4, &phi_bb21_5, &phi_bb21_6, &phi_bb21_7);
    tmp34 = Convert_intptr_int32_0(state_, TNode<Int32T>{phi_bb21_5});
    tmp35 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp34});
    tmp36 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreBigIntDigit(TNode<BigInt>{phi_bb21_7}, TNode<IntPtrT>{tmp36}, TNode<UintPtrT>{tmp35});
    ca_.Branch(phi_bb21_3, &block22, std::vector<compiler::Node*>{phi_bb21_3, phi_bb21_4, phi_bb21_5, phi_bb21_6}, &block23, std::vector<compiler::Node*>{phi_bb21_3, phi_bb21_4, phi_bb21_5, phi_bb21_6});
  }

  TNode<BoolT> phi_bb22_3;
  TNode<Uint32T> phi_bb22_4;
  TNode<Int32T> phi_bb22_5;
  TNode<Int32T> phi_bb22_6;
  TNode<IntPtrT> tmp37;
  TNode<UintPtrT> tmp38;
  TNode<IntPtrT> tmp39;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_3, &phi_bb22_4, &phi_bb22_5, &phi_bb22_6);
    tmp37 = Convert_intptr_int32_0(state_, TNode<Int32T>{phi_bb22_6});
    tmp38 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp37});
    tmp39 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).StoreBigIntDigit(TNode<BigInt>{phi_bb21_7}, TNode<IntPtrT>{tmp39}, TNode<UintPtrT>{tmp38});
    ca_.Goto(&block23, phi_bb22_3, phi_bb22_4, phi_bb22_5, phi_bb22_6);
  }

  TNode<BoolT> phi_bb23_3;
  TNode<Uint32T> phi_bb23_4;
  TNode<Int32T> phi_bb23_5;
  TNode<Int32T> phi_bb23_6;
  TNode<BigInt> tmp40;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_3, &phi_bb23_4, &phi_bb23_5, &phi_bb23_6);
    tmp40 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{phi_bb21_7});
    ca_.Goto(&block1, tmp40);
  }

  TNode<BigInt> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block24, phi_bb1_3);
  }

  TNode<BigInt> phi_bb24_3;
    ca_.Bind(&block24, &phi_bb24_3);
  return TNode<BigInt>{phi_bb24_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=363&c=1
TNode<BigInt> MakeBigInt_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  TNode<BigInt> tmp0;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp0 = MakeBigIntOn64Bit_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{p_lowWord}, TNode<Uint32T>{p_highWord}, p_signed);
    ca_.Goto(&block1, tmp0);
  }

  TNode<BigInt> tmp1;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp1 = MakeBigIntOn32Bit_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{p_lowWord}, TNode<Uint32T>{p_highWord}, p_signed);
    ca_.Goto(&block1, tmp1);
  }

  TNode<BigInt> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<BigInt>{phi_bb1_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=375&c=1
TNode<BigInt> LoadDataViewBigInt_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<Uint32T> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<Uint32T> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<Uint32T> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<UintPtrT> tmp12;
  TNode<Uint32T> tmp13;
  TNode<UintPtrT> tmp14;
  TNode<UintPtrT> tmp15;
  TNode<Uint32T> tmp16;
  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<Uint32T> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<UintPtrT> tmp21;
  TNode<Uint32T> tmp22;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset});
    tmp2 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp2});
    tmp4 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp3});
    tmp5 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp6 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp5});
    tmp7 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp6});
    tmp8 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp9 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp8});
    tmp10 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp9});
    tmp11 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp12 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp11});
    tmp13 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp12});
    tmp14 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp15 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp14});
    tmp16 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp15});
    tmp17 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp18 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp17});
    tmp19 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp18});
    tmp20 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp21 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp20});
    tmp22 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp21});
    ca_.Branch(p_requestedLittleEndian, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp23;
  TNode<Uint32T> tmp24;
  TNode<Uint32T> tmp25;
  TNode<Uint32T> tmp26;
  TNode<Uint32T> tmp27;
  TNode<Uint32T> tmp28;
  TNode<Uint32T> tmp29;
  TNode<Uint32T> tmp30;
  TNode<Uint32T> tmp31;
  TNode<Uint32T> tmp32;
  TNode<Uint32T> tmp33;
  TNode<Uint32T> tmp34;
  TNode<Uint32T> tmp35;
  TNode<Uint32T> tmp36;
  TNode<Uint32T> tmp37;
  TNode<Uint32T> tmp38;
  TNode<Uint32T> tmp39;
  TNode<Uint32T> tmp40;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp23 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp24 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp10}, TNode<Uint32T>{tmp23});
    tmp25 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp26 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp25});
    tmp27 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp24}, TNode<Uint32T>{tmp26});
    tmp28 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp29 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp28});
    tmp30 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp27}, TNode<Uint32T>{tmp29});
    tmp31 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp30}, TNode<Uint32T>{tmp1});
    tmp32 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp33 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp22}, TNode<Uint32T>{tmp32});
    tmp34 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp35 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp19}, TNode<Uint32T>{tmp34});
    tmp36 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp33}, TNode<Uint32T>{tmp35});
    tmp37 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp38 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp16}, TNode<Uint32T>{tmp37});
    tmp39 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp38});
    tmp40 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp39}, TNode<Uint32T>{tmp13});
    ca_.Goto(&block4, tmp31, tmp40);
  }

  TNode<Uint32T> tmp41;
  TNode<Uint32T> tmp42;
  TNode<Uint32T> tmp43;
  TNode<Uint32T> tmp44;
  TNode<Uint32T> tmp45;
  TNode<Uint32T> tmp46;
  TNode<Uint32T> tmp47;
  TNode<Uint32T> tmp48;
  TNode<Uint32T> tmp49;
  TNode<Uint32T> tmp50;
  TNode<Uint32T> tmp51;
  TNode<Uint32T> tmp52;
  TNode<Uint32T> tmp53;
  TNode<Uint32T> tmp54;
  TNode<Uint32T> tmp55;
  TNode<Uint32T> tmp56;
  TNode<Uint32T> tmp57;
  TNode<Uint32T> tmp58;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp41 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp42 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp41});
    tmp43 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp44 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp43});
    tmp45 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp42}, TNode<Uint32T>{tmp44});
    tmp46 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp47 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp46});
    tmp48 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp45}, TNode<Uint32T>{tmp47});
    tmp49 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp48}, TNode<Uint32T>{tmp10});
    tmp50 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp51 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp13}, TNode<Uint32T>{tmp50});
    tmp52 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp53 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp16}, TNode<Uint32T>{tmp52});
    tmp54 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp51}, TNode<Uint32T>{tmp53});
    tmp55 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp56 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp19}, TNode<Uint32T>{tmp55});
    tmp57 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp54}, TNode<Uint32T>{tmp56});
    tmp58 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp57}, TNode<Uint32T>{tmp22});
    ca_.Goto(&block4, tmp58, tmp49);
  }

  TNode<Uint32T> phi_bb4_13;
  TNode<Uint32T> phi_bb4_14;
  TNode<BigInt> tmp59;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_13, &phi_bb4_14);
    tmp59 = MakeBigInt_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{phi_bb4_13}, TNode<Uint32T>{phi_bb4_14}, p_signed);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<BigInt>{tmp59};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=407&c=1
TNode<Numeric> DataViewGet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_requestIndex, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Numeric> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Numeric> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<JSDataViewOrRabGsabDataView> tmp1;
  TNode<UintPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = MakeDataViewGetterNameString_0(state_, p_kind);
    tmp1 = ValidateDataView_0(state_, TNode<Context>{p_context}, TNode<Object>{p_receiver}, TNode<String>{tmp0});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = ToIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_requestIndex}, &label3);
    ca_.Goto(&block4);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block3);
  }

  TNode<BoolT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<JSArrayBuffer> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = ToBoolean_0(state_, TNode<Object>{p_requestedLittleEndian});
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp6 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp5});
    compiler::CodeAssemblerLabel label7(&ca_);
    compiler::CodeAssemblerLabel label8(&ca_);
    CodeStubAssembler(state_).IsJSArrayBufferViewDetachedOrOutOfBounds(TNode<JSArrayBufferView>{tmp1}, &label7, &label8);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block10);
    }
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block11);
    }
  }

  TNode<String> tmp9;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp9 = MakeDataViewGetterNameString_0(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kDetachedOperation, TNode<Object>{tmp9});
  }

  TNode<UintPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Uint32T> tmp12;
  TNode<BoolT> tmp13;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp10 = CodeStubAssembler(state_).LoadJSArrayBufferViewByteOffset(TNode<JSArrayBufferView>{tmp1});
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp12 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp1, tmp11});
    tmp13 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 0, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp12)));
    ca_.Branch(tmp13, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp14;
  TNode<JSArrayBuffer> tmp15;
  TNode<UintPtrT> tmp16;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp15 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp14});
    compiler::CodeAssemblerLabel label17(&ca_);
    tmp16 = CodeStubAssembler(state_).LoadVariableLengthJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp1}, TNode<JSArrayBuffer>{tmp15}, &label17);
    ca_.Goto(&block17);
    if (label17.is_used()) {
      ca_.Bind(&label17);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block14, tmp16);
  }

  TNode<UintPtrT> tmp18;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp18 = CodeStubAssembler(state_).LoadJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp1});
    ca_.Goto(&block14, tmp18);
  }

  TNode<UintPtrT> phi_bb14_9;
  TNode<UintPtrT> tmp19;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_9);
    tmp19 = FromConstexpr_uintptr_constexpr_int31_0(state_, (DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind)));
    compiler::CodeAssemblerLabel label20(&ca_);
    CheckIntegerIndexAdditionOverflow_0(state_, TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{phi_bb14_9}, &label20);
    ca_.Goto(&block19);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block3);
  }

  TNode<UintPtrT> tmp21;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp21 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp10});
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT8_ELEMENTS)))) {
      ca_.Goto(&block21);
    } else {
      ca_.Goto(&block22);
    }
  }

  TNode<Smi> tmp22;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp22 = LoadDataView8_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, false);
    ca_.Goto(&block1, tmp22);
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT8_ELEMENTS)))) {
      ca_.Goto(&block24);
    } else {
      ca_.Goto(&block25);
    }
  }

  TNode<Smi> tmp23;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp23 = LoadDataView8_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, true);
    ca_.Goto(&block1, tmp23);
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT16_ELEMENTS)))) {
      ca_.Goto(&block27);
    } else {
      ca_.Goto(&block28);
    }
  }

  TNode<Number> tmp24;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp24 = LoadDataView16_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4}, false);
    ca_.Goto(&block1, tmp24);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT16_ELEMENTS)))) {
      ca_.Goto(&block30);
    } else {
      ca_.Goto(&block31);
    }
  }

  TNode<Number> tmp25;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp25 = LoadDataView16_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4}, true);
    ca_.Goto(&block1, tmp25);
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT32_ELEMENTS)))) {
      ca_.Goto(&block33);
    } else {
      ca_.Goto(&block34);
    }
  }

  TNode<Number> tmp26;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp26 = LoadDataView32_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4}, p_kind);
    ca_.Goto(&block1, tmp26);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT32_ELEMENTS)))) {
      ca_.Goto(&block36);
    } else {
      ca_.Goto(&block37);
    }
  }

  TNode<Number> tmp27;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    tmp27 = LoadDataView32_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4}, p_kind);
    ca_.Goto(&block1, tmp27);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT16_ELEMENTS)))) {
      ca_.Goto(&block39);
    } else {
      ca_.Goto(&block40);
    }
  }

  TNode<Number> tmp28;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp28 = LoadDataViewFloat16_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4});
    ca_.Goto(&block1, tmp28);
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block42);
    } else {
      ca_.Goto(&block43);
    }
  }

  TNode<Number> tmp29;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    tmp29 = LoadDataView32_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4}, p_kind);
    ca_.Goto(&block1, tmp29);
  }

  if (block43.is_used()) {
    ca_.Bind(&block43);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block45);
    } else {
      ca_.Goto(&block46);
    }
  }

  TNode<Number> tmp30;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp30 = LoadDataViewFloat64_0(state_, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4});
    ca_.Goto(&block1, tmp30);
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block48);
    } else {
      ca_.Goto(&block49);
    }
  }

  TNode<BigInt> tmp31;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp31 = LoadDataViewBigInt_0(state_, TNode<Context>{p_context}, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4}, false);
    ca_.Goto(&block1, tmp31);
  }

  if (block49.is_used()) {
    ca_.Bind(&block49);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block51);
    } else {
      ca_.Goto(&block52);
    }
  }

  TNode<BigInt> tmp32;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp32 = LoadDataViewBigInt_0(state_, TNode<Context>{p_context}, TNode<JSArrayBuffer>{tmp6}, TNode<UintPtrT>{tmp21}, TNode<BoolT>{tmp4}, true);
    ca_.Goto(&block1, tmp32);
  }

  if (block52.is_used()) {
    ca_.Bind(&block52);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{p_context}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  TNode<Numeric> phi_bb1_4;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4);
    ca_.Goto(&block54, phi_bb1_4);
  }

  TNode<Numeric> phi_bb54_4;
    ca_.Bind(&block54, &phi_bb54_4);
  return TNode<Numeric>{phi_bb54_4};
}

TF_BUILTIN(DataViewPrototypeGetUint8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<Undefined> tmp2;
  TNode<Numeric> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = Undefined_0(state_);
    tmp3 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp2}, ElementsKind::UINT8_ELEMENTS);
    arguments.PopAndReturn(tmp3);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<Undefined> tmp2;
  TNode<Numeric> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = Undefined_0(state_);
    tmp3 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp2}, ElementsKind::INT8_ELEMENTS);
    arguments.PopAndReturn(tmp3);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::UINT16_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::INT16_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::UINT32_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::INT32_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat16, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::FLOAT16_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::FLOAT32_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::FLOAT64_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::BIGUINT64_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Numeric> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = DataViewGet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, ElementsKind::BIGINT64_ELEMENTS);
    arguments.PopAndReturn(tmp4);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=588&c=1
void StoreDataView8_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp2 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp1});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset}, TNode<Uint32T>{tmp2});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=593&c=1
void StoreDataView16_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<Uint32T> tmp5;
  TNode<Uint32T> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp2 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp1});
    tmp3 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp4 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp3});
    tmp5 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp6 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp5});
    ca_.Branch(p_requestedLittleEndian, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<UintPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset}, TNode<Uint32T>{tmp2});
    tmp7 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp8 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp7});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp8}, TNode<Uint32T>{tmp6});
    ca_.Goto(&block4);
  }

  TNode<UintPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset}, TNode<Uint32T>{tmp6});
    tmp9 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp9});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp10}, TNode<Uint32T>{tmp2});
    ca_.Goto(&block4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=610&c=1
void StoreDataView32_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<Uint32T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<Uint32T> tmp7;
  TNode<Uint32T> tmp8;
  TNode<Uint32T> tmp9;
  TNode<Uint32T> tmp10;
  TNode<Uint32T> tmp11;
  TNode<Uint32T> tmp12;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp2 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp1});
    tmp3 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp4 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp3});
    tmp5 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp6 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp5});
    tmp7 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp8 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp7});
    tmp9 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp10 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9});
    tmp11 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp12 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_value}, TNode<Uint32T>{tmp11});
    ca_.Branch(p_requestedLittleEndian, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<UintPtrT> tmp13;
  TNode<UintPtrT> tmp14;
  TNode<UintPtrT> tmp15;
  TNode<UintPtrT> tmp16;
  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset}, TNode<Uint32T>{tmp2});
    tmp13 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp14 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp13});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp14}, TNode<Uint32T>{tmp6});
    tmp15 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp16 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp15});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp16}, TNode<Uint32T>{tmp10});
    tmp17 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp18 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp17});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp18}, TNode<Uint32T>{tmp12});
    ca_.Goto(&block4);
  }

  TNode<UintPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<UintPtrT> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<UintPtrT> tmp24;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset}, TNode<Uint32T>{tmp12});
    tmp19 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp20 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp19});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp20}, TNode<Uint32T>{tmp10});
    tmp21 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp22 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp21});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp22}, TNode<Uint32T>{tmp6});
    tmp23 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp24 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp23});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp24}, TNode<Uint32T>{tmp2});
    ca_.Goto(&block4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=633&c=1
void StoreDataView64_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<Uint32T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<Uint32T> tmp7;
  TNode<Uint32T> tmp8;
  TNode<Uint32T> tmp9;
  TNode<Uint32T> tmp10;
  TNode<Uint32T> tmp11;
  TNode<Uint32T> tmp12;
  TNode<Uint32T> tmp13;
  TNode<Uint32T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<Uint32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<Uint32T> tmp19;
  TNode<Uint32T> tmp20;
  TNode<Uint32T> tmp21;
  TNode<Uint32T> tmp22;
  TNode<Uint32T> tmp23;
  TNode<Uint32T> tmp24;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadJSArrayBufferBackingStorePtr(TNode<JSArrayBuffer>{p_buffer});
    tmp1 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp2 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_lowWord}, TNode<Uint32T>{tmp1});
    tmp3 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp4 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_lowWord}, TNode<Uint32T>{tmp3});
    tmp5 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp6 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp5});
    tmp7 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp8 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_lowWord}, TNode<Uint32T>{tmp7});
    tmp9 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp10 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9});
    tmp11 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp12 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_lowWord}, TNode<Uint32T>{tmp11});
    tmp13 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp14 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_highWord}, TNode<Uint32T>{tmp13});
    tmp15 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x8ull));
    tmp16 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_highWord}, TNode<Uint32T>{tmp15});
    tmp17 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp18 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp16}, TNode<Uint32T>{tmp17});
    tmp19 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp20 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_highWord}, TNode<Uint32T>{tmp19});
    tmp21 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xffull));
    tmp22 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp20}, TNode<Uint32T>{tmp21});
    tmp23 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x18ull));
    tmp24 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{p_highWord}, TNode<Uint32T>{tmp23});
    ca_.Branch(p_requestedLittleEndian, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<UintPtrT> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<UintPtrT> tmp27;
  TNode<UintPtrT> tmp28;
  TNode<UintPtrT> tmp29;
  TNode<UintPtrT> tmp30;
  TNode<UintPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<UintPtrT> tmp35;
  TNode<UintPtrT> tmp36;
  TNode<UintPtrT> tmp37;
  TNode<UintPtrT> tmp38;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset}, TNode<Uint32T>{tmp2});
    tmp25 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp26 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp25});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp26}, TNode<Uint32T>{tmp6});
    tmp27 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp28 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp27});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp28}, TNode<Uint32T>{tmp10});
    tmp29 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp30 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp29});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp30}, TNode<Uint32T>{tmp12});
    tmp31 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp32 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp31});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp32}, TNode<Uint32T>{tmp14});
    tmp33 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp34 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp33});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp34}, TNode<Uint32T>{tmp18});
    tmp35 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp36 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp35});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp36}, TNode<Uint32T>{tmp22});
    tmp37 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp38 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp37});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp38}, TNode<Uint32T>{tmp24});
    ca_.Goto(&block4);
  }

  TNode<UintPtrT> tmp39;
  TNode<UintPtrT> tmp40;
  TNode<UintPtrT> tmp41;
  TNode<UintPtrT> tmp42;
  TNode<UintPtrT> tmp43;
  TNode<UintPtrT> tmp44;
  TNode<UintPtrT> tmp45;
  TNode<UintPtrT> tmp46;
  TNode<UintPtrT> tmp47;
  TNode<UintPtrT> tmp48;
  TNode<UintPtrT> tmp49;
  TNode<UintPtrT> tmp50;
  TNode<UintPtrT> tmp51;
  TNode<UintPtrT> tmp52;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{p_offset}, TNode<Uint32T>{tmp24});
    tmp39 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp40 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp39});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp40}, TNode<Uint32T>{tmp22});
    tmp41 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp42 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp41});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp42}, TNode<Uint32T>{tmp18});
    tmp43 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp44 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp43});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp44}, TNode<Uint32T>{tmp14});
    tmp45 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp46 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp45});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp46}, TNode<Uint32T>{tmp12});
    tmp47 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x5ull));
    tmp48 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp47});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp48}, TNode<Uint32T>{tmp10});
    tmp49 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x6ull));
    tmp50 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp49});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp50}, TNode<Uint32T>{tmp6});
    tmp51 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x7ull));
    tmp52 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{p_offset}, TNode<UintPtrT>{tmp51});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp0}, TNode<UintPtrT>{tmp52}, TNode<Uint32T>{tmp2});
    ca_.Goto(&block4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=677&c=1
void StoreDataViewBigInt_0(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BigInt> p_bigIntValue, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = DataViewBuiltinsAssembler(state_).DataViewDecodeBigIntLength(TNode<BigInt>{p_bigIntValue});
    tmp1 = DataViewBuiltinsAssembler(state_).DataViewDecodeBigIntSign(TNode<BigInt>{p_bigIntValue});
    tmp2 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp4});
    ca_.Branch(tmp5, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{tmp2, tmp3});
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block4);
    } else {
      ca_.Goto(&block5);
    }
  }

  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<Uint32T> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<Uint32T> tmp11;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{p_bigIntValue}, TNode<IntPtrT>{tmp6});
    tmp8 = Convert_uint32_uintptr_0(state_, TNode<UintPtrT>{tmp7});
    tmp9 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x20ull));
    tmp10 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp9});
    tmp11 = Convert_uint32_uintptr_0(state_, TNode<UintPtrT>{tmp10});
    ca_.Goto(&block6, tmp8, tmp11);
  }

  TNode<IntPtrT> tmp12;
  TNode<UintPtrT> tmp13;
  TNode<Uint32T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<BoolT> tmp16;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp13 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{p_bigIntValue}, TNode<IntPtrT>{tmp12});
    tmp14 = Convert_uint32_uintptr_0(state_, TNode<UintPtrT>{tmp13});
    tmp15 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp16 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp15});
    ca_.Branch(tmp16, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{tmp3});
  }

  TNode<IntPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<Uint32T> tmp19;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp17 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp18 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{p_bigIntValue}, TNode<IntPtrT>{tmp17});
    tmp19 = Convert_uint32_uintptr_0(state_, TNode<UintPtrT>{tmp18});
    ca_.Goto(&block8, tmp19);
  }

  TNode<Uint32T> phi_bb8_7;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_7);
    ca_.Goto(&block6, tmp14, phi_bb8_7);
  }

  TNode<Uint32T> phi_bb6_6;
  TNode<Uint32T> phi_bb6_7;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_6, &phi_bb6_7);
    ca_.Goto(&block3, phi_bb6_6, phi_bb6_7);
  }

  TNode<Uint32T> phi_bb3_6;
  TNode<Uint32T> phi_bb3_7;
  TNode<Uint32T> tmp20;
  TNode<BoolT> tmp21;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_6, &phi_bb3_7);
    tmp20 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp21 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp20});
    ca_.Branch(tmp21, &block9, std::vector<compiler::Node*>{phi_bb3_6, phi_bb3_7}, &block10, std::vector<compiler::Node*>{phi_bb3_6, phi_bb3_7});
  }

  TNode<Uint32T> phi_bb9_6;
  TNode<Uint32T> phi_bb9_7;
  TNode<Int32T> tmp22;
  TNode<Int32T> tmp23;
  TNode<Int32T> tmp24;
  TNode<Uint32T> tmp25;
  TNode<Uint32T> tmp26;
  TNode<BoolT> tmp27;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_6, &phi_bb9_7);
    tmp22 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{phi_bb9_7});
    tmp23 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp24 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp23}, TNode<Int32T>{tmp22});
    tmp25 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp24});
    tmp26 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp27 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{phi_bb9_6}, TNode<Uint32T>{tmp26});
    ca_.Branch(tmp27, &block11, std::vector<compiler::Node*>{phi_bb9_6}, &block12, std::vector<compiler::Node*>{phi_bb9_6, tmp25});
  }

  TNode<Uint32T> phi_bb11_6;
  TNode<Int32T> tmp28;
  TNode<Int32T> tmp29;
  TNode<Int32T> tmp30;
  TNode<Uint32T> tmp31;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_6);
    tmp28 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp25});
    tmp29 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp30 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp28}, TNode<Int32T>{tmp29});
    tmp31 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp30});
    ca_.Goto(&block12, phi_bb11_6, tmp31);
  }

  TNode<Uint32T> phi_bb12_6;
  TNode<Uint32T> phi_bb12_7;
  TNode<Int32T> tmp32;
  TNode<Int32T> tmp33;
  TNode<Int32T> tmp34;
  TNode<Uint32T> tmp35;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_6, &phi_bb12_7);
    tmp32 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{phi_bb12_6});
    tmp33 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp34 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp33}, TNode<Int32T>{tmp32});
    tmp35 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp34});
    ca_.Goto(&block10, tmp35, phi_bb12_7);
  }

  TNode<Uint32T> phi_bb10_6;
  TNode<Uint32T> phi_bb10_7;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_6, &phi_bb10_7);
    StoreDataView64_0(state_, TNode<JSArrayBuffer>{p_buffer}, TNode<UintPtrT>{p_offset}, TNode<Uint32T>{phi_bb10_6}, TNode<Uint32T>{phi_bb10_7}, TNode<BoolT>{p_requestedLittleEndian});
    ca_.Goto(&block13);
  }

    ca_.Bind(&block13);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=716&c=1
TNode<Object> DataViewSet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_requestIndex, TNode<Object> p_value, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Numeric> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<JSDataViewOrRabGsabDataView> tmp1;
  TNode<UintPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = MakeDataViewSetterNameString_0(state_, p_kind);
    tmp1 = ValidateDataView_0(state_, TNode<Context>{p_context}, TNode<Object>{p_receiver}, TNode<String>{tmp0});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = ToIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_requestIndex}, &label3);
    ca_.Goto(&block4);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block3);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGUINT64_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGINT64_ELEMENTS))))) {
      ca_.Goto(&block6);
    } else {
      ca_.Goto(&block7);
    }
  }

  TNode<BigInt> tmp4;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp4 = CodeStubAssembler(state_).ToBigInt(TNode<Context>{p_context}, TNode<Object>{p_value});
    ca_.Goto(&block8, tmp4);
  }

  TNode<Number> tmp5;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp5 = CodeStubAssembler(state_).ToNumber(TNode<Context>{p_context}, TNode<Object>{p_value});
    ca_.Goto(&block8, tmp5);
  }

  TNode<Numeric> phi_bb8_7;
  TNode<BoolT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<JSArrayBuffer> tmp8;
  TNode<BoolT> tmp9;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_7);
    tmp6 = ToBoolean_0(state_, TNode<Object>{p_requestedLittleEndian});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp8 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp7});
    tmp9 = IsDetachedBuffer_0(state_, TNode<JSArrayBuffer>{tmp8});
    ca_.Branch(tmp9, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp10 = MakeDataViewSetterNameString_0(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kDetachedOperation, TNode<Object>{tmp10});
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    compiler::CodeAssemblerLabel label11(&ca_);
    compiler::CodeAssemblerLabel label12(&ca_);
    CodeStubAssembler(state_).IsJSArrayBufferViewDetachedOrOutOfBounds(TNode<JSArrayBufferView>{tmp1}, &label11, &label12);
    if (label11.is_used()) {
      ca_.Bind(&label11);
      ca_.Goto(&block15);
    }
    if (label12.is_used()) {
      ca_.Bind(&label12);
      ca_.Goto(&block16);
    }
  }

  TNode<String> tmp13;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp13 = MakeDataViewGetterNameString_0(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kDetachedOperation, TNode<Object>{tmp13});
  }

  TNode<UintPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp14 = CodeStubAssembler(state_).LoadJSArrayBufferViewByteOffset(TNode<JSArrayBufferView>{tmp1});
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp16 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp1, tmp15});
    tmp17 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).DecodeWord32<base::BitField<bool, 0, 1, uint32_t>>(ca_.UncheckedCast<Word32T>(tmp16)));
    ca_.Branch(tmp17, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp18;
  TNode<JSArrayBuffer> tmp19;
  TNode<UintPtrT> tmp20;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp19 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp18});
    compiler::CodeAssemblerLabel label21(&ca_);
    tmp20 = CodeStubAssembler(state_).LoadVariableLengthJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp1}, TNode<JSArrayBuffer>{tmp19}, &label21);
    ca_.Goto(&block22);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block23);
    }
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.Goto(&block19, tmp20);
  }

  TNode<UintPtrT> tmp22;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp22 = CodeStubAssembler(state_).LoadJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp1});
    ca_.Goto(&block19, tmp22);
  }

  TNode<UintPtrT> phi_bb19_11;
  TNode<UintPtrT> tmp23;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_11);
    tmp23 = FromConstexpr_uintptr_constexpr_int31_0(state_, (DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind)));
    compiler::CodeAssemblerLabel label24(&ca_);
    CheckIntegerIndexAdditionOverflow_0(state_, TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp23}, TNode<UintPtrT>{phi_bb19_11}, &label24);
    ca_.Goto(&block24);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block25);
    }
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    ca_.Goto(&block3);
  }

  TNode<UintPtrT> tmp25;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp25 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp14});
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGUINT64_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::BIGINT64_ELEMENTS))))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  TNode<BigInt> tmp26;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp26 = TORQUE_CAST(TNode<Numeric>{phi_bb8_7});
    StoreDataViewBigInt_0(state_, TNode<JSArrayBuffer>{tmp8}, TNode<UintPtrT>{tmp25}, TNode<BigInt>{tmp26}, TNode<BoolT>{tmp6});
    ca_.Goto(&block28);
  }

  TNode<Number> tmp27;
  TNode<Float64T> tmp28;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp27 = TORQUE_CAST(TNode<Numeric>{phi_bb8_7});
    tmp28 = CodeStubAssembler(state_).ChangeNumberToFloat64(TNode<Number>{tmp27});
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT8_ELEMENTS))))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  TNode<Uint32T> tmp29;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp29 = CodeStubAssembler(state_).TruncateFloat64ToWord32(TNode<Float64T>{tmp28});
    StoreDataView8_0(state_, TNode<JSArrayBuffer>{tmp8}, TNode<UintPtrT>{tmp25}, TNode<Uint32T>{tmp29});
    ca_.Goto(&block31);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT16_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT16_ELEMENTS))))) {
      ca_.Goto(&block32);
    } else {
      ca_.Goto(&block33);
    }
  }

  TNode<Uint32T> tmp30;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp30 = CodeStubAssembler(state_).TruncateFloat64ToWord32(TNode<Float64T>{tmp28});
    StoreDataView16_0(state_, TNode<JSArrayBuffer>{tmp8}, TNode<UintPtrT>{tmp25}, TNode<Uint32T>{tmp30}, TNode<BoolT>{tmp6});
    ca_.Goto(&block34);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT16_ELEMENTS)))) {
      ca_.Goto(&block35);
    } else {
      ca_.Goto(&block36);
    }
  }

  TNode<Float16T> tmp31;
  TNode<Uint32T> tmp32;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp31 = CodeStubAssembler(state_).TruncateFloat64ToFloat16(TNode<Float64T>{tmp28});
    tmp32 = CodeStubAssembler(state_).BitcastFloat16ToUint32(TNode<Float16T>{tmp31});
    StoreDataView16_0(state_, TNode<JSArrayBuffer>{tmp8}, TNode<UintPtrT>{tmp25}, TNode<Uint32T>{tmp32}, TNode<BoolT>{tmp6});
    ca_.Goto(&block37);
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::UINT32_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::INT32_ELEMENTS))))) {
      ca_.Goto(&block38);
    } else {
      ca_.Goto(&block39);
    }
  }

  TNode<Uint32T> tmp33;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    tmp33 = CodeStubAssembler(state_).TruncateFloat64ToWord32(TNode<Float64T>{tmp28});
    StoreDataView32_0(state_, TNode<JSArrayBuffer>{tmp8}, TNode<UintPtrT>{tmp25}, TNode<Uint32T>{tmp33}, TNode<BoolT>{tmp6});
    ca_.Goto(&block40);
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block41);
    } else {
      ca_.Goto(&block42);
    }
  }

  TNode<Float32T> tmp34;
  TNode<Uint32T> tmp35;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp34 = CodeStubAssembler(state_).TruncateFloat64ToFloat32(TNode<Float64T>{tmp28});
    tmp35 = CodeStubAssembler(state_).BitcastFloat32ToInt32(TNode<Float32T>{tmp34});
    StoreDataView32_0(state_, TNode<JSArrayBuffer>{tmp8}, TNode<UintPtrT>{tmp25}, TNode<Uint32T>{tmp35}, TNode<BoolT>{tmp6});
    ca_.Goto(&block43);
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, ElementsKind::FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block44);
    } else {
      ca_.Goto(&block45);
    }
  }

  TNode<Uint32T> tmp36;
  TNode<Uint32T> tmp37;
  if (block44.is_used()) {
    ca_.Bind(&block44);
    tmp36 = CodeStubAssembler(state_).Float64ExtractLowWord32(TNode<Float64T>{tmp28});
    tmp37 = CodeStubAssembler(state_).Float64ExtractHighWord32(TNode<Float64T>{tmp28});
    StoreDataView64_0(state_, TNode<JSArrayBuffer>{tmp8}, TNode<UintPtrT>{tmp25}, TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp37}, TNode<BoolT>{tmp6});
    ca_.Goto(&block46);
  }

  if (block45.is_used()) {
    ca_.Bind(&block45);
    ca_.Goto(&block46);
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    ca_.Goto(&block43);
  }

  if (block43.is_used()) {
    ca_.Bind(&block43);
    ca_.Goto(&block40);
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    ca_.Goto(&block37);
  }

  if (block37.is_used()) {
    ca_.Bind(&block37);
    ca_.Goto(&block34);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block31);
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    ca_.Goto(&block28);
  }

  TNode<Undefined> tmp38;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp38 = Undefined_0(state_);
    ca_.Goto(&block47);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{p_context}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

    ca_.Bind(&block47);
  return TNode<Object>{tmp38};
}

TF_BUILTIN(DataViewPrototypeSetUint8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Undefined> tmp4;
  TNode<Object> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = Undefined_0(state_);
    tmp5 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp4}, ElementsKind::UINT8_ELEMENTS);
    arguments.PopAndReturn(tmp5);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Undefined> tmp4;
  TNode<Object> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = Undefined_0(state_);
    tmp5 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp4}, ElementsKind::INT8_ELEMENTS);
    arguments.PopAndReturn(tmp5);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::UINT16_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::INT16_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::UINT32_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::INT32_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat16, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::FLOAT16_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::FLOAT32_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::FLOAT64_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::BIGUINT64_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = DataViewSet_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp1}, TNode<Object>{tmp3}, TNode<Object>{tmp5}, ElementsKind::BIGINT64_ELEMENTS);
    arguments.PopAndReturn(tmp6);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=77&c=5
TNode<JSDataView> Cast_JSDataView_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSDataView> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSDataView_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSDataView>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=78&c=14
TNode<JSDataView> UnsafeCast_JSDataView_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSDataView> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSDataView>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=80&c=5
TNode<JSRabGsabDataView> Cast_JSRabGsabDataView_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSRabGsabDataView> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSRabGsabDataView_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSRabGsabDataView>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/data-view.tq?l=81&c=14
TNode<JSRabGsabDataView> UnsafeCast_JSRabGsabDataView_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSRabGsabDataView> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSRabGsabDataView>{tmp0};
}

} // namespace internal
} // namespace v8
