class Module;
class JSModuleNamespace;
class ScriptOrModule;
// Alias for IsModule() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsModule_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedModule : public P {
  static_assert(
      std::is_same<Module, D>::value,
      "Use this class as direct base for Module.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedModule.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedModule<D,P>;

  // Torque type: ObjectHashTable
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
  inline Tagged<ObjectHashTable> exports() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
  inline Tagged<ObjectHashTable> exports(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
  inline void set_exports(Tagged<ObjectHashTable> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
  inline int hash() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
  inline void set_hash(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
  inline int status() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
  inline void set_status(int value);

  // Torque type: (class Undefined | class JSModuleNamespace)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
  inline Tagged<Union<JSModuleNamespace, Undefined>> module_namespace() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
  inline Tagged<Union<JSModuleNamespace, Undefined>> module_namespace(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
  inline void set_module_namespace(Tagged<Union<JSModuleNamespace, Undefined>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
  inline Tagged<Object> exception() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
  inline Tagged<Object> exception(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
  inline void set_exception(Tagged<Object> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class Undefined | class JSPromise)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
  inline Tagged<Union<JSPromise, Undefined>> top_level_capability() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
  inline Tagged<Union<JSPromise, Undefined>> top_level_capability(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
  inline void set_top_level_capability(Tagged<Union<JSPromise, Undefined>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=5&c=1
  V8_EXPORT_PRIVATE void ModuleVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
  static constexpr int kExportsOffset = P::kHeaderSize;
  static constexpr int kExportsOffsetEnd = kExportsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
  static constexpr int kHashOffset = kExportsOffsetEnd + 1;
  static constexpr int kHashOffsetEnd = kHashOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
  static constexpr int kStatusOffset = kHashOffsetEnd + 1;
  static constexpr int kStatusOffsetEnd = kStatusOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
  static constexpr int kModuleNamespaceOffset = kStatusOffsetEnd + 1;
  static constexpr int kModuleNamespaceOffsetEnd = kModuleNamespaceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
  static constexpr int kExceptionOffset = kModuleNamespaceOffsetEnd + 1;
  static constexpr int kExceptionOffsetEnd = kExceptionOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
  static constexpr int kTopLevelCapabilityOffset = kExceptionOffsetEnd + 1;
  static constexpr int kTopLevelCapabilityOffsetEnd = kTopLevelCapabilityOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kTopLevelCapabilityOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kTopLevelCapabilityOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kTopLevelCapabilityOffsetEnd + 1;
  static constexpr int kHeaderSize = kTopLevelCapabilityOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedModule() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedModule, DAlias>::value,
        "class TorqueGeneratedModule should be used as direct base for Module.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedModule(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedModule(Address ptr);
};

// Alias for IsJSModuleNamespace() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1
V8_EXPORT_PRIVATE bool IsJSModuleNamespace_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1
template <class D, class P>
class TorqueGeneratedJSModuleNamespace : public P {
  static_assert(
      std::is_same<JSModuleNamespace, D>::value,
      "Use this class as direct base for JSModuleNamespace.");
  static_assert(
      std::is_same<JSSpecialObject, P>::value,
      "Pass in JSSpecialObject as second template parameter for TorqueGeneratedJSModuleNamespace.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSModuleNamespace<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=21&c=3
  inline Tagged<Module> module() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=21&c=3
  inline Tagged<Module> module(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=21&c=3
  inline void set_module(Tagged<Module> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSModuleNamespace)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=20&c=1
  V8_EXPORT_PRIVATE void JSModuleNamespaceVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=21&c=3
  static constexpr int kModuleOffset = P::kHeaderSize;
  static constexpr int kModuleOffsetEnd = kModuleOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kModuleOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kModuleOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kModuleOffsetEnd + 1;
  static constexpr int kHeaderSize = kModuleOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSModuleNamespace() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSModuleNamespace, DAlias>::value,
        "class TorqueGeneratedJSModuleNamespace should be used as direct base for JSModuleNamespace.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSModuleNamespace(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSModuleNamespace(Address ptr);
};

// Alias for IsScriptOrModule() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=1
V8_EXPORT_PRIVATE bool IsScriptOrModule_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=1
template <class D, class P>
class TorqueGeneratedScriptOrModule : public P {
  static_assert(
      std::is_same<ScriptOrModule, D>::value,
      "Use this class as direct base for ScriptOrModule.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedScriptOrModule.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedScriptOrModule<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=25&c=3
  inline Tagged<Object> resource_name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=25&c=3
  inline Tagged<Object> resource_name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=25&c=3
  inline void set_resource_name(Tagged<Object> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=26&c=3
  inline Tagged<FixedArray> host_defined_options() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=26&c=3
  inline Tagged<FixedArray> host_defined_options(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=26&c=3
  inline void set_host_defined_options(Tagged<FixedArray> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(ScriptOrModule)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=1
  V8_EXPORT_PRIVATE void ScriptOrModuleVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=25&c=3
  static constexpr int kResourceNameOffset = P::kHeaderSize;
  static constexpr int kResourceNameOffsetEnd = kResourceNameOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=26&c=3
  static constexpr int kHostDefinedOptionsOffset = kResourceNameOffsetEnd + 1;
  static constexpr int kHostDefinedOptionsOffsetEnd = kHostDefinedOptionsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kHostDefinedOptionsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kHostDefinedOptionsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kHostDefinedOptionsOffsetEnd + 1;
  static constexpr int kHeaderSize = kHostDefinedOptionsOffsetEnd + 1;
  static constexpr int kSize = kHostDefinedOptionsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=24&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedScriptOrModule() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedScriptOrModule, DAlias>::value,
        "class TorqueGeneratedScriptOrModule should be used as direct base for ScriptOrModule.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedScriptOrModule(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedScriptOrModule(Address ptr);
};

