// Copyright 2023 the V8 project authors. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_OBJECTS_HOLE_H_
#define V8_OBJECTS_HOLE_H_

#include "src/objects/heap-number.h"
#include "src/objects/heap-object.h"

// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"

namespace v8 {
namespace internal {

#include "torque-generated/src/objects/hole-tq.inc"

class Hole : public HeapObject {
 public:
  inline void set_raw_numeric_value(uint64_t bits);

  inline uint8_t kind() const;
  inline void set_kind(uint8_t kind);

  DECL_CAST(Hole)

  DECL_VERIFIER(Hole)

  static inline void Initialize(Isolate* isolate, Handle<Hole> hole,
                                Handle<HeapNumber> numeric_value, uint8_t kind);

  // Currently, we allow optimized code to treat holes as HeapNumbers to avoid
  // conditional branching. This works by making Hole::kRawNumericValueOffset
  // the same as HeapNumber::kValueOffset and storing NaN at that offset in
  // Holes. This way, a hole will look like a NaN HeapNumber to optimized code.
  DECL_FIELD_OFFSET_TQ(RawNumericValue, HeapObject::kHeaderSize, "float64")
  DECL_FIELD_OFFSET_TQ(Kind, kRawNumericValueOffset + kDoubleSize, "Smi")
  static constexpr int kSize = kKindOffset + kTaggedSize;
  static_assert(HeapNumber::kValueOffset == Hole::kRawNumericValueOffset);

  static const uint8_t kDefaultHole = 0;
  // TODO(chromium:1445008): introduce special-purpose holes.

  using BodyDescriptor = FixedBodyDescriptor<kSize, kSize, kSize>;

  DECL_PRINTER(Hole)

  OBJECT_CONSTRUCTORS(Hole, HeapObject);
};

}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"

#endif  // V8_OBJECTS_HOLE_H_