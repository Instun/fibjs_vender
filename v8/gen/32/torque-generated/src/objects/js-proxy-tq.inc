class JSProxy;
class JSProxyRevocableResult;
// Alias for IsJSProxy() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsJSProxy_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedJSProxy : public P {
  static_assert(
      std::is_same<JSProxy, D>::value,
      "Use this class as direct base for JSProxy.");
  static_assert(
      std::is_same<JSReceiver, P>::value,
      "Pass in JSReceiver as second template parameter for TorqueGeneratedJSProxy.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSProxy<D,P>;

  // Torque type: (class Null | class JSReceiver)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
  inline Tagged<Union<JSReceiver, Null>> target() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
  inline Tagged<Union<JSReceiver, Null>> target(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
  inline void set_target(Tagged<Union<JSReceiver, Null>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class Null | class JSReceiver)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
  inline Tagged<Union<JSReceiver, Null>> handler() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
  inline Tagged<Union<JSReceiver, Null>> handler(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
  inline void set_handler(Tagged<Union<JSReceiver, Null>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSProxy)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1
  V8_EXPORT_PRIVATE void JSProxyVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
  static constexpr int kTargetOffset = P::kHeaderSize;
  static constexpr int kTargetOffsetEnd = kTargetOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
  static constexpr int kHandlerOffset = kTargetOffsetEnd + 1;
  static constexpr int kHandlerOffsetEnd = kHandlerOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kHandlerOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kHandlerOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kHandlerOffsetEnd + 1;
  static constexpr int kHeaderSize = kHandlerOffsetEnd + 1;
  static constexpr int kSize = kHandlerOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSProxy() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSProxy, DAlias>::value,
        "class TorqueGeneratedJSProxy should be used as direct base for JSProxy.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSProxy(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSProxy(Address ptr);
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=10&c=1
template <class D, class P>
class TorqueGeneratedJSProxyRevocableResult : public P {
  static_assert(
      std::is_same<JSProxyRevocableResult, D>::value,
      "Use this class as direct base for JSProxyRevocableResult.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSProxyRevocableResult.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSProxyRevocableResult<D,P>;

  // Torque type: JSAny
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
  inline Tagged<JSAny> proxy() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
  inline Tagged<JSAny> proxy(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
  inline void set_proxy(Tagged<JSAny> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: JSAny
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
  inline Tagged<JSAny> revoke() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
  inline Tagged<JSAny> revoke(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
  inline void set_revoke(Tagged<JSAny> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSProxyRevocableResult)


  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
  static constexpr int kProxyOffset = P::kHeaderSize;
  static constexpr int kProxyOffsetEnd = kProxyOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
  static constexpr int kRevokeOffset = kProxyOffsetEnd + 1;
  static constexpr int kRevokeOffsetEnd = kRevokeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kRevokeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kRevokeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kRevokeOffsetEnd + 1;
  static constexpr int kSize = kRevokeOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSProxyRevocableResult() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSProxyRevocableResult, DAlias>::value,
        "class TorqueGeneratedJSProxyRevocableResult should be used as direct base for JSProxyRevocableResult.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSProxyRevocableResult(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSProxyRevocableResult(Address ptr);
};

