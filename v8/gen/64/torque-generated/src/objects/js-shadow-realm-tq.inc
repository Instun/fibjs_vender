class JSShadowRealm;
// Alias for IsJSShadowRealm() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsJSShadowRealm_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedJSShadowRealm : public P {
  static_assert(
      std::is_same<JSShadowRealm, D>::value,
      "Use this class as direct base for JSShadowRealm.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSShadowRealm.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSShadowRealm<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
  inline Tagged<NativeContext> native_context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
  inline Tagged<NativeContext> native_context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
  inline void set_native_context(Tagged<NativeContext> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSShadowRealm)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=5&c=1
  V8_EXPORT_PRIVATE void JSShadowRealmVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
  static constexpr int kNativeContextOffset = P::kHeaderSize;
  static constexpr int kNativeContextOffsetEnd = kNativeContextOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kHeaderSize = kNativeContextOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSShadowRealm() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSShadowRealm, DAlias>::value,
        "class TorqueGeneratedJSShadowRealm should be used as direct base for JSShadowRealm.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSShadowRealm(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSShadowRealm(Address ptr);
};

