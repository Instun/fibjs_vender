class JSCollection;
class JSSet;
class JSMap;
class JSWeakCollection;
class JSWeakSet;
class JSWeakMap;
// Alias for IsJSCollection() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsJSCollection_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedJSCollection : public P {
  static_assert(
      std::is_same<JSCollection, D>::value,
      "Use this class as direct base for JSCollection.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSCollection.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSCollection<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=3
  inline Tagged<Object> table() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=3
  inline Tagged<Object> table(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=3
  inline void set_table(Tagged<Object> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=5&c=1
  V8_EXPORT_PRIVATE void JSCollectionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=3
  static constexpr int kTableOffset = P::kHeaderSize;
  static constexpr int kTableOffsetEnd = kTableOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kTableOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kTableOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kTableOffsetEnd + 1;
  static constexpr int kHeaderSize = kTableOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSCollection() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSCollection, DAlias>::value,
        "class TorqueGeneratedJSCollection should be used as direct base for JSCollection.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSCollection(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSCollection(Address ptr);
};

// Alias for IsJSSet() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=12&c=1
V8_EXPORT_PRIVATE bool IsJSSet_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=12&c=1
template <class D, class P>
class TorqueGeneratedJSSet : public P {
  static_assert(
      std::is_same<JSSet, D>::value,
      "Use this class as direct base for JSSet.");
  static_assert(
      std::is_same<JSCollection, P>::value,
      "Pass in JSCollection as second template parameter for TorqueGeneratedJSSet.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSSet<D,P>;

  DECL_PRINTER(JSSet)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=12&c=1
  V8_EXPORT_PRIVATE void JSSetVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSSet() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSSet, DAlias>::value,
        "class TorqueGeneratedJSSet should be used as direct base for JSSet.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSSet(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSSet(Address ptr);
};

// Alias for IsJSMap() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=13&c=1
V8_EXPORT_PRIVATE bool IsJSMap_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=13&c=1
template <class D, class P>
class TorqueGeneratedJSMap : public P {
  static_assert(
      std::is_same<JSMap, D>::value,
      "Use this class as direct base for JSMap.");
  static_assert(
      std::is_same<JSCollection, P>::value,
      "Pass in JSCollection as second template parameter for TorqueGeneratedJSMap.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSMap<D,P>;

  DECL_PRINTER(JSMap)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=13&c=1
  V8_EXPORT_PRIVATE void JSMapVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSMap() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSMap, DAlias>::value,
        "class TorqueGeneratedJSMap should be used as direct base for JSMap.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSMap(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSMap(Address ptr);
};

// Alias for IsJSWeakCollection() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=15&c=1
V8_EXPORT_PRIVATE bool IsJSWeakCollection_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=15&c=1
template <class D, class P>
class TorqueGeneratedJSWeakCollection : public P {
  static_assert(
      std::is_same<JSWeakCollection, D>::value,
      "Use this class as direct base for JSWeakCollection.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSWeakCollection.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSWeakCollection<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=3
  inline Tagged<Object> table() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=3
  inline Tagged<Object> table(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=3
  inline void set_table(Tagged<Object> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=15&c=1
  V8_EXPORT_PRIVATE void JSWeakCollectionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=3
  static constexpr int kTableOffset = P::kHeaderSize;
  static constexpr int kTableOffsetEnd = kTableOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kTableOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kTableOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kTableOffsetEnd + 1;
  static constexpr int kHeaderSize = kTableOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSWeakCollection() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSWeakCollection, DAlias>::value,
        "class TorqueGeneratedJSWeakCollection should be used as direct base for JSWeakCollection.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSWeakCollection(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSWeakCollection(Address ptr);
};

// Alias for IsJSWeakSet() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=20&c=1
V8_EXPORT_PRIVATE bool IsJSWeakSet_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=20&c=1
template <class D, class P>
class TorqueGeneratedJSWeakSet : public P {
  static_assert(
      std::is_same<JSWeakSet, D>::value,
      "Use this class as direct base for JSWeakSet.");
  static_assert(
      std::is_same<JSWeakCollection, P>::value,
      "Pass in JSWeakCollection as second template parameter for TorqueGeneratedJSWeakSet.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSWeakSet<D,P>;

  DECL_PRINTER(JSWeakSet)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=20&c=1
  V8_EXPORT_PRIVATE void JSWeakSetVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSWeakSet() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSWeakSet, DAlias>::value,
        "class TorqueGeneratedJSWeakSet should be used as direct base for JSWeakSet.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSWeakSet(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSWeakSet(Address ptr);
};

// Alias for IsJSWeakMap() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=21&c=1
V8_EXPORT_PRIVATE bool IsJSWeakMap_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=21&c=1
template <class D, class P>
class TorqueGeneratedJSWeakMap : public P {
  static_assert(
      std::is_same<JSWeakMap, D>::value,
      "Use this class as direct base for JSWeakMap.");
  static_assert(
      std::is_same<JSWeakCollection, P>::value,
      "Pass in JSWeakCollection as second template parameter for TorqueGeneratedJSWeakMap.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSWeakMap<D,P>;

  DECL_PRINTER(JSWeakMap)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=21&c=1
  V8_EXPORT_PRIVATE void JSWeakMapVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSWeakMap() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSWeakMap, DAlias>::value,
        "class TorqueGeneratedJSWeakMap should be used as direct base for JSWeakMap.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSWeakMap(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSWeakMap(Address ptr);
};

