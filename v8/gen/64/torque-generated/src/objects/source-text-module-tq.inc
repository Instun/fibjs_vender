class SourceTextModule;
class ModuleRequest;
class SourceTextModuleInfoEntry;
// Alias for IsSourceTextModule() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=12&c=1
V8_EXPORT_PRIVATE bool IsSourceTextModule_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=12&c=1
template <class D, class P>
class TorqueGeneratedSourceTextModule : public P {
  static_assert(
      std::is_same<SourceTextModule, D>::value,
      "Use this class as direct base for SourceTextModule.");
  static_assert(
      std::is_same<Module, P>::value,
      "Pass in Module as second template parameter for TorqueGeneratedSourceTextModule.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedSourceTextModule<D,P>;

  // Torque type: (class JSFunction | class JSGeneratorObject | class SharedFunctionInfo)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
  inline Tagged<Union<JSFunction, JSGeneratorObject, SharedFunctionInfo>> code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
  inline Tagged<Union<JSFunction, JSGeneratorObject, SharedFunctionInfo>> code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
  inline void set_code(Tagged<Union<JSFunction, JSGeneratorObject, SharedFunctionInfo>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
  inline Tagged<FixedArray> regular_exports() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
  inline Tagged<FixedArray> regular_exports(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
  inline void set_regular_exports(Tagged<FixedArray> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
  inline Tagged<FixedArray> regular_imports() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
  inline Tagged<FixedArray> regular_imports(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
  inline void set_regular_imports(Tagged<FixedArray> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
  inline Tagged<FixedArray> requested_modules() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
  inline Tagged<FixedArray> requested_modules(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
  inline void set_requested_modules(Tagged<FixedArray> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSObject | TheHole)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
  inline Tagged<Union<Hole, JSObject>> import_meta(AcquireLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
  inline Tagged<Union<Hole, JSObject>> import_meta(PtrComprCageBase cage_base, AcquireLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
  inline void set_import_meta(Tagged<Union<Hole, JSObject>> value, ReleaseStoreTag, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (TheHole | class SourceTextModule)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
  inline Tagged<Union<Hole, SourceTextModule>> cycle_root() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
  inline Tagged<Union<Hole, SourceTextModule>> cycle_root(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
  inline void set_cycle_root(Tagged<Union<Hole, SourceTextModule>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
  inline Tagged<ArrayList> async_parent_modules() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
  inline Tagged<ArrayList> async_parent_modules(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
  inline void set_async_parent_modules(Tagged<ArrayList> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
  inline int dfs_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
  inline void set_dfs_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
  inline int dfs_ancestor_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
  inline void set_dfs_ancestor_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
  inline int pending_async_dependencies() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
  inline void set_pending_async_dependencies(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
  inline void set_flags(int value);

  DECL_PRINTER(SourceTextModule)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=12&c=1
  V8_EXPORT_PRIVATE void SourceTextModuleVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
  static constexpr int kCodeOffset = P::kHeaderSize;
  static constexpr int kCodeOffsetEnd = kCodeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
  static constexpr int kRegularExportsOffset = kCodeOffsetEnd + 1;
  static constexpr int kRegularExportsOffsetEnd = kRegularExportsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
  static constexpr int kRegularImportsOffset = kRegularExportsOffsetEnd + 1;
  static constexpr int kRegularImportsOffsetEnd = kRegularImportsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
  static constexpr int kRequestedModulesOffset = kRegularImportsOffsetEnd + 1;
  static constexpr int kRequestedModulesOffsetEnd = kRequestedModulesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
  static constexpr int kImportMetaOffset = kRequestedModulesOffsetEnd + 1;
  static constexpr int kImportMetaOffsetEnd = kImportMetaOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
  static constexpr int kCycleRootOffset = kImportMetaOffsetEnd + 1;
  static constexpr int kCycleRootOffsetEnd = kCycleRootOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
  static constexpr int kAsyncParentModulesOffset = kCycleRootOffsetEnd + 1;
  static constexpr int kAsyncParentModulesOffsetEnd = kAsyncParentModulesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
  static constexpr int kDfsIndexOffset = kAsyncParentModulesOffsetEnd + 1;
  static constexpr int kDfsIndexOffsetEnd = kDfsIndexOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
  static constexpr int kDfsAncestorIndexOffset = kDfsIndexOffsetEnd + 1;
  static constexpr int kDfsAncestorIndexOffsetEnd = kDfsAncestorIndexOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
  static constexpr int kPendingAsyncDependenciesOffset = kDfsAncestorIndexOffsetEnd + 1;
  static constexpr int kPendingAsyncDependenciesOffsetEnd = kPendingAsyncDependenciesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
  static constexpr int kFlagsOffset = kPendingAsyncDependenciesOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;
  static constexpr int kSize = kFlagsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=12&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 144);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=12&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedSourceTextModule() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedSourceTextModule, DAlias>::value,
        "class TorqueGeneratedSourceTextModule should be used as direct base for SourceTextModule.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedSourceTextModule(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedSourceTextModule(Address ptr);
};

// Alias for IsModuleRequest() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=58&c=1
V8_EXPORT_PRIVATE bool IsModuleRequest_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=58&c=1
template <class D, class P>
class TorqueGeneratedModuleRequest : public P {
  static_assert(
      std::is_same<ModuleRequest, D>::value,
      "Use this class as direct base for ModuleRequest.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedModuleRequest.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedModuleRequest<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=59&c=3
  inline Tagged<String> specifier() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=59&c=3
  inline Tagged<String> specifier(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=59&c=3
  inline void set_specifier(Tagged<String> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
  inline Tagged<FixedArray> import_attributes() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
  inline Tagged<FixedArray> import_attributes(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
  inline void set_import_attributes(Tagged<FixedArray> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
  inline int flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
  inline void set_flags(int value);

  DECL_PRINTER(ModuleRequest)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=58&c=1
  V8_EXPORT_PRIVATE void ModuleRequestVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=59&c=3
  static constexpr int kSpecifierOffset = P::kHeaderSize;
  static constexpr int kSpecifierOffsetEnd = kSpecifierOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
  static constexpr int kImportAttributesOffset = kSpecifierOffsetEnd + 1;
  static constexpr int kImportAttributesOffsetEnd = kImportAttributesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
  static constexpr int kFlagsOffset = kImportAttributesOffsetEnd + 1;
  static constexpr int kFlagsOffsetEnd = kFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagsOffsetEnd + 1;
  static constexpr int kSize = kFlagsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=58&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 32);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=58&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedModuleRequest() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedModuleRequest, DAlias>::value,
        "class TorqueGeneratedModuleRequest should be used as direct base for ModuleRequest.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedModuleRequest(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedModuleRequest(Address ptr);
};

// Alias for IsSourceTextModuleInfoEntry() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=68&c=1
V8_EXPORT_PRIVATE bool IsSourceTextModuleInfoEntry_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=68&c=1
template <class D, class P>
class TorqueGeneratedSourceTextModuleInfoEntry : public P {
  static_assert(
      std::is_same<SourceTextModuleInfoEntry, D>::value,
      "Use this class as direct base for SourceTextModuleInfoEntry.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedSourceTextModuleInfoEntry.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedSourceTextModuleInfoEntry<D,P>;

  // Torque type: (class String | class Undefined)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=69&c=3
  inline Tagged<Union<String, Undefined>> export_name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=69&c=3
  inline Tagged<Union<String, Undefined>> export_name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=69&c=3
  inline void set_export_name(Tagged<Union<String, Undefined>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class String | class Undefined)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=70&c=3
  inline Tagged<Union<String, Undefined>> local_name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=70&c=3
  inline Tagged<Union<String, Undefined>> local_name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=70&c=3
  inline void set_local_name(Tagged<Union<String, Undefined>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class String | class Undefined)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=71&c=3
  inline Tagged<Union<String, Undefined>> import_name() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=71&c=3
  inline Tagged<Union<String, Undefined>> import_name(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=71&c=3
  inline void set_import_name(Tagged<Union<String, Undefined>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=72&c=3
  inline int module_request() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=72&c=3
  inline void set_module_request(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=73&c=3
  inline int cell_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=73&c=3
  inline void set_cell_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=74&c=3
  inline int beg_pos() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=74&c=3
  inline void set_beg_pos(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=75&c=3
  inline int end_pos() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=75&c=3
  inline void set_end_pos(int value);

  DECL_PRINTER(SourceTextModuleInfoEntry)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=68&c=1
  V8_EXPORT_PRIVATE void SourceTextModuleInfoEntryVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=69&c=3
  static constexpr int kExportNameOffset = P::kHeaderSize;
  static constexpr int kExportNameOffsetEnd = kExportNameOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=70&c=3
  static constexpr int kLocalNameOffset = kExportNameOffsetEnd + 1;
  static constexpr int kLocalNameOffsetEnd = kLocalNameOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=71&c=3
  static constexpr int kImportNameOffset = kLocalNameOffsetEnd + 1;
  static constexpr int kImportNameOffsetEnd = kImportNameOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=72&c=3
  static constexpr int kModuleRequestOffset = kImportNameOffsetEnd + 1;
  static constexpr int kModuleRequestOffsetEnd = kModuleRequestOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=73&c=3
  static constexpr int kCellIndexOffset = kModuleRequestOffsetEnd + 1;
  static constexpr int kCellIndexOffsetEnd = kCellIndexOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=74&c=3
  static constexpr int kBegPosOffset = kCellIndexOffsetEnd + 1;
  static constexpr int kBegPosOffsetEnd = kBegPosOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=75&c=3
  static constexpr int kEndPosOffset = kBegPosOffsetEnd + 1;
  static constexpr int kEndPosOffsetEnd = kEndPosOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kEndPosOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kEndPosOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kEndPosOffsetEnd + 1;
  static constexpr int kHeaderSize = kEndPosOffsetEnd + 1;
  static constexpr int kSize = kEndPosOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=68&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 64);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=68&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedSourceTextModuleInfoEntry() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedSourceTextModuleInfoEntry, DAlias>::value,
        "class TorqueGeneratedSourceTextModuleInfoEntry should be used as direct base for SourceTextModuleInfoEntry.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedSourceTextModuleInfoEntry(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedSourceTextModuleInfoEntry(Address ptr);
};

