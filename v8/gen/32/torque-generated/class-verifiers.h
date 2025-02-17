#ifndef V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_H_

#ifdef VERIFY_HEAP
#include "src/base/macros.h"

namespace v8 {
namespace internal {
class Isolate;
template<typename T>
class Tagged;
class JSReceiver;
class Context;
class JSObject;
class JSObjectWithEmbedderSlots;
class JSPromise;
class JSFunctionOrBoundFunctionOrWrappedFunction;
class JSFunction;
class Foreign;
class JSProxy;
class JSBoundFunction;
class JSWrappedFunction;
class JSAPIObjectWithEmbedderSlots;
class JSCustomElementsObject;
class JSSpecialObject;
class Map;
class WeakCell;
class TemplateInfo;
class FunctionTemplateInfo;
class WasmFuncRef;
class WasmNull;
class JSCollection;
class JSSet;
class JSMap;
class Struct;
class PromiseCapability;
class JSArrayBufferView;
class JSTypedArray;
class DataHandler;
class AllocationMemento;
class InterceptorInfo;
class AccessCheckInfo;
class AccessorInfo;
class JSArgumentsObject;
class AliasedArgumentsEntry;
class CallSiteInfo;
class Cell;
class WeakArrayList;
class ScopeInfo;
class BreakPoint;
class BreakPointInfo;
class DebugInfo;
class CoverageInfo;
class StackFrameInfo;
class ErrorStackData;
class EnumCache;
class AccessorPair;
class ClassPositions;
class DescriptorArray;
class StrongDescriptorArray;
class EmbedderDataArray;
class FeedbackCell;
class FeedbackVector;
class TrustedForeign;
class FreeSpace;
class JSArrayBuffer;
class JSDataViewOrRabGsabDataView;
class JSDataView;
class JSRabGsabDataView;
class JSArrayIterator;
class JSArray;
class TemplateLiteralObject;
class AlwaysSharedSpaceJSObject;
class JSSynchronizationPrimitive;
class JSAtomicsMutex;
class JSAtomicsCondition;
class JSCollectionIterator;
class JSWeakCollection;
class JSWeakSet;
class JSWeakMap;
class JSDisposableStackBase;
class JSSyncDisposableStack;
class JSAsyncDisposableStack;
class JSGeneratorObject;
class JSAsyncFunctionObject;
class JSAsyncGeneratorObject;
class AsyncGeneratorRequest;
class JSIteratorHelper;
class JSIteratorMapHelper;
class JSIteratorFilterHelper;
class JSIteratorTakeHelper;
class JSIteratorDropHelper;
class JSIteratorFlatMapHelper;
class JSExternalObject;
class JSGlobalProxy;
class JSGlobalObject;
class JSPrimitiveWrapper;
class JSMessageObject;
class JSDate;
class JSAsyncFromSyncIterator;
class JSStringIterator;
class JSValidIteratorWrapper;
class JSRawJson;
class JSRegExpStringIterator;
class JSRegExp;
class JSShadowRealm;
class JSSharedArray;
class JSSharedStruct;
class JSTemporalCalendar;
class JSTemporalDuration;
class JSTemporalInstant;
class JSTemporalPlainDateTime;
class JSTemporalPlainDate;
class JSTemporalPlainMonthDay;
class JSTemporalPlainTime;
class JSTemporalPlainYearMonth;
class JSTemporalTimeZone;
class JSTemporalZonedDateTime;
class JSFinalizationRegistry;
class JSWeakRef;
class ArrayBoilerplateDescription;
class MegaDomHandler;
class Microtask;
class CallbackTask;
class CallableTask;
class Module;
class JSModuleNamespace;
class ScriptOrModule;
class PromiseReaction;
class PromiseReactionJobTask;
class PromiseFulfillReactionJobTask;
class PromiseRejectReactionJobTask;
class PromiseResolveThenableJobTask;
class PropertyArray;
class PropertyCell;
class ConstTrackingLetCell;
class PropertyDescriptorObject;
class PrototypeInfo;
class Script;
class PreparseData;
class InterpreterData;
class SharedFunctionInfo;
class UncompiledData;
class UncompiledDataWithoutPreparseData;
class UncompiledDataWithPreparseData;
class UncompiledDataWithoutPreparseDataWithJob;
class UncompiledDataWithPreparseDataAndJob;
class OnHeapBasicBlockProfilerData;
class SourceTextModule;
class ModuleRequest;
class SourceTextModuleInfoEntry;
class Tuple2;
class SyntheticModule;
class TemplateObjectDescription;
class FunctionTemplateRareData;
class ObjectTemplateInfo;
class DictionaryTemplateInfo;
class TurbofanType;
class TurbofanBitsetType;
class TurbofanUnionType;
class TurbofanRangeType;
class TurbofanHeapConstantType;
class TurbofanOtherNumberConstantType;
class TurboshaftType;
class TurboshaftWord32Type;
class TurboshaftWord32RangeType;
class TurboshaftWord32SetType;
class TurboshaftWord64Type;
class TurboshaftWord64RangeType;
class TurboshaftWord64SetType;
class TurboshaftFloat64Type;
class TurboshaftFloat64RangeType;
class TurboshaftFloat64SetType;
class InternalClass;
class SmiPair;
class SmiBox;
class ExportedSubClassBase;
class ExportedSubClass;
class AbstractInternalClass;
class AbstractInternalClassSubclass1;
class AbstractInternalClassSubclass2;
class InternalClassWithStructElements;
class ExportedSubClass2;
class SortState;
class JSV8BreakIterator;
class JSCollator;
class JSDateTimeFormat;
class JSDisplayNames;
class JSDurationFormat;
class JSListFormat;
class JSLocale;
class JSNumberFormat;
class JSPluralRules;
class JSRelativeTimeFormat;
class JSSegmentIterator;
class JSSegmentDataObject;
class JSSegmentDataObjectWithIsWordLike;
class JSSegmenter;
class JSSegments;
class WasmImportData;
class WasmInstanceObject;
class WasmFastApiCallData;
class WasmInternalFunction;
class WasmFunctionData;
class WasmExportedFunctionData;
class WasmJSFunctionData;
class WasmCapiFunctionData;
class WasmResumeData;
class WasmContinuationObject;
class WasmSuspenderObject;
class WasmExceptionTag;
class WasmModuleObject;
class WasmTableObject;
class WasmMemoryObject;
class WasmGlobalObject;
class WasmTagObject;
class AsmWasmData;
class WasmTypeInfo;
class WasmObject;
class WasmStruct;
class WasmArray;
class WasmStringViewIter;
class WasmSuspendingObject;
class V8_EXPORT_PRIVATE TorqueGeneratedClassVerifiers{
 public:
  static void JSReceiverVerify(Tagged<JSReceiver> o, Isolate* isolate);
  static void ContextVerify(Tagged<Context> o, Isolate* isolate);
  static void JSObjectVerify(Tagged<JSObject> o, Isolate* isolate);
  static void JSObjectWithEmbedderSlotsVerify(Tagged<JSObjectWithEmbedderSlots> o, Isolate* isolate);
  static void JSPromiseVerify(Tagged<JSPromise> o, Isolate* isolate);
  static void JSFunctionOrBoundFunctionOrWrappedFunctionVerify(Tagged<JSFunctionOrBoundFunctionOrWrappedFunction> o, Isolate* isolate);
  static void JSFunctionVerify(Tagged<JSFunction> o, Isolate* isolate);
  static void ForeignVerify(Tagged<Foreign> o, Isolate* isolate);
  static void JSProxyVerify(Tagged<JSProxy> o, Isolate* isolate);
  static void JSBoundFunctionVerify(Tagged<JSBoundFunction> o, Isolate* isolate);
  static void JSWrappedFunctionVerify(Tagged<JSWrappedFunction> o, Isolate* isolate);
  static void JSAPIObjectWithEmbedderSlotsVerify(Tagged<JSAPIObjectWithEmbedderSlots> o, Isolate* isolate);
  static void JSCustomElementsObjectVerify(Tagged<JSCustomElementsObject> o, Isolate* isolate);
  static void JSSpecialObjectVerify(Tagged<JSSpecialObject> o, Isolate* isolate);
  static void MapVerify(Tagged<Map> o, Isolate* isolate);
  static void WeakCellVerify(Tagged<WeakCell> o, Isolate* isolate);
  static void TemplateInfoVerify(Tagged<TemplateInfo> o, Isolate* isolate);
  static void FunctionTemplateInfoVerify(Tagged<FunctionTemplateInfo> o, Isolate* isolate);
  static void WasmFuncRefVerify(Tagged<WasmFuncRef> o, Isolate* isolate);
  static void WasmNullVerify(Tagged<WasmNull> o, Isolate* isolate);
  static void JSCollectionVerify(Tagged<JSCollection> o, Isolate* isolate);
  static void JSSetVerify(Tagged<JSSet> o, Isolate* isolate);
  static void JSMapVerify(Tagged<JSMap> o, Isolate* isolate);
  static void StructVerify(Tagged<Struct> o, Isolate* isolate);
  static void PromiseCapabilityVerify(Tagged<PromiseCapability> o, Isolate* isolate);
  static void JSArrayBufferViewVerify(Tagged<JSArrayBufferView> o, Isolate* isolate);
  static void JSTypedArrayVerify(Tagged<JSTypedArray> o, Isolate* isolate);
  static void DataHandlerVerify(Tagged<DataHandler> o, Isolate* isolate);
  static void AllocationMementoVerify(Tagged<AllocationMemento> o, Isolate* isolate);
  static void InterceptorInfoVerify(Tagged<InterceptorInfo> o, Isolate* isolate);
  static void AccessCheckInfoVerify(Tagged<AccessCheckInfo> o, Isolate* isolate);
  static void AccessorInfoVerify(Tagged<AccessorInfo> o, Isolate* isolate);
  static void JSArgumentsObjectVerify(Tagged<JSArgumentsObject> o, Isolate* isolate);
  static void AliasedArgumentsEntryVerify(Tagged<AliasedArgumentsEntry> o, Isolate* isolate);
  static void CallSiteInfoVerify(Tagged<CallSiteInfo> o, Isolate* isolate);
  static void CellVerify(Tagged<Cell> o, Isolate* isolate);
  static void WeakArrayListVerify(Tagged<WeakArrayList> o, Isolate* isolate);
  static void ScopeInfoVerify(Tagged<ScopeInfo> o, Isolate* isolate);
  static void BreakPointVerify(Tagged<BreakPoint> o, Isolate* isolate);
  static void BreakPointInfoVerify(Tagged<BreakPointInfo> o, Isolate* isolate);
  static void DebugInfoVerify(Tagged<DebugInfo> o, Isolate* isolate);
  static void CoverageInfoVerify(Tagged<CoverageInfo> o, Isolate* isolate);
  static void StackFrameInfoVerify(Tagged<StackFrameInfo> o, Isolate* isolate);
  static void ErrorStackDataVerify(Tagged<ErrorStackData> o, Isolate* isolate);
  static void EnumCacheVerify(Tagged<EnumCache> o, Isolate* isolate);
  static void AccessorPairVerify(Tagged<AccessorPair> o, Isolate* isolate);
  static void ClassPositionsVerify(Tagged<ClassPositions> o, Isolate* isolate);
  static void DescriptorArrayVerify(Tagged<DescriptorArray> o, Isolate* isolate);
  static void StrongDescriptorArrayVerify(Tagged<StrongDescriptorArray> o, Isolate* isolate);
  static void EmbedderDataArrayVerify(Tagged<EmbedderDataArray> o, Isolate* isolate);
  static void FeedbackCellVerify(Tagged<FeedbackCell> o, Isolate* isolate);
  static void FeedbackVectorVerify(Tagged<FeedbackVector> o, Isolate* isolate);
  static void TrustedForeignVerify(Tagged<TrustedForeign> o, Isolate* isolate);
  static void FreeSpaceVerify(Tagged<FreeSpace> o, Isolate* isolate);
  static void JSArrayBufferVerify(Tagged<JSArrayBuffer> o, Isolate* isolate);
  static void JSDataViewOrRabGsabDataViewVerify(Tagged<JSDataViewOrRabGsabDataView> o, Isolate* isolate);
  static void JSDataViewVerify(Tagged<JSDataView> o, Isolate* isolate);
  static void JSRabGsabDataViewVerify(Tagged<JSRabGsabDataView> o, Isolate* isolate);
  static void JSArrayIteratorVerify(Tagged<JSArrayIterator> o, Isolate* isolate);
  static void JSArrayVerify(Tagged<JSArray> o, Isolate* isolate);
  static void TemplateLiteralObjectVerify(Tagged<TemplateLiteralObject> o, Isolate* isolate);
  static void AlwaysSharedSpaceJSObjectVerify(Tagged<AlwaysSharedSpaceJSObject> o, Isolate* isolate);
  static void JSSynchronizationPrimitiveVerify(Tagged<JSSynchronizationPrimitive> o, Isolate* isolate);
  static void JSAtomicsMutexVerify(Tagged<JSAtomicsMutex> o, Isolate* isolate);
  static void JSAtomicsConditionVerify(Tagged<JSAtomicsCondition> o, Isolate* isolate);
  static void JSCollectionIteratorVerify(Tagged<JSCollectionIterator> o, Isolate* isolate);
  static void JSWeakCollectionVerify(Tagged<JSWeakCollection> o, Isolate* isolate);
  static void JSWeakSetVerify(Tagged<JSWeakSet> o, Isolate* isolate);
  static void JSWeakMapVerify(Tagged<JSWeakMap> o, Isolate* isolate);
  static void JSDisposableStackBaseVerify(Tagged<JSDisposableStackBase> o, Isolate* isolate);
  static void JSSyncDisposableStackVerify(Tagged<JSSyncDisposableStack> o, Isolate* isolate);
  static void JSAsyncDisposableStackVerify(Tagged<JSAsyncDisposableStack> o, Isolate* isolate);
  static void JSGeneratorObjectVerify(Tagged<JSGeneratorObject> o, Isolate* isolate);
  static void JSAsyncFunctionObjectVerify(Tagged<JSAsyncFunctionObject> o, Isolate* isolate);
  static void JSAsyncGeneratorObjectVerify(Tagged<JSAsyncGeneratorObject> o, Isolate* isolate);
  static void AsyncGeneratorRequestVerify(Tagged<AsyncGeneratorRequest> o, Isolate* isolate);
  static void JSIteratorHelperVerify(Tagged<JSIteratorHelper> o, Isolate* isolate);
  static void JSIteratorMapHelperVerify(Tagged<JSIteratorMapHelper> o, Isolate* isolate);
  static void JSIteratorFilterHelperVerify(Tagged<JSIteratorFilterHelper> o, Isolate* isolate);
  static void JSIteratorTakeHelperVerify(Tagged<JSIteratorTakeHelper> o, Isolate* isolate);
  static void JSIteratorDropHelperVerify(Tagged<JSIteratorDropHelper> o, Isolate* isolate);
  static void JSIteratorFlatMapHelperVerify(Tagged<JSIteratorFlatMapHelper> o, Isolate* isolate);
  static void JSExternalObjectVerify(Tagged<JSExternalObject> o, Isolate* isolate);
  static void JSGlobalProxyVerify(Tagged<JSGlobalProxy> o, Isolate* isolate);
  static void JSGlobalObjectVerify(Tagged<JSGlobalObject> o, Isolate* isolate);
  static void JSPrimitiveWrapperVerify(Tagged<JSPrimitiveWrapper> o, Isolate* isolate);
  static void JSMessageObjectVerify(Tagged<JSMessageObject> o, Isolate* isolate);
  static void JSDateVerify(Tagged<JSDate> o, Isolate* isolate);
  static void JSAsyncFromSyncIteratorVerify(Tagged<JSAsyncFromSyncIterator> o, Isolate* isolate);
  static void JSStringIteratorVerify(Tagged<JSStringIterator> o, Isolate* isolate);
  static void JSValidIteratorWrapperVerify(Tagged<JSValidIteratorWrapper> o, Isolate* isolate);
  static void JSRawJsonVerify(Tagged<JSRawJson> o, Isolate* isolate);
  static void JSRegExpStringIteratorVerify(Tagged<JSRegExpStringIterator> o, Isolate* isolate);
  static void JSRegExpVerify(Tagged<JSRegExp> o, Isolate* isolate);
  static void JSShadowRealmVerify(Tagged<JSShadowRealm> o, Isolate* isolate);
  static void JSSharedArrayVerify(Tagged<JSSharedArray> o, Isolate* isolate);
  static void JSSharedStructVerify(Tagged<JSSharedStruct> o, Isolate* isolate);
  static void JSTemporalCalendarVerify(Tagged<JSTemporalCalendar> o, Isolate* isolate);
  static void JSTemporalDurationVerify(Tagged<JSTemporalDuration> o, Isolate* isolate);
  static void JSTemporalInstantVerify(Tagged<JSTemporalInstant> o, Isolate* isolate);
  static void JSTemporalPlainDateTimeVerify(Tagged<JSTemporalPlainDateTime> o, Isolate* isolate);
  static void JSTemporalPlainDateVerify(Tagged<JSTemporalPlainDate> o, Isolate* isolate);
  static void JSTemporalPlainMonthDayVerify(Tagged<JSTemporalPlainMonthDay> o, Isolate* isolate);
  static void JSTemporalPlainTimeVerify(Tagged<JSTemporalPlainTime> o, Isolate* isolate);
  static void JSTemporalPlainYearMonthVerify(Tagged<JSTemporalPlainYearMonth> o, Isolate* isolate);
  static void JSTemporalTimeZoneVerify(Tagged<JSTemporalTimeZone> o, Isolate* isolate);
  static void JSTemporalZonedDateTimeVerify(Tagged<JSTemporalZonedDateTime> o, Isolate* isolate);
  static void JSFinalizationRegistryVerify(Tagged<JSFinalizationRegistry> o, Isolate* isolate);
  static void JSWeakRefVerify(Tagged<JSWeakRef> o, Isolate* isolate);
  static void ArrayBoilerplateDescriptionVerify(Tagged<ArrayBoilerplateDescription> o, Isolate* isolate);
  static void MegaDomHandlerVerify(Tagged<MegaDomHandler> o, Isolate* isolate);
  static void MicrotaskVerify(Tagged<Microtask> o, Isolate* isolate);
  static void CallbackTaskVerify(Tagged<CallbackTask> o, Isolate* isolate);
  static void CallableTaskVerify(Tagged<CallableTask> o, Isolate* isolate);
  static void ModuleVerify(Tagged<Module> o, Isolate* isolate);
  static void JSModuleNamespaceVerify(Tagged<JSModuleNamespace> o, Isolate* isolate);
  static void ScriptOrModuleVerify(Tagged<ScriptOrModule> o, Isolate* isolate);
  static void PromiseReactionVerify(Tagged<PromiseReaction> o, Isolate* isolate);
  static void PromiseReactionJobTaskVerify(Tagged<PromiseReactionJobTask> o, Isolate* isolate);
  static void PromiseFulfillReactionJobTaskVerify(Tagged<PromiseFulfillReactionJobTask> o, Isolate* isolate);
  static void PromiseRejectReactionJobTaskVerify(Tagged<PromiseRejectReactionJobTask> o, Isolate* isolate);
  static void PromiseResolveThenableJobTaskVerify(Tagged<PromiseResolveThenableJobTask> o, Isolate* isolate);
  static void PropertyArrayVerify(Tagged<PropertyArray> o, Isolate* isolate);
  static void PropertyCellVerify(Tagged<PropertyCell> o, Isolate* isolate);
  static void ConstTrackingLetCellVerify(Tagged<ConstTrackingLetCell> o, Isolate* isolate);
  static void PropertyDescriptorObjectVerify(Tagged<PropertyDescriptorObject> o, Isolate* isolate);
  static void PrototypeInfoVerify(Tagged<PrototypeInfo> o, Isolate* isolate);
  static void ScriptVerify(Tagged<Script> o, Isolate* isolate);
  static void PreparseDataVerify(Tagged<PreparseData> o, Isolate* isolate);
  static void InterpreterDataVerify(Tagged<InterpreterData> o, Isolate* isolate);
  static void SharedFunctionInfoVerify(Tagged<SharedFunctionInfo> o, Isolate* isolate);
  static void UncompiledDataVerify(Tagged<UncompiledData> o, Isolate* isolate);
  static void UncompiledDataWithoutPreparseDataVerify(Tagged<UncompiledDataWithoutPreparseData> o, Isolate* isolate);
  static void UncompiledDataWithPreparseDataVerify(Tagged<UncompiledDataWithPreparseData> o, Isolate* isolate);
  static void UncompiledDataWithoutPreparseDataWithJobVerify(Tagged<UncompiledDataWithoutPreparseDataWithJob> o, Isolate* isolate);
  static void UncompiledDataWithPreparseDataAndJobVerify(Tagged<UncompiledDataWithPreparseDataAndJob> o, Isolate* isolate);
  static void OnHeapBasicBlockProfilerDataVerify(Tagged<OnHeapBasicBlockProfilerData> o, Isolate* isolate);
  static void SourceTextModuleVerify(Tagged<SourceTextModule> o, Isolate* isolate);
  static void ModuleRequestVerify(Tagged<ModuleRequest> o, Isolate* isolate);
  static void SourceTextModuleInfoEntryVerify(Tagged<SourceTextModuleInfoEntry> o, Isolate* isolate);
  static void Tuple2Verify(Tagged<Tuple2> o, Isolate* isolate);
  static void SyntheticModuleVerify(Tagged<SyntheticModule> o, Isolate* isolate);
  static void TemplateObjectDescriptionVerify(Tagged<TemplateObjectDescription> o, Isolate* isolate);
  static void FunctionTemplateRareDataVerify(Tagged<FunctionTemplateRareData> o, Isolate* isolate);
  static void ObjectTemplateInfoVerify(Tagged<ObjectTemplateInfo> o, Isolate* isolate);
  static void DictionaryTemplateInfoVerify(Tagged<DictionaryTemplateInfo> o, Isolate* isolate);
  static void TurbofanTypeVerify(Tagged<TurbofanType> o, Isolate* isolate);
  static void TurbofanBitsetTypeVerify(Tagged<TurbofanBitsetType> o, Isolate* isolate);
  static void TurbofanUnionTypeVerify(Tagged<TurbofanUnionType> o, Isolate* isolate);
  static void TurbofanRangeTypeVerify(Tagged<TurbofanRangeType> o, Isolate* isolate);
  static void TurbofanHeapConstantTypeVerify(Tagged<TurbofanHeapConstantType> o, Isolate* isolate);
  static void TurbofanOtherNumberConstantTypeVerify(Tagged<TurbofanOtherNumberConstantType> o, Isolate* isolate);
  static void TurboshaftTypeVerify(Tagged<TurboshaftType> o, Isolate* isolate);
  static void TurboshaftWord32TypeVerify(Tagged<TurboshaftWord32Type> o, Isolate* isolate);
  static void TurboshaftWord32RangeTypeVerify(Tagged<TurboshaftWord32RangeType> o, Isolate* isolate);
  static void TurboshaftWord32SetTypeVerify(Tagged<TurboshaftWord32SetType> o, Isolate* isolate);
  static void TurboshaftWord64TypeVerify(Tagged<TurboshaftWord64Type> o, Isolate* isolate);
  static void TurboshaftWord64RangeTypeVerify(Tagged<TurboshaftWord64RangeType> o, Isolate* isolate);
  static void TurboshaftWord64SetTypeVerify(Tagged<TurboshaftWord64SetType> o, Isolate* isolate);
  static void TurboshaftFloat64TypeVerify(Tagged<TurboshaftFloat64Type> o, Isolate* isolate);
  static void TurboshaftFloat64RangeTypeVerify(Tagged<TurboshaftFloat64RangeType> o, Isolate* isolate);
  static void TurboshaftFloat64SetTypeVerify(Tagged<TurboshaftFloat64SetType> o, Isolate* isolate);
  static void InternalClassVerify(Tagged<InternalClass> o, Isolate* isolate);
  static void SmiPairVerify(Tagged<SmiPair> o, Isolate* isolate);
  static void SmiBoxVerify(Tagged<SmiBox> o, Isolate* isolate);
  static void ExportedSubClassBaseVerify(Tagged<ExportedSubClassBase> o, Isolate* isolate);
  static void ExportedSubClassVerify(Tagged<ExportedSubClass> o, Isolate* isolate);
  static void AbstractInternalClassVerify(Tagged<AbstractInternalClass> o, Isolate* isolate);
  static void AbstractInternalClassSubclass1Verify(Tagged<AbstractInternalClassSubclass1> o, Isolate* isolate);
  static void AbstractInternalClassSubclass2Verify(Tagged<AbstractInternalClassSubclass2> o, Isolate* isolate);
  static void InternalClassWithStructElementsVerify(Tagged<InternalClassWithStructElements> o, Isolate* isolate);
  static void ExportedSubClass2Verify(Tagged<ExportedSubClass2> o, Isolate* isolate);
  static void SortStateVerify(Tagged<SortState> o, Isolate* isolate);
  static void JSV8BreakIteratorVerify(Tagged<JSV8BreakIterator> o, Isolate* isolate);
  static void JSCollatorVerify(Tagged<JSCollator> o, Isolate* isolate);
  static void JSDateTimeFormatVerify(Tagged<JSDateTimeFormat> o, Isolate* isolate);
  static void JSDisplayNamesVerify(Tagged<JSDisplayNames> o, Isolate* isolate);
  static void JSDurationFormatVerify(Tagged<JSDurationFormat> o, Isolate* isolate);
  static void JSListFormatVerify(Tagged<JSListFormat> o, Isolate* isolate);
  static void JSLocaleVerify(Tagged<JSLocale> o, Isolate* isolate);
  static void JSNumberFormatVerify(Tagged<JSNumberFormat> o, Isolate* isolate);
  static void JSPluralRulesVerify(Tagged<JSPluralRules> o, Isolate* isolate);
  static void JSRelativeTimeFormatVerify(Tagged<JSRelativeTimeFormat> o, Isolate* isolate);
  static void JSSegmentIteratorVerify(Tagged<JSSegmentIterator> o, Isolate* isolate);
  static void JSSegmentDataObjectVerify(Tagged<JSSegmentDataObject> o, Isolate* isolate);
  static void JSSegmentDataObjectWithIsWordLikeVerify(Tagged<JSSegmentDataObjectWithIsWordLike> o, Isolate* isolate);
  static void JSSegmenterVerify(Tagged<JSSegmenter> o, Isolate* isolate);
  static void JSSegmentsVerify(Tagged<JSSegments> o, Isolate* isolate);
  static void WasmImportDataVerify(Tagged<WasmImportData> o, Isolate* isolate);
  static void WasmInstanceObjectVerify(Tagged<WasmInstanceObject> o, Isolate* isolate);
  static void WasmFastApiCallDataVerify(Tagged<WasmFastApiCallData> o, Isolate* isolate);
  static void WasmInternalFunctionVerify(Tagged<WasmInternalFunction> o, Isolate* isolate);
  static void WasmFunctionDataVerify(Tagged<WasmFunctionData> o, Isolate* isolate);
  static void WasmExportedFunctionDataVerify(Tagged<WasmExportedFunctionData> o, Isolate* isolate);
  static void WasmJSFunctionDataVerify(Tagged<WasmJSFunctionData> o, Isolate* isolate);
  static void WasmCapiFunctionDataVerify(Tagged<WasmCapiFunctionData> o, Isolate* isolate);
  static void WasmResumeDataVerify(Tagged<WasmResumeData> o, Isolate* isolate);
  static void WasmContinuationObjectVerify(Tagged<WasmContinuationObject> o, Isolate* isolate);
  static void WasmSuspenderObjectVerify(Tagged<WasmSuspenderObject> o, Isolate* isolate);
  static void WasmExceptionTagVerify(Tagged<WasmExceptionTag> o, Isolate* isolate);
  static void WasmModuleObjectVerify(Tagged<WasmModuleObject> o, Isolate* isolate);
  static void WasmTableObjectVerify(Tagged<WasmTableObject> o, Isolate* isolate);
  static void WasmMemoryObjectVerify(Tagged<WasmMemoryObject> o, Isolate* isolate);
  static void WasmGlobalObjectVerify(Tagged<WasmGlobalObject> o, Isolate* isolate);
  static void WasmTagObjectVerify(Tagged<WasmTagObject> o, Isolate* isolate);
  static void AsmWasmDataVerify(Tagged<AsmWasmData> o, Isolate* isolate);
  static void WasmTypeInfoVerify(Tagged<WasmTypeInfo> o, Isolate* isolate);
  static void WasmObjectVerify(Tagged<WasmObject> o, Isolate* isolate);
  static void WasmStructVerify(Tagged<WasmStruct> o, Isolate* isolate);
  static void WasmArrayVerify(Tagged<WasmArray> o, Isolate* isolate);
  static void WasmStringViewIterVerify(Tagged<WasmStringViewIter> o, Isolate* isolate);
  static void WasmSuspendingObjectVerify(Tagged<WasmSuspendingObject> o, Isolate* isolate);
};
}  // namespace internal
}  // namespace v8
#endif  // VERIFY_HEAP
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_H_
