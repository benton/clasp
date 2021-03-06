#ifdef DECLARE_FORWARDS
namespace asttooling {
class DerivableSyntaxOnlyAction;
class DerivableASTFrontendAction;
class DerivableMatchCallback;
class DerivableFrontendActionFactory;
class Message;
class AstVisitor_O;
class ErrorContent;
class ParserValue;
class ContextFrame;
namespace RegMap {
class RegistryMaps;
class SymbolMatcherDescriptorPair;
};
namespace internal {
class FreeFuncMatcherDescriptor;
class FixedArgCountMatcherDescriptor;
class OverloadedMatcherDescriptor;
class VariadicOperatorMatcherDescriptor;
};
};
namespace cffi {
class Pointer_O;
};
namespace clbind {
class DummyCreator;
class ClassRep_O;
class ClassRegistry_O;
namespace detail {
class class_map;
};
};
namespace llvmo {
class DataLayoutPass_O;
class AtomicRMWInst_O;
class FunctionPass_O;
class BlockAddress_O;
class Argument_O;
class DIDerivedType_O;
class ModulePass_O;
class DIArray_O;
class Value_O;
class IRBuilderBase_O;
class LandingPadInst_O;
class GlobalValue_O;
class DIBasicType_O;
class DISubprogram_O;
class ConstantArray_O;
class Instruction_O;
class PHINode_O;
class UnreachableInst_O;
class ValueAsMetadata_O;
class ConstantInt_O;
class ConstantDataSequential_O;
class DIBuilder_O;
class SwitchInst_O;
class CallInst_O;
class ConstantStruct_O;
class SequentialType_O;
class User_O;
class Metadata_O;
class DILexicalBlock_O;
class VectorType_O;
class DICompileUnit_O;
class DebugLoc_O;
class Attribute_O;
class IntegerType_O;
class ConstantDataArray_O;
class ExecutionEngine_O;
class StructType_O;
class ImmutablePass_O;
class Constant_O;
class APFloat_O;
class LoadInst_O;
class ConstantFP_O;
class PassManagerBuilder_O;
class DataLayout_O;
class Triple_O;
class ReturnInst_O;
class APInt_O;
class LLVMTargetMachine_O;
class DIDescriptor_O;
class MDNode_O;
class DIType_O;
class DISubroutineType_O;
class TargetLibraryInfo_O;
class ResumeInst_O;
class StoreInst_O;
class IRBuilder_O;
class PassManagerBase_O;
class GlobalVariable_O;
class TargetMachine_O;
class FunctionPassManager_O;
class UnaryInstruction_O;
class BranchInst_O;
class DICompositeType_O;
class PointerType_O;
class TargetOptions_O;
class DITypeArray_O;
class InsertPoint_O;
class InvokeInst_O;
class Function_O;
class AttributeSet_O;
class PassManager_O;
class CompositeType_O;
class BasicBlock_O;
class AllocaInst_O;
class AtomicCmpXchgInst_O;
class Type_O;
class ArrayType_O;
class NamedMDNode_O;
class UndefValue_O;
class TerminatorInst_O;
class Linker_O;
class Pass_O;
class DIFile_O;
class MDString_O;
class MCSubtargetInfo_O;
class DebugInfo_O;
class Module_O;
class EngineBuilder_O;
class ConstantPointerNull_O;
class IndirectBrInst_O;
class CompiledClosure;
class DIScope_O;
class FenceInst_O;
class TargetSubtargetInfo_O;
class LLVMContext_O;
class ConstantExpr_O;
class FunctionType_O;
class Target_O;
class VAArgInst_O;
};
namespace core {
class MultiStringBuffer_O;
class HashTableEq_O;
class VectorStepper;
class FileStream_O;
class BitVector_O;
class InterpretedClosure;
class Complex_O;
class ArrayObjects_O;
class CompiledFunction_O;
class Bignum_O;
class UnwindProtectEnvironment_O;
class ReadTable_O;
class Number_O;
class SymbolMacroletEnvironment_O;
class SingleDispatchGenericFunction_O;
class FileStatus_O;
class Real_O;
class WeakHashTable_O;
class SpecialForm_O;
class AnsiStream_O;
class Rational_O;
class ConcatenatedStream_O;
class CoreExposer;
class Str_O;
class ActivationFrame_O;
class Environment_O;
class Array_O;
class StringStream_O;
class KeywordArgument;
class TagbodyFrame_O;
class SingleDispatchMethod_O;
class SexpSaveArchive_O;
class RandomState_O;
class UserData_O;
class StdClass_O;
class FunctionContainerEnvironment_O;
class HashTableEqualp_O;
class InstanceClosure;
class StructureClass_O;
class Integer_O;
class FunctionValueEnvironment_O;
class RegexMatch_O;
class WeakPointer_O;
class VaList_dummy_O;
class ValueFrame_O;
class RuntimeVisibleEnvironment_O;
class StandardObject_O;
class SimpleBitVector_O;
class ExternalObject_O;
class LoadTimeValues_O;
class SynonymStream_O;
class VectorDisplaced_O;
class String_O;
class Binder_O;
class LeafSNode_O;
class BitVectorWithFillPtr_O;
class IntArray_O;
class InstanceCreator;
class SourceManager_O;
class SaveArchive_O;
class Record_O;
class StackValueEnvironment_O;
class Specializer_O;
class Null_O;
class T_O;
class LightUserData_O;
class Symbol_O;
class DoubleFloat_O;
class SourcePosInfo_O;
class VectorObjectsWithFillPtr_O;
class RequiredArgument;
class Float_O;
class SymbolClassPair;
class ConsStepper;
class MacroClosure;
class SymbolStorage;
class BlockEnvironment_O;
class LongFloat_O;
class Regex_O;
class StandardClass_O;
class PosixTimeDuration_O;
class SymbolToEnumConverter_O;
class EchoStream_O;
class CandoException_O;
class DynamicBinding;
class StringInputStream_O;
class SingleDispatchEffectiveMethodFunction_O;
class BranchSNode_O;
class Stream_O;
class Reader_O;
class Cons_O;
class Archive_O;
class HashTable_O;
class MacroletEnvironment_O;
class CxxObject_O;
class WeakKeyMapping_O;
class Metaobject_O;
class ArrayDisplaced_O;
class LambdaListHandler_O;
class HashTableEql_O;
class ForwardReferencedClass_O;
class SourceFileInfo_O;
class SNode_O;
class Path_O;
class Vector_O;
class StringOutputStream_O;
class AuxArgument;
class SexpLoadArchive_O;
class DirectoryIterator_O;
class SingleFloat_dummy_O;
class CxxClass_O;
class BuiltInClass_O;
class ValueEnvironment_O;
class StructureObject_O;
class StrWithFillPtr_O;
class InvocationHistoryFrameIterator_O;
class IOStreamStream_O;
class Cache;
class TagbodyEnvironment_O;
class CompileTimeEnvironment_O;
class Fixnum_dummy_O;
class Package_O;
class RecursiveDirectoryIterator_O;
class IOFileStream_O;
class TwoWayStream_O;
class FunctionFrame_O;
class FuncallableStandardClass_O;
class Class_O;
class DirectoryEntry_O;
class Character_dummy_O;
class HashTableEqual_O;
class Function_O;
class Pointer_O;
class LogicalPathname_O;
class SmallMultimap_O;
class OptionalArgument;
class WeakKeyHashTable_O;
class ForeignData_O;
class CacheRecord;
class Instance_O;
class BroadcastStream_O;
class CatchEnvironment_O;
class LexicalEnvironment_O;
class Pathname_O;
class SingleDispatchGenericFunctionClosure;
class PosixTime_O;
class SmallMap_O;
class ShortFloat_O;
class Lisp_O;
class ExceptionEntry;
class GlueEnvironment_O;
class VectorObjects_O;
class Ratio_O;
class LoadArchive_O;
};
#endif // DECLARE_FORWARDS
#if defined(GC_ENUM)
enum { KIND_null = 0,
       KIND_FIXNUM = 1,
       KIND_SINGLE_FLOAT = 2,
       KIND_CHARACTER = 3,
       KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps = 4,
       KIND_ROOTCLASSALLOC_clbind__detail__class_map = 5,
       KIND_TEMPLATED_CLASSALLOC_core__Creator = 6,
       KIND_CLASSALLOC_clbind__DummyCreator = 7,
       KIND_CLASSALLOC_core__InstanceCreator = 8,
       KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator = 9,
       KIND_BOOTSTRAP_core__T_O = 10,
       KIND_LISPALLOC_core__MultiStringBuffer_O = 11,
       KIND_LISPALLOC_core__ReadTable_O = 12,
       KIND_LISPALLOC_core__Number_O = 13,
       KIND_LISPALLOC_core__Complex_O = 14,
       KIND_LISPALLOC_core__Real_O = 15,
       KIND_LISPALLOC_core__Rational_O = 16,
       KIND_LISPALLOC_core__Integer_O = 17,
       KIND_LISPALLOC_core__Bignum_O = 18,
       KIND_LISPALLOC_core__Fixnum_dummy_O = 19,
       KIND_LISPALLOC_core__Ratio_O = 20,
       KIND_LISPALLOC_core__Float_O = 21,
       KIND_LISPALLOC_core__DoubleFloat_O = 22,
       KIND_LISPALLOC_core__LongFloat_O = 23,
       KIND_LISPALLOC_core__SingleFloat_dummy_O = 24,
       KIND_LISPALLOC_core__ShortFloat_O = 25,
       KIND_LISPALLOC_core__FileStatus_O = 26,
       KIND_LISPALLOC_core__WeakHashTable_O = 27,
       KIND_LISPALLOC_core__WeakKeyHashTable_O = 28,
       KIND_LISPALLOC_core__Environment_O = 29,
       KIND_LISPALLOC_core__ActivationFrame_O = 30,
       KIND_LISPALLOC_core__TagbodyFrame_O = 31,
       KIND_LISPALLOC_core__ValueFrame_O = 32,
       KIND_LISPALLOC_core__FunctionFrame_O = 33,
       KIND_LISPALLOC_core__LexicalEnvironment_O = 34,
       KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O = 35,
       KIND_LISPALLOC_core__FunctionValueEnvironment_O = 36,
       KIND_LISPALLOC_core__ValueEnvironment_O = 37,
       KIND_LISPALLOC_core__TagbodyEnvironment_O = 38,
       KIND_LISPALLOC_core__CompileTimeEnvironment_O = 39,
       KIND_LISPALLOC_core__UnwindProtectEnvironment_O = 40,
       KIND_LISPALLOC_core__SymbolMacroletEnvironment_O = 41,
       KIND_LISPALLOC_core__FunctionContainerEnvironment_O = 42,
       KIND_LISPALLOC_core__StackValueEnvironment_O = 43,
       KIND_LISPALLOC_core__BlockEnvironment_O = 44,
       KIND_LISPALLOC_core__MacroletEnvironment_O = 45,
       KIND_LISPALLOC_core__CatchEnvironment_O = 46,
       KIND_LISPALLOC_core__GlueEnvironment_O = 47,
       KIND_LISPALLOC_core__Array_O = 48,
       KIND_LISPALLOC_core__ArrayObjects_O = 49,
       KIND_LISPALLOC_core__ArrayDisplaced_O = 50,
       KIND_LISPALLOC_core__Vector_O = 51,
       KIND_LISPALLOC_core__BitVector_O = 52,
       KIND_LISPALLOC_core__SimpleBitVector_O = 53,
       KIND_LISPALLOC_core__BitVectorWithFillPtr_O = 54,
       KIND_LISPALLOC_core__VectorDisplaced_O = 55,
       KIND_LISPALLOC_core__String_O = 56,
       KIND_BOOTSTRAP_core__Str_O = 57,
       KIND_LISPALLOC_core__StrWithFillPtr_O = 58,
       KIND_LISPALLOC_core__VectorObjects_O = 59,
       KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O = 60,
       KIND_LISPALLOC_core__SingleDispatchMethod_O = 61,
       KIND_LISPALLOC_core__RandomState_O = 62,
       KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O = 63,
       KIND_LISPALLOC_llvmo__DebugLoc_O = 64,
       KIND_LISPALLOC_llvmo__Attribute_O = 65,
       KIND_LISPALLOC_core__RegexMatch_O = 66,
       KIND_LISPALLOC_core__WeakPointer_O = 67,
       KIND_LISPALLOC_core__VaList_dummy_O = 68,
       KIND_BOOTSTRAP_core__StandardObject_O = 69,
       KIND_BOOTSTRAP_core__Metaobject_O = 70,
       KIND_BOOTSTRAP_core__Specializer_O = 71,
       KIND_BOOTSTRAP_core__Class_O = 72,
       KIND_BOOTSTRAP_core__StdClass_O = 73,
       KIND_BOOTSTRAP_core__StandardClass_O = 74,
       KIND_LISPALLOC_core__FuncallableStandardClass_O = 75,
       KIND_BOOTSTRAP_core__StructureClass_O = 76,
       KIND_LISPALLOC_core__ForwardReferencedClass_O = 77,
       KIND_LISPALLOC_core__CxxClass_O = 78,
       KIND_BOOTSTRAP_core__BuiltInClass_O = 79,
       KIND_LISPALLOC_clbind__ClassRep_O = 80,
       KIND_LISPALLOC_core__ExternalObject_O = 81,
       KIND_LISPALLOC_llvmo__Value_O = 82,
       KIND_LISPALLOC_llvmo__Argument_O = 83,
       KIND_LISPALLOC_llvmo__User_O = 84,
       KIND_LISPALLOC_llvmo__Instruction_O = 85,
       KIND_LISPALLOC_llvmo__AtomicRMWInst_O = 86,
       KIND_LISPALLOC_llvmo__LandingPadInst_O = 87,
       KIND_LISPALLOC_llvmo__PHINode_O = 88,
       KIND_LISPALLOC_llvmo__CallInst_O = 89,
       KIND_LISPALLOC_llvmo__StoreInst_O = 90,
       KIND_LISPALLOC_llvmo__UnaryInstruction_O = 91,
       KIND_LISPALLOC_llvmo__LoadInst_O = 92,
       KIND_LISPALLOC_llvmo__AllocaInst_O = 93,
       KIND_LISPALLOC_llvmo__VAArgInst_O = 94,
       KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O = 95,
       KIND_LISPALLOC_llvmo__TerminatorInst_O = 96,
       KIND_LISPALLOC_llvmo__UnreachableInst_O = 97,
       KIND_LISPALLOC_llvmo__SwitchInst_O = 98,
       KIND_LISPALLOC_llvmo__ReturnInst_O = 99,
       KIND_LISPALLOC_llvmo__ResumeInst_O = 100,
       KIND_LISPALLOC_llvmo__BranchInst_O = 101,
       KIND_LISPALLOC_llvmo__InvokeInst_O = 102,
       KIND_LISPALLOC_llvmo__IndirectBrInst_O = 103,
       KIND_LISPALLOC_llvmo__FenceInst_O = 104,
       KIND_LISPALLOC_llvmo__Constant_O = 105,
       KIND_LISPALLOC_llvmo__BlockAddress_O = 106,
       KIND_LISPALLOC_llvmo__GlobalValue_O = 107,
       KIND_LISPALLOC_llvmo__GlobalVariable_O = 108,
       KIND_LISPALLOC_llvmo__Function_O = 109,
       KIND_LISPALLOC_llvmo__ConstantArray_O = 110,
       KIND_LISPALLOC_llvmo__ConstantInt_O = 111,
       KIND_LISPALLOC_llvmo__ConstantDataSequential_O = 112,
       KIND_LISPALLOC_llvmo__ConstantDataArray_O = 113,
       KIND_LISPALLOC_llvmo__ConstantStruct_O = 114,
       KIND_LISPALLOC_llvmo__ConstantFP_O = 115,
       KIND_LISPALLOC_llvmo__UndefValue_O = 116,
       KIND_LISPALLOC_llvmo__ConstantPointerNull_O = 117,
       KIND_LISPALLOC_llvmo__ConstantExpr_O = 118,
       KIND_LISPALLOC_llvmo__BasicBlock_O = 119,
       KIND_LISPALLOC_llvmo__IRBuilderBase_O = 120,
       KIND_LISPALLOC_llvmo__IRBuilder_O = 121,
       KIND_LISPALLOC_llvmo__DIBuilder_O = 122,
       KIND_LISPALLOC_llvmo__Metadata_O = 123,
       KIND_LISPALLOC_llvmo__ValueAsMetadata_O = 124,
       KIND_LISPALLOC_llvmo__MDNode_O = 125,
       KIND_LISPALLOC_llvmo__MDString_O = 126,
       KIND_LISPALLOC_llvmo__ExecutionEngine_O = 127,
       KIND_LISPALLOC_llvmo__APFloat_O = 128,
       KIND_LISPALLOC_llvmo__PassManagerBuilder_O = 129,
       KIND_LISPALLOC_llvmo__DataLayout_O = 130,
       KIND_LISPALLOC_llvmo__Triple_O = 131,
       KIND_LISPALLOC_llvmo__APInt_O = 132,
       KIND_LISPALLOC_llvmo__PassManagerBase_O = 133,
       KIND_LISPALLOC_llvmo__FunctionPassManager_O = 134,
       KIND_LISPALLOC_llvmo__PassManager_O = 135,
       KIND_LISPALLOC_llvmo__TargetMachine_O = 136,
       KIND_LISPALLOC_llvmo__LLVMTargetMachine_O = 137,
       KIND_LISPALLOC_llvmo__TargetOptions_O = 138,
       KIND_LISPALLOC_llvmo__Type_O = 139,
       KIND_LISPALLOC_llvmo__IntegerType_O = 140,
       KIND_LISPALLOC_llvmo__CompositeType_O = 141,
       KIND_LISPALLOC_llvmo__SequentialType_O = 142,
       KIND_LISPALLOC_llvmo__VectorType_O = 143,
       KIND_LISPALLOC_llvmo__PointerType_O = 144,
       KIND_LISPALLOC_llvmo__ArrayType_O = 145,
       KIND_LISPALLOC_llvmo__StructType_O = 146,
       KIND_LISPALLOC_llvmo__FunctionType_O = 147,
       KIND_LISPALLOC_llvmo__NamedMDNode_O = 148,
       KIND_LISPALLOC_llvmo__Linker_O = 149,
       KIND_LISPALLOC_llvmo__Pass_O = 150,
       KIND_LISPALLOC_llvmo__FunctionPass_O = 151,
       KIND_LISPALLOC_llvmo__ModulePass_O = 152,
       KIND_LISPALLOC_llvmo__ImmutablePass_O = 153,
       KIND_LISPALLOC_llvmo__DataLayoutPass_O = 154,
       KIND_LISPALLOC_llvmo__TargetLibraryInfo_O = 155,
       KIND_LISPALLOC_llvmo__MCSubtargetInfo_O = 156,
       KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O = 157,
       KIND_LISPALLOC_llvmo__Module_O = 158,
       KIND_LISPALLOC_llvmo__EngineBuilder_O = 159,
       KIND_LISPALLOC_core__ForeignData_O = 160,
       KIND_LISPALLOC_llvmo__LLVMContext_O = 161,
       KIND_LISPALLOC_llvmo__Target_O = 162,
       KIND_LISPALLOC_core__LoadTimeValues_O = 163,
       KIND_LISPALLOC_core__Binder_O = 164,
       KIND_LISPALLOC_core__IntArray_O = 165,
       KIND_LISPALLOC_core__SourceManager_O = 166,
       KIND_LISPALLOC_core__Record_O = 167,
       KIND_LISPALLOC_core__LightUserData_O = 168,
       KIND_LISPALLOC_core__UserData_O = 169,
       KIND_BOOTSTRAP_core__Symbol_O = 170,
       KIND_LISPALLOC_core__Null_O = 171,
       KIND_LISPALLOC_core__SourcePosInfo_O = 172,
       KIND_TEMPLATED_LISPALLOC_core__Iterator_O = 173,
       KIND_LISPALLOC_core__DirectoryIterator_O = 174,
       KIND_LISPALLOC_core__RecursiveDirectoryIterator_O = 175,
       KIND_LISPALLOC_core__Regex_O = 176,
       KIND_LISPALLOC_core__PosixTimeDuration_O = 177,
       KIND_LISPALLOC_core__SymbolToEnumConverter_O = 178,
       KIND_LISPALLOC_core__CandoException_O = 179,
       KIND_LISPALLOC_core__Stream_O = 180,
       KIND_LISPALLOC_core__AnsiStream_O = 181,
       KIND_LISPALLOC_core__FileStream_O = 182,
       KIND_LISPALLOC_core__IOStreamStream_O = 183,
       KIND_LISPALLOC_core__IOFileStream_O = 184,
       KIND_LISPALLOC_core__ConcatenatedStream_O = 185,
       KIND_LISPALLOC_core__StringStream_O = 186,
       KIND_LISPALLOC_core__StringInputStream_O = 187,
       KIND_LISPALLOC_core__StringOutputStream_O = 188,
       KIND_LISPALLOC_core__SynonymStream_O = 189,
       KIND_LISPALLOC_core__EchoStream_O = 190,
       KIND_LISPALLOC_core__TwoWayStream_O = 191,
       KIND_LISPALLOC_core__BroadcastStream_O = 192,
       KIND_LISPALLOC_core__Reader_O = 193,
       KIND_LISPALLOC_core__Cons_O = 194,
       KIND_LISPALLOC_core__Archive_O = 195,
       KIND_LISPALLOC_core__SaveArchive_O = 196,
       KIND_LISPALLOC_core__SexpSaveArchive_O = 197,
       KIND_LISPALLOC_core__LoadArchive_O = 198,
       KIND_LISPALLOC_core__SexpLoadArchive_O = 199,
       KIND_LISPALLOC_core__HashTable_O = 200,
       KIND_LISPALLOC_core__HashTableEq_O = 201,
       KIND_LISPALLOC_core__HashTableEqualp_O = 202,
       KIND_LISPALLOC_core__HashTableEql_O = 203,
       KIND_LISPALLOC_core__HashTableEqual_O = 204,
       KIND_LISPALLOC_cffi__Pointer_O = 205,
       KIND_LISPALLOC_core__CxxObject_O = 206,
       KIND_LISPALLOC_core__WeakKeyMapping_O = 207,
       KIND_LISPALLOC_core__LambdaListHandler_O = 208,
       KIND_LISPALLOC_llvmo__InsertPoint_O = 209,
       KIND_LISPALLOC_core__SourceFileInfo_O = 210,
       KIND_LISPALLOC_core__SNode_O = 211,
       KIND_LISPALLOC_core__LeafSNode_O = 212,
       KIND_LISPALLOC_core__BranchSNode_O = 213,
       KIND_LISPALLOC_core__Path_O = 214,
       KIND_LISPALLOC_asttooling__AstVisitor_O = 215,
       KIND_LISPALLOC_llvmo__AttributeSet_O = 216,
       KIND_LISPALLOC_core__StructureObject_O = 217,
       KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O = 218,
       KIND_LISPALLOC_core__Package_O = 219,
       KIND_LISPALLOC_core__DirectoryEntry_O = 220,
       KIND_LISPALLOC_core__Character_dummy_O = 221,
       KIND_LISPALLOC_core__Function_O = 222,
       KIND_LISPALLOC_core__CompiledFunction_O = 223,
       KIND_LISPALLOC_core__SingleDispatchGenericFunction_O = 224,
       KIND_LISPALLOC_core__SpecialForm_O = 225,
       KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O = 226,
       KIND_LISPALLOC_core__Instance_O = 227,
       KIND_LISPALLOC_core__Pointer_O = 228,
       KIND_LISPALLOC_clbind__ClassRegistry_O = 229,
       KIND_LISPALLOC_llvmo__DebugInfo_O = 230,
       KIND_LISPALLOC_llvmo__DIDerivedType_O = 231,
       KIND_LISPALLOC_llvmo__DIArray_O = 232,
       KIND_LISPALLOC_llvmo__DIBasicType_O = 233,
       KIND_LISPALLOC_llvmo__DISubprogram_O = 234,
       KIND_LISPALLOC_llvmo__DILexicalBlock_O = 235,
       KIND_LISPALLOC_llvmo__DICompileUnit_O = 236,
       KIND_LISPALLOC_llvmo__DIDescriptor_O = 237,
       KIND_LISPALLOC_llvmo__DIType_O = 238,
       KIND_LISPALLOC_llvmo__DISubroutineType_O = 239,
       KIND_LISPALLOC_llvmo__DICompositeType_O = 240,
       KIND_LISPALLOC_llvmo__DITypeArray_O = 241,
       KIND_LISPALLOC_llvmo__DIFile_O = 242,
       KIND_LISPALLOC_llvmo__DIScope_O = 243,
       KIND_LISPALLOC_core__SmallMultimap_O = 244,
       KIND_LISPALLOC_core__Pathname_O = 245,
       KIND_LISPALLOC_core__LogicalPathname_O = 246,
       KIND_LISPALLOC_core__PosixTime_O = 247,
       KIND_LISPALLOC_core__SmallMap_O = 248,
       KIND_CLASSALLOC_core__Cache = 249,
       KIND_ROOTCLASSALLOC_core__Lisp_O = 250,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__ = 251,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_ = 252,
       KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_ = 253,
       KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure = 254,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__ = 255,
       KIND_GCSTRING_gctools__GCString_moveable_char_ = 256,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_ = 257,
       KIND_CLASSALLOC_llvmo__CompiledClosure = 258,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__ = 259,
       KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor = 260,
       KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___ = 261,
       KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor = 262,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_ = 263,
       KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_ = 264,
       KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_ = 265,
       KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor = 266,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_ = 267,
       KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor = 268,
       KIND_CLASSALLOC_core__MacroClosure = 269,
       KIND_CLASSALLOC_core__ConsStepper = 270,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_ = 271,
       KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_ = 272,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__ = 273,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_ = 274,
       KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_ = 275,
       KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___ = 276,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_ = 277,
       KIND_CLASSALLOC_core__InstanceClosure = 278,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__ = 279,
       KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory = 280,
       KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_ = 281,
       KIND_LISPALLOC_asttooling__DerivableMatchCallback = 282,
       KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_ = 283,
       KIND_LISPALLOC_asttooling__DerivableASTFrontendAction = 284,
       KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_ = 285,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__ = 286,
       KIND_CLASSALLOC_core__CoreExposer = 287,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__ = 288,
       KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction = 289,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__ = 290,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_ = 291,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__ = 292,
       KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure = 293,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_ = 294,
       KIND_CLASSALLOC_core__InterpretedClosure = 295,
       KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_ = 296,
       KIND_CLASSALLOC_core__VectorStepper = 297,
       KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__ = 298,
       KIND_max = 298
}
#endif // defined(GC_ENUM)
#if defined(GC_DYNAMIC_CAST)
template <typename FP>
struct Cast<llvmo::VAArgInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 94 94
    return (kindVal == 94);
  };
};
template <typename FP>
struct Cast<core::LoadArchive_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 198 199
    return ((198 <= kindVal) && (kindVal <= 199));
  };
};
template <typename FP>
struct Cast<core::Ratio_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 20 20
    return (kindVal == 20);
  };
};
template <typename FP>
struct Cast<core::VectorObjects_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 59 60
    return ((59 <= kindVal) && (kindVal <= 60));
  };
};
template <typename FP>
struct Cast<core::GlueEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 47 47
    return (kindVal == 47);
  };
};
template <typename FP>
struct Cast<llvmo::Target_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 162 162
    return (kindVal == 162);
  };
};
template <typename FP>
struct Cast<llvmo::FunctionType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 147 147
    return (kindVal == 147);
  };
};
template <typename FP>
struct Cast<llvmo::ConstantExpr_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 118 118
    return (kindVal == 118);
  };
};
template <typename FP>
struct Cast<llvmo::LLVMContext_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 161 161
    return (kindVal == 161);
  };
};
template <typename FP>
struct Cast<core::Lisp_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 250 250
    return (kindVal == 250);
  };
};
template <typename FP>
struct Cast<llvmo::TargetSubtargetInfo_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 157 157
    return (kindVal == 157);
  };
};
template <typename FP>
struct Cast<core::ShortFloat_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 25 25
    return (kindVal == 25);
  };
};
template <typename FP>
struct Cast<core::SmallMap_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 248 248
    return (kindVal == 248);
  };
};
template <typename FP>
struct Cast<llvmo::FenceInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 104 104
    return (kindVal == 104);
  };
};
template <typename FP>
struct Cast<core::PosixTime_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 247 247
    return (kindVal == 247);
  };
};
template <typename FP>
struct Cast<core::Pathname_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 245 246
    return ((245 <= kindVal) && (kindVal <= 246));
  };
};
template <typename FP>
struct Cast<core::LexicalEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 34 46
    return ((34 <= kindVal) && (kindVal <= 46));
  };
};
template <typename FP>
struct Cast<core::CatchEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 46 46
    return (kindVal == 46);
  };
};
template <typename FP>
struct Cast<core::BroadcastStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 192 192
    return (kindVal == 192);
  };
};
template <typename FP>
struct Cast<core::Instance_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 227 227
    return (kindVal == 227);
  };
};
template <typename FP>
struct Cast<llvmo::DIScope_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 243 243
    return (kindVal == 243);
  };
};
template <typename FP>
struct Cast<core::ForeignData_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 160 160
    return (kindVal == 160);
  };
};
template <typename FP>
struct Cast<core::WeakKeyHashTable_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 28 28
    return (kindVal == 28);
  };
};
template <typename FP>
struct Cast<llvmo::IndirectBrInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 103 103
    return (kindVal == 103);
  };
};
template <typename FP>
struct Cast<llvmo::ConstantPointerNull_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 117 117
    return (kindVal == 117);
  };
};
template <typename FP>
struct Cast<llvmo::EngineBuilder_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 159 159
    return (kindVal == 159);
  };
};
template <typename FP>
struct Cast<llvmo::Module_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 158 158
    return (kindVal == 158);
  };
};
template <typename FP>
struct Cast<core::SmallMultimap_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 244 244
    return (kindVal == 244);
  };
};
template <typename FP>
struct Cast<core::LogicalPathname_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 246 246
    return (kindVal == 246);
  };
};
template <typename FP>
struct Cast<llvmo::DebugInfo_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 230 243
    return ((230 <= kindVal) && (kindVal <= 243));
  };
};
template <typename FP>
struct Cast<clbind::ClassRegistry_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 229 229
    return (kindVal == 229);
  };
};
template <typename FP>
struct Cast<core::Pointer_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 228 228
    return (kindVal == 228);
  };
};
template <typename FP>
struct Cast<core::Function_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 222 227
    return ((222 <= kindVal) && (kindVal <= 227));
  };
};
template <typename FP>
struct Cast<core::HashTableEqual_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 204 204
    return (kindVal == 204);
  };
};
template <typename FP>
struct Cast<core::Character_dummy_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 221 221
    return (kindVal == 221);
  };
};
template <typename FP>
struct Cast<core::DirectoryEntry_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 220 220
    return (kindVal == 220);
  };
};
template <typename FP>
struct Cast<clbind::ConstructorCreator *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 9 9
    return (kindVal == 9);
  };
};
template <typename FP>
struct Cast<llvmo::MCSubtargetInfo_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 156 157
    return ((156 <= kindVal) && (kindVal <= 157));
  };
};
template <typename FP>
struct Cast<llvmo::MDString_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 126 126
    return (kindVal == 126);
  };
};
template <typename FP>
struct Cast<core::Class_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 72 80
    return ((72 <= kindVal) && (kindVal <= 80));
  };
};
template <typename FP>
struct Cast<core::FuncallableStandardClass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 75 75
    return (kindVal == 75);
  };
};
template <typename FP>
struct Cast<llvmo::DIFile_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 242 242
    return (kindVal == 242);
  };
};
template <typename FP>
struct Cast<llvmo::Pass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 150 155
    return ((150 <= kindVal) && (kindVal <= 155));
  };
};
template <typename FP>
struct Cast<llvmo::Linker_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 149 149
    return (kindVal == 149);
  };
};
template <typename FP>
struct Cast<llvmo::TerminatorInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 96 103
    return ((96 <= kindVal) && (kindVal <= 103));
  };
};
template <typename FP>
struct Cast<core::FunctionFrame_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 33 33
    return (kindVal == 33);
  };
};
template <typename FP>
struct Cast<llvmo::UndefValue_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 116 116
    return (kindVal == 116);
  };
};
template <typename FP>
struct Cast<core::TwoWayStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 191 191
    return (kindVal == 191);
  };
};
template <typename FP>
struct Cast<core::IOFileStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 184 184
    return (kindVal == 184);
  };
};
template <typename FP>
struct Cast<llvmo::NamedMDNode_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 148 148
    return (kindVal == 148);
  };
};
template <typename FP>
struct Cast<llvmo::ArrayType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 145 145
    return (kindVal == 145);
  };
};
template <typename FP>
struct Cast<core::RecursiveDirectoryIterator_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 175 175
    return (kindVal == 175);
  };
};
template <typename FP>
struct Cast<llvmo::Type_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 139 147
    return ((139 <= kindVal) && (kindVal <= 147));
  };
};
template <typename FP>
struct Cast<llvmo::AtomicCmpXchgInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 95 95
    return (kindVal == 95);
  };
};
template <typename FP>
struct Cast<llvmo::AllocaInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 93 93
    return (kindVal == 93);
  };
};
template <typename FP>
struct Cast<core::Package_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 219 219
    return (kindVal == 219);
  };
};
template <typename FP>
struct Cast<core::Fixnum_dummy_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 19 19
    return (kindVal == 19);
  };
};
template <typename FP>
struct Cast<llvmo::BasicBlock_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 119 119
    return (kindVal == 119);
  };
};
template <typename FP>
struct Cast<llvmo::CompositeType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 141 146
    return ((141 <= kindVal) && (kindVal <= 146));
  };
};
template <typename FP>
struct Cast<core::CompileTimeEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 39 46
    return ((39 <= kindVal) && (kindVal <= 46));
  };
};
template <typename FP>
struct Cast<llvmo::PassManager_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 135 135
    return (kindVal == 135);
  };
};
template <typename FP>
struct Cast<core::Cache *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 249 249
    return (kindVal == 249);
  };
};
template <typename FP>
struct Cast<core::TagbodyEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 38 38
    return (kindVal == 38);
  };
};
template <typename FP>
struct Cast<core::IOStreamStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 183 183
    return (kindVal == 183);
  };
};
template <typename FP>
struct Cast<core::InvocationHistoryFrameIterator_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 218 218
    return (kindVal == 218);
  };
};
template <typename FP>
struct Cast<core::StrWithFillPtr_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 58 58
    return (kindVal == 58);
  };
};
template <typename FP>
struct Cast<core::StructureObject_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 217 217
    return (kindVal == 217);
  };
};
template <typename FP>
struct Cast<core::ValueEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 37 37
    return (kindVal == 37);
  };
};
template <typename FP>
struct Cast<llvmo::AttributeSet_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 216 216
    return (kindVal == 216);
  };
};
template <typename FP>
struct Cast<core::BuiltInClass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 79 80
    return ((79 <= kindVal) && (kindVal <= 80));
  };
};
template <typename FP>
struct Cast<core::CxxClass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 78 78
    return (kindVal == 78);
  };
};
template <typename FP>
struct Cast<core::SingleFloat_dummy_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 24 24
    return (kindVal == 24);
  };
};
template <typename FP>
struct Cast<core::DirectoryIterator_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 174 174
    return (kindVal == 174);
  };
};
template <typename FP>
struct Cast<core::SexpLoadArchive_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 199 199
    return (kindVal == 199);
  };
};
template <typename FP>
struct Cast<core::StringOutputStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 188 188
    return (kindVal == 188);
  };
};
template <typename FP>
struct Cast<asttooling::AstVisitor_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 215 215
    return (kindVal == 215);
  };
};
template <typename FP>
struct Cast<core::Vector_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 51 60
    return ((51 <= kindVal) && (kindVal <= 60));
  };
};
template <typename FP>
struct Cast<core::Path_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 214 214
    return (kindVal == 214);
  };
};
template <typename FP>
struct Cast<llvmo::Function_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 109 109
    return (kindVal == 109);
  };
};
template <typename FP>
struct Cast<llvmo::InvokeInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 102 102
    return (kindVal == 102);
  };
};
template <typename FP>
struct Cast<core::SNode_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 211 213
    return ((211 <= kindVal) && (kindVal <= 213));
  };
};
template <typename FP>
struct Cast<core::SourceFileInfo_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 210 210
    return (kindVal == 210);
  };
};
template <typename FP>
struct Cast<llvmo::InsertPoint_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 209 209
    return (kindVal == 209);
  };
};
template <typename FP>
struct Cast<llvmo::DITypeArray_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 241 241
    return (kindVal == 241);
  };
};
template <typename FP>
struct Cast<core::ForwardReferencedClass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 77 77
    return (kindVal == 77);
  };
};
template <typename FP>
struct Cast<core::HashTableEql_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 203 203
    return (kindVal == 203);
  };
};
template <typename FP>
struct Cast<core::LambdaListHandler_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 208 208
    return (kindVal == 208);
  };
};
template <typename FP>
struct Cast<core::ArrayDisplaced_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 50 50
    return (kindVal == 50);
  };
};
template <typename FP>
struct Cast<llvmo::TargetOptions_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 138 138
    return (kindVal == 138);
  };
};
template <typename FP>
struct Cast<core::Metaobject_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 70 80
    return ((70 <= kindVal) && (kindVal <= 80));
  };
};
template <typename FP>
struct Cast<llvmo::PointerType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 144 144
    return (kindVal == 144);
  };
};
template <typename FP>
struct Cast<core::WeakKeyMapping_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 207 207
    return (kindVal == 207);
  };
};
template <typename FP>
struct Cast<core::CxxObject_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 206 206
    return (kindVal == 206);
  };
};
template <typename FP>
struct Cast<cffi::Pointer_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 205 205
    return (kindVal == 205);
  };
};
template <typename FP>
struct Cast<llvmo::DICompositeType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 240 240
    return (kindVal == 240);
  };
};
template <typename FP>
struct Cast<llvmo::BranchInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 101 101
    return (kindVal == 101);
  };
};
template <typename FP>
struct Cast<core::MacroletEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 45 45
    return (kindVal == 45);
  };
};
template <typename FP>
struct Cast<core::HashTable_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 200 204
    return ((200 <= kindVal) && (kindVal <= 204));
  };
};
template <typename FP>
struct Cast<core::Archive_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 195 199
    return ((195 <= kindVal) && (kindVal <= 199));
  };
};
template <typename FP>
struct Cast<core::Cons_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 194 194
    return (kindVal == 194);
  };
};
template <typename FP>
struct Cast<core::Reader_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 193 193
    return (kindVal == 193);
  };
};
template <typename FP>
struct Cast<core::Stream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 180 192
    return ((180 <= kindVal) && (kindVal <= 192));
  };
};
template <typename FP>
struct Cast<llvmo::UnaryInstruction_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 91 94
    return ((91 <= kindVal) && (kindVal <= 94));
  };
};
template <typename FP>
struct Cast<core::BranchSNode_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 213 213
    return (kindVal == 213);
  };
};
template <typename FP>
struct Cast<llvmo::FunctionPassManager_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 134 134
    return (kindVal == 134);
  };
};
template <typename FP>
struct Cast<core::SingleDispatchEffectiveMethodFunction_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 226 226
    return (kindVal == 226);
  };
};
template <typename FP>
struct Cast<core::StringInputStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 187 187
    return (kindVal == 187);
  };
};
template <typename FP>
struct Cast<llvmo::TargetMachine_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 136 137
    return ((136 <= kindVal) && (kindVal <= 137));
  };
};
template <typename FP>
struct Cast<core::CandoException_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 179 179
    return (kindVal == 179);
  };
};
template <typename FP>
struct Cast<llvmo::GlobalVariable_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 108 108
    return (kindVal == 108);
  };
};
template <typename FP>
struct Cast<core::EchoStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 190 190
    return (kindVal == 190);
  };
};
template <typename FP>
struct Cast<core::SymbolToEnumConverter_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 178 178
    return (kindVal == 178);
  };
};
template <typename FP>
struct Cast<core::PosixTimeDuration_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 177 177
    return (kindVal == 177);
  };
};
template <typename FP>
struct Cast<core::StandardClass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 74 74
    return (kindVal == 74);
  };
};
template <typename FP>
struct Cast<core::Regex_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 176 176
    return (kindVal == 176);
  };
};
template <typename FP>
struct Cast<llvmo::PassManagerBase_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 133 135
    return ((133 <= kindVal) && (kindVal <= 135));
  };
};
template <typename FP>
struct Cast<core::Iterator_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 173 175
    return ((173 <= kindVal) && (kindVal <= 175));
  };
};
template <typename FP>
struct Cast<clbind::ClassRep_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 80 80
    return (kindVal == 80);
  };
};
template <typename FP>
struct Cast<llvmo::IRBuilder_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 121 121
    return (kindVal == 121);
  };
};
template <typename FP>
struct Cast<llvmo::StoreInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 90 90
    return (kindVal == 90);
  };
};
template <typename FP>
struct Cast<core::LongFloat_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 23 23
    return (kindVal == 23);
  };
};
template <typename FP>
struct Cast<core::BlockEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 44 44
    return (kindVal == 44);
  };
};
template <typename FP>
struct Cast<llvmo::ResumeInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 100 100
    return (kindVal == 100);
  };
};
template <typename FP>
struct Cast<llvmo::TargetLibraryInfo_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 155 155
    return (kindVal == 155);
  };
};
template <typename FP>
struct Cast<llvmo::DISubroutineType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 239 239
    return (kindVal == 239);
  };
};
template <typename FP>
struct Cast<llvmo::DIType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 238 238
    return (kindVal == 238);
  };
};
template <typename FP>
struct Cast<core::Float_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 21 25
    return ((21 <= kindVal) && (kindVal <= 25));
  };
};
template <typename FP>
struct Cast<core::VectorObjectsWithFillPtr_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 60 60
    return (kindVal == 60);
  };
};
template <typename FP>
struct Cast<llvmo::MDNode_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 125 125
    return (kindVal == 125);
  };
};
template <typename FP>
struct Cast<core::SourcePosInfo_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 172 172
    return (kindVal == 172);
  };
};
template <typename FP>
struct Cast<llvmo::DIDescriptor_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 237 237
    return (kindVal == 237);
  };
};
template <typename FP>
struct Cast<llvmo::LLVMTargetMachine_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 137 137
    return (kindVal == 137);
  };
};
template <typename FP>
struct Cast<llvmo::APInt_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 132 132
    return (kindVal == 132);
  };
};
template <typename FP>
struct Cast<llvmo::ReturnInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 99 99
    return (kindVal == 99);
  };
};
template <typename FP>
struct Cast<llvmo::Triple_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 131 131
    return (kindVal == 131);
  };
};
template <typename FP>
struct Cast<core::DoubleFloat_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 22 22
    return (kindVal == 22);
  };
};
template <typename FP>
struct Cast<core::Symbol_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 170 171
    return ((170 <= kindVal) && (kindVal <= 171));
  };
};
template <typename FP>
struct Cast<llvmo::DataLayout_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 130 130
    return (kindVal == 130);
  };
};
template <typename FP>
struct Cast<core::LightUserData_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 168 169
    return ((168 <= kindVal) && (kindVal <= 169));
  };
};
template <typename FP>
struct Cast<core::T_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 10 248
    return ((10 <= kindVal) && (kindVal <= 248));
  };
};
template <typename FP>
struct Cast<core::Null_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 171 171
    return (kindVal == 171);
  };
};
template <typename FP>
struct Cast<llvmo::PassManagerBuilder_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 129 129
    return (kindVal == 129);
  };
};
template <typename FP>
struct Cast<core::Creator *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 6 9
    return ((6 <= kindVal) && (kindVal <= 9));
  };
};
template <typename FP>
struct Cast<core::Specializer_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 71 80
    return ((71 <= kindVal) && (kindVal <= 80));
  };
};
template <typename FP>
struct Cast<core::StackValueEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 43 43
    return (kindVal == 43);
  };
};
template <typename FP>
struct Cast<llvmo::ConstantFP_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 115 115
    return (kindVal == 115);
  };
};
template <typename FP>
struct Cast<llvmo::LoadInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 92 92
    return (kindVal == 92);
  };
};
template <typename FP>
struct Cast<llvmo::APFloat_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 128 128
    return (kindVal == 128);
  };
};
template <typename FP>
struct Cast<core::Record_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 167 167
    return (kindVal == 167);
  };
};
template <typename FP>
struct Cast<core::SaveArchive_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 196 197
    return ((196 <= kindVal) && (kindVal <= 197));
  };
};
template <typename FP>
struct Cast<core::SourceManager_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 166 166
    return (kindVal == 166);
  };
};
template <typename FP>
struct Cast<core::InstanceCreator *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 8 8
    return (kindVal == 8);
  };
};
template <typename FP>
struct Cast<core::IntArray_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 165 165
    return (kindVal == 165);
  };
};
template <typename FP>
struct Cast<clbind::detail::class_map *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 5 5
    return (kindVal == 5);
  };
};
template <typename FP>
struct Cast<core::BitVectorWithFillPtr_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 54 54
    return (kindVal == 54);
  };
};
template <typename FP>
struct Cast<core::LeafSNode_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 212 212
    return (kindVal == 212);
  };
};
template <typename FP>
struct Cast<llvmo::Constant_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 105 118
    return ((105 <= kindVal) && (kindVal <= 118));
  };
};
template <typename FP>
struct Cast<core::Binder_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 164 164
    return (kindVal == 164);
  };
};
template <typename FP>
struct Cast<core::String_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 56 58
    return ((56 <= kindVal) && (kindVal <= 58));
  };
};
template <typename FP>
struct Cast<core::VectorDisplaced_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 55 55
    return (kindVal == 55);
  };
};
template <typename FP>
struct Cast<core::SynonymStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 189 189
    return (kindVal == 189);
  };
};
template <typename FP>
struct Cast<core::LoadTimeValues_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 163 163
    return (kindVal == 163);
  };
};
template <typename FP>
struct Cast<core::ExternalObject_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 81 162
    return ((81 <= kindVal) && (kindVal <= 162));
  };
};
template <typename FP>
struct Cast<core::SimpleBitVector_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 53 53
    return (kindVal == 53);
  };
};
template <typename FP>
struct Cast<core::StandardObject_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 69 80
    return ((69 <= kindVal) && (kindVal <= 80));
  };
};
template <typename FP>
struct Cast<llvmo::ImmutablePass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 153 155
    return ((153 <= kindVal) && (kindVal <= 155));
  };
};
template <typename FP>
struct Cast<core::RuntimeVisibleEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 35 38
    return ((35 <= kindVal) && (kindVal <= 38));
  };
};
template <typename FP>
struct Cast<core::ValueFrame_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 32 32
    return (kindVal == 32);
  };
};
template <typename FP>
struct Cast<core::VaList_dummy_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 68 68
    return (kindVal == 68);
  };
};
template <typename FP>
struct Cast<llvmo::StructType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 146 146
    return (kindVal == 146);
  };
};
template <typename FP>
struct Cast<core::WeakPointer_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 67 67
    return (kindVal == 67);
  };
};
template <typename FP>
struct Cast<llvmo::ExecutionEngine_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 127 127
    return (kindVal == 127);
  };
};
template <typename FP>
struct Cast<llvmo::ConstantDataArray_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 113 113
    return (kindVal == 113);
  };
};
template <typename FP>
struct Cast<core::RegexMatch_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 66 66
    return (kindVal == 66);
  };
};
template <typename FP>
struct Cast<core::FunctionValueEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 36 36
    return (kindVal == 36);
  };
};
template <typename FP>
struct Cast<core::Integer_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 17 19
    return ((17 <= kindVal) && (kindVal <= 19));
  };
};
template <typename FP>
struct Cast<core::StructureClass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 76 76
    return (kindVal == 76);
  };
};
template <typename FP>
struct Cast<llvmo::IntegerType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 140 140
    return (kindVal == 140);
  };
};
template <typename FP>
struct Cast<llvmo::Attribute_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 65 65
    return (kindVal == 65);
  };
};
template <typename FP>
struct Cast<core::HashTableEqualp_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 202 202
    return (kindVal == 202);
  };
};
template <typename FP>
struct Cast<llvmo::DebugLoc_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 64 64
    return (kindVal == 64);
  };
};
template <typename FP>
struct Cast<core::FunctionContainerEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 42 42
    return (kindVal == 42);
  };
};
template <typename FP>
struct Cast<llvmo::DICompileUnit_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 236 236
    return (kindVal == 236);
  };
};
template <typename FP>
struct Cast<llvmo::VectorType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 143 143
    return (kindVal == 143);
  };
};
template <typename FP>
struct Cast<core::StdClass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 73 75
    return ((73 <= kindVal) && (kindVal <= 75));
  };
};
template <typename FP>
struct Cast<llvmo::DILexicalBlock_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 235 235
    return (kindVal == 235);
  };
};
template <typename FP>
struct Cast<llvmo::Metadata_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 123 126
    return ((123 <= kindVal) && (kindVal <= 126));
  };
};
template <typename FP>
struct Cast<clbind::DummyCreator *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 7 7
    return (kindVal == 7);
  };
};
template <typename FP>
struct Cast<llvmo::User_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 84 118
    return ((84 <= kindVal) && (kindVal <= 118));
  };
};
template <typename FP>
struct Cast<core::WrappedPointer_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 63 63
    return (kindVal == 63);
  };
};
template <typename FP>
struct Cast<core::UserData_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 169 169
    return (kindVal == 169);
  };
};
template <typename FP>
struct Cast<core::RandomState_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 62 62
    return (kindVal == 62);
  };
};
template <typename FP>
struct Cast<llvmo::SequentialType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 142 145
    return ((142 <= kindVal) && (kindVal <= 145));
  };
};
template <typename FP>
struct Cast<llvmo::ConstantStruct_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 114 114
    return (kindVal == 114);
  };
};
template <typename FP>
struct Cast<llvmo::CallInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 89 89
    return (kindVal == 89);
  };
};
template <typename FP>
struct Cast<llvmo::SwitchInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 98 98
    return (kindVal == 98);
  };
};
template <typename FP>
struct Cast<core::SexpSaveArchive_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 197 197
    return (kindVal == 197);
  };
};
template <typename FP>
struct Cast<core::SingleDispatchMethod_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 61 61
    return (kindVal == 61);
  };
};
template <typename FP>
struct Cast<core::TagbodyFrame_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 31 31
    return (kindVal == 31);
  };
};
template <typename FP>
struct Cast<asttooling::RegMap::RegistryMaps *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 4 4
    return (kindVal == 4);
  };
};
template <typename FP>
struct Cast<core::StringStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 186 188
    return ((186 <= kindVal) && (kindVal <= 188));
  };
};
template <typename FP>
struct Cast<llvmo::DIBuilder_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 122 122
    return (kindVal == 122);
  };
};
template <typename FP>
struct Cast<core::Array_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 48 60
    return ((48 <= kindVal) && (kindVal <= 60));
  };
};
template <typename FP>
struct Cast<llvmo::ConstantDataSequential_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 112 113
    return ((112 <= kindVal) && (kindVal <= 113));
  };
};
template <typename FP>
struct Cast<llvmo::ConstantInt_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 111 111
    return (kindVal == 111);
  };
};
template <typename FP>
struct Cast<core::Environment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 29 47
    return ((29 <= kindVal) && (kindVal <= 47));
  };
};
template <typename FP>
struct Cast<llvmo::ValueAsMetadata_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 124 124
    return (kindVal == 124);
  };
};
template <typename FP>
struct Cast<core::ActivationFrame_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 30 33
    return ((30 <= kindVal) && (kindVal <= 33));
  };
};
template <typename FP>
struct Cast<core::Str_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 57 58
    return ((57 <= kindVal) && (kindVal <= 58));
  };
};
template <typename FP>
struct Cast<llvmo::UnreachableInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 97 97
    return (kindVal == 97);
  };
};
template <typename FP>
struct Cast<core::ConcatenatedStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 185 185
    return (kindVal == 185);
  };
};
template <typename FP>
struct Cast<llvmo::PHINode_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 88 88
    return (kindVal == 88);
  };
};
template <typename FP>
struct Cast<llvmo::Instruction_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 85 104
    return ((85 <= kindVal) && (kindVal <= 104));
  };
};
template <typename FP>
struct Cast<core::Rational_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 16 20
    return ((16 <= kindVal) && (kindVal <= 20));
  };
};
template <typename FP>
struct Cast<core::AnsiStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 181 192
    return ((181 <= kindVal) && (kindVal <= 192));
  };
};
template <typename FP>
struct Cast<core::SpecialForm_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 225 225
    return (kindVal == 225);
  };
};
template <typename FP>
struct Cast<llvmo::ConstantArray_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 110 110
    return (kindVal == 110);
  };
};
template <typename FP>
struct Cast<core::WeakHashTable_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 27 28
    return ((27 <= kindVal) && (kindVal <= 28));
  };
};
template <typename FP>
struct Cast<core::Real_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 15 25
    return ((15 <= kindVal) && (kindVal <= 25));
  };
};
template <typename FP>
struct Cast<llvmo::DISubprogram_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 234 234
    return (kindVal == 234);
  };
};
template <typename FP>
struct Cast<llvmo::DIBasicType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 233 233
    return (kindVal == 233);
  };
};
template <typename FP>
struct Cast<core::FileStatus_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 26 26
    return (kindVal == 26);
  };
};
template <typename FP>
struct Cast<llvmo::GlobalValue_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 107 109
    return ((107 <= kindVal) && (kindVal <= 109));
  };
};
template <typename FP>
struct Cast<llvmo::LandingPadInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 87 87
    return (kindVal == 87);
  };
};
template <typename FP>
struct Cast<llvmo::IRBuilderBase_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 120 121
    return ((120 <= kindVal) && (kindVal <= 121));
  };
};
template <typename FP>
struct Cast<core::SingleDispatchGenericFunction_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 224 224
    return (kindVal == 224);
  };
};
template <typename FP>
struct Cast<core::SymbolMacroletEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 41 41
    return (kindVal == 41);
  };
};
template <typename FP>
struct Cast<llvmo::Value_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 82 119
    return ((82 <= kindVal) && (kindVal <= 119));
  };
};
template <typename FP>
struct Cast<core::Number_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 13 25
    return ((13 <= kindVal) && (kindVal <= 25));
  };
};
template <typename FP>
struct Cast<core::ReadTable_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 12 12
    return (kindVal == 12);
  };
};
template <typename FP>
struct Cast<core::UnwindProtectEnvironment_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 40 40
    return (kindVal == 40);
  };
};
template <typename FP>
struct Cast<core::Bignum_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 18 18
    return (kindVal == 18);
  };
};
template <typename FP>
struct Cast<core::CompiledFunction_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 223 223
    return (kindVal == 223);
  };
};
template <typename FP>
struct Cast<core::ArrayObjects_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 49 49
    return (kindVal == 49);
  };
};
template <typename FP>
struct Cast<llvmo::DIArray_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 232 232
    return (kindVal == 232);
  };
};
template <typename FP>
struct Cast<llvmo::ModulePass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 152 155
    return ((152 <= kindVal) && (kindVal <= 155));
  };
};
template <typename FP>
struct Cast<llvmo::DIDerivedType_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 231 231
    return (kindVal == 231);
  };
};
template <typename FP>
struct Cast<llvmo::Argument_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 83 83
    return (kindVal == 83);
  };
};
template <typename FP>
struct Cast<core::Complex_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 14 14
    return (kindVal == 14);
  };
};
template <typename FP>
struct Cast<llvmo::BlockAddress_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 106 106
    return (kindVal == 106);
  };
};
template <typename FP>
struct Cast<core::BitVector_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 52 54
    return ((52 <= kindVal) && (kindVal <= 54));
  };
};
template <typename FP>
struct Cast<llvmo::FunctionPass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 151 151
    return (kindVal == 151);
  };
};
template <typename FP>
struct Cast<core::FileStream_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 182 184
    return ((182 <= kindVal) && (kindVal <= 184));
  };
};
template <typename FP>
struct Cast<llvmo::AtomicRMWInst_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 86 86
    return (kindVal == 86);
  };
};
template <typename FP>
struct Cast<core::HashTableEq_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 201 201
    return (kindVal == 201);
  };
};
template <typename FP>
struct Cast<llvmo::DataLayoutPass_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 154 154
    return (kindVal == 154);
  };
};
template <typename FP>
struct Cast<core::MultiStringBuffer_O *, FP> {
  inline static bool isA(FP client) {
    gctools::Header_s *header = reinterpret_cast<gctools::Header_s *>(ClientPtrToBasePtr(client));
    int kindVal = header->kind();
    // low high --> 11 11
    return (kindVal == 11);
  };
};
#endif // defined(GC_DYNAMIC_CAST)
#if defined(GC_KIND_SELECTORS)
template <>
class gctools::GCKind<llvmo::VAArgInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__VAArgInst_O;
};
template <>
class gctools::GCKind<core::LoadArchive_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__LoadArchive_O;
};
template <>
class gctools::GCKind<core::Ratio_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Ratio_O;
};
template <>
class gctools::GCKind<core::VectorObjects_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__VectorObjects_O;
};
template <>
class gctools::GCKind<core::GlueEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__GlueEnvironment_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__;
};
template <>
class gctools::GCKind<llvmo::Target_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Target_O;
};
template <>
class gctools::GCKind<llvmo::FunctionType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__FunctionType_O;
};
template <>
class gctools::GCKind<llvmo::ConstantExpr_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ConstantExpr_O;
};
template <>
class gctools::GCKind<llvmo::LLVMContext_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__LLVMContext_O;
};
template <>
class gctools::GCKind<core::Lisp_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_ROOTCLASSALLOC_core__Lisp_O;
};
template <>
class gctools::GCKind<llvmo::TargetSubtargetInfo_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O;
};
template <>
class gctools::GCKind<core::ShortFloat_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ShortFloat_O;
};
template <>
class gctools::GCKind<core::SmallMap_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SmallMap_O;
};
template <>
class gctools::GCKind<llvmo::FenceInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__FenceInst_O;
};
template <>
class gctools::GCKind<core::PosixTime_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__PosixTime_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::KeywordArgument>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_;
};
template <>
class gctools::GCKind<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_;
};
template <>
class gctools::GCKind<core::SingleDispatchGenericFunctionClosure> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure;
};
template <>
class gctools::GCKind<core::Pathname_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Pathname_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__;
};
template <>
class gctools::GCKind<core::LexicalEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__LexicalEnvironment_O;
};
template <>
class gctools::GCKind<gctools::GCString_moveable<char>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCSTRING_gctools__GCString_moveable_char_;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::RequiredArgument>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_;
};
template <>
class gctools::GCKind<core::CatchEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__CatchEnvironment_O;
};
template <>
class gctools::GCKind<core::BroadcastStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__BroadcastStream_O;
};
template <>
class gctools::GCKind<core::Instance_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Instance_O;
};
template <>
class gctools::GCKind<llvmo::DIScope_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DIScope_O;
};
template <>
class gctools::GCKind<core::ForeignData_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ForeignData_O;
};
template <>
class gctools::GCKind<llvmo::CompiledClosure> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_llvmo__CompiledClosure;
};
template <>
class gctools::GCKind<core::WeakKeyHashTable_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__WeakKeyHashTable_O;
};
template <>
class gctools::GCKind<llvmo::IndirectBrInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__IndirectBrInst_O;
};
template <>
class gctools::GCKind<llvmo::ConstantPointerNull_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ConstantPointerNull_O;
};
template <>
class gctools::GCKind<llvmo::EngineBuilder_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__EngineBuilder_O;
};
template <>
class gctools::GCKind<llvmo::Module_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Module_O;
};
template <>
class gctools::GCKind<core::SmallMultimap_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SmallMultimap_O;
};
template <>
class gctools::GCKind<core::LogicalPathname_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__LogicalPathname_O;
};
template <>
class gctools::GCKind<llvmo::DebugInfo_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DebugInfo_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__;
};
template <>
class gctools::GCKind<clbind::ClassRegistry_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_clbind__ClassRegistry_O;
};
template <>
class gctools::GCKind<core::Pointer_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Pointer_O;
};
template <>
class gctools::GCKind<core::Function_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Function_O;
};
template <>
class gctools::GCKind<core::HashTableEqual_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__HashTableEqual_O;
};
template <>
class gctools::GCKind<core::Character_dummy_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Character_dummy_O;
};
template <>
class gctools::GCKind<core::DirectoryEntry_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__DirectoryEntry_O;
};
template <>
class gctools::GCKind<clbind::ConstructorCreator> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator;
};
template <>
class gctools::GCKind<llvmo::MCSubtargetInfo_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__MCSubtargetInfo_O;
};
template <>
class gctools::GCKind<llvmo::MDString_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__MDString_O;
};
template <>
class gctools::GCKind<core::Class_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__Class_O;
};
template <>
class gctools::GCKind<asttooling::internal::VariadicOperatorMatcherDescriptor> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor;
};
template <>
class gctools::GCKind<core::FuncallableStandardClass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__FuncallableStandardClass_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___;
};
template <>
class gctools::GCKind<llvmo::DIFile_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DIFile_O;
};
template <>
class gctools::GCKind<llvmo::Pass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Pass_O;
};
template <>
class gctools::GCKind<llvmo::Linker_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Linker_O;
};
template <>
class gctools::GCKind<llvmo::TerminatorInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__TerminatorInst_O;
};
template <>
class gctools::GCKind<core::FunctionFrame_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__FunctionFrame_O;
};
template <>
class gctools::GCKind<llvmo::UndefValue_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__UndefValue_O;
};
template <>
class gctools::GCKind<core::TwoWayStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__TwoWayStream_O;
};
template <>
class gctools::GCKind<core::IOFileStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__IOFileStream_O;
};
template <>
class gctools::GCKind<llvmo::NamedMDNode_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__NamedMDNode_O;
};
template <>
class gctools::GCKind<llvmo::ArrayType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ArrayType_O;
};
template <>
class gctools::GCKind<core::RecursiveDirectoryIterator_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__RecursiveDirectoryIterator_O;
};
template <>
class gctools::GCKind<llvmo::Type_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Type_O;
};
template <>
class gctools::GCKind<llvmo::AtomicCmpXchgInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O;
};
template <>
class gctools::GCKind<llvmo::AllocaInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__AllocaInst_O;
};
template <>
class gctools::GCKind<core::Package_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Package_O;
};
template <>
class gctools::GCKind<core::Fixnum_dummy_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Fixnum_dummy_O;
};
template <>
class gctools::GCKind<llvmo::BasicBlock_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__BasicBlock_O;
};
template <>
class gctools::GCKind<llvmo::CompositeType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__CompositeType_O;
};
template <>
class gctools::GCKind<core::CompileTimeEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__CompileTimeEnvironment_O;
};
template <>
class gctools::GCKind<llvmo::PassManager_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__PassManager_O;
};
template <>
class gctools::GCKind<core::Cache> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__Cache;
};
template <>
class gctools::GCKind<core::TagbodyEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__TagbodyEnvironment_O;
};
template <>
class gctools::GCKind<core::IOStreamStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__IOStreamStream_O;
};
template <>
class gctools::GCKind<core::InvocationHistoryFrameIterator_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O;
};
template <>
class gctools::GCKind<core::StrWithFillPtr_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__StrWithFillPtr_O;
};
template <>
class gctools::GCKind<core::StructureObject_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__StructureObject_O;
};
template <>
class gctools::GCKind<core::ValueEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ValueEnvironment_O;
};
template <>
class gctools::GCKind<llvmo::AttributeSet_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__AttributeSet_O;
};
template <>
class gctools::GCKind<core::BuiltInClass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__BuiltInClass_O;
};
template <>
class gctools::GCKind<core::CxxClass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__CxxClass_O;
};
template <>
class gctools::GCKind<core::SingleFloat_dummy_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SingleFloat_dummy_O;
};
template <>
class gctools::GCKind<core::DirectoryIterator_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__DirectoryIterator_O;
};
template <>
class gctools::GCKind<core::SexpLoadArchive_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SexpLoadArchive_O;
};
template <>
class gctools::GCKind<asttooling::internal::OverloadedMatcherDescriptor> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor;
};
template <>
class gctools::GCKind<core::StringOutputStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__StringOutputStream_O;
};
template <>
class gctools::GCKind<asttooling::AstVisitor_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_asttooling__AstVisitor_O;
};
template <>
class gctools::GCKind<core::Vector_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Vector_O;
};
template <>
class gctools::GCKind<core::Path_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Path_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::SymbolStorage>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_;
};
template <>
class gctools::GCKind<llvmo::Function_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Function_O;
};
template <>
class gctools::GCKind<llvmo::InvokeInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__InvokeInst_O;
};
template <>
class gctools::GCKind<core::SNode_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SNode_O;
};
template <>
class gctools::GCKind<core::SourceFileInfo_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SourceFileInfo_O;
};
template <>
class gctools::GCKind<llvmo::InsertPoint_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__InsertPoint_O;
};
template <>
class gctools::GCKind<llvmo::DITypeArray_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DITypeArray_O;
};
template <>
class gctools::GCKind<core::ForwardReferencedClass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ForwardReferencedClass_O;
};
template <>
class gctools::GCKind<core::HashTableEql_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__HashTableEql_O;
};
template <>
class gctools::GCKind<core::LambdaListHandler_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__LambdaListHandler_O;
};
template <>
class gctools::GCKind<core::ArrayDisplaced_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ArrayDisplaced_O;
};
template <>
class gctools::GCKind<llvmo::TargetOptions_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__TargetOptions_O;
};
template <>
class gctools::GCKind<core::Metaobject_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__Metaobject_O;
};
template <>
class gctools::GCKind<llvmo::PointerType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__PointerType_O;
};
template <>
class gctools::GCKind<core::WeakKeyMapping_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__WeakKeyMapping_O;
};
template <>
class gctools::GCKind<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_;
};
template <>
class gctools::GCKind<core::CxxObject_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__CxxObject_O;
};
template <>
class gctools::GCKind<cffi::Pointer_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_cffi__Pointer_O;
};
template <>
class gctools::GCKind<llvmo::DICompositeType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DICompositeType_O;
};
template <>
class gctools::GCKind<llvmo::BranchInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__BranchInst_O;
};
template <>
class gctools::GCKind<core::MacroletEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__MacroletEnvironment_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<asttooling::ContextFrame>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_;
};
template <>
class gctools::GCKind<core::HashTable_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__HashTable_O;
};
template <>
class gctools::GCKind<core::Archive_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Archive_O;
};
template <>
class gctools::GCKind<core::Cons_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Cons_O;
};
template <>
class gctools::GCKind<core::Reader_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Reader_O;
};
template <>
class gctools::GCKind<core::Stream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Stream_O;
};
template <>
class gctools::GCKind<llvmo::UnaryInstruction_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__UnaryInstruction_O;
};
template <>
class gctools::GCKind<core::BranchSNode_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__BranchSNode_O;
};
template <>
class gctools::GCKind<asttooling::internal::FixedArgCountMatcherDescriptor> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor;
};
template <>
class gctools::GCKind<llvmo::FunctionPassManager_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__FunctionPassManager_O;
};
template <>
class gctools::GCKind<core::SingleDispatchEffectiveMethodFunction_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O;
};
template <>
class gctools::GCKind<core::StringInputStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__StringInputStream_O;
};
template <>
class gctools::GCKind<llvmo::TargetMachine_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__TargetMachine_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::T_O *>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_;
};
template <>
class gctools::GCKind<core::CandoException_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__CandoException_O;
};
template <>
class gctools::GCKind<llvmo::GlobalVariable_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__GlobalVariable_O;
};
template <>
class gctools::GCKind<core::EchoStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__EchoStream_O;
};
template <>
class gctools::GCKind<core::SymbolToEnumConverter_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SymbolToEnumConverter_O;
};
template <>
class gctools::GCKind<core::PosixTimeDuration_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__PosixTimeDuration_O;
};
template <>
class gctools::GCKind<core::StandardClass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__StandardClass_O;
};
template <>
class gctools::GCKind<core::Regex_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Regex_O;
};
template <>
class gctools::GCKind<llvmo::PassManagerBase_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__PassManagerBase_O;
};
template <>
class gctools::GCKind<core::Iterator_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_TEMPLATED_LISPALLOC_core__Iterator_O;
};
template <>
class gctools::GCKind<clbind::ClassRep_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_clbind__ClassRep_O;
};
template <>
class gctools::GCKind<llvmo::IRBuilder_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__IRBuilder_O;
};
template <>
class gctools::GCKind<llvmo::StoreInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__StoreInst_O;
};
template <>
class gctools::GCKind<asttooling::internal::FreeFuncMatcherDescriptor> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor;
};
template <>
class gctools::GCKind<core::LongFloat_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__LongFloat_O;
};
template <>
class gctools::GCKind<core::BlockEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__BlockEnvironment_O;
};
template <>
class gctools::GCKind<llvmo::ResumeInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ResumeInst_O;
};
template <>
class gctools::GCKind<core::MacroClosure> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__MacroClosure;
};
template <>
class gctools::GCKind<llvmo::TargetLibraryInfo_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__TargetLibraryInfo_O;
};
template <>
class gctools::GCKind<core::ConsStepper> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__ConsStepper;
};
template <>
class gctools::GCKind<llvmo::DISubroutineType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DISubroutineType_O;
};
template <>
class gctools::GCKind<llvmo::DIType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DIType_O;
};
template <>
class gctools::GCKind<core::Float_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Float_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::AuxArgument>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_;
};
template <>
class gctools::GCKind<core::VectorObjectsWithFillPtr_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O;
};
template <>
class gctools::GCKind<llvmo::MDNode_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__MDNode_O;
};
template <>
class gctools::GCKind<core::SourcePosInfo_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SourcePosInfo_O;
};
template <>
class gctools::GCKind<llvmo::DIDescriptor_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DIDescriptor_O;
};
template <>
class gctools::GCKind<llvmo::LLVMTargetMachine_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__LLVMTargetMachine_O;
};
template <>
class gctools::GCKind<llvmo::APInt_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__APInt_O;
};
template <>
class gctools::GCKind<llvmo::ReturnInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ReturnInst_O;
};
template <>
class gctools::GCKind<llvmo::Triple_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Triple_O;
};
template <>
class gctools::GCKind<core::DoubleFloat_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__DoubleFloat_O;
};
template <>
class gctools::GCKind<core::Symbol_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__Symbol_O;
};
template <>
class gctools::GCKind<llvmo::DataLayout_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DataLayout_O;
};
template <>
class gctools::GCKind<core::LightUserData_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__LightUserData_O;
};
template <>
class gctools::GCKind<core::T_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__T_O;
};
template <>
class gctools::GCKind<core::Null_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Null_O;
};
template <>
class gctools::GCKind<llvmo::PassManagerBuilder_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__PassManagerBuilder_O;
};
template <>
class gctools::GCKind<core::Creator> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_TEMPLATED_CLASSALLOC_core__Creator;
};
template <>
class gctools::GCKind<core::Specializer_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__Specializer_O;
};
template <>
class gctools::GCKind<core::StackValueEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__StackValueEnvironment_O;
};
template <>
class gctools::GCKind<llvmo::ConstantFP_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ConstantFP_O;
};
template <>
class gctools::GCKind<llvmo::LoadInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__LoadInst_O;
};
template <>
class gctools::GCKind<llvmo::APFloat_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__APFloat_O;
};
template <>
class gctools::GCKind<core::Record_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Record_O;
};
template <>
class gctools::GCKind<core::SaveArchive_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SaveArchive_O;
};
template <>
class gctools::GCKind<core::SourceManager_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SourceManager_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<asttooling::ParserValue>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_;
};
template <>
class gctools::GCKind<core::InstanceCreator> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__InstanceCreator;
};
template <>
class gctools::GCKind<core::IntArray_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__IntArray_O;
};
template <>
class gctools::GCKind<clbind::detail::class_map> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_ROOTCLASSALLOC_clbind__detail__class_map;
};
template <>
class gctools::GCKind<core::BitVectorWithFillPtr_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__BitVectorWithFillPtr_O;
};
template <>
class gctools::GCKind<core::LeafSNode_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__LeafSNode_O;
};
template <>
class gctools::GCKind<llvmo::Constant_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Constant_O;
};
template <>
class gctools::GCKind<core::Binder_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Binder_O;
};
template <>
class gctools::GCKind<core::String_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__String_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__;
};
template <>
class gctools::GCKind<core::VectorDisplaced_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__VectorDisplaced_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::SymbolClassPair>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_;
};
template <>
class gctools::GCKind<core::SynonymStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SynonymStream_O;
};
template <>
class gctools::GCKind<core::LoadTimeValues_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__LoadTimeValues_O;
};
template <>
class gctools::GCKind<core::ExternalObject_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ExternalObject_O;
};
template <>
class gctools::GCKind<core::SimpleBitVector_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SimpleBitVector_O;
};
template <>
class gctools::GCKind<core::StandardObject_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__StandardObject_O;
};
template <>
class gctools::GCKind<llvmo::ImmutablePass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ImmutablePass_O;
};
template <>
class gctools::GCKind<core::RuntimeVisibleEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O;
};
template <>
class gctools::GCKind<core::ValueFrame_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ValueFrame_O;
};
template <>
class gctools::GCKind<core::VaList_dummy_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__VaList_dummy_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_;
};
template <>
class gctools::GCKind<llvmo::StructType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__StructType_O;
};
template <>
class gctools::GCKind<core::WeakPointer_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__WeakPointer_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___;
};
template <>
class gctools::GCKind<llvmo::ExecutionEngine_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ExecutionEngine_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::CacheRecord>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_;
};
template <>
class gctools::GCKind<llvmo::ConstantDataArray_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ConstantDataArray_O;
};
template <>
class gctools::GCKind<core::RegexMatch_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__RegexMatch_O;
};
template <>
class gctools::GCKind<core::FunctionValueEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__FunctionValueEnvironment_O;
};
template <>
class gctools::GCKind<core::Integer_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Integer_O;
};
template <>
class gctools::GCKind<core::StructureClass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__StructureClass_O;
};
template <>
class gctools::GCKind<llvmo::IntegerType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__IntegerType_O;
};
template <>
class gctools::GCKind<core::InstanceClosure> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__InstanceClosure;
};
template <>
class gctools::GCKind<llvmo::Attribute_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Attribute_O;
};
template <>
class gctools::GCKind<core::HashTableEqualp_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__HashTableEqualp_O;
};
template <>
class gctools::GCKind<llvmo::DebugLoc_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DebugLoc_O;
};
template <>
class gctools::GCKind<core::FunctionContainerEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__FunctionContainerEnvironment_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__;
};
template <>
class gctools::GCKind<llvmo::DICompileUnit_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DICompileUnit_O;
};
template <>
class gctools::GCKind<asttooling::DerivableFrontendActionFactory> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory;
};
template <>
class gctools::GCKind<llvmo::VectorType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__VectorType_O;
};
template <>
class gctools::GCKind<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_;
};
template <>
class gctools::GCKind<core::StdClass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__StdClass_O;
};
template <>
class gctools::GCKind<llvmo::DILexicalBlock_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DILexicalBlock_O;
};
template <>
class gctools::GCKind<llvmo::Metadata_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Metadata_O;
};
template <>
class gctools::GCKind<clbind::DummyCreator> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_clbind__DummyCreator;
};
template <>
class gctools::GCKind<llvmo::User_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__User_O;
};
template <>
class gctools::GCKind<core::WrappedPointer_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O;
};
template <>
class gctools::GCKind<asttooling::DerivableMatchCallback> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_asttooling__DerivableMatchCallback;
};
template <>
class gctools::GCKind<core::UserData_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__UserData_O;
};
template <>
class gctools::GCKind<core::RandomState_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__RandomState_O;
};
template <>
class gctools::GCKind<llvmo::SequentialType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__SequentialType_O;
};
template <>
class gctools::GCKind<llvmo::ConstantStruct_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ConstantStruct_O;
};
template <>
class gctools::GCKind<llvmo::CallInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__CallInst_O;
};
template <>
class gctools::GCKind<llvmo::SwitchInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__SwitchInst_O;
};
template <>
class gctools::GCKind<core::SexpSaveArchive_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SexpSaveArchive_O;
};
template <>
class gctools::GCKind<core::SingleDispatchMethod_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SingleDispatchMethod_O;
};
template <>
class gctools::GCKind<core::TagbodyFrame_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__TagbodyFrame_O;
};
template <>
class gctools::GCKind<asttooling::RegMap::RegistryMaps> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps;
};
template <>
class gctools::GCKind<core::StringStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__StringStream_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<asttooling::ErrorContent>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_;
};
template <>
class gctools::GCKind<llvmo::DIBuilder_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DIBuilder_O;
};
template <>
class gctools::GCKind<asttooling::DerivableASTFrontendAction> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_asttooling__DerivableASTFrontendAction;
};
template <>
class gctools::GCKind<core::Array_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Array_O;
};
template <>
class gctools::GCKind<llvmo::ConstantDataSequential_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ConstantDataSequential_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<asttooling::Message>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_;
};
template <>
class gctools::GCKind<llvmo::ConstantInt_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ConstantInt_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__;
};
template <>
class gctools::GCKind<core::Environment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Environment_O;
};
template <>
class gctools::GCKind<llvmo::ValueAsMetadata_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ValueAsMetadata_O;
};
template <>
class gctools::GCKind<core::ActivationFrame_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ActivationFrame_O;
};
template <>
class gctools::GCKind<core::Str_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_BOOTSTRAP_core__Str_O;
};
template <>
class gctools::GCKind<core::CoreExposer> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__CoreExposer;
};
template <>
class gctools::GCKind<llvmo::UnreachableInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__UnreachableInst_O;
};
template <>
class gctools::GCKind<core::ConcatenatedStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ConcatenatedStream_O;
};
template <>
class gctools::GCKind<llvmo::PHINode_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__PHINode_O;
};
template <>
class gctools::GCKind<llvmo::Instruction_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Instruction_O;
};
template <>
class gctools::GCKind<core::Rational_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Rational_O;
};
template <>
class gctools::GCKind<core::AnsiStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__AnsiStream_O;
};
template <>
class gctools::GCKind<core::SpecialForm_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SpecialForm_O;
};
template <>
class gctools::GCKind<llvmo::ConstantArray_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ConstantArray_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__;
};
template <>
class gctools::GCKind<core::WeakHashTable_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__WeakHashTable_O;
};
template <>
class gctools::GCKind<asttooling::DerivableSyntaxOnlyAction> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction;
};
template <>
class gctools::GCKind<core::Real_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Real_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__;
};
template <>
class gctools::GCKind<llvmo::DISubprogram_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DISubprogram_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::OptionalArgument>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_;
};
template <>
class gctools::GCKind<llvmo::DIBasicType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DIBasicType_O;
};
template <>
class gctools::GCKind<core::FileStatus_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__FileStatus_O;
};
template <>
class gctools::GCKind<llvmo::GlobalValue_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__GlobalValue_O;
};
template <>
class gctools::GCKind<llvmo::LandingPadInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__LandingPadInst_O;
};
template <>
class gctools::GCKind<llvmo::IRBuilderBase_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__IRBuilderBase_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__;
};
template <>
class gctools::GCKind<core::SingleDispatchGenericFunction_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SingleDispatchGenericFunction_O;
};
template <>
class gctools::GCKind<core::SymbolMacroletEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__SymbolMacroletEnvironment_O;
};
template <>
class gctools::GCKind<llvmo::Value_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Value_O;
};
template <>
class gctools::GCKind<core::BuiltinClosure> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure;
};
template <>
class gctools::GCKind<core::Number_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Number_O;
};
template <>
class gctools::GCKind<core::ReadTable_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ReadTable_O;
};
template <>
class gctools::GCKind<core::UnwindProtectEnvironment_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__UnwindProtectEnvironment_O;
};
template <>
class gctools::GCKind<core::Bignum_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Bignum_O;
};
template <>
class gctools::GCKind<core::CompiledFunction_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__CompiledFunction_O;
};
template <>
class gctools::GCKind<core::ArrayObjects_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__ArrayObjects_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::ExceptionEntry>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_;
};
template <>
class gctools::GCKind<llvmo::DIArray_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DIArray_O;
};
template <>
class gctools::GCKind<llvmo::ModulePass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__ModulePass_O;
};
template <>
class gctools::GCKind<llvmo::DIDerivedType_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DIDerivedType_O;
};
template <>
class gctools::GCKind<llvmo::Argument_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__Argument_O;
};
template <>
class gctools::GCKind<core::Complex_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__Complex_O;
};
template <>
class gctools::GCKind<core::InterpretedClosure> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__InterpretedClosure;
};
template <>
class gctools::GCKind<llvmo::BlockAddress_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__BlockAddress_O;
};
template <>
class gctools::GCKind<core::BitVector_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__BitVector_O;
};
template <>
class gctools::GCKind<llvmo::FunctionPass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__FunctionPass_O;
};
template <>
class gctools::GCKind<core::FileStream_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__FileStream_O;
};
template <>
class gctools::GCKind<llvmo::AtomicRMWInst_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__AtomicRMWInst_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<core::DynamicBinding>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_;
};
template <>
class gctools::GCKind<core::VectorStepper> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_CLASSALLOC_core__VectorStepper;
};
template <>
class gctools::GCKind<core::HashTableEq_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__HashTableEq_O;
};
template <>
class gctools::GCKind<llvmo::DataLayoutPass_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_llvmo__DataLayoutPass_O;
};
template <>
class gctools::GCKind<core::MultiStringBuffer_O> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_LISPALLOC_core__MultiStringBuffer_O;
};
template <>
class gctools::GCKind<gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>>> {
public:
  static gctools::GCKindEnum const Kind = gctools::KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__;
};
#endif // defined(GC_KIND_SELECTORS)
#if defined(GC_KIND_NAME_MAP)
kind_name_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps : {
  return "KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps";
}
kind_name_KIND_ROOTCLASSALLOC_clbind__detail__class_map : {
  return "KIND_ROOTCLASSALLOC_clbind__detail__class_map";
}
kind_name_KIND_TEMPLATED_CLASSALLOC_core__Creator : {
  return "KIND_TEMPLATED_CLASSALLOC_core__Creator";
}
kind_name_KIND_CLASSALLOC_clbind__DummyCreator : {
  return "KIND_CLASSALLOC_clbind__DummyCreator";
}
kind_name_KIND_CLASSALLOC_core__InstanceCreator : {
  return "KIND_CLASSALLOC_core__InstanceCreator";
}
kind_name_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator : {
  return "KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator";
}
kind_name_KIND_BOOTSTRAP_core__T_O : {
  return "KIND_BOOTSTRAP_core__T_O";
}
kind_name_KIND_LISPALLOC_core__MultiStringBuffer_O : {
  return "KIND_LISPALLOC_core__MultiStringBuffer_O";
}
kind_name_KIND_LISPALLOC_core__ReadTable_O : {
  return "KIND_LISPALLOC_core__ReadTable_O";
}
kind_name_KIND_LISPALLOC_core__Number_O : {
  return "KIND_LISPALLOC_core__Number_O";
}
kind_name_KIND_LISPALLOC_core__Complex_O : {
  return "KIND_LISPALLOC_core__Complex_O";
}
kind_name_KIND_LISPALLOC_core__Real_O : {
  return "KIND_LISPALLOC_core__Real_O";
}
kind_name_KIND_LISPALLOC_core__Rational_O : {
  return "KIND_LISPALLOC_core__Rational_O";
}
kind_name_KIND_LISPALLOC_core__Integer_O : {
  return "KIND_LISPALLOC_core__Integer_O";
}
kind_name_KIND_LISPALLOC_core__Bignum_O : {
  return "KIND_LISPALLOC_core__Bignum_O";
}
kind_name_KIND_LISPALLOC_core__Fixnum_dummy_O : {
  return "KIND_LISPALLOC_core__Fixnum_dummy_O";
}
kind_name_KIND_LISPALLOC_core__Ratio_O : {
  return "KIND_LISPALLOC_core__Ratio_O";
}
kind_name_KIND_LISPALLOC_core__Float_O : {
  return "KIND_LISPALLOC_core__Float_O";
}
kind_name_KIND_LISPALLOC_core__DoubleFloat_O : {
  return "KIND_LISPALLOC_core__DoubleFloat_O";
}
kind_name_KIND_LISPALLOC_core__LongFloat_O : {
  return "KIND_LISPALLOC_core__LongFloat_O";
}
kind_name_KIND_LISPALLOC_core__SingleFloat_dummy_O : {
  return "KIND_LISPALLOC_core__SingleFloat_dummy_O";
}
kind_name_KIND_LISPALLOC_core__ShortFloat_O : {
  return "KIND_LISPALLOC_core__ShortFloat_O";
}
kind_name_KIND_LISPALLOC_core__FileStatus_O : {
  return "KIND_LISPALLOC_core__FileStatus_O";
}
kind_name_KIND_LISPALLOC_core__WeakHashTable_O : {
  return "KIND_LISPALLOC_core__WeakHashTable_O";
}
kind_name_KIND_LISPALLOC_core__WeakKeyHashTable_O : {
  return "KIND_LISPALLOC_core__WeakKeyHashTable_O";
}
kind_name_KIND_LISPALLOC_core__Environment_O : {
  return "KIND_LISPALLOC_core__Environment_O";
}
kind_name_KIND_LISPALLOC_core__ActivationFrame_O : {
  return "KIND_LISPALLOC_core__ActivationFrame_O";
}
kind_name_KIND_LISPALLOC_core__TagbodyFrame_O : {
  return "KIND_LISPALLOC_core__TagbodyFrame_O";
}
kind_name_KIND_LISPALLOC_core__ValueFrame_O : {
  return "KIND_LISPALLOC_core__ValueFrame_O";
}
kind_name_KIND_LISPALLOC_core__FunctionFrame_O : {
  return "KIND_LISPALLOC_core__FunctionFrame_O";
}
kind_name_KIND_LISPALLOC_core__LexicalEnvironment_O : {
  return "KIND_LISPALLOC_core__LexicalEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O : {
  return "KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__FunctionValueEnvironment_O : {
  return "KIND_LISPALLOC_core__FunctionValueEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__ValueEnvironment_O : {
  return "KIND_LISPALLOC_core__ValueEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__TagbodyEnvironment_O : {
  return "KIND_LISPALLOC_core__TagbodyEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__CompileTimeEnvironment_O : {
  return "KIND_LISPALLOC_core__CompileTimeEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__UnwindProtectEnvironment_O : {
  return "KIND_LISPALLOC_core__UnwindProtectEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O : {
  return "KIND_LISPALLOC_core__SymbolMacroletEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__FunctionContainerEnvironment_O : {
  return "KIND_LISPALLOC_core__FunctionContainerEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__StackValueEnvironment_O : {
  return "KIND_LISPALLOC_core__StackValueEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__BlockEnvironment_O : {
  return "KIND_LISPALLOC_core__BlockEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__MacroletEnvironment_O : {
  return "KIND_LISPALLOC_core__MacroletEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__CatchEnvironment_O : {
  return "KIND_LISPALLOC_core__CatchEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__GlueEnvironment_O : {
  return "KIND_LISPALLOC_core__GlueEnvironment_O";
}
kind_name_KIND_LISPALLOC_core__Array_O : {
  return "KIND_LISPALLOC_core__Array_O";
}
kind_name_KIND_LISPALLOC_core__ArrayObjects_O : {
  return "KIND_LISPALLOC_core__ArrayObjects_O";
}
kind_name_KIND_LISPALLOC_core__ArrayDisplaced_O : {
  return "KIND_LISPALLOC_core__ArrayDisplaced_O";
}
kind_name_KIND_LISPALLOC_core__Vector_O : {
  return "KIND_LISPALLOC_core__Vector_O";
}
kind_name_KIND_LISPALLOC_core__BitVector_O : {
  return "KIND_LISPALLOC_core__BitVector_O";
}
kind_name_KIND_LISPALLOC_core__SimpleBitVector_O : {
  return "KIND_LISPALLOC_core__SimpleBitVector_O";
}
kind_name_KIND_LISPALLOC_core__BitVectorWithFillPtr_O : {
  return "KIND_LISPALLOC_core__BitVectorWithFillPtr_O";
}
kind_name_KIND_LISPALLOC_core__VectorDisplaced_O : {
  return "KIND_LISPALLOC_core__VectorDisplaced_O";
}
kind_name_KIND_LISPALLOC_core__String_O : {
  return "KIND_LISPALLOC_core__String_O";
}
kind_name_KIND_BOOTSTRAP_core__Str_O : {
  return "KIND_BOOTSTRAP_core__Str_O";
}
kind_name_KIND_LISPALLOC_core__StrWithFillPtr_O : {
  return "KIND_LISPALLOC_core__StrWithFillPtr_O";
}
kind_name_KIND_LISPALLOC_core__VectorObjects_O : {
  return "KIND_LISPALLOC_core__VectorObjects_O";
}
kind_name_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O : {
  return "KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O";
}
kind_name_KIND_LISPALLOC_core__SingleDispatchMethod_O : {
  return "KIND_LISPALLOC_core__SingleDispatchMethod_O";
}
kind_name_KIND_LISPALLOC_core__RandomState_O : {
  return "KIND_LISPALLOC_core__RandomState_O";
}
kind_name_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O : {
  return "KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O";
}
kind_name_KIND_LISPALLOC_llvmo__DebugLoc_O : {
  return "KIND_LISPALLOC_llvmo__DebugLoc_O";
}
kind_name_KIND_LISPALLOC_llvmo__Attribute_O : {
  return "KIND_LISPALLOC_llvmo__Attribute_O";
}
kind_name_KIND_LISPALLOC_core__RegexMatch_O : {
  return "KIND_LISPALLOC_core__RegexMatch_O";
}
kind_name_KIND_LISPALLOC_core__WeakPointer_O : {
  return "KIND_LISPALLOC_core__WeakPointer_O";
}
kind_name_KIND_LISPALLOC_core__VaList_dummy_O : {
  return "KIND_LISPALLOC_core__VaList_dummy_O";
}
kind_name_KIND_BOOTSTRAP_core__StandardObject_O : {
  return "KIND_BOOTSTRAP_core__StandardObject_O";
}
kind_name_KIND_BOOTSTRAP_core__Metaobject_O : {
  return "KIND_BOOTSTRAP_core__Metaobject_O";
}
kind_name_KIND_BOOTSTRAP_core__Specializer_O : {
  return "KIND_BOOTSTRAP_core__Specializer_O";
}
kind_name_KIND_BOOTSTRAP_core__Class_O : {
  return "KIND_BOOTSTRAP_core__Class_O";
}
kind_name_KIND_BOOTSTRAP_core__StdClass_O : {
  return "KIND_BOOTSTRAP_core__StdClass_O";
}
kind_name_KIND_BOOTSTRAP_core__StandardClass_O : {
  return "KIND_BOOTSTRAP_core__StandardClass_O";
}
kind_name_KIND_LISPALLOC_core__FuncallableStandardClass_O : {
  return "KIND_LISPALLOC_core__FuncallableStandardClass_O";
}
kind_name_KIND_BOOTSTRAP_core__StructureClass_O : {
  return "KIND_BOOTSTRAP_core__StructureClass_O";
}
kind_name_KIND_LISPALLOC_core__ForwardReferencedClass_O : {
  return "KIND_LISPALLOC_core__ForwardReferencedClass_O";
}
kind_name_KIND_LISPALLOC_core__CxxClass_O : {
  return "KIND_LISPALLOC_core__CxxClass_O";
}
kind_name_KIND_BOOTSTRAP_core__BuiltInClass_O : {
  return "KIND_BOOTSTRAP_core__BuiltInClass_O";
}
kind_name_KIND_LISPALLOC_clbind__ClassRep_O : {
  return "KIND_LISPALLOC_clbind__ClassRep_O";
}
kind_name_KIND_LISPALLOC_core__ExternalObject_O : {
  return "KIND_LISPALLOC_core__ExternalObject_O";
}
kind_name_KIND_LISPALLOC_llvmo__Value_O : {
  return "KIND_LISPALLOC_llvmo__Value_O";
}
kind_name_KIND_LISPALLOC_llvmo__Argument_O : {
  return "KIND_LISPALLOC_llvmo__Argument_O";
}
kind_name_KIND_LISPALLOC_llvmo__User_O : {
  return "KIND_LISPALLOC_llvmo__User_O";
}
kind_name_KIND_LISPALLOC_llvmo__Instruction_O : {
  return "KIND_LISPALLOC_llvmo__Instruction_O";
}
kind_name_KIND_LISPALLOC_llvmo__AtomicRMWInst_O : {
  return "KIND_LISPALLOC_llvmo__AtomicRMWInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__LandingPadInst_O : {
  return "KIND_LISPALLOC_llvmo__LandingPadInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__PHINode_O : {
  return "KIND_LISPALLOC_llvmo__PHINode_O";
}
kind_name_KIND_LISPALLOC_llvmo__CallInst_O : {
  return "KIND_LISPALLOC_llvmo__CallInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__StoreInst_O : {
  return "KIND_LISPALLOC_llvmo__StoreInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__UnaryInstruction_O : {
  return "KIND_LISPALLOC_llvmo__UnaryInstruction_O";
}
kind_name_KIND_LISPALLOC_llvmo__LoadInst_O : {
  return "KIND_LISPALLOC_llvmo__LoadInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__AllocaInst_O : {
  return "KIND_LISPALLOC_llvmo__AllocaInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__VAArgInst_O : {
  return "KIND_LISPALLOC_llvmo__VAArgInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O : {
  return "KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__TerminatorInst_O : {
  return "KIND_LISPALLOC_llvmo__TerminatorInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__UnreachableInst_O : {
  return "KIND_LISPALLOC_llvmo__UnreachableInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__SwitchInst_O : {
  return "KIND_LISPALLOC_llvmo__SwitchInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__ReturnInst_O : {
  return "KIND_LISPALLOC_llvmo__ReturnInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__ResumeInst_O : {
  return "KIND_LISPALLOC_llvmo__ResumeInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__BranchInst_O : {
  return "KIND_LISPALLOC_llvmo__BranchInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__InvokeInst_O : {
  return "KIND_LISPALLOC_llvmo__InvokeInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__IndirectBrInst_O : {
  return "KIND_LISPALLOC_llvmo__IndirectBrInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__FenceInst_O : {
  return "KIND_LISPALLOC_llvmo__FenceInst_O";
}
kind_name_KIND_LISPALLOC_llvmo__Constant_O : {
  return "KIND_LISPALLOC_llvmo__Constant_O";
}
kind_name_KIND_LISPALLOC_llvmo__BlockAddress_O : {
  return "KIND_LISPALLOC_llvmo__BlockAddress_O";
}
kind_name_KIND_LISPALLOC_llvmo__GlobalValue_O : {
  return "KIND_LISPALLOC_llvmo__GlobalValue_O";
}
kind_name_KIND_LISPALLOC_llvmo__GlobalVariable_O : {
  return "KIND_LISPALLOC_llvmo__GlobalVariable_O";
}
kind_name_KIND_LISPALLOC_llvmo__Function_O : {
  return "KIND_LISPALLOC_llvmo__Function_O";
}
kind_name_KIND_LISPALLOC_llvmo__ConstantArray_O : {
  return "KIND_LISPALLOC_llvmo__ConstantArray_O";
}
kind_name_KIND_LISPALLOC_llvmo__ConstantInt_O : {
  return "KIND_LISPALLOC_llvmo__ConstantInt_O";
}
kind_name_KIND_LISPALLOC_llvmo__ConstantDataSequential_O : {
  return "KIND_LISPALLOC_llvmo__ConstantDataSequential_O";
}
kind_name_KIND_LISPALLOC_llvmo__ConstantDataArray_O : {
  return "KIND_LISPALLOC_llvmo__ConstantDataArray_O";
}
kind_name_KIND_LISPALLOC_llvmo__ConstantStruct_O : {
  return "KIND_LISPALLOC_llvmo__ConstantStruct_O";
}
kind_name_KIND_LISPALLOC_llvmo__ConstantFP_O : {
  return "KIND_LISPALLOC_llvmo__ConstantFP_O";
}
kind_name_KIND_LISPALLOC_llvmo__UndefValue_O : {
  return "KIND_LISPALLOC_llvmo__UndefValue_O";
}
kind_name_KIND_LISPALLOC_llvmo__ConstantPointerNull_O : {
  return "KIND_LISPALLOC_llvmo__ConstantPointerNull_O";
}
kind_name_KIND_LISPALLOC_llvmo__ConstantExpr_O : {
  return "KIND_LISPALLOC_llvmo__ConstantExpr_O";
}
kind_name_KIND_LISPALLOC_llvmo__BasicBlock_O : {
  return "KIND_LISPALLOC_llvmo__BasicBlock_O";
}
kind_name_KIND_LISPALLOC_llvmo__IRBuilderBase_O : {
  return "KIND_LISPALLOC_llvmo__IRBuilderBase_O";
}
kind_name_KIND_LISPALLOC_llvmo__IRBuilder_O : {
  return "KIND_LISPALLOC_llvmo__IRBuilder_O";
}
kind_name_KIND_LISPALLOC_llvmo__DIBuilder_O : {
  return "KIND_LISPALLOC_llvmo__DIBuilder_O";
}
kind_name_KIND_LISPALLOC_llvmo__Metadata_O : {
  return "KIND_LISPALLOC_llvmo__Metadata_O";
}
kind_name_KIND_LISPALLOC_llvmo__ValueAsMetadata_O : {
  return "KIND_LISPALLOC_llvmo__ValueAsMetadata_O";
}
kind_name_KIND_LISPALLOC_llvmo__MDNode_O : {
  return "KIND_LISPALLOC_llvmo__MDNode_O";
}
kind_name_KIND_LISPALLOC_llvmo__MDString_O : {
  return "KIND_LISPALLOC_llvmo__MDString_O";
}
kind_name_KIND_LISPALLOC_llvmo__ExecutionEngine_O : {
  return "KIND_LISPALLOC_llvmo__ExecutionEngine_O";
}
kind_name_KIND_LISPALLOC_llvmo__APFloat_O : {
  return "KIND_LISPALLOC_llvmo__APFloat_O";
}
kind_name_KIND_LISPALLOC_llvmo__PassManagerBuilder_O : {
  return "KIND_LISPALLOC_llvmo__PassManagerBuilder_O";
}
kind_name_KIND_LISPALLOC_llvmo__DataLayout_O : {
  return "KIND_LISPALLOC_llvmo__DataLayout_O";
}
kind_name_KIND_LISPALLOC_llvmo__Triple_O : {
  return "KIND_LISPALLOC_llvmo__Triple_O";
}
kind_name_KIND_LISPALLOC_llvmo__APInt_O : {
  return "KIND_LISPALLOC_llvmo__APInt_O";
}
kind_name_KIND_LISPALLOC_llvmo__PassManagerBase_O : {
  return "KIND_LISPALLOC_llvmo__PassManagerBase_O";
}
kind_name_KIND_LISPALLOC_llvmo__FunctionPassManager_O : {
  return "KIND_LISPALLOC_llvmo__FunctionPassManager_O";
}
kind_name_KIND_LISPALLOC_llvmo__PassManager_O : {
  return "KIND_LISPALLOC_llvmo__PassManager_O";
}
kind_name_KIND_LISPALLOC_llvmo__TargetMachine_O : {
  return "KIND_LISPALLOC_llvmo__TargetMachine_O";
}
kind_name_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O : {
  return "KIND_LISPALLOC_llvmo__LLVMTargetMachine_O";
}
kind_name_KIND_LISPALLOC_llvmo__TargetOptions_O : {
  return "KIND_LISPALLOC_llvmo__TargetOptions_O";
}
kind_name_KIND_LISPALLOC_llvmo__Type_O : {
  return "KIND_LISPALLOC_llvmo__Type_O";
}
kind_name_KIND_LISPALLOC_llvmo__IntegerType_O : {
  return "KIND_LISPALLOC_llvmo__IntegerType_O";
}
kind_name_KIND_LISPALLOC_llvmo__CompositeType_O : {
  return "KIND_LISPALLOC_llvmo__CompositeType_O";
}
kind_name_KIND_LISPALLOC_llvmo__SequentialType_O : {
  return "KIND_LISPALLOC_llvmo__SequentialType_O";
}
kind_name_KIND_LISPALLOC_llvmo__VectorType_O : {
  return "KIND_LISPALLOC_llvmo__VectorType_O";
}
kind_name_KIND_LISPALLOC_llvmo__PointerType_O : {
  return "KIND_LISPALLOC_llvmo__PointerType_O";
}
kind_name_KIND_LISPALLOC_llvmo__ArrayType_O : {
  return "KIND_LISPALLOC_llvmo__ArrayType_O";
}
kind_name_KIND_LISPALLOC_llvmo__StructType_O : {
  return "KIND_LISPALLOC_llvmo__StructType_O";
}
kind_name_KIND_LISPALLOC_llvmo__FunctionType_O : {
  return "KIND_LISPALLOC_llvmo__FunctionType_O";
}
kind_name_KIND_LISPALLOC_llvmo__NamedMDNode_O : {
  return "KIND_LISPALLOC_llvmo__NamedMDNode_O";
}
kind_name_KIND_LISPALLOC_llvmo__Linker_O : {
  return "KIND_LISPALLOC_llvmo__Linker_O";
}
kind_name_KIND_LISPALLOC_llvmo__Pass_O : {
  return "KIND_LISPALLOC_llvmo__Pass_O";
}
kind_name_KIND_LISPALLOC_llvmo__FunctionPass_O : {
  return "KIND_LISPALLOC_llvmo__FunctionPass_O";
}
kind_name_KIND_LISPALLOC_llvmo__ModulePass_O : {
  return "KIND_LISPALLOC_llvmo__ModulePass_O";
}
kind_name_KIND_LISPALLOC_llvmo__ImmutablePass_O : {
  return "KIND_LISPALLOC_llvmo__ImmutablePass_O";
}
kind_name_KIND_LISPALLOC_llvmo__DataLayoutPass_O : {
  return "KIND_LISPALLOC_llvmo__DataLayoutPass_O";
}
kind_name_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O : {
  return "KIND_LISPALLOC_llvmo__TargetLibraryInfo_O";
}
kind_name_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O : {
  return "KIND_LISPALLOC_llvmo__MCSubtargetInfo_O";
}
kind_name_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O : {
  return "KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O";
}
kind_name_KIND_LISPALLOC_llvmo__Module_O : {
  return "KIND_LISPALLOC_llvmo__Module_O";
}
kind_name_KIND_LISPALLOC_llvmo__EngineBuilder_O : {
  return "KIND_LISPALLOC_llvmo__EngineBuilder_O";
}
kind_name_KIND_LISPALLOC_core__ForeignData_O : {
  return "KIND_LISPALLOC_core__ForeignData_O";
}
kind_name_KIND_LISPALLOC_llvmo__LLVMContext_O : {
  return "KIND_LISPALLOC_llvmo__LLVMContext_O";
}
kind_name_KIND_LISPALLOC_llvmo__Target_O : {
  return "KIND_LISPALLOC_llvmo__Target_O";
}
kind_name_KIND_LISPALLOC_core__LoadTimeValues_O : {
  return "KIND_LISPALLOC_core__LoadTimeValues_O";
}
kind_name_KIND_LISPALLOC_core__Binder_O : {
  return "KIND_LISPALLOC_core__Binder_O";
}
kind_name_KIND_LISPALLOC_core__IntArray_O : {
  return "KIND_LISPALLOC_core__IntArray_O";
}
kind_name_KIND_LISPALLOC_core__SourceManager_O : {
  return "KIND_LISPALLOC_core__SourceManager_O";
}
kind_name_KIND_LISPALLOC_core__Record_O : {
  return "KIND_LISPALLOC_core__Record_O";
}
kind_name_KIND_LISPALLOC_core__LightUserData_O : {
  return "KIND_LISPALLOC_core__LightUserData_O";
}
kind_name_KIND_LISPALLOC_core__UserData_O : {
  return "KIND_LISPALLOC_core__UserData_O";
}
kind_name_KIND_BOOTSTRAP_core__Symbol_O : {
  return "KIND_BOOTSTRAP_core__Symbol_O";
}
kind_name_KIND_LISPALLOC_core__Null_O : {
  return "KIND_LISPALLOC_core__Null_O";
}
kind_name_KIND_LISPALLOC_core__SourcePosInfo_O : {
  return "KIND_LISPALLOC_core__SourcePosInfo_O";
}
kind_name_KIND_TEMPLATED_LISPALLOC_core__Iterator_O : {
  return "KIND_TEMPLATED_LISPALLOC_core__Iterator_O";
}
kind_name_KIND_LISPALLOC_core__DirectoryIterator_O : {
  return "KIND_LISPALLOC_core__DirectoryIterator_O";
}
kind_name_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O : {
  return "KIND_LISPALLOC_core__RecursiveDirectoryIterator_O";
}
kind_name_KIND_LISPALLOC_core__Regex_O : {
  return "KIND_LISPALLOC_core__Regex_O";
}
kind_name_KIND_LISPALLOC_core__PosixTimeDuration_O : {
  return "KIND_LISPALLOC_core__PosixTimeDuration_O";
}
kind_name_KIND_LISPALLOC_core__SymbolToEnumConverter_O : {
  return "KIND_LISPALLOC_core__SymbolToEnumConverter_O";
}
kind_name_KIND_LISPALLOC_core__CandoException_O : {
  return "KIND_LISPALLOC_core__CandoException_O";
}
kind_name_KIND_LISPALLOC_core__Stream_O : {
  return "KIND_LISPALLOC_core__Stream_O";
}
kind_name_KIND_LISPALLOC_core__AnsiStream_O : {
  return "KIND_LISPALLOC_core__AnsiStream_O";
}
kind_name_KIND_LISPALLOC_core__FileStream_O : {
  return "KIND_LISPALLOC_core__FileStream_O";
}
kind_name_KIND_LISPALLOC_core__IOStreamStream_O : {
  return "KIND_LISPALLOC_core__IOStreamStream_O";
}
kind_name_KIND_LISPALLOC_core__IOFileStream_O : {
  return "KIND_LISPALLOC_core__IOFileStream_O";
}
kind_name_KIND_LISPALLOC_core__ConcatenatedStream_O : {
  return "KIND_LISPALLOC_core__ConcatenatedStream_O";
}
kind_name_KIND_LISPALLOC_core__StringStream_O : {
  return "KIND_LISPALLOC_core__StringStream_O";
}
kind_name_KIND_LISPALLOC_core__StringInputStream_O : {
  return "KIND_LISPALLOC_core__StringInputStream_O";
}
kind_name_KIND_LISPALLOC_core__StringOutputStream_O : {
  return "KIND_LISPALLOC_core__StringOutputStream_O";
}
kind_name_KIND_LISPALLOC_core__SynonymStream_O : {
  return "KIND_LISPALLOC_core__SynonymStream_O";
}
kind_name_KIND_LISPALLOC_core__EchoStream_O : {
  return "KIND_LISPALLOC_core__EchoStream_O";
}
kind_name_KIND_LISPALLOC_core__TwoWayStream_O : {
  return "KIND_LISPALLOC_core__TwoWayStream_O";
}
kind_name_KIND_LISPALLOC_core__BroadcastStream_O : {
  return "KIND_LISPALLOC_core__BroadcastStream_O";
}
kind_name_KIND_LISPALLOC_core__Reader_O : {
  return "KIND_LISPALLOC_core__Reader_O";
}
kind_name_KIND_LISPALLOC_core__Cons_O : {
  return "KIND_LISPALLOC_core__Cons_O";
}
kind_name_KIND_LISPALLOC_core__Archive_O : {
  return "KIND_LISPALLOC_core__Archive_O";
}
kind_name_KIND_LISPALLOC_core__SaveArchive_O : {
  return "KIND_LISPALLOC_core__SaveArchive_O";
}
kind_name_KIND_LISPALLOC_core__SexpSaveArchive_O : {
  return "KIND_LISPALLOC_core__SexpSaveArchive_O";
}
kind_name_KIND_LISPALLOC_core__LoadArchive_O : {
  return "KIND_LISPALLOC_core__LoadArchive_O";
}
kind_name_KIND_LISPALLOC_core__SexpLoadArchive_O : {
  return "KIND_LISPALLOC_core__SexpLoadArchive_O";
}
kind_name_KIND_LISPALLOC_core__HashTable_O : {
  return "KIND_LISPALLOC_core__HashTable_O";
}
kind_name_KIND_LISPALLOC_core__HashTableEq_O : {
  return "KIND_LISPALLOC_core__HashTableEq_O";
}
kind_name_KIND_LISPALLOC_core__HashTableEqualp_O : {
  return "KIND_LISPALLOC_core__HashTableEqualp_O";
}
kind_name_KIND_LISPALLOC_core__HashTableEql_O : {
  return "KIND_LISPALLOC_core__HashTableEql_O";
}
kind_name_KIND_LISPALLOC_core__HashTableEqual_O : {
  return "KIND_LISPALLOC_core__HashTableEqual_O";
}
kind_name_KIND_LISPALLOC_cffi__Pointer_O : {
  return "KIND_LISPALLOC_cffi__Pointer_O";
}
kind_name_KIND_LISPALLOC_core__CxxObject_O : {
  return "KIND_LISPALLOC_core__CxxObject_O";
}
kind_name_KIND_LISPALLOC_core__WeakKeyMapping_O : {
  return "KIND_LISPALLOC_core__WeakKeyMapping_O";
}
kind_name_KIND_LISPALLOC_core__LambdaListHandler_O : {
  return "KIND_LISPALLOC_core__LambdaListHandler_O";
}
kind_name_KIND_LISPALLOC_llvmo__InsertPoint_O : {
  return "KIND_LISPALLOC_llvmo__InsertPoint_O";
}
kind_name_KIND_LISPALLOC_core__SourceFileInfo_O : {
  return "KIND_LISPALLOC_core__SourceFileInfo_O";
}
kind_name_KIND_LISPALLOC_core__SNode_O : {
  return "KIND_LISPALLOC_core__SNode_O";
}
kind_name_KIND_LISPALLOC_core__LeafSNode_O : {
  return "KIND_LISPALLOC_core__LeafSNode_O";
}
kind_name_KIND_LISPALLOC_core__BranchSNode_O : {
  return "KIND_LISPALLOC_core__BranchSNode_O";
}
kind_name_KIND_LISPALLOC_core__Path_O : {
  return "KIND_LISPALLOC_core__Path_O";
}
kind_name_KIND_LISPALLOC_asttooling__AstVisitor_O : {
  return "KIND_LISPALLOC_asttooling__AstVisitor_O";
}
kind_name_KIND_LISPALLOC_llvmo__AttributeSet_O : {
  return "KIND_LISPALLOC_llvmo__AttributeSet_O";
}
kind_name_KIND_LISPALLOC_core__StructureObject_O : {
  return "KIND_LISPALLOC_core__StructureObject_O";
}
kind_name_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O : {
  return "KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O";
}
kind_name_KIND_LISPALLOC_core__Package_O : {
  return "KIND_LISPALLOC_core__Package_O";
}
kind_name_KIND_LISPALLOC_core__DirectoryEntry_O : {
  return "KIND_LISPALLOC_core__DirectoryEntry_O";
}
kind_name_KIND_LISPALLOC_core__Character_dummy_O : {
  return "KIND_LISPALLOC_core__Character_dummy_O";
}
kind_name_KIND_LISPALLOC_core__Function_O : {
  return "KIND_LISPALLOC_core__Function_O";
}
kind_name_KIND_LISPALLOC_core__CompiledFunction_O : {
  return "KIND_LISPALLOC_core__CompiledFunction_O";
}
kind_name_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O : {
  return "KIND_LISPALLOC_core__SingleDispatchGenericFunction_O";
}
kind_name_KIND_LISPALLOC_core__SpecialForm_O : {
  return "KIND_LISPALLOC_core__SpecialForm_O";
}
kind_name_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O : {
  return "KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O";
}
kind_name_KIND_LISPALLOC_core__Instance_O : {
  return "KIND_LISPALLOC_core__Instance_O";
}
kind_name_KIND_LISPALLOC_core__Pointer_O : {
  return "KIND_LISPALLOC_core__Pointer_O";
}
kind_name_KIND_LISPALLOC_clbind__ClassRegistry_O : {
  return "KIND_LISPALLOC_clbind__ClassRegistry_O";
}
kind_name_KIND_LISPALLOC_llvmo__DebugInfo_O : {
  return "KIND_LISPALLOC_llvmo__DebugInfo_O";
}
kind_name_KIND_LISPALLOC_llvmo__DIDerivedType_O : {
  return "KIND_LISPALLOC_llvmo__DIDerivedType_O";
}
kind_name_KIND_LISPALLOC_llvmo__DIArray_O : {
  return "KIND_LISPALLOC_llvmo__DIArray_O";
}
kind_name_KIND_LISPALLOC_llvmo__DIBasicType_O : {
  return "KIND_LISPALLOC_llvmo__DIBasicType_O";
}
kind_name_KIND_LISPALLOC_llvmo__DISubprogram_O : {
  return "KIND_LISPALLOC_llvmo__DISubprogram_O";
}
kind_name_KIND_LISPALLOC_llvmo__DILexicalBlock_O : {
  return "KIND_LISPALLOC_llvmo__DILexicalBlock_O";
}
kind_name_KIND_LISPALLOC_llvmo__DICompileUnit_O : {
  return "KIND_LISPALLOC_llvmo__DICompileUnit_O";
}
kind_name_KIND_LISPALLOC_llvmo__DIDescriptor_O : {
  return "KIND_LISPALLOC_llvmo__DIDescriptor_O";
}
kind_name_KIND_LISPALLOC_llvmo__DIType_O : {
  return "KIND_LISPALLOC_llvmo__DIType_O";
}
kind_name_KIND_LISPALLOC_llvmo__DISubroutineType_O : {
  return "KIND_LISPALLOC_llvmo__DISubroutineType_O";
}
kind_name_KIND_LISPALLOC_llvmo__DICompositeType_O : {
  return "KIND_LISPALLOC_llvmo__DICompositeType_O";
}
kind_name_KIND_LISPALLOC_llvmo__DITypeArray_O : {
  return "KIND_LISPALLOC_llvmo__DITypeArray_O";
}
kind_name_KIND_LISPALLOC_llvmo__DIFile_O : {
  return "KIND_LISPALLOC_llvmo__DIFile_O";
}
kind_name_KIND_LISPALLOC_llvmo__DIScope_O : {
  return "KIND_LISPALLOC_llvmo__DIScope_O";
}
kind_name_KIND_LISPALLOC_core__SmallMultimap_O : {
  return "KIND_LISPALLOC_core__SmallMultimap_O";
}
kind_name_KIND_LISPALLOC_core__Pathname_O : {
  return "KIND_LISPALLOC_core__Pathname_O";
}
kind_name_KIND_LISPALLOC_core__LogicalPathname_O : {
  return "KIND_LISPALLOC_core__LogicalPathname_O";
}
kind_name_KIND_LISPALLOC_core__PosixTime_O : {
  return "KIND_LISPALLOC_core__PosixTime_O";
}
kind_name_KIND_LISPALLOC_core__SmallMap_O : {
  return "KIND_LISPALLOC_core__SmallMap_O";
}
kind_name_KIND_CLASSALLOC_core__Cache : {
  return "KIND_CLASSALLOC_core__Cache";
}
kind_name_KIND_ROOTCLASSALLOC_core__Lisp_O : {
  return "KIND_ROOTCLASSALLOC_core__Lisp_O";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_";
}
kind_name_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_ : {
  return "KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_";
}
kind_name_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure : {
  return "KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__";
}
kind_name_KIND_GCSTRING_gctools__GCString_moveable_char_ : {
  return "KIND_GCSTRING_gctools__GCString_moveable_char_";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_";
}
kind_name_KIND_CLASSALLOC_llvmo__CompiledClosure : {
  return "KIND_CLASSALLOC_llvmo__CompiledClosure";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__";
}
kind_name_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor : {
  return "KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___";
}
kind_name_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor : {
  return "KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_";
}
kind_name_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_ : {
  return "KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_";
}
kind_name_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor : {
  return "KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_";
}
kind_name_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor : {
  return "KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor";
}
kind_name_KIND_CLASSALLOC_core__MacroClosure : {
  return "KIND_CLASSALLOC_core__MacroClosure";
}
kind_name_KIND_CLASSALLOC_core__ConsStepper : {
  return "KIND_CLASSALLOC_core__ConsStepper";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_";
}
kind_name_KIND_CLASSALLOC_core__InstanceClosure : {
  return "KIND_CLASSALLOC_core__InstanceClosure";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__";
}
kind_name_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory : {
  return "KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory";
}
kind_name_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_ : {
  return "KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_";
}
kind_name_KIND_LISPALLOC_asttooling__DerivableMatchCallback : {
  return "KIND_LISPALLOC_asttooling__DerivableMatchCallback";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_";
}
kind_name_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction : {
  return "KIND_LISPALLOC_asttooling__DerivableASTFrontendAction";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__";
}
kind_name_KIND_CLASSALLOC_core__CoreExposer : {
  return "KIND_CLASSALLOC_core__CoreExposer";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__";
}
kind_name_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction : {
  return "KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__";
}
kind_name_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure : {
  return "KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_";
}
kind_name_KIND_CLASSALLOC_core__InterpretedClosure : {
  return "KIND_CLASSALLOC_core__InterpretedClosure";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_";
}
kind_name_KIND_CLASSALLOC_core__VectorStepper : {
  return "KIND_CLASSALLOC_core__VectorStepper";
}
kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__ : {
  return "KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__";
}
#endif // defined(GC_KIND_NAME_MAP)
#if defined(GC_KIND_NAME_MAP_HELPERS)

#endif // defined(GC_KIND_NAME_MAP_HELPERS)
#if defined(GC_KIND_NAME_MAP_TABLE)
static void *KIND_NAME_MAP_table[] = {NULL, NULL /* Skip entry for immediate */
                                      ,
                                      NULL /* Skip entry for immediate */
                                      ,
                                      NULL /* Skip entry for immediate */
                                      /* 4 */,
                                      &&kind_name_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps
                                      /* 5 */,
                                      &&kind_name_KIND_ROOTCLASSALLOC_clbind__detail__class_map
                                      /* 6 */,
                                      &&kind_name_KIND_TEMPLATED_CLASSALLOC_core__Creator
                                      /* 7 */,
                                      &&kind_name_KIND_CLASSALLOC_clbind__DummyCreator
                                      /* 8 */,
                                      &&kind_name_KIND_CLASSALLOC_core__InstanceCreator
                                      /* 9 */,
                                      &&kind_name_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator
                                      /* 10 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__T_O
                                      /* 11 */,
                                      &&kind_name_KIND_LISPALLOC_core__MultiStringBuffer_O
                                      /* 12 */,
                                      &&kind_name_KIND_LISPALLOC_core__ReadTable_O
                                      /* 13 */,
                                      &&kind_name_KIND_LISPALLOC_core__Number_O
                                      /* 14 */,
                                      &&kind_name_KIND_LISPALLOC_core__Complex_O
                                      /* 15 */,
                                      &&kind_name_KIND_LISPALLOC_core__Real_O
                                      /* 16 */,
                                      &&kind_name_KIND_LISPALLOC_core__Rational_O
                                      /* 17 */,
                                      &&kind_name_KIND_LISPALLOC_core__Integer_O
                                      /* 18 */,
                                      &&kind_name_KIND_LISPALLOC_core__Bignum_O
                                      /* 19 */,
                                      &&kind_name_KIND_LISPALLOC_core__Fixnum_dummy_O
                                      /* 20 */,
                                      &&kind_name_KIND_LISPALLOC_core__Ratio_O
                                      /* 21 */,
                                      &&kind_name_KIND_LISPALLOC_core__Float_O
                                      /* 22 */,
                                      &&kind_name_KIND_LISPALLOC_core__DoubleFloat_O
                                      /* 23 */,
                                      &&kind_name_KIND_LISPALLOC_core__LongFloat_O
                                      /* 24 */,
                                      &&kind_name_KIND_LISPALLOC_core__SingleFloat_dummy_O
                                      /* 25 */,
                                      &&kind_name_KIND_LISPALLOC_core__ShortFloat_O
                                      /* 26 */,
                                      &&kind_name_KIND_LISPALLOC_core__FileStatus_O
                                      /* 27 */,
                                      &&kind_name_KIND_LISPALLOC_core__WeakHashTable_O
                                      /* 28 */,
                                      &&kind_name_KIND_LISPALLOC_core__WeakKeyHashTable_O
                                      /* 29 */,
                                      &&kind_name_KIND_LISPALLOC_core__Environment_O
                                      /* 30 */,
                                      &&kind_name_KIND_LISPALLOC_core__ActivationFrame_O
                                      /* 31 */,
                                      &&kind_name_KIND_LISPALLOC_core__TagbodyFrame_O
                                      /* 32 */,
                                      &&kind_name_KIND_LISPALLOC_core__ValueFrame_O
                                      /* 33 */,
                                      &&kind_name_KIND_LISPALLOC_core__FunctionFrame_O
                                      /* 34 */,
                                      &&kind_name_KIND_LISPALLOC_core__LexicalEnvironment_O
                                      /* 35 */,
                                      &&kind_name_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O
                                      /* 36 */,
                                      &&kind_name_KIND_LISPALLOC_core__FunctionValueEnvironment_O
                                      /* 37 */,
                                      &&kind_name_KIND_LISPALLOC_core__ValueEnvironment_O
                                      /* 38 */,
                                      &&kind_name_KIND_LISPALLOC_core__TagbodyEnvironment_O
                                      /* 39 */,
                                      &&kind_name_KIND_LISPALLOC_core__CompileTimeEnvironment_O
                                      /* 40 */,
                                      &&kind_name_KIND_LISPALLOC_core__UnwindProtectEnvironment_O
                                      /* 41 */,
                                      &&kind_name_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O
                                      /* 42 */,
                                      &&kind_name_KIND_LISPALLOC_core__FunctionContainerEnvironment_O
                                      /* 43 */,
                                      &&kind_name_KIND_LISPALLOC_core__StackValueEnvironment_O
                                      /* 44 */,
                                      &&kind_name_KIND_LISPALLOC_core__BlockEnvironment_O
                                      /* 45 */,
                                      &&kind_name_KIND_LISPALLOC_core__MacroletEnvironment_O
                                      /* 46 */,
                                      &&kind_name_KIND_LISPALLOC_core__CatchEnvironment_O
                                      /* 47 */,
                                      &&kind_name_KIND_LISPALLOC_core__GlueEnvironment_O
                                      /* 48 */,
                                      &&kind_name_KIND_LISPALLOC_core__Array_O
                                      /* 49 */,
                                      &&kind_name_KIND_LISPALLOC_core__ArrayObjects_O
                                      /* 50 */,
                                      &&kind_name_KIND_LISPALLOC_core__ArrayDisplaced_O
                                      /* 51 */,
                                      &&kind_name_KIND_LISPALLOC_core__Vector_O
                                      /* 52 */,
                                      &&kind_name_KIND_LISPALLOC_core__BitVector_O
                                      /* 53 */,
                                      &&kind_name_KIND_LISPALLOC_core__SimpleBitVector_O
                                      /* 54 */,
                                      &&kind_name_KIND_LISPALLOC_core__BitVectorWithFillPtr_O
                                      /* 55 */,
                                      &&kind_name_KIND_LISPALLOC_core__VectorDisplaced_O
                                      /* 56 */,
                                      &&kind_name_KIND_LISPALLOC_core__String_O
                                      /* 57 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__Str_O
                                      /* 58 */,
                                      &&kind_name_KIND_LISPALLOC_core__StrWithFillPtr_O
                                      /* 59 */,
                                      &&kind_name_KIND_LISPALLOC_core__VectorObjects_O
                                      /* 60 */,
                                      &&kind_name_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O
                                      /* 61 */,
                                      &&kind_name_KIND_LISPALLOC_core__SingleDispatchMethod_O
                                      /* 62 */,
                                      &&kind_name_KIND_LISPALLOC_core__RandomState_O
                                      /* 63 */,
                                      &&kind_name_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O
                                      /* 64 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DebugLoc_O
                                      /* 65 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Attribute_O
                                      /* 66 */,
                                      &&kind_name_KIND_LISPALLOC_core__RegexMatch_O
                                      /* 67 */,
                                      &&kind_name_KIND_LISPALLOC_core__WeakPointer_O
                                      /* 68 */,
                                      &&kind_name_KIND_LISPALLOC_core__VaList_dummy_O
                                      /* 69 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__StandardObject_O
                                      /* 70 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__Metaobject_O
                                      /* 71 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__Specializer_O
                                      /* 72 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__Class_O
                                      /* 73 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__StdClass_O
                                      /* 74 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__StandardClass_O
                                      /* 75 */,
                                      &&kind_name_KIND_LISPALLOC_core__FuncallableStandardClass_O
                                      /* 76 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__StructureClass_O
                                      /* 77 */,
                                      &&kind_name_KIND_LISPALLOC_core__ForwardReferencedClass_O
                                      /* 78 */,
                                      &&kind_name_KIND_LISPALLOC_core__CxxClass_O
                                      /* 79 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__BuiltInClass_O
                                      /* 80 */,
                                      &&kind_name_KIND_LISPALLOC_clbind__ClassRep_O
                                      /* 81 */,
                                      &&kind_name_KIND_LISPALLOC_core__ExternalObject_O
                                      /* 82 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Value_O
                                      /* 83 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Argument_O
                                      /* 84 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__User_O
                                      /* 85 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Instruction_O
                                      /* 86 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__AtomicRMWInst_O
                                      /* 87 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__LandingPadInst_O
                                      /* 88 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__PHINode_O
                                      /* 89 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__CallInst_O
                                      /* 90 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__StoreInst_O
                                      /* 91 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__UnaryInstruction_O
                                      /* 92 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__LoadInst_O
                                      /* 93 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__AllocaInst_O
                                      /* 94 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__VAArgInst_O
                                      /* 95 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O
                                      /* 96 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__TerminatorInst_O
                                      /* 97 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__UnreachableInst_O
                                      /* 98 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__SwitchInst_O
                                      /* 99 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ReturnInst_O
                                      /* 100 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ResumeInst_O
                                      /* 101 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__BranchInst_O
                                      /* 102 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__InvokeInst_O
                                      /* 103 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__IndirectBrInst_O
                                      /* 104 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__FenceInst_O
                                      /* 105 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Constant_O
                                      /* 106 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__BlockAddress_O
                                      /* 107 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__GlobalValue_O
                                      /* 108 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__GlobalVariable_O
                                      /* 109 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Function_O
                                      /* 110 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ConstantArray_O
                                      /* 111 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ConstantInt_O
                                      /* 112 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ConstantDataSequential_O
                                      /* 113 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ConstantDataArray_O
                                      /* 114 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ConstantStruct_O
                                      /* 115 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ConstantFP_O
                                      /* 116 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__UndefValue_O
                                      /* 117 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ConstantPointerNull_O
                                      /* 118 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ConstantExpr_O
                                      /* 119 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__BasicBlock_O
                                      /* 120 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__IRBuilderBase_O
                                      /* 121 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__IRBuilder_O
                                      /* 122 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DIBuilder_O
                                      /* 123 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Metadata_O
                                      /* 124 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ValueAsMetadata_O
                                      /* 125 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__MDNode_O
                                      /* 126 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__MDString_O
                                      /* 127 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ExecutionEngine_O
                                      /* 128 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__APFloat_O
                                      /* 129 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__PassManagerBuilder_O
                                      /* 130 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DataLayout_O
                                      /* 131 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Triple_O
                                      /* 132 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__APInt_O
                                      /* 133 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__PassManagerBase_O
                                      /* 134 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__FunctionPassManager_O
                                      /* 135 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__PassManager_O
                                      /* 136 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__TargetMachine_O
                                      /* 137 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O
                                      /* 138 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__TargetOptions_O
                                      /* 139 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Type_O
                                      /* 140 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__IntegerType_O
                                      /* 141 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__CompositeType_O
                                      /* 142 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__SequentialType_O
                                      /* 143 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__VectorType_O
                                      /* 144 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__PointerType_O
                                      /* 145 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ArrayType_O
                                      /* 146 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__StructType_O
                                      /* 147 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__FunctionType_O
                                      /* 148 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__NamedMDNode_O
                                      /* 149 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Linker_O
                                      /* 150 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Pass_O
                                      /* 151 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__FunctionPass_O
                                      /* 152 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ModulePass_O
                                      /* 153 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__ImmutablePass_O
                                      /* 154 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DataLayoutPass_O
                                      /* 155 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O
                                      /* 156 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O
                                      /* 157 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O
                                      /* 158 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Module_O
                                      /* 159 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__EngineBuilder_O
                                      /* 160 */,
                                      &&kind_name_KIND_LISPALLOC_core__ForeignData_O
                                      /* 161 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__LLVMContext_O
                                      /* 162 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__Target_O
                                      /* 163 */,
                                      &&kind_name_KIND_LISPALLOC_core__LoadTimeValues_O
                                      /* 164 */,
                                      &&kind_name_KIND_LISPALLOC_core__Binder_O
                                      /* 165 */,
                                      &&kind_name_KIND_LISPALLOC_core__IntArray_O
                                      /* 166 */,
                                      &&kind_name_KIND_LISPALLOC_core__SourceManager_O
                                      /* 167 */,
                                      &&kind_name_KIND_LISPALLOC_core__Record_O
                                      /* 168 */,
                                      &&kind_name_KIND_LISPALLOC_core__LightUserData_O
                                      /* 169 */,
                                      &&kind_name_KIND_LISPALLOC_core__UserData_O
                                      /* 170 */,
                                      &&kind_name_KIND_BOOTSTRAP_core__Symbol_O
                                      /* 171 */,
                                      &&kind_name_KIND_LISPALLOC_core__Null_O
                                      /* 172 */,
                                      &&kind_name_KIND_LISPALLOC_core__SourcePosInfo_O
                                      /* 173 */,
                                      &&kind_name_KIND_TEMPLATED_LISPALLOC_core__Iterator_O
                                      /* 174 */,
                                      &&kind_name_KIND_LISPALLOC_core__DirectoryIterator_O
                                      /* 175 */,
                                      &&kind_name_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O
                                      /* 176 */,
                                      &&kind_name_KIND_LISPALLOC_core__Regex_O
                                      /* 177 */,
                                      &&kind_name_KIND_LISPALLOC_core__PosixTimeDuration_O
                                      /* 178 */,
                                      &&kind_name_KIND_LISPALLOC_core__SymbolToEnumConverter_O
                                      /* 179 */,
                                      &&kind_name_KIND_LISPALLOC_core__CandoException_O
                                      /* 180 */,
                                      &&kind_name_KIND_LISPALLOC_core__Stream_O
                                      /* 181 */,
                                      &&kind_name_KIND_LISPALLOC_core__AnsiStream_O
                                      /* 182 */,
                                      &&kind_name_KIND_LISPALLOC_core__FileStream_O
                                      /* 183 */,
                                      &&kind_name_KIND_LISPALLOC_core__IOStreamStream_O
                                      /* 184 */,
                                      &&kind_name_KIND_LISPALLOC_core__IOFileStream_O
                                      /* 185 */,
                                      &&kind_name_KIND_LISPALLOC_core__ConcatenatedStream_O
                                      /* 186 */,
                                      &&kind_name_KIND_LISPALLOC_core__StringStream_O
                                      /* 187 */,
                                      &&kind_name_KIND_LISPALLOC_core__StringInputStream_O
                                      /* 188 */,
                                      &&kind_name_KIND_LISPALLOC_core__StringOutputStream_O
                                      /* 189 */,
                                      &&kind_name_KIND_LISPALLOC_core__SynonymStream_O
                                      /* 190 */,
                                      &&kind_name_KIND_LISPALLOC_core__EchoStream_O
                                      /* 191 */,
                                      &&kind_name_KIND_LISPALLOC_core__TwoWayStream_O
                                      /* 192 */,
                                      &&kind_name_KIND_LISPALLOC_core__BroadcastStream_O
                                      /* 193 */,
                                      &&kind_name_KIND_LISPALLOC_core__Reader_O
                                      /* 194 */,
                                      &&kind_name_KIND_LISPALLOC_core__Cons_O
                                      /* 195 */,
                                      &&kind_name_KIND_LISPALLOC_core__Archive_O
                                      /* 196 */,
                                      &&kind_name_KIND_LISPALLOC_core__SaveArchive_O
                                      /* 197 */,
                                      &&kind_name_KIND_LISPALLOC_core__SexpSaveArchive_O
                                      /* 198 */,
                                      &&kind_name_KIND_LISPALLOC_core__LoadArchive_O
                                      /* 199 */,
                                      &&kind_name_KIND_LISPALLOC_core__SexpLoadArchive_O
                                      /* 200 */,
                                      &&kind_name_KIND_LISPALLOC_core__HashTable_O
                                      /* 201 */,
                                      &&kind_name_KIND_LISPALLOC_core__HashTableEq_O
                                      /* 202 */,
                                      &&kind_name_KIND_LISPALLOC_core__HashTableEqualp_O
                                      /* 203 */,
                                      &&kind_name_KIND_LISPALLOC_core__HashTableEql_O
                                      /* 204 */,
                                      &&kind_name_KIND_LISPALLOC_core__HashTableEqual_O
                                      /* 205 */,
                                      &&kind_name_KIND_LISPALLOC_cffi__Pointer_O
                                      /* 206 */,
                                      &&kind_name_KIND_LISPALLOC_core__CxxObject_O
                                      /* 207 */,
                                      &&kind_name_KIND_LISPALLOC_core__WeakKeyMapping_O
                                      /* 208 */,
                                      &&kind_name_KIND_LISPALLOC_core__LambdaListHandler_O
                                      /* 209 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__InsertPoint_O
                                      /* 210 */,
                                      &&kind_name_KIND_LISPALLOC_core__SourceFileInfo_O
                                      /* 211 */,
                                      &&kind_name_KIND_LISPALLOC_core__SNode_O
                                      /* 212 */,
                                      &&kind_name_KIND_LISPALLOC_core__LeafSNode_O
                                      /* 213 */,
                                      &&kind_name_KIND_LISPALLOC_core__BranchSNode_O
                                      /* 214 */,
                                      &&kind_name_KIND_LISPALLOC_core__Path_O
                                      /* 215 */,
                                      &&kind_name_KIND_LISPALLOC_asttooling__AstVisitor_O
                                      /* 216 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__AttributeSet_O
                                      /* 217 */,
                                      &&kind_name_KIND_LISPALLOC_core__StructureObject_O
                                      /* 218 */,
                                      &&kind_name_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O
                                      /* 219 */,
                                      &&kind_name_KIND_LISPALLOC_core__Package_O
                                      /* 220 */,
                                      &&kind_name_KIND_LISPALLOC_core__DirectoryEntry_O
                                      /* 221 */,
                                      &&kind_name_KIND_LISPALLOC_core__Character_dummy_O
                                      /* 222 */,
                                      &&kind_name_KIND_LISPALLOC_core__Function_O
                                      /* 223 */,
                                      &&kind_name_KIND_LISPALLOC_core__CompiledFunction_O
                                      /* 224 */,
                                      &&kind_name_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O
                                      /* 225 */,
                                      &&kind_name_KIND_LISPALLOC_core__SpecialForm_O
                                      /* 226 */,
                                      &&kind_name_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O
                                      /* 227 */,
                                      &&kind_name_KIND_LISPALLOC_core__Instance_O
                                      /* 228 */,
                                      &&kind_name_KIND_LISPALLOC_core__Pointer_O
                                      /* 229 */,
                                      &&kind_name_KIND_LISPALLOC_clbind__ClassRegistry_O
                                      /* 230 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DebugInfo_O
                                      /* 231 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DIDerivedType_O
                                      /* 232 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DIArray_O
                                      /* 233 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DIBasicType_O
                                      /* 234 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DISubprogram_O
                                      /* 235 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DILexicalBlock_O
                                      /* 236 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DICompileUnit_O
                                      /* 237 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DIDescriptor_O
                                      /* 238 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DIType_O
                                      /* 239 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DISubroutineType_O
                                      /* 240 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DICompositeType_O
                                      /* 241 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DITypeArray_O
                                      /* 242 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DIFile_O
                                      /* 243 */,
                                      &&kind_name_KIND_LISPALLOC_llvmo__DIScope_O
                                      /* 244 */,
                                      &&kind_name_KIND_LISPALLOC_core__SmallMultimap_O
                                      /* 245 */,
                                      &&kind_name_KIND_LISPALLOC_core__Pathname_O
                                      /* 246 */,
                                      &&kind_name_KIND_LISPALLOC_core__LogicalPathname_O
                                      /* 247 */,
                                      &&kind_name_KIND_LISPALLOC_core__PosixTime_O
                                      /* 248 */,
                                      &&kind_name_KIND_LISPALLOC_core__SmallMap_O
                                      /* 249 */,
                                      &&kind_name_KIND_CLASSALLOC_core__Cache
                                      /* 250 */,
                                      &&kind_name_KIND_ROOTCLASSALLOC_core__Lisp_O
                                      /* 251 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__
                                      /* 252 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_
                                      /* 253 */,
                                      &&kind_name_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_
                                      /* 254 */,
                                      &&kind_name_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure
                                      /* 255 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__
                                      /* 256 */,
                                      &&kind_name_KIND_GCSTRING_gctools__GCString_moveable_char_
                                      /* 257 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_
                                      /* 258 */,
                                      &&kind_name_KIND_CLASSALLOC_llvmo__CompiledClosure
                                      /* 259 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__
                                      /* 260 */,
                                      &&kind_name_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor
                                      /* 261 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___
                                      /* 262 */,
                                      &&kind_name_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor
                                      /* 263 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_
                                      /* 264 */,
                                      &&kind_name_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_
                                      /* 265 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_
                                      /* 266 */,
                                      &&kind_name_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor
                                      /* 267 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_
                                      /* 268 */,
                                      &&kind_name_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor
                                      /* 269 */,
                                      &&kind_name_KIND_CLASSALLOC_core__MacroClosure
                                      /* 270 */,
                                      &&kind_name_KIND_CLASSALLOC_core__ConsStepper
                                      /* 271 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_
                                      /* 272 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_
                                      /* 273 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__
                                      /* 274 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_
                                      /* 275 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_
                                      /* 276 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___
                                      /* 277 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_
                                      /* 278 */,
                                      &&kind_name_KIND_CLASSALLOC_core__InstanceClosure
                                      /* 279 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__
                                      /* 280 */,
                                      &&kind_name_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory
                                      /* 281 */,
                                      &&kind_name_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_
                                      /* 282 */,
                                      &&kind_name_KIND_LISPALLOC_asttooling__DerivableMatchCallback
                                      /* 283 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_
                                      /* 284 */,
                                      &&kind_name_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction
                                      /* 285 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_
                                      /* 286 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__
                                      /* 287 */,
                                      &&kind_name_KIND_CLASSALLOC_core__CoreExposer
                                      /* 288 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__
                                      /* 289 */,
                                      &&kind_name_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction
                                      /* 290 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__
                                      /* 291 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_
                                      /* 292 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__
                                      /* 293 */,
                                      &&kind_name_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure
                                      /* 294 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_
                                      /* 295 */,
                                      &&kind_name_KIND_CLASSALLOC_core__InterpretedClosure
                                      /* 296 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_
                                      /* 297 */,
                                      &&kind_name_KIND_CLASSALLOC_core__VectorStepper
                                      /* 298 */,
                                      &&kind_name_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__};
#endif // defined(GC_KIND_NAME_MAP_TABLE)
#if defined(GC_OBJ_DUMP_MAP)
obj_dump_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps : {
  typedef asttooling::RegMap::RegistryMaps type_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps;
  sout << "KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps size[" << (AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_ROOTCLASSALLOC_clbind__detail__class_map : {
  typedef clbind::detail::class_map type_KIND_ROOTCLASSALLOC_clbind__detail__class_map;
  sout << "KIND_ROOTCLASSALLOC_clbind__detail__class_map size[" << (AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_clbind__detail__class_map)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_TEMPLATED_CLASSALLOC_core__Creator : {
  core::Creator *obj_gc_safe = reinterpret_cast<core::Creator *>(client);
  sout << "KIND_TEMPLATED_CLASSALLOC_core__Creator size[" << (AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_clbind__DummyCreator : {
  typedef clbind::DummyCreator type_KIND_CLASSALLOC_clbind__DummyCreator;
  sout << "KIND_CLASSALLOC_clbind__DummyCreator size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_clbind__DummyCreator)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__InstanceCreator : {
  typedef core::InstanceCreator type_KIND_CLASSALLOC_core__InstanceCreator;
  sout << "KIND_CLASSALLOC_core__InstanceCreator size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__InstanceCreator)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator : {
  clbind::ConstructorCreator *obj_gc_safe = reinterpret_cast<clbind::ConstructorCreator *>(client);
  sout << "KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator size[" << (AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__T_O : {
  typedef core::T_O type_KIND_BOOTSTRAP_core__T_O;
  sout << "KIND_BOOTSTRAP_core__T_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__T_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__MultiStringBuffer_O : {
  typedef core::MultiStringBuffer_O type_KIND_LISPALLOC_core__MultiStringBuffer_O;
  sout << "KIND_LISPALLOC_core__MultiStringBuffer_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__MultiStringBuffer_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ReadTable_O : {
  typedef core::ReadTable_O type_KIND_LISPALLOC_core__ReadTable_O;
  sout << "KIND_LISPALLOC_core__ReadTable_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ReadTable_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Number_O : {
  typedef core::Number_O type_KIND_LISPALLOC_core__Number_O;
  sout << "KIND_LISPALLOC_core__Number_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Number_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Complex_O : {
  typedef core::Complex_O type_KIND_LISPALLOC_core__Complex_O;
  sout << "KIND_LISPALLOC_core__Complex_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Complex_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Real_O : {
  typedef core::Real_O type_KIND_LISPALLOC_core__Real_O;
  sout << "KIND_LISPALLOC_core__Real_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Real_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Rational_O : {
  typedef core::Rational_O type_KIND_LISPALLOC_core__Rational_O;
  sout << "KIND_LISPALLOC_core__Rational_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Rational_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Integer_O : {
  typedef core::Integer_O type_KIND_LISPALLOC_core__Integer_O;
  sout << "KIND_LISPALLOC_core__Integer_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Integer_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Bignum_O : {
  typedef core::Bignum_O type_KIND_LISPALLOC_core__Bignum_O;
  sout << "KIND_LISPALLOC_core__Bignum_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Bignum_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Fixnum_dummy_O : {
  typedef core::Fixnum_dummy_O type_KIND_LISPALLOC_core__Fixnum_dummy_O;
  sout << "KIND_LISPALLOC_core__Fixnum_dummy_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Fixnum_dummy_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Ratio_O : {
  typedef core::Ratio_O type_KIND_LISPALLOC_core__Ratio_O;
  sout << "KIND_LISPALLOC_core__Ratio_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Ratio_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Float_O : {
  typedef core::Float_O type_KIND_LISPALLOC_core__Float_O;
  sout << "KIND_LISPALLOC_core__Float_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Float_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__DoubleFloat_O : {
  typedef core::DoubleFloat_O type_KIND_LISPALLOC_core__DoubleFloat_O;
  sout << "KIND_LISPALLOC_core__DoubleFloat_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__DoubleFloat_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__LongFloat_O : {
  typedef core::LongFloat_O type_KIND_LISPALLOC_core__LongFloat_O;
  sout << "KIND_LISPALLOC_core__LongFloat_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__LongFloat_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SingleFloat_dummy_O : {
  typedef core::SingleFloat_dummy_O type_KIND_LISPALLOC_core__SingleFloat_dummy_O;
  sout << "KIND_LISPALLOC_core__SingleFloat_dummy_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleFloat_dummy_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ShortFloat_O : {
  typedef core::ShortFloat_O type_KIND_LISPALLOC_core__ShortFloat_O;
  sout << "KIND_LISPALLOC_core__ShortFloat_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ShortFloat_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__FileStatus_O : {
  typedef core::FileStatus_O type_KIND_LISPALLOC_core__FileStatus_O;
  sout << "KIND_LISPALLOC_core__FileStatus_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__FileStatus_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__WeakHashTable_O : {
  typedef core::WeakHashTable_O type_KIND_LISPALLOC_core__WeakHashTable_O;
  sout << "KIND_LISPALLOC_core__WeakHashTable_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakHashTable_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__WeakKeyHashTable_O : {
  typedef core::WeakKeyHashTable_O type_KIND_LISPALLOC_core__WeakKeyHashTable_O;
  sout << "KIND_LISPALLOC_core__WeakKeyHashTable_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakKeyHashTable_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Environment_O : {
  typedef core::Environment_O type_KIND_LISPALLOC_core__Environment_O;
  sout << "KIND_LISPALLOC_core__Environment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Environment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ActivationFrame_O : {
  typedef core::ActivationFrame_O type_KIND_LISPALLOC_core__ActivationFrame_O;
  sout << "KIND_LISPALLOC_core__ActivationFrame_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ActivationFrame_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__TagbodyFrame_O : {
  typedef core::TagbodyFrame_O type_KIND_LISPALLOC_core__TagbodyFrame_O;
  sout << "KIND_LISPALLOC_core__TagbodyFrame_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__TagbodyFrame_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ValueFrame_O : {
  typedef core::ValueFrame_O type_KIND_LISPALLOC_core__ValueFrame_O;
  sout << "KIND_LISPALLOC_core__ValueFrame_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ValueFrame_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__FunctionFrame_O : {
  typedef core::FunctionFrame_O type_KIND_LISPALLOC_core__FunctionFrame_O;
  sout << "KIND_LISPALLOC_core__FunctionFrame_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionFrame_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__LexicalEnvironment_O : {
  typedef core::LexicalEnvironment_O type_KIND_LISPALLOC_core__LexicalEnvironment_O;
  sout << "KIND_LISPALLOC_core__LexicalEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__LexicalEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O : {
  typedef core::RuntimeVisibleEnvironment_O type_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O;
  sout << "KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__FunctionValueEnvironment_O : {
  typedef core::FunctionValueEnvironment_O type_KIND_LISPALLOC_core__FunctionValueEnvironment_O;
  sout << "KIND_LISPALLOC_core__FunctionValueEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionValueEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ValueEnvironment_O : {
  typedef core::ValueEnvironment_O type_KIND_LISPALLOC_core__ValueEnvironment_O;
  sout << "KIND_LISPALLOC_core__ValueEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ValueEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__TagbodyEnvironment_O : {
  typedef core::TagbodyEnvironment_O type_KIND_LISPALLOC_core__TagbodyEnvironment_O;
  sout << "KIND_LISPALLOC_core__TagbodyEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__TagbodyEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__CompileTimeEnvironment_O : {
  typedef core::CompileTimeEnvironment_O type_KIND_LISPALLOC_core__CompileTimeEnvironment_O;
  sout << "KIND_LISPALLOC_core__CompileTimeEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__CompileTimeEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__UnwindProtectEnvironment_O : {
  typedef core::UnwindProtectEnvironment_O type_KIND_LISPALLOC_core__UnwindProtectEnvironment_O;
  sout << "KIND_LISPALLOC_core__UnwindProtectEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__UnwindProtectEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O : {
  typedef core::SymbolMacroletEnvironment_O type_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O;
  sout << "KIND_LISPALLOC_core__SymbolMacroletEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__FunctionContainerEnvironment_O : {
  typedef core::FunctionContainerEnvironment_O type_KIND_LISPALLOC_core__FunctionContainerEnvironment_O;
  sout << "KIND_LISPALLOC_core__FunctionContainerEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionContainerEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__StackValueEnvironment_O : {
  typedef core::StackValueEnvironment_O type_KIND_LISPALLOC_core__StackValueEnvironment_O;
  sout << "KIND_LISPALLOC_core__StackValueEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__StackValueEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__BlockEnvironment_O : {
  typedef core::BlockEnvironment_O type_KIND_LISPALLOC_core__BlockEnvironment_O;
  sout << "KIND_LISPALLOC_core__BlockEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__BlockEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__MacroletEnvironment_O : {
  typedef core::MacroletEnvironment_O type_KIND_LISPALLOC_core__MacroletEnvironment_O;
  sout << "KIND_LISPALLOC_core__MacroletEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__MacroletEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__CatchEnvironment_O : {
  typedef core::CatchEnvironment_O type_KIND_LISPALLOC_core__CatchEnvironment_O;
  sout << "KIND_LISPALLOC_core__CatchEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__CatchEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__GlueEnvironment_O : {
  typedef core::GlueEnvironment_O type_KIND_LISPALLOC_core__GlueEnvironment_O;
  sout << "KIND_LISPALLOC_core__GlueEnvironment_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__GlueEnvironment_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Array_O : {
  typedef core::Array_O type_KIND_LISPALLOC_core__Array_O;
  sout << "KIND_LISPALLOC_core__Array_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Array_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ArrayObjects_O : {
  typedef core::ArrayObjects_O type_KIND_LISPALLOC_core__ArrayObjects_O;
  sout << "KIND_LISPALLOC_core__ArrayObjects_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ArrayObjects_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ArrayDisplaced_O : {
  typedef core::ArrayDisplaced_O type_KIND_LISPALLOC_core__ArrayDisplaced_O;
  sout << "KIND_LISPALLOC_core__ArrayDisplaced_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ArrayDisplaced_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Vector_O : {
  typedef core::Vector_O type_KIND_LISPALLOC_core__Vector_O;
  sout << "KIND_LISPALLOC_core__Vector_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Vector_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__BitVector_O : {
  typedef core::BitVector_O type_KIND_LISPALLOC_core__BitVector_O;
  sout << "KIND_LISPALLOC_core__BitVector_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__BitVector_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SimpleBitVector_O : {
  typedef core::SimpleBitVector_O type_KIND_LISPALLOC_core__SimpleBitVector_O;
  sout << "KIND_LISPALLOC_core__SimpleBitVector_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SimpleBitVector_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__BitVectorWithFillPtr_O : {
  typedef core::BitVectorWithFillPtr_O type_KIND_LISPALLOC_core__BitVectorWithFillPtr_O;
  sout << "KIND_LISPALLOC_core__BitVectorWithFillPtr_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__BitVectorWithFillPtr_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__VectorDisplaced_O : {
  typedef core::VectorDisplaced_O type_KIND_LISPALLOC_core__VectorDisplaced_O;
  sout << "KIND_LISPALLOC_core__VectorDisplaced_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorDisplaced_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__String_O : {
  typedef core::String_O type_KIND_LISPALLOC_core__String_O;
  sout << "KIND_LISPALLOC_core__String_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__String_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__Str_O : {
  typedef core::Str_O type_KIND_BOOTSTRAP_core__Str_O;
  sout << "KIND_BOOTSTRAP_core__Str_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Str_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__StrWithFillPtr_O : {
  typedef core::StrWithFillPtr_O type_KIND_LISPALLOC_core__StrWithFillPtr_O;
  sout << "KIND_LISPALLOC_core__StrWithFillPtr_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__StrWithFillPtr_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__VectorObjects_O : {
  typedef core::VectorObjects_O type_KIND_LISPALLOC_core__VectorObjects_O;
  sout << "KIND_LISPALLOC_core__VectorObjects_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorObjects_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O : {
  typedef core::VectorObjectsWithFillPtr_O type_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O;
  sout << "KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SingleDispatchMethod_O : {
  typedef core::SingleDispatchMethod_O type_KIND_LISPALLOC_core__SingleDispatchMethod_O;
  sout << "KIND_LISPALLOC_core__SingleDispatchMethod_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchMethod_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__RandomState_O : {
  typedef core::RandomState_O type_KIND_LISPALLOC_core__RandomState_O;
  sout << "KIND_LISPALLOC_core__RandomState_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__RandomState_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O : {
  core::WrappedPointer_O *obj_gc_safe = reinterpret_cast<core::WrappedPointer_O *>(client);
  sout << "KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O size[" << (AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DebugLoc_O : {
  typedef llvmo::DebugLoc_O type_KIND_LISPALLOC_llvmo__DebugLoc_O;
  sout << "KIND_LISPALLOC_llvmo__DebugLoc_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DebugLoc_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Attribute_O : {
  typedef llvmo::Attribute_O type_KIND_LISPALLOC_llvmo__Attribute_O;
  sout << "KIND_LISPALLOC_llvmo__Attribute_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Attribute_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__RegexMatch_O : {
  typedef core::RegexMatch_O type_KIND_LISPALLOC_core__RegexMatch_O;
  sout << "KIND_LISPALLOC_core__RegexMatch_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__RegexMatch_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__WeakPointer_O : {
  typedef core::WeakPointer_O type_KIND_LISPALLOC_core__WeakPointer_O;
  sout << "KIND_LISPALLOC_core__WeakPointer_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakPointer_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__VaList_dummy_O : {
  typedef core::VaList_dummy_O type_KIND_LISPALLOC_core__VaList_dummy_O;
  sout << "KIND_LISPALLOC_core__VaList_dummy_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__VaList_dummy_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__StandardObject_O : {
  typedef core::StandardObject_O type_KIND_BOOTSTRAP_core__StandardObject_O;
  sout << "KIND_BOOTSTRAP_core__StandardObject_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StandardObject_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__Metaobject_O : {
  typedef core::Metaobject_O type_KIND_BOOTSTRAP_core__Metaobject_O;
  sout << "KIND_BOOTSTRAP_core__Metaobject_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Metaobject_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__Specializer_O : {
  typedef core::Specializer_O type_KIND_BOOTSTRAP_core__Specializer_O;
  sout << "KIND_BOOTSTRAP_core__Specializer_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Specializer_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__Class_O : {
  typedef core::Class_O type_KIND_BOOTSTRAP_core__Class_O;
  sout << "KIND_BOOTSTRAP_core__Class_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Class_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__StdClass_O : {
  typedef core::StdClass_O type_KIND_BOOTSTRAP_core__StdClass_O;
  sout << "KIND_BOOTSTRAP_core__StdClass_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StdClass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__StandardClass_O : {
  typedef core::StandardClass_O type_KIND_BOOTSTRAP_core__StandardClass_O;
  sout << "KIND_BOOTSTRAP_core__StandardClass_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StandardClass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__FuncallableStandardClass_O : {
  typedef core::FuncallableStandardClass_O type_KIND_LISPALLOC_core__FuncallableStandardClass_O;
  sout << "KIND_LISPALLOC_core__FuncallableStandardClass_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__FuncallableStandardClass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__StructureClass_O : {
  typedef core::StructureClass_O type_KIND_BOOTSTRAP_core__StructureClass_O;
  sout << "KIND_BOOTSTRAP_core__StructureClass_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StructureClass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ForwardReferencedClass_O : {
  typedef core::ForwardReferencedClass_O type_KIND_LISPALLOC_core__ForwardReferencedClass_O;
  sout << "KIND_LISPALLOC_core__ForwardReferencedClass_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ForwardReferencedClass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__CxxClass_O : {
  typedef core::CxxClass_O type_KIND_LISPALLOC_core__CxxClass_O;
  sout << "KIND_LISPALLOC_core__CxxClass_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__CxxClass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__BuiltInClass_O : {
  typedef core::BuiltInClass_O type_KIND_BOOTSTRAP_core__BuiltInClass_O;
  sout << "KIND_BOOTSTRAP_core__BuiltInClass_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__BuiltInClass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_clbind__ClassRep_O : {
  typedef clbind::ClassRep_O type_KIND_LISPALLOC_clbind__ClassRep_O;
  sout << "KIND_LISPALLOC_clbind__ClassRep_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_clbind__ClassRep_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ExternalObject_O : {
  typedef core::ExternalObject_O type_KIND_LISPALLOC_core__ExternalObject_O;
  sout << "KIND_LISPALLOC_core__ExternalObject_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ExternalObject_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Value_O : {
  typedef llvmo::Value_O type_KIND_LISPALLOC_llvmo__Value_O;
  sout << "KIND_LISPALLOC_llvmo__Value_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Value_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Argument_O : {
  typedef llvmo::Argument_O type_KIND_LISPALLOC_llvmo__Argument_O;
  sout << "KIND_LISPALLOC_llvmo__Argument_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Argument_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__User_O : {
  typedef llvmo::User_O type_KIND_LISPALLOC_llvmo__User_O;
  sout << "KIND_LISPALLOC_llvmo__User_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__User_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Instruction_O : {
  typedef llvmo::Instruction_O type_KIND_LISPALLOC_llvmo__Instruction_O;
  sout << "KIND_LISPALLOC_llvmo__Instruction_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Instruction_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__AtomicRMWInst_O : {
  typedef llvmo::AtomicRMWInst_O type_KIND_LISPALLOC_llvmo__AtomicRMWInst_O;
  sout << "KIND_LISPALLOC_llvmo__AtomicRMWInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AtomicRMWInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__LandingPadInst_O : {
  typedef llvmo::LandingPadInst_O type_KIND_LISPALLOC_llvmo__LandingPadInst_O;
  sout << "KIND_LISPALLOC_llvmo__LandingPadInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LandingPadInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__PHINode_O : {
  typedef llvmo::PHINode_O type_KIND_LISPALLOC_llvmo__PHINode_O;
  sout << "KIND_LISPALLOC_llvmo__PHINode_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PHINode_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__CallInst_O : {
  typedef llvmo::CallInst_O type_KIND_LISPALLOC_llvmo__CallInst_O;
  sout << "KIND_LISPALLOC_llvmo__CallInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__CallInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__StoreInst_O : {
  typedef llvmo::StoreInst_O type_KIND_LISPALLOC_llvmo__StoreInst_O;
  sout << "KIND_LISPALLOC_llvmo__StoreInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__StoreInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__UnaryInstruction_O : {
  typedef llvmo::UnaryInstruction_O type_KIND_LISPALLOC_llvmo__UnaryInstruction_O;
  sout << "KIND_LISPALLOC_llvmo__UnaryInstruction_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UnaryInstruction_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__LoadInst_O : {
  typedef llvmo::LoadInst_O type_KIND_LISPALLOC_llvmo__LoadInst_O;
  sout << "KIND_LISPALLOC_llvmo__LoadInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LoadInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__AllocaInst_O : {
  typedef llvmo::AllocaInst_O type_KIND_LISPALLOC_llvmo__AllocaInst_O;
  sout << "KIND_LISPALLOC_llvmo__AllocaInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AllocaInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__VAArgInst_O : {
  typedef llvmo::VAArgInst_O type_KIND_LISPALLOC_llvmo__VAArgInst_O;
  sout << "KIND_LISPALLOC_llvmo__VAArgInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__VAArgInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O : {
  typedef llvmo::AtomicCmpXchgInst_O type_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O;
  sout << "KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__TerminatorInst_O : {
  typedef llvmo::TerminatorInst_O type_KIND_LISPALLOC_llvmo__TerminatorInst_O;
  sout << "KIND_LISPALLOC_llvmo__TerminatorInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TerminatorInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__UnreachableInst_O : {
  typedef llvmo::UnreachableInst_O type_KIND_LISPALLOC_llvmo__UnreachableInst_O;
  sout << "KIND_LISPALLOC_llvmo__UnreachableInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UnreachableInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__SwitchInst_O : {
  typedef llvmo::SwitchInst_O type_KIND_LISPALLOC_llvmo__SwitchInst_O;
  sout << "KIND_LISPALLOC_llvmo__SwitchInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__SwitchInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ReturnInst_O : {
  typedef llvmo::ReturnInst_O type_KIND_LISPALLOC_llvmo__ReturnInst_O;
  sout << "KIND_LISPALLOC_llvmo__ReturnInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ReturnInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ResumeInst_O : {
  typedef llvmo::ResumeInst_O type_KIND_LISPALLOC_llvmo__ResumeInst_O;
  sout << "KIND_LISPALLOC_llvmo__ResumeInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ResumeInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__BranchInst_O : {
  typedef llvmo::BranchInst_O type_KIND_LISPALLOC_llvmo__BranchInst_O;
  sout << "KIND_LISPALLOC_llvmo__BranchInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BranchInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__InvokeInst_O : {
  typedef llvmo::InvokeInst_O type_KIND_LISPALLOC_llvmo__InvokeInst_O;
  sout << "KIND_LISPALLOC_llvmo__InvokeInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__InvokeInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__IndirectBrInst_O : {
  typedef llvmo::IndirectBrInst_O type_KIND_LISPALLOC_llvmo__IndirectBrInst_O;
  sout << "KIND_LISPALLOC_llvmo__IndirectBrInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IndirectBrInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__FenceInst_O : {
  typedef llvmo::FenceInst_O type_KIND_LISPALLOC_llvmo__FenceInst_O;
  sout << "KIND_LISPALLOC_llvmo__FenceInst_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FenceInst_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Constant_O : {
  typedef llvmo::Constant_O type_KIND_LISPALLOC_llvmo__Constant_O;
  sout << "KIND_LISPALLOC_llvmo__Constant_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Constant_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__BlockAddress_O : {
  typedef llvmo::BlockAddress_O type_KIND_LISPALLOC_llvmo__BlockAddress_O;
  sout << "KIND_LISPALLOC_llvmo__BlockAddress_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BlockAddress_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__GlobalValue_O : {
  typedef llvmo::GlobalValue_O type_KIND_LISPALLOC_llvmo__GlobalValue_O;
  sout << "KIND_LISPALLOC_llvmo__GlobalValue_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__GlobalValue_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__GlobalVariable_O : {
  typedef llvmo::GlobalVariable_O type_KIND_LISPALLOC_llvmo__GlobalVariable_O;
  sout << "KIND_LISPALLOC_llvmo__GlobalVariable_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__GlobalVariable_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Function_O : {
  typedef llvmo::Function_O type_KIND_LISPALLOC_llvmo__Function_O;
  sout << "KIND_LISPALLOC_llvmo__Function_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Function_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ConstantArray_O : {
  typedef llvmo::ConstantArray_O type_KIND_LISPALLOC_llvmo__ConstantArray_O;
  sout << "KIND_LISPALLOC_llvmo__ConstantArray_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantArray_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ConstantInt_O : {
  typedef llvmo::ConstantInt_O type_KIND_LISPALLOC_llvmo__ConstantInt_O;
  sout << "KIND_LISPALLOC_llvmo__ConstantInt_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantInt_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ConstantDataSequential_O : {
  typedef llvmo::ConstantDataSequential_O type_KIND_LISPALLOC_llvmo__ConstantDataSequential_O;
  sout << "KIND_LISPALLOC_llvmo__ConstantDataSequential_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantDataSequential_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ConstantDataArray_O : {
  typedef llvmo::ConstantDataArray_O type_KIND_LISPALLOC_llvmo__ConstantDataArray_O;
  sout << "KIND_LISPALLOC_llvmo__ConstantDataArray_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantDataArray_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ConstantStruct_O : {
  typedef llvmo::ConstantStruct_O type_KIND_LISPALLOC_llvmo__ConstantStruct_O;
  sout << "KIND_LISPALLOC_llvmo__ConstantStruct_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantStruct_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ConstantFP_O : {
  typedef llvmo::ConstantFP_O type_KIND_LISPALLOC_llvmo__ConstantFP_O;
  sout << "KIND_LISPALLOC_llvmo__ConstantFP_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantFP_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__UndefValue_O : {
  typedef llvmo::UndefValue_O type_KIND_LISPALLOC_llvmo__UndefValue_O;
  sout << "KIND_LISPALLOC_llvmo__UndefValue_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UndefValue_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ConstantPointerNull_O : {
  typedef llvmo::ConstantPointerNull_O type_KIND_LISPALLOC_llvmo__ConstantPointerNull_O;
  sout << "KIND_LISPALLOC_llvmo__ConstantPointerNull_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantPointerNull_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ConstantExpr_O : {
  typedef llvmo::ConstantExpr_O type_KIND_LISPALLOC_llvmo__ConstantExpr_O;
  sout << "KIND_LISPALLOC_llvmo__ConstantExpr_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantExpr_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__BasicBlock_O : {
  typedef llvmo::BasicBlock_O type_KIND_LISPALLOC_llvmo__BasicBlock_O;
  sout << "KIND_LISPALLOC_llvmo__BasicBlock_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BasicBlock_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__IRBuilderBase_O : {
  typedef llvmo::IRBuilderBase_O type_KIND_LISPALLOC_llvmo__IRBuilderBase_O;
  sout << "KIND_LISPALLOC_llvmo__IRBuilderBase_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IRBuilderBase_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__IRBuilder_O : {
  typedef llvmo::IRBuilder_O type_KIND_LISPALLOC_llvmo__IRBuilder_O;
  sout << "KIND_LISPALLOC_llvmo__IRBuilder_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IRBuilder_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DIBuilder_O : {
  typedef llvmo::DIBuilder_O type_KIND_LISPALLOC_llvmo__DIBuilder_O;
  sout << "KIND_LISPALLOC_llvmo__DIBuilder_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIBuilder_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Metadata_O : {
  typedef llvmo::Metadata_O type_KIND_LISPALLOC_llvmo__Metadata_O;
  sout << "KIND_LISPALLOC_llvmo__Metadata_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Metadata_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ValueAsMetadata_O : {
  typedef llvmo::ValueAsMetadata_O type_KIND_LISPALLOC_llvmo__ValueAsMetadata_O;
  sout << "KIND_LISPALLOC_llvmo__ValueAsMetadata_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ValueAsMetadata_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__MDNode_O : {
  typedef llvmo::MDNode_O type_KIND_LISPALLOC_llvmo__MDNode_O;
  sout << "KIND_LISPALLOC_llvmo__MDNode_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MDNode_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__MDString_O : {
  typedef llvmo::MDString_O type_KIND_LISPALLOC_llvmo__MDString_O;
  sout << "KIND_LISPALLOC_llvmo__MDString_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MDString_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ExecutionEngine_O : {
  typedef llvmo::ExecutionEngine_O type_KIND_LISPALLOC_llvmo__ExecutionEngine_O;
  sout << "KIND_LISPALLOC_llvmo__ExecutionEngine_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ExecutionEngine_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__APFloat_O : {
  typedef llvmo::APFloat_O type_KIND_LISPALLOC_llvmo__APFloat_O;
  sout << "KIND_LISPALLOC_llvmo__APFloat_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__APFloat_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__PassManagerBuilder_O : {
  typedef llvmo::PassManagerBuilder_O type_KIND_LISPALLOC_llvmo__PassManagerBuilder_O;
  sout << "KIND_LISPALLOC_llvmo__PassManagerBuilder_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManagerBuilder_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DataLayout_O : {
  typedef llvmo::DataLayout_O type_KIND_LISPALLOC_llvmo__DataLayout_O;
  sout << "KIND_LISPALLOC_llvmo__DataLayout_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DataLayout_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Triple_O : {
  typedef llvmo::Triple_O type_KIND_LISPALLOC_llvmo__Triple_O;
  sout << "KIND_LISPALLOC_llvmo__Triple_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Triple_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__APInt_O : {
  typedef llvmo::APInt_O type_KIND_LISPALLOC_llvmo__APInt_O;
  sout << "KIND_LISPALLOC_llvmo__APInt_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__APInt_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__PassManagerBase_O : {
  typedef llvmo::PassManagerBase_O type_KIND_LISPALLOC_llvmo__PassManagerBase_O;
  sout << "KIND_LISPALLOC_llvmo__PassManagerBase_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManagerBase_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__FunctionPassManager_O : {
  typedef llvmo::FunctionPassManager_O type_KIND_LISPALLOC_llvmo__FunctionPassManager_O;
  sout << "KIND_LISPALLOC_llvmo__FunctionPassManager_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionPassManager_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__PassManager_O : {
  typedef llvmo::PassManager_O type_KIND_LISPALLOC_llvmo__PassManager_O;
  sout << "KIND_LISPALLOC_llvmo__PassManager_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManager_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__TargetMachine_O : {
  typedef llvmo::TargetMachine_O type_KIND_LISPALLOC_llvmo__TargetMachine_O;
  sout << "KIND_LISPALLOC_llvmo__TargetMachine_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetMachine_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O : {
  typedef llvmo::LLVMTargetMachine_O type_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O;
  sout << "KIND_LISPALLOC_llvmo__LLVMTargetMachine_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__TargetOptions_O : {
  typedef llvmo::TargetOptions_O type_KIND_LISPALLOC_llvmo__TargetOptions_O;
  sout << "KIND_LISPALLOC_llvmo__TargetOptions_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetOptions_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Type_O : {
  typedef llvmo::Type_O type_KIND_LISPALLOC_llvmo__Type_O;
  sout << "KIND_LISPALLOC_llvmo__Type_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Type_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__IntegerType_O : {
  typedef llvmo::IntegerType_O type_KIND_LISPALLOC_llvmo__IntegerType_O;
  sout << "KIND_LISPALLOC_llvmo__IntegerType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IntegerType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__CompositeType_O : {
  typedef llvmo::CompositeType_O type_KIND_LISPALLOC_llvmo__CompositeType_O;
  sout << "KIND_LISPALLOC_llvmo__CompositeType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__CompositeType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__SequentialType_O : {
  typedef llvmo::SequentialType_O type_KIND_LISPALLOC_llvmo__SequentialType_O;
  sout << "KIND_LISPALLOC_llvmo__SequentialType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__SequentialType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__VectorType_O : {
  typedef llvmo::VectorType_O type_KIND_LISPALLOC_llvmo__VectorType_O;
  sout << "KIND_LISPALLOC_llvmo__VectorType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__VectorType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__PointerType_O : {
  typedef llvmo::PointerType_O type_KIND_LISPALLOC_llvmo__PointerType_O;
  sout << "KIND_LISPALLOC_llvmo__PointerType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PointerType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ArrayType_O : {
  typedef llvmo::ArrayType_O type_KIND_LISPALLOC_llvmo__ArrayType_O;
  sout << "KIND_LISPALLOC_llvmo__ArrayType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ArrayType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__StructType_O : {
  typedef llvmo::StructType_O type_KIND_LISPALLOC_llvmo__StructType_O;
  sout << "KIND_LISPALLOC_llvmo__StructType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__StructType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__FunctionType_O : {
  typedef llvmo::FunctionType_O type_KIND_LISPALLOC_llvmo__FunctionType_O;
  sout << "KIND_LISPALLOC_llvmo__FunctionType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__NamedMDNode_O : {
  typedef llvmo::NamedMDNode_O type_KIND_LISPALLOC_llvmo__NamedMDNode_O;
  sout << "KIND_LISPALLOC_llvmo__NamedMDNode_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__NamedMDNode_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Linker_O : {
  typedef llvmo::Linker_O type_KIND_LISPALLOC_llvmo__Linker_O;
  sout << "KIND_LISPALLOC_llvmo__Linker_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Linker_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Pass_O : {
  typedef llvmo::Pass_O type_KIND_LISPALLOC_llvmo__Pass_O;
  sout << "KIND_LISPALLOC_llvmo__Pass_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Pass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__FunctionPass_O : {
  typedef llvmo::FunctionPass_O type_KIND_LISPALLOC_llvmo__FunctionPass_O;
  sout << "KIND_LISPALLOC_llvmo__FunctionPass_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionPass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ModulePass_O : {
  typedef llvmo::ModulePass_O type_KIND_LISPALLOC_llvmo__ModulePass_O;
  sout << "KIND_LISPALLOC_llvmo__ModulePass_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ModulePass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__ImmutablePass_O : {
  typedef llvmo::ImmutablePass_O type_KIND_LISPALLOC_llvmo__ImmutablePass_O;
  sout << "KIND_LISPALLOC_llvmo__ImmutablePass_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ImmutablePass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DataLayoutPass_O : {
  typedef llvmo::DataLayoutPass_O type_KIND_LISPALLOC_llvmo__DataLayoutPass_O;
  sout << "KIND_LISPALLOC_llvmo__DataLayoutPass_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DataLayoutPass_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O : {
  typedef llvmo::TargetLibraryInfo_O type_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O;
  sout << "KIND_LISPALLOC_llvmo__TargetLibraryInfo_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O : {
  typedef llvmo::MCSubtargetInfo_O type_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O;
  sout << "KIND_LISPALLOC_llvmo__MCSubtargetInfo_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O : {
  typedef llvmo::TargetSubtargetInfo_O type_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O;
  sout << "KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Module_O : {
  typedef llvmo::Module_O type_KIND_LISPALLOC_llvmo__Module_O;
  sout << "KIND_LISPALLOC_llvmo__Module_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Module_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__EngineBuilder_O : {
  typedef llvmo::EngineBuilder_O type_KIND_LISPALLOC_llvmo__EngineBuilder_O;
  sout << "KIND_LISPALLOC_llvmo__EngineBuilder_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__EngineBuilder_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ForeignData_O : {
  typedef core::ForeignData_O type_KIND_LISPALLOC_core__ForeignData_O;
  sout << "KIND_LISPALLOC_core__ForeignData_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ForeignData_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__LLVMContext_O : {
  typedef llvmo::LLVMContext_O type_KIND_LISPALLOC_llvmo__LLVMContext_O;
  sout << "KIND_LISPALLOC_llvmo__LLVMContext_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LLVMContext_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__Target_O : {
  typedef llvmo::Target_O type_KIND_LISPALLOC_llvmo__Target_O;
  sout << "KIND_LISPALLOC_llvmo__Target_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Target_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__LoadTimeValues_O : {
  typedef core::LoadTimeValues_O type_KIND_LISPALLOC_core__LoadTimeValues_O;
  sout << "KIND_LISPALLOC_core__LoadTimeValues_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__LoadTimeValues_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Binder_O : {
  typedef core::Binder_O type_KIND_LISPALLOC_core__Binder_O;
  sout << "KIND_LISPALLOC_core__Binder_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Binder_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__IntArray_O : {
  typedef core::IntArray_O type_KIND_LISPALLOC_core__IntArray_O;
  sout << "KIND_LISPALLOC_core__IntArray_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__IntArray_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SourceManager_O : {
  typedef core::SourceManager_O type_KIND_LISPALLOC_core__SourceManager_O;
  sout << "KIND_LISPALLOC_core__SourceManager_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SourceManager_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Record_O : {
  typedef core::Record_O type_KIND_LISPALLOC_core__Record_O;
  sout << "KIND_LISPALLOC_core__Record_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Record_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__LightUserData_O : {
  typedef core::LightUserData_O type_KIND_LISPALLOC_core__LightUserData_O;
  sout << "KIND_LISPALLOC_core__LightUserData_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__LightUserData_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__UserData_O : {
  typedef core::UserData_O type_KIND_LISPALLOC_core__UserData_O;
  sout << "KIND_LISPALLOC_core__UserData_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__UserData_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_BOOTSTRAP_core__Symbol_O : {
  typedef core::Symbol_O type_KIND_BOOTSTRAP_core__Symbol_O;
  sout << "KIND_BOOTSTRAP_core__Symbol_O size[" << (AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Symbol_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Null_O : {
  typedef core::Null_O type_KIND_LISPALLOC_core__Null_O;
  sout << "KIND_LISPALLOC_core__Null_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Null_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SourcePosInfo_O : {
  typedef core::SourcePosInfo_O type_KIND_LISPALLOC_core__SourcePosInfo_O;
  sout << "KIND_LISPALLOC_core__SourcePosInfo_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SourcePosInfo_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_TEMPLATED_LISPALLOC_core__Iterator_O : {
  core::Iterator_O *obj_gc_safe = reinterpret_cast<core::Iterator_O *>(client);
  sout << "KIND_TEMPLATED_LISPALLOC_core__Iterator_O size[" << (AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__DirectoryIterator_O : {
  typedef core::DirectoryIterator_O type_KIND_LISPALLOC_core__DirectoryIterator_O;
  sout << "KIND_LISPALLOC_core__DirectoryIterator_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__DirectoryIterator_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O : {
  typedef core::RecursiveDirectoryIterator_O type_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O;
  sout << "KIND_LISPALLOC_core__RecursiveDirectoryIterator_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Regex_O : {
  typedef core::Regex_O type_KIND_LISPALLOC_core__Regex_O;
  sout << "KIND_LISPALLOC_core__Regex_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Regex_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__PosixTimeDuration_O : {
  typedef core::PosixTimeDuration_O type_KIND_LISPALLOC_core__PosixTimeDuration_O;
  sout << "KIND_LISPALLOC_core__PosixTimeDuration_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__PosixTimeDuration_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SymbolToEnumConverter_O : {
  typedef core::SymbolToEnumConverter_O type_KIND_LISPALLOC_core__SymbolToEnumConverter_O;
  sout << "KIND_LISPALLOC_core__SymbolToEnumConverter_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SymbolToEnumConverter_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__CandoException_O : {
  typedef core::CandoException_O type_KIND_LISPALLOC_core__CandoException_O;
  sout << "KIND_LISPALLOC_core__CandoException_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__CandoException_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Stream_O : {
  typedef core::Stream_O type_KIND_LISPALLOC_core__Stream_O;
  sout << "KIND_LISPALLOC_core__Stream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Stream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__AnsiStream_O : {
  typedef core::AnsiStream_O type_KIND_LISPALLOC_core__AnsiStream_O;
  sout << "KIND_LISPALLOC_core__AnsiStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__AnsiStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__FileStream_O : {
  typedef core::FileStream_O type_KIND_LISPALLOC_core__FileStream_O;
  sout << "KIND_LISPALLOC_core__FileStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__FileStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__IOStreamStream_O : {
  typedef core::IOStreamStream_O type_KIND_LISPALLOC_core__IOStreamStream_O;
  sout << "KIND_LISPALLOC_core__IOStreamStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__IOStreamStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__IOFileStream_O : {
  typedef core::IOFileStream_O type_KIND_LISPALLOC_core__IOFileStream_O;
  sout << "KIND_LISPALLOC_core__IOFileStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__IOFileStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__ConcatenatedStream_O : {
  typedef core::ConcatenatedStream_O type_KIND_LISPALLOC_core__ConcatenatedStream_O;
  sout << "KIND_LISPALLOC_core__ConcatenatedStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__ConcatenatedStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__StringStream_O : {
  typedef core::StringStream_O type_KIND_LISPALLOC_core__StringStream_O;
  sout << "KIND_LISPALLOC_core__StringStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__StringStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__StringInputStream_O : {
  typedef core::StringInputStream_O type_KIND_LISPALLOC_core__StringInputStream_O;
  sout << "KIND_LISPALLOC_core__StringInputStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__StringInputStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__StringOutputStream_O : {
  typedef core::StringOutputStream_O type_KIND_LISPALLOC_core__StringOutputStream_O;
  sout << "KIND_LISPALLOC_core__StringOutputStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__StringOutputStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SynonymStream_O : {
  typedef core::SynonymStream_O type_KIND_LISPALLOC_core__SynonymStream_O;
  sout << "KIND_LISPALLOC_core__SynonymStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SynonymStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__EchoStream_O : {
  typedef core::EchoStream_O type_KIND_LISPALLOC_core__EchoStream_O;
  sout << "KIND_LISPALLOC_core__EchoStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__EchoStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__TwoWayStream_O : {
  typedef core::TwoWayStream_O type_KIND_LISPALLOC_core__TwoWayStream_O;
  sout << "KIND_LISPALLOC_core__TwoWayStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__TwoWayStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__BroadcastStream_O : {
  typedef core::BroadcastStream_O type_KIND_LISPALLOC_core__BroadcastStream_O;
  sout << "KIND_LISPALLOC_core__BroadcastStream_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__BroadcastStream_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Reader_O : {
  typedef core::Reader_O type_KIND_LISPALLOC_core__Reader_O;
  sout << "KIND_LISPALLOC_core__Reader_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Reader_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Cons_O : {
  typedef core::Cons_O type_KIND_LISPALLOC_core__Cons_O;
  sout << "KIND_LISPALLOC_core__Cons_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Cons_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Archive_O : {
  typedef core::Archive_O type_KIND_LISPALLOC_core__Archive_O;
  sout << "KIND_LISPALLOC_core__Archive_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Archive_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SaveArchive_O : {
  typedef core::SaveArchive_O type_KIND_LISPALLOC_core__SaveArchive_O;
  sout << "KIND_LISPALLOC_core__SaveArchive_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SaveArchive_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SexpSaveArchive_O : {
  typedef core::SexpSaveArchive_O type_KIND_LISPALLOC_core__SexpSaveArchive_O;
  sout << "KIND_LISPALLOC_core__SexpSaveArchive_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SexpSaveArchive_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__LoadArchive_O : {
  typedef core::LoadArchive_O type_KIND_LISPALLOC_core__LoadArchive_O;
  sout << "KIND_LISPALLOC_core__LoadArchive_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__LoadArchive_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SexpLoadArchive_O : {
  typedef core::SexpLoadArchive_O type_KIND_LISPALLOC_core__SexpLoadArchive_O;
  sout << "KIND_LISPALLOC_core__SexpLoadArchive_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SexpLoadArchive_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__HashTable_O : {
  typedef core::HashTable_O type_KIND_LISPALLOC_core__HashTable_O;
  sout << "KIND_LISPALLOC_core__HashTable_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTable_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__HashTableEq_O : {
  typedef core::HashTableEq_O type_KIND_LISPALLOC_core__HashTableEq_O;
  sout << "KIND_LISPALLOC_core__HashTableEq_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEq_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__HashTableEqualp_O : {
  typedef core::HashTableEqualp_O type_KIND_LISPALLOC_core__HashTableEqualp_O;
  sout << "KIND_LISPALLOC_core__HashTableEqualp_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEqualp_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__HashTableEql_O : {
  typedef core::HashTableEql_O type_KIND_LISPALLOC_core__HashTableEql_O;
  sout << "KIND_LISPALLOC_core__HashTableEql_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEql_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__HashTableEqual_O : {
  typedef core::HashTableEqual_O type_KIND_LISPALLOC_core__HashTableEqual_O;
  sout << "KIND_LISPALLOC_core__HashTableEqual_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEqual_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_cffi__Pointer_O : {
  typedef cffi::Pointer_O type_KIND_LISPALLOC_cffi__Pointer_O;
  sout << "KIND_LISPALLOC_cffi__Pointer_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_cffi__Pointer_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__CxxObject_O : {
  typedef core::CxxObject_O type_KIND_LISPALLOC_core__CxxObject_O;
  sout << "KIND_LISPALLOC_core__CxxObject_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__CxxObject_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__WeakKeyMapping_O : {
  typedef core::WeakKeyMapping_O type_KIND_LISPALLOC_core__WeakKeyMapping_O;
  sout << "KIND_LISPALLOC_core__WeakKeyMapping_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakKeyMapping_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__LambdaListHandler_O : {
  typedef core::LambdaListHandler_O type_KIND_LISPALLOC_core__LambdaListHandler_O;
  sout << "KIND_LISPALLOC_core__LambdaListHandler_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__LambdaListHandler_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__InsertPoint_O : {
  typedef llvmo::InsertPoint_O type_KIND_LISPALLOC_llvmo__InsertPoint_O;
  sout << "KIND_LISPALLOC_llvmo__InsertPoint_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__InsertPoint_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SourceFileInfo_O : {
  typedef core::SourceFileInfo_O type_KIND_LISPALLOC_core__SourceFileInfo_O;
  sout << "KIND_LISPALLOC_core__SourceFileInfo_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SourceFileInfo_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SNode_O : {
  typedef core::SNode_O type_KIND_LISPALLOC_core__SNode_O;
  sout << "KIND_LISPALLOC_core__SNode_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SNode_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__LeafSNode_O : {
  typedef core::LeafSNode_O type_KIND_LISPALLOC_core__LeafSNode_O;
  sout << "KIND_LISPALLOC_core__LeafSNode_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__LeafSNode_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__BranchSNode_O : {
  typedef core::BranchSNode_O type_KIND_LISPALLOC_core__BranchSNode_O;
  sout << "KIND_LISPALLOC_core__BranchSNode_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__BranchSNode_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Path_O : {
  typedef core::Path_O type_KIND_LISPALLOC_core__Path_O;
  sout << "KIND_LISPALLOC_core__Path_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Path_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_asttooling__AstVisitor_O : {
  typedef asttooling::AstVisitor_O type_KIND_LISPALLOC_asttooling__AstVisitor_O;
  sout << "KIND_LISPALLOC_asttooling__AstVisitor_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__AstVisitor_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__AttributeSet_O : {
  typedef llvmo::AttributeSet_O type_KIND_LISPALLOC_llvmo__AttributeSet_O;
  sout << "KIND_LISPALLOC_llvmo__AttributeSet_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AttributeSet_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__StructureObject_O : {
  typedef core::StructureObject_O type_KIND_LISPALLOC_core__StructureObject_O;
  sout << "KIND_LISPALLOC_core__StructureObject_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__StructureObject_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O : {
  typedef core::InvocationHistoryFrameIterator_O type_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O;
  sout << "KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Package_O : {
  typedef core::Package_O type_KIND_LISPALLOC_core__Package_O;
  sout << "KIND_LISPALLOC_core__Package_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Package_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__DirectoryEntry_O : {
  typedef core::DirectoryEntry_O type_KIND_LISPALLOC_core__DirectoryEntry_O;
  sout << "KIND_LISPALLOC_core__DirectoryEntry_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__DirectoryEntry_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Character_dummy_O : {
  typedef core::Character_dummy_O type_KIND_LISPALLOC_core__Character_dummy_O;
  sout << "KIND_LISPALLOC_core__Character_dummy_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Character_dummy_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Function_O : {
  typedef core::Function_O type_KIND_LISPALLOC_core__Function_O;
  sout << "KIND_LISPALLOC_core__Function_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Function_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__CompiledFunction_O : {
  typedef core::CompiledFunction_O type_KIND_LISPALLOC_core__CompiledFunction_O;
  sout << "KIND_LISPALLOC_core__CompiledFunction_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__CompiledFunction_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O : {
  typedef core::SingleDispatchGenericFunction_O type_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O;
  sout << "KIND_LISPALLOC_core__SingleDispatchGenericFunction_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SpecialForm_O : {
  typedef core::SpecialForm_O type_KIND_LISPALLOC_core__SpecialForm_O;
  sout << "KIND_LISPALLOC_core__SpecialForm_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SpecialForm_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O : {
  typedef core::SingleDispatchEffectiveMethodFunction_O type_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O;
  sout << "KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Instance_O : {
  typedef core::Instance_O type_KIND_LISPALLOC_core__Instance_O;
  sout << "KIND_LISPALLOC_core__Instance_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Instance_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Pointer_O : {
  typedef core::Pointer_O type_KIND_LISPALLOC_core__Pointer_O;
  sout << "KIND_LISPALLOC_core__Pointer_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Pointer_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_clbind__ClassRegistry_O : {
  typedef clbind::ClassRegistry_O type_KIND_LISPALLOC_clbind__ClassRegistry_O;
  sout << "KIND_LISPALLOC_clbind__ClassRegistry_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_clbind__ClassRegistry_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DebugInfo_O : {
  typedef llvmo::DebugInfo_O type_KIND_LISPALLOC_llvmo__DebugInfo_O;
  sout << "KIND_LISPALLOC_llvmo__DebugInfo_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DebugInfo_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DIDerivedType_O : {
  typedef llvmo::DIDerivedType_O type_KIND_LISPALLOC_llvmo__DIDerivedType_O;
  sout << "KIND_LISPALLOC_llvmo__DIDerivedType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIDerivedType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DIArray_O : {
  typedef llvmo::DIArray_O type_KIND_LISPALLOC_llvmo__DIArray_O;
  sout << "KIND_LISPALLOC_llvmo__DIArray_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIArray_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DIBasicType_O : {
  typedef llvmo::DIBasicType_O type_KIND_LISPALLOC_llvmo__DIBasicType_O;
  sout << "KIND_LISPALLOC_llvmo__DIBasicType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIBasicType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DISubprogram_O : {
  typedef llvmo::DISubprogram_O type_KIND_LISPALLOC_llvmo__DISubprogram_O;
  sout << "KIND_LISPALLOC_llvmo__DISubprogram_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DISubprogram_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DILexicalBlock_O : {
  typedef llvmo::DILexicalBlock_O type_KIND_LISPALLOC_llvmo__DILexicalBlock_O;
  sout << "KIND_LISPALLOC_llvmo__DILexicalBlock_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DILexicalBlock_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DICompileUnit_O : {
  typedef llvmo::DICompileUnit_O type_KIND_LISPALLOC_llvmo__DICompileUnit_O;
  sout << "KIND_LISPALLOC_llvmo__DICompileUnit_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DICompileUnit_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DIDescriptor_O : {
  typedef llvmo::DIDescriptor_O type_KIND_LISPALLOC_llvmo__DIDescriptor_O;
  sout << "KIND_LISPALLOC_llvmo__DIDescriptor_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIDescriptor_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DIType_O : {
  typedef llvmo::DIType_O type_KIND_LISPALLOC_llvmo__DIType_O;
  sout << "KIND_LISPALLOC_llvmo__DIType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DISubroutineType_O : {
  typedef llvmo::DISubroutineType_O type_KIND_LISPALLOC_llvmo__DISubroutineType_O;
  sout << "KIND_LISPALLOC_llvmo__DISubroutineType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DISubroutineType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DICompositeType_O : {
  typedef llvmo::DICompositeType_O type_KIND_LISPALLOC_llvmo__DICompositeType_O;
  sout << "KIND_LISPALLOC_llvmo__DICompositeType_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DICompositeType_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DITypeArray_O : {
  typedef llvmo::DITypeArray_O type_KIND_LISPALLOC_llvmo__DITypeArray_O;
  sout << "KIND_LISPALLOC_llvmo__DITypeArray_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DITypeArray_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DIFile_O : {
  typedef llvmo::DIFile_O type_KIND_LISPALLOC_llvmo__DIFile_O;
  sout << "KIND_LISPALLOC_llvmo__DIFile_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIFile_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_llvmo__DIScope_O : {
  typedef llvmo::DIScope_O type_KIND_LISPALLOC_llvmo__DIScope_O;
  sout << "KIND_LISPALLOC_llvmo__DIScope_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIScope_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SmallMultimap_O : {
  typedef core::SmallMultimap_O type_KIND_LISPALLOC_core__SmallMultimap_O;
  sout << "KIND_LISPALLOC_core__SmallMultimap_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SmallMultimap_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__Pathname_O : {
  typedef core::Pathname_O type_KIND_LISPALLOC_core__Pathname_O;
  sout << "KIND_LISPALLOC_core__Pathname_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__Pathname_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__LogicalPathname_O : {
  typedef core::LogicalPathname_O type_KIND_LISPALLOC_core__LogicalPathname_O;
  sout << "KIND_LISPALLOC_core__LogicalPathname_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__LogicalPathname_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__PosixTime_O : {
  typedef core::PosixTime_O type_KIND_LISPALLOC_core__PosixTime_O;
  sout << "KIND_LISPALLOC_core__PosixTime_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__PosixTime_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_core__SmallMap_O : {
  typedef core::SmallMap_O type_KIND_LISPALLOC_core__SmallMap_O;
  sout << "KIND_LISPALLOC_core__SmallMap_O size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_core__SmallMap_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__Cache : {
  typedef core::Cache type_KIND_CLASSALLOC_core__Cache;
  sout << "KIND_CLASSALLOC_core__Cache size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__Cache)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_ROOTCLASSALLOC_core__Lisp_O : {
  typedef core::Lisp_O type_KIND_ROOTCLASSALLOC_core__Lisp_O;
  sout << "KIND_ROOTCLASSALLOC_core__Lisp_O size[" << (AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_core__Lisp_O)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__ : {
  gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_ : {
  gctools::GCVector_moveable<core::KeywordArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::KeywordArgument> *>(client);
  sout << "gctools::GCVector_moveable<core::KeywordArgument>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::KeywordArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_ : {
  gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> *>(client);
  sout << "gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>,0>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure : {
  typedef core::SingleDispatchGenericFunctionClosure type_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure;
  sout << "KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCSTRING_gctools__GCString_moveable_char_ : {
  gctools::GCString_moveable<char> *obj_gc_safe = reinterpret_cast<gctools::GCString_moveable<char> *>(client);
  typedef typename gctools::GCString_moveable<char> type_KIND_GCSTRING_gctools__GCString_moveable_char_;
  size_t header_and_gcstring_size = AlignUp(sizeof_container<type_KIND_GCSTRING_gctools__GCString_moveable_char_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "KIND_GCSTRING_gctools__GCString_moveable_char_"
       << "bytes[" << header_and_gcstring_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_ : {
  gctools::GCVector_moveable<core::RequiredArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::RequiredArgument> *>(client);
  sout << "gctools::GCVector_moveable<core::RequiredArgument>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::RequiredArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_llvmo__CompiledClosure : {
  typedef llvmo::CompiledClosure type_KIND_CLASSALLOC_llvmo__CompiledClosure;
  sout << "KIND_CLASSALLOC_llvmo__CompiledClosure size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_llvmo__CompiledClosure)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor : {
  typedef asttooling::internal::VariadicOperatorMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor;
  sout << "KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___ : {
  gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> *>(client);
  sout << "gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>,gctools::smart_ptr<core::T_O>>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor : {
  typedef asttooling::internal::OverloadedMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor;
  sout << "KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_ : {
  gctools::GCVector_moveable<core::SymbolStorage> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::SymbolStorage> *>(client);
  sout << "gctools::GCVector_moveable<core::SymbolStorage>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::SymbolStorage> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_ : {
  gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> *>(client);
  sout << "gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>,4>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_ : {
  gctools::GCVector_moveable<asttooling::ContextFrame> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ContextFrame> *>(client);
  sout << "gctools::GCVector_moveable<asttooling::ContextFrame>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<asttooling::ContextFrame> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor : {
  typedef asttooling::internal::FixedArgCountMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor;
  sout << "KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_ : {
  gctools::GCVector_moveable<core::T_O *> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::T_O *> *>(client);
  sout << "gctools::GCVector_moveable<core::T_O *>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::T_O *> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor : {
  typedef asttooling::internal::FreeFuncMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor;
  sout << "KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__MacroClosure : {
  typedef core::MacroClosure type_KIND_CLASSALLOC_core__MacroClosure;
  sout << "KIND_CLASSALLOC_core__MacroClosure size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__MacroClosure)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__ConsStepper : {
  typedef core::ConsStepper type_KIND_CLASSALLOC_core__ConsStepper;
  sout << "KIND_CLASSALLOC_core__ConsStepper size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__ConsStepper)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_ : {
  gctools::GCVector_moveable<core::AuxArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::AuxArgument> *>(client);
  sout << "gctools::GCVector_moveable<core::AuxArgument>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::AuxArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_ : {
  gctools::GCVector_moveable<asttooling::ParserValue> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ParserValue> *>(client);
  sout << "gctools::GCVector_moveable<asttooling::ParserValue>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<asttooling::ParserValue> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_ : {
  gctools::GCVector_moveable<core::SymbolClassPair> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::SymbolClassPair> *>(client);
  sout << "gctools::GCVector_moveable<core::SymbolClassPair>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::SymbolClassPair> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_ : {
  gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> *>(client);
  sout << "gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___ : {
  gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> *>(client);
  sout << "gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>,gctools::smart_ptr<core::T_O>>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_ : {
  gctools::GCVector_moveable<core::CacheRecord> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::CacheRecord> *>(client);
  sout << "gctools::GCVector_moveable<core::CacheRecord>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::CacheRecord> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__InstanceClosure : {
  typedef core::InstanceClosure type_KIND_CLASSALLOC_core__InstanceClosure;
  sout << "KIND_CLASSALLOC_core__InstanceClosure size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__InstanceClosure)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory : {
  typedef asttooling::DerivableFrontendActionFactory type_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory;
  sout << "KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_ : {
  gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> *>(client);
  sout << "gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>,1>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_asttooling__DerivableMatchCallback : {
  typedef asttooling::DerivableMatchCallback type_KIND_LISPALLOC_asttooling__DerivableMatchCallback;
  sout << "KIND_LISPALLOC_asttooling__DerivableMatchCallback size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableMatchCallback)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_ : {
  gctools::GCVector_moveable<asttooling::ErrorContent> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ErrorContent> *>(client);
  sout << "gctools::GCVector_moveable<asttooling::ErrorContent>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<asttooling::ErrorContent> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction : {
  typedef asttooling::DerivableASTFrontendAction type_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction;
  sout << "KIND_LISPALLOC_asttooling__DerivableASTFrontendAction size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_ : {
  gctools::GCVector_moveable<asttooling::Message> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::Message> *>(client);
  sout << "gctools::GCVector_moveable<asttooling::Message>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<asttooling::Message> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__ : {
  gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__CoreExposer : {
  typedef core::CoreExposer type_KIND_CLASSALLOC_core__CoreExposer;
  sout << "KIND_CLASSALLOC_core__CoreExposer size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__CoreExposer)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction : {
  typedef asttooling::DerivableSyntaxOnlyAction type_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction;
  sout << "KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction size[" << (AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_ : {
  gctools::GCVector_moveable<core::OptionalArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::OptionalArgument> *>(client);
  sout << "gctools::GCVector_moveable<core::OptionalArgument>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::OptionalArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure : {
  core::BuiltinClosure *obj_gc_safe = reinterpret_cast<core::BuiltinClosure *>(client);
  sout << "KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure size[" << (AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_ : {
  gctools::GCVector_moveable<core::ExceptionEntry> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::ExceptionEntry> *>(client);
  sout << "gctools::GCVector_moveable<core::ExceptionEntry>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::ExceptionEntry> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__InterpretedClosure : {
  typedef core::InterpretedClosure type_KIND_CLASSALLOC_core__InterpretedClosure;
  sout << "KIND_CLASSALLOC_core__InterpretedClosure size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__InterpretedClosure)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_ : {
  gctools::GCVector_moveable<core::DynamicBinding> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::DynamicBinding> *>(client);
  sout << "gctools::GCVector_moveable<core::DynamicBinding>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<core::DynamicBinding> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
obj_dump_KIND_CLASSALLOC_core__VectorStepper : {
  typedef core::VectorStepper type_KIND_CLASSALLOC_core__VectorStepper;
  sout << "KIND_CLASSALLOC_core__VectorStepper size[" << (AlignUp(sizeof(type_KIND_CLASSALLOC_core__VectorStepper)) + global_alignup_sizeof_header) << "]";
}
goto BOTTOM;
obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> *>(client);
  sout << "gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>>"
       << " size/capacity[" << obj_gc_safe->size() << "/" << obj_gc_safe->capacity();
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  sout << "bytes[" << header_and_gccontainer_size << "]";
}
goto BOTTOM;
#endif // defined(GC_OBJ_DUMP_MAP)
#if defined(GC_OBJ_DUMP_MAP_HELPERS)

#endif // defined(GC_OBJ_DUMP_MAP_HELPERS)
#if defined(GC_OBJ_DUMP_MAP_TABLE)
static void *OBJ_DUMP_MAP_table[] = {NULL, NULL /* Skip entry for immediate */
                                     ,
                                     NULL /* Skip entry for immediate */
                                     ,
                                     NULL /* Skip entry for immediate */
                                     /* 4 */,
                                     &&obj_dump_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps
                                     /* 5 */,
                                     &&obj_dump_KIND_ROOTCLASSALLOC_clbind__detail__class_map
                                     /* 6 */,
                                     &&obj_dump_KIND_TEMPLATED_CLASSALLOC_core__Creator
                                     /* 7 */,
                                     &&obj_dump_KIND_CLASSALLOC_clbind__DummyCreator
                                     /* 8 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__InstanceCreator
                                     /* 9 */,
                                     &&obj_dump_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator
                                     /* 10 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__T_O
                                     /* 11 */,
                                     &&obj_dump_KIND_LISPALLOC_core__MultiStringBuffer_O
                                     /* 12 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ReadTable_O
                                     /* 13 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Number_O
                                     /* 14 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Complex_O
                                     /* 15 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Real_O
                                     /* 16 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Rational_O
                                     /* 17 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Integer_O
                                     /* 18 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Bignum_O
                                     /* 19 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Fixnum_dummy_O
                                     /* 20 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Ratio_O
                                     /* 21 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Float_O
                                     /* 22 */,
                                     &&obj_dump_KIND_LISPALLOC_core__DoubleFloat_O
                                     /* 23 */,
                                     &&obj_dump_KIND_LISPALLOC_core__LongFloat_O
                                     /* 24 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SingleFloat_dummy_O
                                     /* 25 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ShortFloat_O
                                     /* 26 */,
                                     &&obj_dump_KIND_LISPALLOC_core__FileStatus_O
                                     /* 27 */,
                                     &&obj_dump_KIND_LISPALLOC_core__WeakHashTable_O
                                     /* 28 */,
                                     &&obj_dump_KIND_LISPALLOC_core__WeakKeyHashTable_O
                                     /* 29 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Environment_O
                                     /* 30 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ActivationFrame_O
                                     /* 31 */,
                                     &&obj_dump_KIND_LISPALLOC_core__TagbodyFrame_O
                                     /* 32 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ValueFrame_O
                                     /* 33 */,
                                     &&obj_dump_KIND_LISPALLOC_core__FunctionFrame_O
                                     /* 34 */,
                                     &&obj_dump_KIND_LISPALLOC_core__LexicalEnvironment_O
                                     /* 35 */,
                                     &&obj_dump_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O
                                     /* 36 */,
                                     &&obj_dump_KIND_LISPALLOC_core__FunctionValueEnvironment_O
                                     /* 37 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ValueEnvironment_O
                                     /* 38 */,
                                     &&obj_dump_KIND_LISPALLOC_core__TagbodyEnvironment_O
                                     /* 39 */,
                                     &&obj_dump_KIND_LISPALLOC_core__CompileTimeEnvironment_O
                                     /* 40 */,
                                     &&obj_dump_KIND_LISPALLOC_core__UnwindProtectEnvironment_O
                                     /* 41 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O
                                     /* 42 */,
                                     &&obj_dump_KIND_LISPALLOC_core__FunctionContainerEnvironment_O
                                     /* 43 */,
                                     &&obj_dump_KIND_LISPALLOC_core__StackValueEnvironment_O
                                     /* 44 */,
                                     &&obj_dump_KIND_LISPALLOC_core__BlockEnvironment_O
                                     /* 45 */,
                                     &&obj_dump_KIND_LISPALLOC_core__MacroletEnvironment_O
                                     /* 46 */,
                                     &&obj_dump_KIND_LISPALLOC_core__CatchEnvironment_O
                                     /* 47 */,
                                     &&obj_dump_KIND_LISPALLOC_core__GlueEnvironment_O
                                     /* 48 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Array_O
                                     /* 49 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ArrayObjects_O
                                     /* 50 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ArrayDisplaced_O
                                     /* 51 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Vector_O
                                     /* 52 */,
                                     &&obj_dump_KIND_LISPALLOC_core__BitVector_O
                                     /* 53 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SimpleBitVector_O
                                     /* 54 */,
                                     &&obj_dump_KIND_LISPALLOC_core__BitVectorWithFillPtr_O
                                     /* 55 */,
                                     &&obj_dump_KIND_LISPALLOC_core__VectorDisplaced_O
                                     /* 56 */,
                                     &&obj_dump_KIND_LISPALLOC_core__String_O
                                     /* 57 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__Str_O
                                     /* 58 */,
                                     &&obj_dump_KIND_LISPALLOC_core__StrWithFillPtr_O
                                     /* 59 */,
                                     &&obj_dump_KIND_LISPALLOC_core__VectorObjects_O
                                     /* 60 */,
                                     &&obj_dump_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O
                                     /* 61 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SingleDispatchMethod_O
                                     /* 62 */,
                                     &&obj_dump_KIND_LISPALLOC_core__RandomState_O
                                     /* 63 */,
                                     &&obj_dump_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O
                                     /* 64 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DebugLoc_O
                                     /* 65 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Attribute_O
                                     /* 66 */,
                                     &&obj_dump_KIND_LISPALLOC_core__RegexMatch_O
                                     /* 67 */,
                                     &&obj_dump_KIND_LISPALLOC_core__WeakPointer_O
                                     /* 68 */,
                                     &&obj_dump_KIND_LISPALLOC_core__VaList_dummy_O
                                     /* 69 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__StandardObject_O
                                     /* 70 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__Metaobject_O
                                     /* 71 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__Specializer_O
                                     /* 72 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__Class_O
                                     /* 73 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__StdClass_O
                                     /* 74 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__StandardClass_O
                                     /* 75 */,
                                     &&obj_dump_KIND_LISPALLOC_core__FuncallableStandardClass_O
                                     /* 76 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__StructureClass_O
                                     /* 77 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ForwardReferencedClass_O
                                     /* 78 */,
                                     &&obj_dump_KIND_LISPALLOC_core__CxxClass_O
                                     /* 79 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__BuiltInClass_O
                                     /* 80 */,
                                     &&obj_dump_KIND_LISPALLOC_clbind__ClassRep_O
                                     /* 81 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ExternalObject_O
                                     /* 82 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Value_O
                                     /* 83 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Argument_O
                                     /* 84 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__User_O
                                     /* 85 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Instruction_O
                                     /* 86 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__AtomicRMWInst_O
                                     /* 87 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__LandingPadInst_O
                                     /* 88 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__PHINode_O
                                     /* 89 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__CallInst_O
                                     /* 90 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__StoreInst_O
                                     /* 91 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__UnaryInstruction_O
                                     /* 92 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__LoadInst_O
                                     /* 93 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__AllocaInst_O
                                     /* 94 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__VAArgInst_O
                                     /* 95 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O
                                     /* 96 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__TerminatorInst_O
                                     /* 97 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__UnreachableInst_O
                                     /* 98 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__SwitchInst_O
                                     /* 99 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ReturnInst_O
                                     /* 100 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ResumeInst_O
                                     /* 101 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__BranchInst_O
                                     /* 102 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__InvokeInst_O
                                     /* 103 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__IndirectBrInst_O
                                     /* 104 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__FenceInst_O
                                     /* 105 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Constant_O
                                     /* 106 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__BlockAddress_O
                                     /* 107 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__GlobalValue_O
                                     /* 108 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__GlobalVariable_O
                                     /* 109 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Function_O
                                     /* 110 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ConstantArray_O
                                     /* 111 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ConstantInt_O
                                     /* 112 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ConstantDataSequential_O
                                     /* 113 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ConstantDataArray_O
                                     /* 114 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ConstantStruct_O
                                     /* 115 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ConstantFP_O
                                     /* 116 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__UndefValue_O
                                     /* 117 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ConstantPointerNull_O
                                     /* 118 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ConstantExpr_O
                                     /* 119 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__BasicBlock_O
                                     /* 120 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__IRBuilderBase_O
                                     /* 121 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__IRBuilder_O
                                     /* 122 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DIBuilder_O
                                     /* 123 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Metadata_O
                                     /* 124 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ValueAsMetadata_O
                                     /* 125 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__MDNode_O
                                     /* 126 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__MDString_O
                                     /* 127 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ExecutionEngine_O
                                     /* 128 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__APFloat_O
                                     /* 129 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__PassManagerBuilder_O
                                     /* 130 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DataLayout_O
                                     /* 131 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Triple_O
                                     /* 132 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__APInt_O
                                     /* 133 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__PassManagerBase_O
                                     /* 134 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__FunctionPassManager_O
                                     /* 135 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__PassManager_O
                                     /* 136 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__TargetMachine_O
                                     /* 137 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O
                                     /* 138 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__TargetOptions_O
                                     /* 139 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Type_O
                                     /* 140 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__IntegerType_O
                                     /* 141 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__CompositeType_O
                                     /* 142 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__SequentialType_O
                                     /* 143 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__VectorType_O
                                     /* 144 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__PointerType_O
                                     /* 145 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ArrayType_O
                                     /* 146 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__StructType_O
                                     /* 147 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__FunctionType_O
                                     /* 148 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__NamedMDNode_O
                                     /* 149 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Linker_O
                                     /* 150 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Pass_O
                                     /* 151 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__FunctionPass_O
                                     /* 152 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ModulePass_O
                                     /* 153 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__ImmutablePass_O
                                     /* 154 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DataLayoutPass_O
                                     /* 155 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O
                                     /* 156 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O
                                     /* 157 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O
                                     /* 158 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Module_O
                                     /* 159 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__EngineBuilder_O
                                     /* 160 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ForeignData_O
                                     /* 161 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__LLVMContext_O
                                     /* 162 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__Target_O
                                     /* 163 */,
                                     &&obj_dump_KIND_LISPALLOC_core__LoadTimeValues_O
                                     /* 164 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Binder_O
                                     /* 165 */,
                                     &&obj_dump_KIND_LISPALLOC_core__IntArray_O
                                     /* 166 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SourceManager_O
                                     /* 167 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Record_O
                                     /* 168 */,
                                     &&obj_dump_KIND_LISPALLOC_core__LightUserData_O
                                     /* 169 */,
                                     &&obj_dump_KIND_LISPALLOC_core__UserData_O
                                     /* 170 */,
                                     &&obj_dump_KIND_BOOTSTRAP_core__Symbol_O
                                     /* 171 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Null_O
                                     /* 172 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SourcePosInfo_O
                                     /* 173 */,
                                     &&obj_dump_KIND_TEMPLATED_LISPALLOC_core__Iterator_O
                                     /* 174 */,
                                     &&obj_dump_KIND_LISPALLOC_core__DirectoryIterator_O
                                     /* 175 */,
                                     &&obj_dump_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O
                                     /* 176 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Regex_O
                                     /* 177 */,
                                     &&obj_dump_KIND_LISPALLOC_core__PosixTimeDuration_O
                                     /* 178 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SymbolToEnumConverter_O
                                     /* 179 */,
                                     &&obj_dump_KIND_LISPALLOC_core__CandoException_O
                                     /* 180 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Stream_O
                                     /* 181 */,
                                     &&obj_dump_KIND_LISPALLOC_core__AnsiStream_O
                                     /* 182 */,
                                     &&obj_dump_KIND_LISPALLOC_core__FileStream_O
                                     /* 183 */,
                                     &&obj_dump_KIND_LISPALLOC_core__IOStreamStream_O
                                     /* 184 */,
                                     &&obj_dump_KIND_LISPALLOC_core__IOFileStream_O
                                     /* 185 */,
                                     &&obj_dump_KIND_LISPALLOC_core__ConcatenatedStream_O
                                     /* 186 */,
                                     &&obj_dump_KIND_LISPALLOC_core__StringStream_O
                                     /* 187 */,
                                     &&obj_dump_KIND_LISPALLOC_core__StringInputStream_O
                                     /* 188 */,
                                     &&obj_dump_KIND_LISPALLOC_core__StringOutputStream_O
                                     /* 189 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SynonymStream_O
                                     /* 190 */,
                                     &&obj_dump_KIND_LISPALLOC_core__EchoStream_O
                                     /* 191 */,
                                     &&obj_dump_KIND_LISPALLOC_core__TwoWayStream_O
                                     /* 192 */,
                                     &&obj_dump_KIND_LISPALLOC_core__BroadcastStream_O
                                     /* 193 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Reader_O
                                     /* 194 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Cons_O
                                     /* 195 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Archive_O
                                     /* 196 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SaveArchive_O
                                     /* 197 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SexpSaveArchive_O
                                     /* 198 */,
                                     &&obj_dump_KIND_LISPALLOC_core__LoadArchive_O
                                     /* 199 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SexpLoadArchive_O
                                     /* 200 */,
                                     &&obj_dump_KIND_LISPALLOC_core__HashTable_O
                                     /* 201 */,
                                     &&obj_dump_KIND_LISPALLOC_core__HashTableEq_O
                                     /* 202 */,
                                     &&obj_dump_KIND_LISPALLOC_core__HashTableEqualp_O
                                     /* 203 */,
                                     &&obj_dump_KIND_LISPALLOC_core__HashTableEql_O
                                     /* 204 */,
                                     &&obj_dump_KIND_LISPALLOC_core__HashTableEqual_O
                                     /* 205 */,
                                     &&obj_dump_KIND_LISPALLOC_cffi__Pointer_O
                                     /* 206 */,
                                     &&obj_dump_KIND_LISPALLOC_core__CxxObject_O
                                     /* 207 */,
                                     &&obj_dump_KIND_LISPALLOC_core__WeakKeyMapping_O
                                     /* 208 */,
                                     &&obj_dump_KIND_LISPALLOC_core__LambdaListHandler_O
                                     /* 209 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__InsertPoint_O
                                     /* 210 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SourceFileInfo_O
                                     /* 211 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SNode_O
                                     /* 212 */,
                                     &&obj_dump_KIND_LISPALLOC_core__LeafSNode_O
                                     /* 213 */,
                                     &&obj_dump_KIND_LISPALLOC_core__BranchSNode_O
                                     /* 214 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Path_O
                                     /* 215 */,
                                     &&obj_dump_KIND_LISPALLOC_asttooling__AstVisitor_O
                                     /* 216 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__AttributeSet_O
                                     /* 217 */,
                                     &&obj_dump_KIND_LISPALLOC_core__StructureObject_O
                                     /* 218 */,
                                     &&obj_dump_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O
                                     /* 219 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Package_O
                                     /* 220 */,
                                     &&obj_dump_KIND_LISPALLOC_core__DirectoryEntry_O
                                     /* 221 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Character_dummy_O
                                     /* 222 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Function_O
                                     /* 223 */,
                                     &&obj_dump_KIND_LISPALLOC_core__CompiledFunction_O
                                     /* 224 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O
                                     /* 225 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SpecialForm_O
                                     /* 226 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O
                                     /* 227 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Instance_O
                                     /* 228 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Pointer_O
                                     /* 229 */,
                                     &&obj_dump_KIND_LISPALLOC_clbind__ClassRegistry_O
                                     /* 230 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DebugInfo_O
                                     /* 231 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DIDerivedType_O
                                     /* 232 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DIArray_O
                                     /* 233 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DIBasicType_O
                                     /* 234 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DISubprogram_O
                                     /* 235 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DILexicalBlock_O
                                     /* 236 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DICompileUnit_O
                                     /* 237 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DIDescriptor_O
                                     /* 238 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DIType_O
                                     /* 239 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DISubroutineType_O
                                     /* 240 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DICompositeType_O
                                     /* 241 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DITypeArray_O
                                     /* 242 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DIFile_O
                                     /* 243 */,
                                     &&obj_dump_KIND_LISPALLOC_llvmo__DIScope_O
                                     /* 244 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SmallMultimap_O
                                     /* 245 */,
                                     &&obj_dump_KIND_LISPALLOC_core__Pathname_O
                                     /* 246 */,
                                     &&obj_dump_KIND_LISPALLOC_core__LogicalPathname_O
                                     /* 247 */,
                                     &&obj_dump_KIND_LISPALLOC_core__PosixTime_O
                                     /* 248 */,
                                     &&obj_dump_KIND_LISPALLOC_core__SmallMap_O
                                     /* 249 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__Cache
                                     /* 250 */,
                                     &&obj_dump_KIND_ROOTCLASSALLOC_core__Lisp_O
                                     /* 251 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__
                                     /* 252 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_
                                     /* 253 */,
                                     &&obj_dump_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_
                                     /* 254 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure
                                     /* 255 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__
                                     /* 256 */,
                                     &&obj_dump_KIND_GCSTRING_gctools__GCString_moveable_char_
                                     /* 257 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_
                                     /* 258 */,
                                     &&obj_dump_KIND_CLASSALLOC_llvmo__CompiledClosure
                                     /* 259 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__
                                     /* 260 */,
                                     &&obj_dump_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor
                                     /* 261 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___
                                     /* 262 */,
                                     &&obj_dump_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor
                                     /* 263 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_
                                     /* 264 */,
                                     &&obj_dump_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_
                                     /* 265 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_
                                     /* 266 */,
                                     &&obj_dump_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor
                                     /* 267 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_
                                     /* 268 */,
                                     &&obj_dump_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor
                                     /* 269 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__MacroClosure
                                     /* 270 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__ConsStepper
                                     /* 271 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_
                                     /* 272 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_
                                     /* 273 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__
                                     /* 274 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_
                                     /* 275 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_
                                     /* 276 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___
                                     /* 277 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_
                                     /* 278 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__InstanceClosure
                                     /* 279 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__
                                     /* 280 */,
                                     &&obj_dump_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory
                                     /* 281 */,
                                     &&obj_dump_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_
                                     /* 282 */,
                                     &&obj_dump_KIND_LISPALLOC_asttooling__DerivableMatchCallback
                                     /* 283 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_
                                     /* 284 */,
                                     &&obj_dump_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction
                                     /* 285 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_
                                     /* 286 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__
                                     /* 287 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__CoreExposer
                                     /* 288 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__
                                     /* 289 */,
                                     &&obj_dump_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction
                                     /* 290 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__
                                     /* 291 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_
                                     /* 292 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__
                                     /* 293 */,
                                     &&obj_dump_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure
                                     /* 294 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_
                                     /* 295 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__InterpretedClosure
                                     /* 296 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_
                                     /* 297 */,
                                     &&obj_dump_KIND_CLASSALLOC_core__VectorStepper
                                     /* 298 */,
                                     &&obj_dump_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__};
#endif // defined(GC_OBJ_DUMP_MAP_TABLE)
#if defined(GC_OBJ_SKIP)
obj_skip_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps : {
  typedef asttooling::RegMap::RegistryMaps type_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps;
  client = (char *)client + AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_ROOTCLASSALLOC_clbind__detail__class_map : {
  typedef clbind::detail::class_map type_KIND_ROOTCLASSALLOC_clbind__detail__class_map;
  client = (char *)client + AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_clbind__detail__class_map)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_TEMPLATED_CLASSALLOC_core__Creator : {
  core::Creator *obj_gc_safe = reinterpret_cast<core::Creator *>(client);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_clbind__DummyCreator : {
  typedef clbind::DummyCreator type_KIND_CLASSALLOC_clbind__DummyCreator;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_clbind__DummyCreator)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__InstanceCreator : {
  typedef core::InstanceCreator type_KIND_CLASSALLOC_core__InstanceCreator;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__InstanceCreator)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator : {
  clbind::ConstructorCreator *obj_gc_safe = reinterpret_cast<clbind::ConstructorCreator *>(client);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__T_O : {
  typedef core::T_O type_KIND_BOOTSTRAP_core__T_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__T_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__MultiStringBuffer_O : {
  typedef core::MultiStringBuffer_O type_KIND_LISPALLOC_core__MultiStringBuffer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__MultiStringBuffer_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ReadTable_O : {
  typedef core::ReadTable_O type_KIND_LISPALLOC_core__ReadTable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ReadTable_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Number_O : {
  typedef core::Number_O type_KIND_LISPALLOC_core__Number_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Number_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Complex_O : {
  typedef core::Complex_O type_KIND_LISPALLOC_core__Complex_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Complex_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Real_O : {
  typedef core::Real_O type_KIND_LISPALLOC_core__Real_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Real_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Rational_O : {
  typedef core::Rational_O type_KIND_LISPALLOC_core__Rational_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Rational_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Integer_O : {
  typedef core::Integer_O type_KIND_LISPALLOC_core__Integer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Integer_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Bignum_O : {
  typedef core::Bignum_O type_KIND_LISPALLOC_core__Bignum_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Bignum_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Fixnum_dummy_O : {
  typedef core::Fixnum_dummy_O type_KIND_LISPALLOC_core__Fixnum_dummy_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Fixnum_dummy_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Ratio_O : {
  typedef core::Ratio_O type_KIND_LISPALLOC_core__Ratio_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Ratio_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Float_O : {
  typedef core::Float_O type_KIND_LISPALLOC_core__Float_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Float_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__DoubleFloat_O : {
  typedef core::DoubleFloat_O type_KIND_LISPALLOC_core__DoubleFloat_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__DoubleFloat_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__LongFloat_O : {
  typedef core::LongFloat_O type_KIND_LISPALLOC_core__LongFloat_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LongFloat_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SingleFloat_dummy_O : {
  typedef core::SingleFloat_dummy_O type_KIND_LISPALLOC_core__SingleFloat_dummy_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleFloat_dummy_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ShortFloat_O : {
  typedef core::ShortFloat_O type_KIND_LISPALLOC_core__ShortFloat_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ShortFloat_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__FileStatus_O : {
  typedef core::FileStatus_O type_KIND_LISPALLOC_core__FileStatus_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FileStatus_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__WeakHashTable_O : {
  typedef core::WeakHashTable_O type_KIND_LISPALLOC_core__WeakHashTable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakHashTable_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__WeakKeyHashTable_O : {
  typedef core::WeakKeyHashTable_O type_KIND_LISPALLOC_core__WeakKeyHashTable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakKeyHashTable_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Environment_O : {
  typedef core::Environment_O type_KIND_LISPALLOC_core__Environment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Environment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ActivationFrame_O : {
  typedef core::ActivationFrame_O type_KIND_LISPALLOC_core__ActivationFrame_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ActivationFrame_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__TagbodyFrame_O : {
  typedef core::TagbodyFrame_O type_KIND_LISPALLOC_core__TagbodyFrame_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__TagbodyFrame_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ValueFrame_O : {
  typedef core::ValueFrame_O type_KIND_LISPALLOC_core__ValueFrame_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ValueFrame_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__FunctionFrame_O : {
  typedef core::FunctionFrame_O type_KIND_LISPALLOC_core__FunctionFrame_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionFrame_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__LexicalEnvironment_O : {
  typedef core::LexicalEnvironment_O type_KIND_LISPALLOC_core__LexicalEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LexicalEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O : {
  typedef core::RuntimeVisibleEnvironment_O type_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__FunctionValueEnvironment_O : {
  typedef core::FunctionValueEnvironment_O type_KIND_LISPALLOC_core__FunctionValueEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionValueEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ValueEnvironment_O : {
  typedef core::ValueEnvironment_O type_KIND_LISPALLOC_core__ValueEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ValueEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__TagbodyEnvironment_O : {
  typedef core::TagbodyEnvironment_O type_KIND_LISPALLOC_core__TagbodyEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__TagbodyEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__CompileTimeEnvironment_O : {
  typedef core::CompileTimeEnvironment_O type_KIND_LISPALLOC_core__CompileTimeEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CompileTimeEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__UnwindProtectEnvironment_O : {
  typedef core::UnwindProtectEnvironment_O type_KIND_LISPALLOC_core__UnwindProtectEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__UnwindProtectEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O : {
  typedef core::SymbolMacroletEnvironment_O type_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__FunctionContainerEnvironment_O : {
  typedef core::FunctionContainerEnvironment_O type_KIND_LISPALLOC_core__FunctionContainerEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionContainerEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__StackValueEnvironment_O : {
  typedef core::StackValueEnvironment_O type_KIND_LISPALLOC_core__StackValueEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StackValueEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__BlockEnvironment_O : {
  typedef core::BlockEnvironment_O type_KIND_LISPALLOC_core__BlockEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BlockEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__MacroletEnvironment_O : {
  typedef core::MacroletEnvironment_O type_KIND_LISPALLOC_core__MacroletEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__MacroletEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__CatchEnvironment_O : {
  typedef core::CatchEnvironment_O type_KIND_LISPALLOC_core__CatchEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CatchEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__GlueEnvironment_O : {
  typedef core::GlueEnvironment_O type_KIND_LISPALLOC_core__GlueEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__GlueEnvironment_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Array_O : {
  typedef core::Array_O type_KIND_LISPALLOC_core__Array_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Array_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ArrayObjects_O : {
  typedef core::ArrayObjects_O type_KIND_LISPALLOC_core__ArrayObjects_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ArrayObjects_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ArrayDisplaced_O : {
  typedef core::ArrayDisplaced_O type_KIND_LISPALLOC_core__ArrayDisplaced_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ArrayDisplaced_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Vector_O : {
  typedef core::Vector_O type_KIND_LISPALLOC_core__Vector_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Vector_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__BitVector_O : {
  typedef core::BitVector_O type_KIND_LISPALLOC_core__BitVector_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BitVector_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SimpleBitVector_O : {
  typedef core::SimpleBitVector_O type_KIND_LISPALLOC_core__SimpleBitVector_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SimpleBitVector_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__BitVectorWithFillPtr_O : {
  typedef core::BitVectorWithFillPtr_O type_KIND_LISPALLOC_core__BitVectorWithFillPtr_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BitVectorWithFillPtr_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__VectorDisplaced_O : {
  typedef core::VectorDisplaced_O type_KIND_LISPALLOC_core__VectorDisplaced_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorDisplaced_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__String_O : {
  typedef core::String_O type_KIND_LISPALLOC_core__String_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__String_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__Str_O : {
  typedef core::Str_O type_KIND_BOOTSTRAP_core__Str_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Str_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__StrWithFillPtr_O : {
  typedef core::StrWithFillPtr_O type_KIND_LISPALLOC_core__StrWithFillPtr_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StrWithFillPtr_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__VectorObjects_O : {
  typedef core::VectorObjects_O type_KIND_LISPALLOC_core__VectorObjects_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorObjects_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O : {
  typedef core::VectorObjectsWithFillPtr_O type_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SingleDispatchMethod_O : {
  typedef core::SingleDispatchMethod_O type_KIND_LISPALLOC_core__SingleDispatchMethod_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchMethod_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__RandomState_O : {
  typedef core::RandomState_O type_KIND_LISPALLOC_core__RandomState_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__RandomState_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O : {
  core::WrappedPointer_O *obj_gc_safe = reinterpret_cast<core::WrappedPointer_O *>(client);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DebugLoc_O : {
  typedef llvmo::DebugLoc_O type_KIND_LISPALLOC_llvmo__DebugLoc_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DebugLoc_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Attribute_O : {
  typedef llvmo::Attribute_O type_KIND_LISPALLOC_llvmo__Attribute_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Attribute_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__RegexMatch_O : {
  typedef core::RegexMatch_O type_KIND_LISPALLOC_core__RegexMatch_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__RegexMatch_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__WeakPointer_O : {
  typedef core::WeakPointer_O type_KIND_LISPALLOC_core__WeakPointer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakPointer_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__VaList_dummy_O : {
  typedef core::VaList_dummy_O type_KIND_LISPALLOC_core__VaList_dummy_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__VaList_dummy_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__StandardObject_O : {
  typedef core::StandardObject_O type_KIND_BOOTSTRAP_core__StandardObject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StandardObject_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__Metaobject_O : {
  typedef core::Metaobject_O type_KIND_BOOTSTRAP_core__Metaobject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Metaobject_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__Specializer_O : {
  typedef core::Specializer_O type_KIND_BOOTSTRAP_core__Specializer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Specializer_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__Class_O : {
  typedef core::Class_O type_KIND_BOOTSTRAP_core__Class_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Class_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__StdClass_O : {
  typedef core::StdClass_O type_KIND_BOOTSTRAP_core__StdClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StdClass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__StandardClass_O : {
  typedef core::StandardClass_O type_KIND_BOOTSTRAP_core__StandardClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StandardClass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__FuncallableStandardClass_O : {
  typedef core::FuncallableStandardClass_O type_KIND_LISPALLOC_core__FuncallableStandardClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FuncallableStandardClass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__StructureClass_O : {
  typedef core::StructureClass_O type_KIND_BOOTSTRAP_core__StructureClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StructureClass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ForwardReferencedClass_O : {
  typedef core::ForwardReferencedClass_O type_KIND_LISPALLOC_core__ForwardReferencedClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ForwardReferencedClass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__CxxClass_O : {
  typedef core::CxxClass_O type_KIND_LISPALLOC_core__CxxClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CxxClass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__BuiltInClass_O : {
  typedef core::BuiltInClass_O type_KIND_BOOTSTRAP_core__BuiltInClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__BuiltInClass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_clbind__ClassRep_O : {
  typedef clbind::ClassRep_O type_KIND_LISPALLOC_clbind__ClassRep_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_clbind__ClassRep_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ExternalObject_O : {
  typedef core::ExternalObject_O type_KIND_LISPALLOC_core__ExternalObject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ExternalObject_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Value_O : {
  typedef llvmo::Value_O type_KIND_LISPALLOC_llvmo__Value_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Value_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Argument_O : {
  typedef llvmo::Argument_O type_KIND_LISPALLOC_llvmo__Argument_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Argument_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__User_O : {
  typedef llvmo::User_O type_KIND_LISPALLOC_llvmo__User_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__User_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Instruction_O : {
  typedef llvmo::Instruction_O type_KIND_LISPALLOC_llvmo__Instruction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Instruction_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__AtomicRMWInst_O : {
  typedef llvmo::AtomicRMWInst_O type_KIND_LISPALLOC_llvmo__AtomicRMWInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AtomicRMWInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__LandingPadInst_O : {
  typedef llvmo::LandingPadInst_O type_KIND_LISPALLOC_llvmo__LandingPadInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LandingPadInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__PHINode_O : {
  typedef llvmo::PHINode_O type_KIND_LISPALLOC_llvmo__PHINode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PHINode_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__CallInst_O : {
  typedef llvmo::CallInst_O type_KIND_LISPALLOC_llvmo__CallInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__CallInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__StoreInst_O : {
  typedef llvmo::StoreInst_O type_KIND_LISPALLOC_llvmo__StoreInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__StoreInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__UnaryInstruction_O : {
  typedef llvmo::UnaryInstruction_O type_KIND_LISPALLOC_llvmo__UnaryInstruction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UnaryInstruction_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__LoadInst_O : {
  typedef llvmo::LoadInst_O type_KIND_LISPALLOC_llvmo__LoadInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LoadInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__AllocaInst_O : {
  typedef llvmo::AllocaInst_O type_KIND_LISPALLOC_llvmo__AllocaInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AllocaInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__VAArgInst_O : {
  typedef llvmo::VAArgInst_O type_KIND_LISPALLOC_llvmo__VAArgInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__VAArgInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O : {
  typedef llvmo::AtomicCmpXchgInst_O type_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__TerminatorInst_O : {
  typedef llvmo::TerminatorInst_O type_KIND_LISPALLOC_llvmo__TerminatorInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TerminatorInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__UnreachableInst_O : {
  typedef llvmo::UnreachableInst_O type_KIND_LISPALLOC_llvmo__UnreachableInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UnreachableInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__SwitchInst_O : {
  typedef llvmo::SwitchInst_O type_KIND_LISPALLOC_llvmo__SwitchInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__SwitchInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ReturnInst_O : {
  typedef llvmo::ReturnInst_O type_KIND_LISPALLOC_llvmo__ReturnInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ReturnInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ResumeInst_O : {
  typedef llvmo::ResumeInst_O type_KIND_LISPALLOC_llvmo__ResumeInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ResumeInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__BranchInst_O : {
  typedef llvmo::BranchInst_O type_KIND_LISPALLOC_llvmo__BranchInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BranchInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__InvokeInst_O : {
  typedef llvmo::InvokeInst_O type_KIND_LISPALLOC_llvmo__InvokeInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__InvokeInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__IndirectBrInst_O : {
  typedef llvmo::IndirectBrInst_O type_KIND_LISPALLOC_llvmo__IndirectBrInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IndirectBrInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__FenceInst_O : {
  typedef llvmo::FenceInst_O type_KIND_LISPALLOC_llvmo__FenceInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FenceInst_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Constant_O : {
  typedef llvmo::Constant_O type_KIND_LISPALLOC_llvmo__Constant_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Constant_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__BlockAddress_O : {
  typedef llvmo::BlockAddress_O type_KIND_LISPALLOC_llvmo__BlockAddress_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BlockAddress_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__GlobalValue_O : {
  typedef llvmo::GlobalValue_O type_KIND_LISPALLOC_llvmo__GlobalValue_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__GlobalValue_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__GlobalVariable_O : {
  typedef llvmo::GlobalVariable_O type_KIND_LISPALLOC_llvmo__GlobalVariable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__GlobalVariable_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Function_O : {
  typedef llvmo::Function_O type_KIND_LISPALLOC_llvmo__Function_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Function_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ConstantArray_O : {
  typedef llvmo::ConstantArray_O type_KIND_LISPALLOC_llvmo__ConstantArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantArray_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ConstantInt_O : {
  typedef llvmo::ConstantInt_O type_KIND_LISPALLOC_llvmo__ConstantInt_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantInt_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ConstantDataSequential_O : {
  typedef llvmo::ConstantDataSequential_O type_KIND_LISPALLOC_llvmo__ConstantDataSequential_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantDataSequential_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ConstantDataArray_O : {
  typedef llvmo::ConstantDataArray_O type_KIND_LISPALLOC_llvmo__ConstantDataArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantDataArray_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ConstantStruct_O : {
  typedef llvmo::ConstantStruct_O type_KIND_LISPALLOC_llvmo__ConstantStruct_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantStruct_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ConstantFP_O : {
  typedef llvmo::ConstantFP_O type_KIND_LISPALLOC_llvmo__ConstantFP_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantFP_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__UndefValue_O : {
  typedef llvmo::UndefValue_O type_KIND_LISPALLOC_llvmo__UndefValue_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UndefValue_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ConstantPointerNull_O : {
  typedef llvmo::ConstantPointerNull_O type_KIND_LISPALLOC_llvmo__ConstantPointerNull_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantPointerNull_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ConstantExpr_O : {
  typedef llvmo::ConstantExpr_O type_KIND_LISPALLOC_llvmo__ConstantExpr_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantExpr_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__BasicBlock_O : {
  typedef llvmo::BasicBlock_O type_KIND_LISPALLOC_llvmo__BasicBlock_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BasicBlock_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__IRBuilderBase_O : {
  typedef llvmo::IRBuilderBase_O type_KIND_LISPALLOC_llvmo__IRBuilderBase_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IRBuilderBase_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__IRBuilder_O : {
  typedef llvmo::IRBuilder_O type_KIND_LISPALLOC_llvmo__IRBuilder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IRBuilder_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DIBuilder_O : {
  typedef llvmo::DIBuilder_O type_KIND_LISPALLOC_llvmo__DIBuilder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIBuilder_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Metadata_O : {
  typedef llvmo::Metadata_O type_KIND_LISPALLOC_llvmo__Metadata_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Metadata_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ValueAsMetadata_O : {
  typedef llvmo::ValueAsMetadata_O type_KIND_LISPALLOC_llvmo__ValueAsMetadata_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ValueAsMetadata_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__MDNode_O : {
  typedef llvmo::MDNode_O type_KIND_LISPALLOC_llvmo__MDNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MDNode_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__MDString_O : {
  typedef llvmo::MDString_O type_KIND_LISPALLOC_llvmo__MDString_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MDString_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ExecutionEngine_O : {
  typedef llvmo::ExecutionEngine_O type_KIND_LISPALLOC_llvmo__ExecutionEngine_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ExecutionEngine_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__APFloat_O : {
  typedef llvmo::APFloat_O type_KIND_LISPALLOC_llvmo__APFloat_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__APFloat_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__PassManagerBuilder_O : {
  typedef llvmo::PassManagerBuilder_O type_KIND_LISPALLOC_llvmo__PassManagerBuilder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManagerBuilder_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DataLayout_O : {
  typedef llvmo::DataLayout_O type_KIND_LISPALLOC_llvmo__DataLayout_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DataLayout_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Triple_O : {
  typedef llvmo::Triple_O type_KIND_LISPALLOC_llvmo__Triple_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Triple_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__APInt_O : {
  typedef llvmo::APInt_O type_KIND_LISPALLOC_llvmo__APInt_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__APInt_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__PassManagerBase_O : {
  typedef llvmo::PassManagerBase_O type_KIND_LISPALLOC_llvmo__PassManagerBase_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManagerBase_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__FunctionPassManager_O : {
  typedef llvmo::FunctionPassManager_O type_KIND_LISPALLOC_llvmo__FunctionPassManager_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionPassManager_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__PassManager_O : {
  typedef llvmo::PassManager_O type_KIND_LISPALLOC_llvmo__PassManager_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManager_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__TargetMachine_O : {
  typedef llvmo::TargetMachine_O type_KIND_LISPALLOC_llvmo__TargetMachine_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetMachine_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O : {
  typedef llvmo::LLVMTargetMachine_O type_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__TargetOptions_O : {
  typedef llvmo::TargetOptions_O type_KIND_LISPALLOC_llvmo__TargetOptions_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetOptions_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Type_O : {
  typedef llvmo::Type_O type_KIND_LISPALLOC_llvmo__Type_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Type_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__IntegerType_O : {
  typedef llvmo::IntegerType_O type_KIND_LISPALLOC_llvmo__IntegerType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IntegerType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__CompositeType_O : {
  typedef llvmo::CompositeType_O type_KIND_LISPALLOC_llvmo__CompositeType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__CompositeType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__SequentialType_O : {
  typedef llvmo::SequentialType_O type_KIND_LISPALLOC_llvmo__SequentialType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__SequentialType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__VectorType_O : {
  typedef llvmo::VectorType_O type_KIND_LISPALLOC_llvmo__VectorType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__VectorType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__PointerType_O : {
  typedef llvmo::PointerType_O type_KIND_LISPALLOC_llvmo__PointerType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PointerType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ArrayType_O : {
  typedef llvmo::ArrayType_O type_KIND_LISPALLOC_llvmo__ArrayType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ArrayType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__StructType_O : {
  typedef llvmo::StructType_O type_KIND_LISPALLOC_llvmo__StructType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__StructType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__FunctionType_O : {
  typedef llvmo::FunctionType_O type_KIND_LISPALLOC_llvmo__FunctionType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__NamedMDNode_O : {
  typedef llvmo::NamedMDNode_O type_KIND_LISPALLOC_llvmo__NamedMDNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__NamedMDNode_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Linker_O : {
  typedef llvmo::Linker_O type_KIND_LISPALLOC_llvmo__Linker_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Linker_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Pass_O : {
  typedef llvmo::Pass_O type_KIND_LISPALLOC_llvmo__Pass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Pass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__FunctionPass_O : {
  typedef llvmo::FunctionPass_O type_KIND_LISPALLOC_llvmo__FunctionPass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionPass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ModulePass_O : {
  typedef llvmo::ModulePass_O type_KIND_LISPALLOC_llvmo__ModulePass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ModulePass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__ImmutablePass_O : {
  typedef llvmo::ImmutablePass_O type_KIND_LISPALLOC_llvmo__ImmutablePass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ImmutablePass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DataLayoutPass_O : {
  typedef llvmo::DataLayoutPass_O type_KIND_LISPALLOC_llvmo__DataLayoutPass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DataLayoutPass_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O : {
  typedef llvmo::TargetLibraryInfo_O type_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O : {
  typedef llvmo::MCSubtargetInfo_O type_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O : {
  typedef llvmo::TargetSubtargetInfo_O type_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Module_O : {
  typedef llvmo::Module_O type_KIND_LISPALLOC_llvmo__Module_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Module_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__EngineBuilder_O : {
  typedef llvmo::EngineBuilder_O type_KIND_LISPALLOC_llvmo__EngineBuilder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__EngineBuilder_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ForeignData_O : {
  typedef core::ForeignData_O type_KIND_LISPALLOC_core__ForeignData_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ForeignData_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__LLVMContext_O : {
  typedef llvmo::LLVMContext_O type_KIND_LISPALLOC_llvmo__LLVMContext_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LLVMContext_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__Target_O : {
  typedef llvmo::Target_O type_KIND_LISPALLOC_llvmo__Target_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Target_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__LoadTimeValues_O : {
  typedef core::LoadTimeValues_O type_KIND_LISPALLOC_core__LoadTimeValues_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LoadTimeValues_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Binder_O : {
  typedef core::Binder_O type_KIND_LISPALLOC_core__Binder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Binder_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__IntArray_O : {
  typedef core::IntArray_O type_KIND_LISPALLOC_core__IntArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__IntArray_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SourceManager_O : {
  typedef core::SourceManager_O type_KIND_LISPALLOC_core__SourceManager_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SourceManager_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Record_O : {
  typedef core::Record_O type_KIND_LISPALLOC_core__Record_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Record_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__LightUserData_O : {
  typedef core::LightUserData_O type_KIND_LISPALLOC_core__LightUserData_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LightUserData_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__UserData_O : {
  typedef core::UserData_O type_KIND_LISPALLOC_core__UserData_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__UserData_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_BOOTSTRAP_core__Symbol_O : {
  typedef core::Symbol_O type_KIND_BOOTSTRAP_core__Symbol_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Symbol_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Null_O : {
  typedef core::Null_O type_KIND_LISPALLOC_core__Null_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Null_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SourcePosInfo_O : {
  typedef core::SourcePosInfo_O type_KIND_LISPALLOC_core__SourcePosInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SourcePosInfo_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_TEMPLATED_LISPALLOC_core__Iterator_O : {
  core::Iterator_O *obj_gc_safe = reinterpret_cast<core::Iterator_O *>(client);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__DirectoryIterator_O : {
  typedef core::DirectoryIterator_O type_KIND_LISPALLOC_core__DirectoryIterator_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__DirectoryIterator_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O : {
  typedef core::RecursiveDirectoryIterator_O type_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Regex_O : {
  typedef core::Regex_O type_KIND_LISPALLOC_core__Regex_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Regex_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__PosixTimeDuration_O : {
  typedef core::PosixTimeDuration_O type_KIND_LISPALLOC_core__PosixTimeDuration_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__PosixTimeDuration_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SymbolToEnumConverter_O : {
  typedef core::SymbolToEnumConverter_O type_KIND_LISPALLOC_core__SymbolToEnumConverter_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SymbolToEnumConverter_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__CandoException_O : {
  typedef core::CandoException_O type_KIND_LISPALLOC_core__CandoException_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CandoException_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Stream_O : {
  typedef core::Stream_O type_KIND_LISPALLOC_core__Stream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Stream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__AnsiStream_O : {
  typedef core::AnsiStream_O type_KIND_LISPALLOC_core__AnsiStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__AnsiStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__FileStream_O : {
  typedef core::FileStream_O type_KIND_LISPALLOC_core__FileStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FileStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__IOStreamStream_O : {
  typedef core::IOStreamStream_O type_KIND_LISPALLOC_core__IOStreamStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__IOStreamStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__IOFileStream_O : {
  typedef core::IOFileStream_O type_KIND_LISPALLOC_core__IOFileStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__IOFileStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__ConcatenatedStream_O : {
  typedef core::ConcatenatedStream_O type_KIND_LISPALLOC_core__ConcatenatedStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ConcatenatedStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__StringStream_O : {
  typedef core::StringStream_O type_KIND_LISPALLOC_core__StringStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StringStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__StringInputStream_O : {
  typedef core::StringInputStream_O type_KIND_LISPALLOC_core__StringInputStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StringInputStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__StringOutputStream_O : {
  typedef core::StringOutputStream_O type_KIND_LISPALLOC_core__StringOutputStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StringOutputStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SynonymStream_O : {
  typedef core::SynonymStream_O type_KIND_LISPALLOC_core__SynonymStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SynonymStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__EchoStream_O : {
  typedef core::EchoStream_O type_KIND_LISPALLOC_core__EchoStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__EchoStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__TwoWayStream_O : {
  typedef core::TwoWayStream_O type_KIND_LISPALLOC_core__TwoWayStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__TwoWayStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__BroadcastStream_O : {
  typedef core::BroadcastStream_O type_KIND_LISPALLOC_core__BroadcastStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BroadcastStream_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Reader_O : {
  typedef core::Reader_O type_KIND_LISPALLOC_core__Reader_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Reader_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Cons_O : {
  typedef core::Cons_O type_KIND_LISPALLOC_core__Cons_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Cons_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Archive_O : {
  typedef core::Archive_O type_KIND_LISPALLOC_core__Archive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Archive_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SaveArchive_O : {
  typedef core::SaveArchive_O type_KIND_LISPALLOC_core__SaveArchive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SaveArchive_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SexpSaveArchive_O : {
  typedef core::SexpSaveArchive_O type_KIND_LISPALLOC_core__SexpSaveArchive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SexpSaveArchive_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__LoadArchive_O : {
  typedef core::LoadArchive_O type_KIND_LISPALLOC_core__LoadArchive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LoadArchive_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SexpLoadArchive_O : {
  typedef core::SexpLoadArchive_O type_KIND_LISPALLOC_core__SexpLoadArchive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SexpLoadArchive_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__HashTable_O : {
  typedef core::HashTable_O type_KIND_LISPALLOC_core__HashTable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTable_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__HashTableEq_O : {
  typedef core::HashTableEq_O type_KIND_LISPALLOC_core__HashTableEq_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEq_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__HashTableEqualp_O : {
  typedef core::HashTableEqualp_O type_KIND_LISPALLOC_core__HashTableEqualp_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEqualp_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__HashTableEql_O : {
  typedef core::HashTableEql_O type_KIND_LISPALLOC_core__HashTableEql_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEql_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__HashTableEqual_O : {
  typedef core::HashTableEqual_O type_KIND_LISPALLOC_core__HashTableEqual_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEqual_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_cffi__Pointer_O : {
  typedef cffi::Pointer_O type_KIND_LISPALLOC_cffi__Pointer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_cffi__Pointer_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__CxxObject_O : {
  typedef core::CxxObject_O type_KIND_LISPALLOC_core__CxxObject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CxxObject_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__WeakKeyMapping_O : {
  typedef core::WeakKeyMapping_O type_KIND_LISPALLOC_core__WeakKeyMapping_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakKeyMapping_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__LambdaListHandler_O : {
  typedef core::LambdaListHandler_O type_KIND_LISPALLOC_core__LambdaListHandler_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LambdaListHandler_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__InsertPoint_O : {
  typedef llvmo::InsertPoint_O type_KIND_LISPALLOC_llvmo__InsertPoint_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__InsertPoint_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SourceFileInfo_O : {
  typedef core::SourceFileInfo_O type_KIND_LISPALLOC_core__SourceFileInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SourceFileInfo_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SNode_O : {
  typedef core::SNode_O type_KIND_LISPALLOC_core__SNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SNode_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__LeafSNode_O : {
  typedef core::LeafSNode_O type_KIND_LISPALLOC_core__LeafSNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LeafSNode_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__BranchSNode_O : {
  typedef core::BranchSNode_O type_KIND_LISPALLOC_core__BranchSNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BranchSNode_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Path_O : {
  typedef core::Path_O type_KIND_LISPALLOC_core__Path_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Path_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_asttooling__AstVisitor_O : {
  typedef asttooling::AstVisitor_O type_KIND_LISPALLOC_asttooling__AstVisitor_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__AstVisitor_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__AttributeSet_O : {
  typedef llvmo::AttributeSet_O type_KIND_LISPALLOC_llvmo__AttributeSet_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AttributeSet_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__StructureObject_O : {
  typedef core::StructureObject_O type_KIND_LISPALLOC_core__StructureObject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StructureObject_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O : {
  typedef core::InvocationHistoryFrameIterator_O type_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Package_O : {
  typedef core::Package_O type_KIND_LISPALLOC_core__Package_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Package_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__DirectoryEntry_O : {
  typedef core::DirectoryEntry_O type_KIND_LISPALLOC_core__DirectoryEntry_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__DirectoryEntry_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Character_dummy_O : {
  typedef core::Character_dummy_O type_KIND_LISPALLOC_core__Character_dummy_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Character_dummy_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Function_O : {
  typedef core::Function_O type_KIND_LISPALLOC_core__Function_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Function_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__CompiledFunction_O : {
  typedef core::CompiledFunction_O type_KIND_LISPALLOC_core__CompiledFunction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CompiledFunction_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O : {
  typedef core::SingleDispatchGenericFunction_O type_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SpecialForm_O : {
  typedef core::SpecialForm_O type_KIND_LISPALLOC_core__SpecialForm_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SpecialForm_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O : {
  typedef core::SingleDispatchEffectiveMethodFunction_O type_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Instance_O : {
  typedef core::Instance_O type_KIND_LISPALLOC_core__Instance_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Instance_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Pointer_O : {
  typedef core::Pointer_O type_KIND_LISPALLOC_core__Pointer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Pointer_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_clbind__ClassRegistry_O : {
  typedef clbind::ClassRegistry_O type_KIND_LISPALLOC_clbind__ClassRegistry_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_clbind__ClassRegistry_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DebugInfo_O : {
  typedef llvmo::DebugInfo_O type_KIND_LISPALLOC_llvmo__DebugInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DebugInfo_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DIDerivedType_O : {
  typedef llvmo::DIDerivedType_O type_KIND_LISPALLOC_llvmo__DIDerivedType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIDerivedType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DIArray_O : {
  typedef llvmo::DIArray_O type_KIND_LISPALLOC_llvmo__DIArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIArray_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DIBasicType_O : {
  typedef llvmo::DIBasicType_O type_KIND_LISPALLOC_llvmo__DIBasicType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIBasicType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DISubprogram_O : {
  typedef llvmo::DISubprogram_O type_KIND_LISPALLOC_llvmo__DISubprogram_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DISubprogram_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DILexicalBlock_O : {
  typedef llvmo::DILexicalBlock_O type_KIND_LISPALLOC_llvmo__DILexicalBlock_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DILexicalBlock_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DICompileUnit_O : {
  typedef llvmo::DICompileUnit_O type_KIND_LISPALLOC_llvmo__DICompileUnit_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DICompileUnit_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DIDescriptor_O : {
  typedef llvmo::DIDescriptor_O type_KIND_LISPALLOC_llvmo__DIDescriptor_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIDescriptor_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DIType_O : {
  typedef llvmo::DIType_O type_KIND_LISPALLOC_llvmo__DIType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DISubroutineType_O : {
  typedef llvmo::DISubroutineType_O type_KIND_LISPALLOC_llvmo__DISubroutineType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DISubroutineType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DICompositeType_O : {
  typedef llvmo::DICompositeType_O type_KIND_LISPALLOC_llvmo__DICompositeType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DICompositeType_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DITypeArray_O : {
  typedef llvmo::DITypeArray_O type_KIND_LISPALLOC_llvmo__DITypeArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DITypeArray_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DIFile_O : {
  typedef llvmo::DIFile_O type_KIND_LISPALLOC_llvmo__DIFile_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIFile_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_llvmo__DIScope_O : {
  typedef llvmo::DIScope_O type_KIND_LISPALLOC_llvmo__DIScope_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIScope_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SmallMultimap_O : {
  typedef core::SmallMultimap_O type_KIND_LISPALLOC_core__SmallMultimap_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SmallMultimap_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__Pathname_O : {
  typedef core::Pathname_O type_KIND_LISPALLOC_core__Pathname_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Pathname_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__LogicalPathname_O : {
  typedef core::LogicalPathname_O type_KIND_LISPALLOC_core__LogicalPathname_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LogicalPathname_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__PosixTime_O : {
  typedef core::PosixTime_O type_KIND_LISPALLOC_core__PosixTime_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__PosixTime_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_core__SmallMap_O : {
  typedef core::SmallMap_O type_KIND_LISPALLOC_core__SmallMap_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SmallMap_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__Cache : {
  typedef core::Cache type_KIND_CLASSALLOC_core__Cache;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__Cache)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_ROOTCLASSALLOC_core__Lisp_O : {
  typedef core::Lisp_O type_KIND_ROOTCLASSALLOC_core__Lisp_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_core__Lisp_O)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__ : {
  {
    gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_ : {
  {
    gctools::GCVector_moveable<core::KeywordArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::KeywordArgument> *>(client);
    typedef typename gctools::GCVector_moveable<core::KeywordArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_ : {
  {
    gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> *>(client);
    typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure : {
  typedef core::SingleDispatchGenericFunctionClosure type_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__ : {
  {
    gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCSTRING_gctools__GCString_moveable_char_ : {
  {
    gctools::GCString_moveable<char> *obj_gc_safe = reinterpret_cast<gctools::GCString_moveable<char> *>(client);
    typedef typename gctools::GCString_moveable<char> type_KIND_GCSTRING_gctools__GCString_moveable_char_;
    size_t header_and_gcstring_size = AlignUp(sizeof_container<type_KIND_GCSTRING_gctools__GCString_moveable_char_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + Align(header_and_gcstring_size);
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_ : {
  {
    gctools::GCVector_moveable<core::RequiredArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::RequiredArgument> *>(client);
    typedef typename gctools::GCVector_moveable<core::RequiredArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_llvmo__CompiledClosure : {
  typedef llvmo::CompiledClosure type_KIND_CLASSALLOC_llvmo__CompiledClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_llvmo__CompiledClosure)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__ : {
  {
    gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor : {
  typedef asttooling::internal::VariadicOperatorMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___ : {
  {
    gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> *>(client);
    typedef typename gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor : {
  typedef asttooling::internal::OverloadedMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_ : {
  {
    gctools::GCVector_moveable<core::SymbolStorage> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::SymbolStorage> *>(client);
    typedef typename gctools::GCVector_moveable<core::SymbolStorage> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_ : {
  {
    gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> *>(client);
    typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_ : {
  {
    gctools::GCVector_moveable<asttooling::ContextFrame> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ContextFrame> *>(client);
    typedef typename gctools::GCVector_moveable<asttooling::ContextFrame> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor : {
  typedef asttooling::internal::FixedArgCountMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_ : {
  {
    gctools::GCVector_moveable<core::T_O *> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::T_O *> *>(client);
    typedef typename gctools::GCVector_moveable<core::T_O *> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor : {
  typedef asttooling::internal::FreeFuncMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__MacroClosure : {
  typedef core::MacroClosure type_KIND_CLASSALLOC_core__MacroClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__MacroClosure)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__ConsStepper : {
  typedef core::ConsStepper type_KIND_CLASSALLOC_core__ConsStepper;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__ConsStepper)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_ : {
  {
    gctools::GCVector_moveable<core::AuxArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::AuxArgument> *>(client);
    typedef typename gctools::GCVector_moveable<core::AuxArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_ : {
  {
    gctools::GCVector_moveable<asttooling::ParserValue> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ParserValue> *>(client);
    typedef typename gctools::GCVector_moveable<asttooling::ParserValue> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__ : {
  {
    gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_ : {
  {
    gctools::GCVector_moveable<core::SymbolClassPair> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::SymbolClassPair> *>(client);
    typedef typename gctools::GCVector_moveable<core::SymbolClassPair> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_ : {
  {
    gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> *>(client);
    typedef typename gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___ : {
  {
    gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> *>(client);
    typedef typename gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_ : {
  {
    gctools::GCVector_moveable<core::CacheRecord> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::CacheRecord> *>(client);
    typedef typename gctools::GCVector_moveable<core::CacheRecord> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__InstanceClosure : {
  typedef core::InstanceClosure type_KIND_CLASSALLOC_core__InstanceClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__InstanceClosure)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__ : {
  {
    gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory : {
  typedef asttooling::DerivableFrontendActionFactory type_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_ : {
  {
    gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> *>(client);
    typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_asttooling__DerivableMatchCallback : {
  typedef asttooling::DerivableMatchCallback type_KIND_LISPALLOC_asttooling__DerivableMatchCallback;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableMatchCallback)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_ : {
  {
    gctools::GCVector_moveable<asttooling::ErrorContent> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ErrorContent> *>(client);
    typedef typename gctools::GCVector_moveable<asttooling::ErrorContent> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction : {
  typedef asttooling::DerivableASTFrontendAction type_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_ : {
  {
    gctools::GCVector_moveable<asttooling::Message> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::Message> *>(client);
    typedef typename gctools::GCVector_moveable<asttooling::Message> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__ : {
  {
    gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__CoreExposer : {
  typedef core::CoreExposer type_KIND_CLASSALLOC_core__CoreExposer;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__CoreExposer)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__ : {
  {
    gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction : {
  typedef asttooling::DerivableSyntaxOnlyAction type_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__ : {
  {
    gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_ : {
  {
    gctools::GCVector_moveable<core::OptionalArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::OptionalArgument> *>(client);
    typedef typename gctools::GCVector_moveable<core::OptionalArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__ : {
  {
    gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure : {
  core::BuiltinClosure *obj_gc_safe = reinterpret_cast<core::BuiltinClosure *>(client);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_ : {
  {
    gctools::GCVector_moveable<core::ExceptionEntry> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::ExceptionEntry> *>(client);
    typedef typename gctools::GCVector_moveable<core::ExceptionEntry> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__InterpretedClosure : {
  typedef core::InterpretedClosure type_KIND_CLASSALLOC_core__InterpretedClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__InterpretedClosure)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_ : {
  {
    gctools::GCVector_moveable<core::DynamicBinding> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::DynamicBinding> *>(client);
    typedef typename gctools::GCVector_moveable<core::DynamicBinding> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
obj_skip_KIND_CLASSALLOC_core__VectorStepper : {
  typedef core::VectorStepper type_KIND_CLASSALLOC_core__VectorStepper;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__VectorStepper)) + global_alignup_sizeof_header;
  goto DONE; //return client;
}
obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__ : {
  {
    gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> *>(client);
    typedef typename gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__;
    size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
    client = (char *)client + header_and_gccontainer_size;
  }
  goto DONE; //return client;
}
#endif // defined(GC_OBJ_SKIP)
#if defined(GC_OBJ_SKIP_HELPERS)

#endif // defined(GC_OBJ_SKIP_HELPERS)
#if defined(GC_OBJ_SKIP_TABLE)
static void *OBJ_SKIP_table[] = {NULL, NULL /* Skip entry for immediate */
                                 ,
                                 NULL /* Skip entry for immediate */
                                 ,
                                 NULL /* Skip entry for immediate */
                                 /* 4 */,
                                 &&obj_skip_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps
                                 /* 5 */,
                                 &&obj_skip_KIND_ROOTCLASSALLOC_clbind__detail__class_map
                                 /* 6 */,
                                 &&obj_skip_KIND_TEMPLATED_CLASSALLOC_core__Creator
                                 /* 7 */,
                                 &&obj_skip_KIND_CLASSALLOC_clbind__DummyCreator
                                 /* 8 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__InstanceCreator
                                 /* 9 */,
                                 &&obj_skip_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator
                                 /* 10 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__T_O
                                 /* 11 */,
                                 &&obj_skip_KIND_LISPALLOC_core__MultiStringBuffer_O
                                 /* 12 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ReadTable_O
                                 /* 13 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Number_O
                                 /* 14 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Complex_O
                                 /* 15 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Real_O
                                 /* 16 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Rational_O
                                 /* 17 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Integer_O
                                 /* 18 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Bignum_O
                                 /* 19 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Fixnum_dummy_O
                                 /* 20 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Ratio_O
                                 /* 21 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Float_O
                                 /* 22 */,
                                 &&obj_skip_KIND_LISPALLOC_core__DoubleFloat_O
                                 /* 23 */,
                                 &&obj_skip_KIND_LISPALLOC_core__LongFloat_O
                                 /* 24 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SingleFloat_dummy_O
                                 /* 25 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ShortFloat_O
                                 /* 26 */,
                                 &&obj_skip_KIND_LISPALLOC_core__FileStatus_O
                                 /* 27 */,
                                 &&obj_skip_KIND_LISPALLOC_core__WeakHashTable_O
                                 /* 28 */,
                                 &&obj_skip_KIND_LISPALLOC_core__WeakKeyHashTable_O
                                 /* 29 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Environment_O
                                 /* 30 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ActivationFrame_O
                                 /* 31 */,
                                 &&obj_skip_KIND_LISPALLOC_core__TagbodyFrame_O
                                 /* 32 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ValueFrame_O
                                 /* 33 */,
                                 &&obj_skip_KIND_LISPALLOC_core__FunctionFrame_O
                                 /* 34 */,
                                 &&obj_skip_KIND_LISPALLOC_core__LexicalEnvironment_O
                                 /* 35 */,
                                 &&obj_skip_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O
                                 /* 36 */,
                                 &&obj_skip_KIND_LISPALLOC_core__FunctionValueEnvironment_O
                                 /* 37 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ValueEnvironment_O
                                 /* 38 */,
                                 &&obj_skip_KIND_LISPALLOC_core__TagbodyEnvironment_O
                                 /* 39 */,
                                 &&obj_skip_KIND_LISPALLOC_core__CompileTimeEnvironment_O
                                 /* 40 */,
                                 &&obj_skip_KIND_LISPALLOC_core__UnwindProtectEnvironment_O
                                 /* 41 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O
                                 /* 42 */,
                                 &&obj_skip_KIND_LISPALLOC_core__FunctionContainerEnvironment_O
                                 /* 43 */,
                                 &&obj_skip_KIND_LISPALLOC_core__StackValueEnvironment_O
                                 /* 44 */,
                                 &&obj_skip_KIND_LISPALLOC_core__BlockEnvironment_O
                                 /* 45 */,
                                 &&obj_skip_KIND_LISPALLOC_core__MacroletEnvironment_O
                                 /* 46 */,
                                 &&obj_skip_KIND_LISPALLOC_core__CatchEnvironment_O
                                 /* 47 */,
                                 &&obj_skip_KIND_LISPALLOC_core__GlueEnvironment_O
                                 /* 48 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Array_O
                                 /* 49 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ArrayObjects_O
                                 /* 50 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ArrayDisplaced_O
                                 /* 51 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Vector_O
                                 /* 52 */,
                                 &&obj_skip_KIND_LISPALLOC_core__BitVector_O
                                 /* 53 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SimpleBitVector_O
                                 /* 54 */,
                                 &&obj_skip_KIND_LISPALLOC_core__BitVectorWithFillPtr_O
                                 /* 55 */,
                                 &&obj_skip_KIND_LISPALLOC_core__VectorDisplaced_O
                                 /* 56 */,
                                 &&obj_skip_KIND_LISPALLOC_core__String_O
                                 /* 57 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__Str_O
                                 /* 58 */,
                                 &&obj_skip_KIND_LISPALLOC_core__StrWithFillPtr_O
                                 /* 59 */,
                                 &&obj_skip_KIND_LISPALLOC_core__VectorObjects_O
                                 /* 60 */,
                                 &&obj_skip_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O
                                 /* 61 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SingleDispatchMethod_O
                                 /* 62 */,
                                 &&obj_skip_KIND_LISPALLOC_core__RandomState_O
                                 /* 63 */,
                                 &&obj_skip_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O
                                 /* 64 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DebugLoc_O
                                 /* 65 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Attribute_O
                                 /* 66 */,
                                 &&obj_skip_KIND_LISPALLOC_core__RegexMatch_O
                                 /* 67 */,
                                 &&obj_skip_KIND_LISPALLOC_core__WeakPointer_O
                                 /* 68 */,
                                 &&obj_skip_KIND_LISPALLOC_core__VaList_dummy_O
                                 /* 69 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__StandardObject_O
                                 /* 70 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__Metaobject_O
                                 /* 71 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__Specializer_O
                                 /* 72 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__Class_O
                                 /* 73 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__StdClass_O
                                 /* 74 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__StandardClass_O
                                 /* 75 */,
                                 &&obj_skip_KIND_LISPALLOC_core__FuncallableStandardClass_O
                                 /* 76 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__StructureClass_O
                                 /* 77 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ForwardReferencedClass_O
                                 /* 78 */,
                                 &&obj_skip_KIND_LISPALLOC_core__CxxClass_O
                                 /* 79 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__BuiltInClass_O
                                 /* 80 */,
                                 &&obj_skip_KIND_LISPALLOC_clbind__ClassRep_O
                                 /* 81 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ExternalObject_O
                                 /* 82 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Value_O
                                 /* 83 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Argument_O
                                 /* 84 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__User_O
                                 /* 85 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Instruction_O
                                 /* 86 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__AtomicRMWInst_O
                                 /* 87 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__LandingPadInst_O
                                 /* 88 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__PHINode_O
                                 /* 89 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__CallInst_O
                                 /* 90 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__StoreInst_O
                                 /* 91 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__UnaryInstruction_O
                                 /* 92 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__LoadInst_O
                                 /* 93 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__AllocaInst_O
                                 /* 94 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__VAArgInst_O
                                 /* 95 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O
                                 /* 96 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__TerminatorInst_O
                                 /* 97 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__UnreachableInst_O
                                 /* 98 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__SwitchInst_O
                                 /* 99 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ReturnInst_O
                                 /* 100 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ResumeInst_O
                                 /* 101 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__BranchInst_O
                                 /* 102 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__InvokeInst_O
                                 /* 103 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__IndirectBrInst_O
                                 /* 104 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__FenceInst_O
                                 /* 105 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Constant_O
                                 /* 106 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__BlockAddress_O
                                 /* 107 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__GlobalValue_O
                                 /* 108 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__GlobalVariable_O
                                 /* 109 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Function_O
                                 /* 110 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ConstantArray_O
                                 /* 111 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ConstantInt_O
                                 /* 112 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ConstantDataSequential_O
                                 /* 113 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ConstantDataArray_O
                                 /* 114 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ConstantStruct_O
                                 /* 115 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ConstantFP_O
                                 /* 116 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__UndefValue_O
                                 /* 117 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ConstantPointerNull_O
                                 /* 118 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ConstantExpr_O
                                 /* 119 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__BasicBlock_O
                                 /* 120 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__IRBuilderBase_O
                                 /* 121 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__IRBuilder_O
                                 /* 122 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DIBuilder_O
                                 /* 123 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Metadata_O
                                 /* 124 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ValueAsMetadata_O
                                 /* 125 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__MDNode_O
                                 /* 126 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__MDString_O
                                 /* 127 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ExecutionEngine_O
                                 /* 128 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__APFloat_O
                                 /* 129 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__PassManagerBuilder_O
                                 /* 130 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DataLayout_O
                                 /* 131 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Triple_O
                                 /* 132 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__APInt_O
                                 /* 133 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__PassManagerBase_O
                                 /* 134 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__FunctionPassManager_O
                                 /* 135 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__PassManager_O
                                 /* 136 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__TargetMachine_O
                                 /* 137 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O
                                 /* 138 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__TargetOptions_O
                                 /* 139 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Type_O
                                 /* 140 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__IntegerType_O
                                 /* 141 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__CompositeType_O
                                 /* 142 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__SequentialType_O
                                 /* 143 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__VectorType_O
                                 /* 144 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__PointerType_O
                                 /* 145 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ArrayType_O
                                 /* 146 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__StructType_O
                                 /* 147 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__FunctionType_O
                                 /* 148 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__NamedMDNode_O
                                 /* 149 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Linker_O
                                 /* 150 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Pass_O
                                 /* 151 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__FunctionPass_O
                                 /* 152 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ModulePass_O
                                 /* 153 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__ImmutablePass_O
                                 /* 154 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DataLayoutPass_O
                                 /* 155 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O
                                 /* 156 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O
                                 /* 157 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O
                                 /* 158 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Module_O
                                 /* 159 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__EngineBuilder_O
                                 /* 160 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ForeignData_O
                                 /* 161 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__LLVMContext_O
                                 /* 162 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__Target_O
                                 /* 163 */,
                                 &&obj_skip_KIND_LISPALLOC_core__LoadTimeValues_O
                                 /* 164 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Binder_O
                                 /* 165 */,
                                 &&obj_skip_KIND_LISPALLOC_core__IntArray_O
                                 /* 166 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SourceManager_O
                                 /* 167 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Record_O
                                 /* 168 */,
                                 &&obj_skip_KIND_LISPALLOC_core__LightUserData_O
                                 /* 169 */,
                                 &&obj_skip_KIND_LISPALLOC_core__UserData_O
                                 /* 170 */,
                                 &&obj_skip_KIND_BOOTSTRAP_core__Symbol_O
                                 /* 171 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Null_O
                                 /* 172 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SourcePosInfo_O
                                 /* 173 */,
                                 &&obj_skip_KIND_TEMPLATED_LISPALLOC_core__Iterator_O
                                 /* 174 */,
                                 &&obj_skip_KIND_LISPALLOC_core__DirectoryIterator_O
                                 /* 175 */,
                                 &&obj_skip_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O
                                 /* 176 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Regex_O
                                 /* 177 */,
                                 &&obj_skip_KIND_LISPALLOC_core__PosixTimeDuration_O
                                 /* 178 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SymbolToEnumConverter_O
                                 /* 179 */,
                                 &&obj_skip_KIND_LISPALLOC_core__CandoException_O
                                 /* 180 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Stream_O
                                 /* 181 */,
                                 &&obj_skip_KIND_LISPALLOC_core__AnsiStream_O
                                 /* 182 */,
                                 &&obj_skip_KIND_LISPALLOC_core__FileStream_O
                                 /* 183 */,
                                 &&obj_skip_KIND_LISPALLOC_core__IOStreamStream_O
                                 /* 184 */,
                                 &&obj_skip_KIND_LISPALLOC_core__IOFileStream_O
                                 /* 185 */,
                                 &&obj_skip_KIND_LISPALLOC_core__ConcatenatedStream_O
                                 /* 186 */,
                                 &&obj_skip_KIND_LISPALLOC_core__StringStream_O
                                 /* 187 */,
                                 &&obj_skip_KIND_LISPALLOC_core__StringInputStream_O
                                 /* 188 */,
                                 &&obj_skip_KIND_LISPALLOC_core__StringOutputStream_O
                                 /* 189 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SynonymStream_O
                                 /* 190 */,
                                 &&obj_skip_KIND_LISPALLOC_core__EchoStream_O
                                 /* 191 */,
                                 &&obj_skip_KIND_LISPALLOC_core__TwoWayStream_O
                                 /* 192 */,
                                 &&obj_skip_KIND_LISPALLOC_core__BroadcastStream_O
                                 /* 193 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Reader_O
                                 /* 194 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Cons_O
                                 /* 195 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Archive_O
                                 /* 196 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SaveArchive_O
                                 /* 197 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SexpSaveArchive_O
                                 /* 198 */,
                                 &&obj_skip_KIND_LISPALLOC_core__LoadArchive_O
                                 /* 199 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SexpLoadArchive_O
                                 /* 200 */,
                                 &&obj_skip_KIND_LISPALLOC_core__HashTable_O
                                 /* 201 */,
                                 &&obj_skip_KIND_LISPALLOC_core__HashTableEq_O
                                 /* 202 */,
                                 &&obj_skip_KIND_LISPALLOC_core__HashTableEqualp_O
                                 /* 203 */,
                                 &&obj_skip_KIND_LISPALLOC_core__HashTableEql_O
                                 /* 204 */,
                                 &&obj_skip_KIND_LISPALLOC_core__HashTableEqual_O
                                 /* 205 */,
                                 &&obj_skip_KIND_LISPALLOC_cffi__Pointer_O
                                 /* 206 */,
                                 &&obj_skip_KIND_LISPALLOC_core__CxxObject_O
                                 /* 207 */,
                                 &&obj_skip_KIND_LISPALLOC_core__WeakKeyMapping_O
                                 /* 208 */,
                                 &&obj_skip_KIND_LISPALLOC_core__LambdaListHandler_O
                                 /* 209 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__InsertPoint_O
                                 /* 210 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SourceFileInfo_O
                                 /* 211 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SNode_O
                                 /* 212 */,
                                 &&obj_skip_KIND_LISPALLOC_core__LeafSNode_O
                                 /* 213 */,
                                 &&obj_skip_KIND_LISPALLOC_core__BranchSNode_O
                                 /* 214 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Path_O
                                 /* 215 */,
                                 &&obj_skip_KIND_LISPALLOC_asttooling__AstVisitor_O
                                 /* 216 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__AttributeSet_O
                                 /* 217 */,
                                 &&obj_skip_KIND_LISPALLOC_core__StructureObject_O
                                 /* 218 */,
                                 &&obj_skip_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O
                                 /* 219 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Package_O
                                 /* 220 */,
                                 &&obj_skip_KIND_LISPALLOC_core__DirectoryEntry_O
                                 /* 221 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Character_dummy_O
                                 /* 222 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Function_O
                                 /* 223 */,
                                 &&obj_skip_KIND_LISPALLOC_core__CompiledFunction_O
                                 /* 224 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O
                                 /* 225 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SpecialForm_O
                                 /* 226 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O
                                 /* 227 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Instance_O
                                 /* 228 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Pointer_O
                                 /* 229 */,
                                 &&obj_skip_KIND_LISPALLOC_clbind__ClassRegistry_O
                                 /* 230 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DebugInfo_O
                                 /* 231 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DIDerivedType_O
                                 /* 232 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DIArray_O
                                 /* 233 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DIBasicType_O
                                 /* 234 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DISubprogram_O
                                 /* 235 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DILexicalBlock_O
                                 /* 236 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DICompileUnit_O
                                 /* 237 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DIDescriptor_O
                                 /* 238 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DIType_O
                                 /* 239 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DISubroutineType_O
                                 /* 240 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DICompositeType_O
                                 /* 241 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DITypeArray_O
                                 /* 242 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DIFile_O
                                 /* 243 */,
                                 &&obj_skip_KIND_LISPALLOC_llvmo__DIScope_O
                                 /* 244 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SmallMultimap_O
                                 /* 245 */,
                                 &&obj_skip_KIND_LISPALLOC_core__Pathname_O
                                 /* 246 */,
                                 &&obj_skip_KIND_LISPALLOC_core__LogicalPathname_O
                                 /* 247 */,
                                 &&obj_skip_KIND_LISPALLOC_core__PosixTime_O
                                 /* 248 */,
                                 &&obj_skip_KIND_LISPALLOC_core__SmallMap_O
                                 /* 249 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__Cache
                                 /* 250 */,
                                 &&obj_skip_KIND_ROOTCLASSALLOC_core__Lisp_O
                                 /* 251 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__
                                 /* 252 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_
                                 /* 253 */,
                                 &&obj_skip_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_
                                 /* 254 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure
                                 /* 255 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__
                                 /* 256 */,
                                 &&obj_skip_KIND_GCSTRING_gctools__GCString_moveable_char_
                                 /* 257 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_
                                 /* 258 */,
                                 &&obj_skip_KIND_CLASSALLOC_llvmo__CompiledClosure
                                 /* 259 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__
                                 /* 260 */,
                                 &&obj_skip_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor
                                 /* 261 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___
                                 /* 262 */,
                                 &&obj_skip_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor
                                 /* 263 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_
                                 /* 264 */,
                                 &&obj_skip_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_
                                 /* 265 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_
                                 /* 266 */,
                                 &&obj_skip_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor
                                 /* 267 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_
                                 /* 268 */,
                                 &&obj_skip_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor
                                 /* 269 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__MacroClosure
                                 /* 270 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__ConsStepper
                                 /* 271 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_
                                 /* 272 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_
                                 /* 273 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__
                                 /* 274 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_
                                 /* 275 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_
                                 /* 276 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___
                                 /* 277 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_
                                 /* 278 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__InstanceClosure
                                 /* 279 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__
                                 /* 280 */,
                                 &&obj_skip_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory
                                 /* 281 */,
                                 &&obj_skip_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_
                                 /* 282 */,
                                 &&obj_skip_KIND_LISPALLOC_asttooling__DerivableMatchCallback
                                 /* 283 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_
                                 /* 284 */,
                                 &&obj_skip_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction
                                 /* 285 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_
                                 /* 286 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__
                                 /* 287 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__CoreExposer
                                 /* 288 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__
                                 /* 289 */,
                                 &&obj_skip_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction
                                 /* 290 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__
                                 /* 291 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_
                                 /* 292 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__
                                 /* 293 */,
                                 &&obj_skip_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure
                                 /* 294 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_
                                 /* 295 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__InterpretedClosure
                                 /* 296 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_
                                 /* 297 */,
                                 &&obj_skip_KIND_CLASSALLOC_core__VectorStepper
                                 /* 298 */,
                                 &&obj_skip_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__};
#endif // defined(GC_OBJ_SKIP_TABLE)
#if defined(GC_OBJ_SCAN)
obj_scan_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::RegMap::RegistryMaps>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_ROOTCLASSALLOC_clbind__detail__class_map : {
  mps_res_t result = gctools::obj_scan_helper<clbind::detail::class_map>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_TEMPLATED_CLASSALLOC_core__Creator : {
  core::Creator *obj_gc_safe = reinterpret_cast<core::Creator *>(client);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_clbind__DummyCreator : {
  mps_res_t result = gctools::obj_scan_helper<clbind::DummyCreator>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__InstanceCreator : {
  mps_res_t result = gctools::obj_scan_helper<core::InstanceCreator>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator : {
  clbind::ConstructorCreator *obj_gc_safe = reinterpret_cast<clbind::ConstructorCreator *>(client);
  SMART_PTR_FIX(obj_gc_safe->_mostDerivedClassSymbol);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__T_O : {
  mps_res_t result = gctools::obj_scan_helper<core::T_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__MultiStringBuffer_O : {
  mps_res_t result = gctools::obj_scan_helper<core::MultiStringBuffer_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ReadTable_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ReadTable_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Number_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Number_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Complex_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Complex_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Real_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Real_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Rational_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Rational_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Integer_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Integer_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Bignum_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Bignum_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Fixnum_dummy_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Fixnum_dummy_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Ratio_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Ratio_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Float_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Float_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__DoubleFloat_O : {
  mps_res_t result = gctools::obj_scan_helper<core::DoubleFloat_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__LongFloat_O : {
  mps_res_t result = gctools::obj_scan_helper<core::LongFloat_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SingleFloat_dummy_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SingleFloat_dummy_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ShortFloat_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ShortFloat_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__FileStatus_O : {
  mps_res_t result = gctools::obj_scan_helper<core::FileStatus_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__WeakHashTable_O : {
  mps_res_t result = gctools::obj_scan_helper<core::WeakHashTable_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__WeakKeyHashTable_O : {
  mps_res_t result = gctools::obj_scan_helper<core::WeakKeyHashTable_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Environment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Environment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ActivationFrame_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ActivationFrame_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__TagbodyFrame_O : {
  mps_res_t result = gctools::obj_scan_helper<core::TagbodyFrame_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ValueFrame_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ValueFrame_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__FunctionFrame_O : {
  mps_res_t result = gctools::obj_scan_helper<core::FunctionFrame_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__LexicalEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::LexicalEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::RuntimeVisibleEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__FunctionValueEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::FunctionValueEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ValueEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ValueEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__TagbodyEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::TagbodyEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__CompileTimeEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::CompileTimeEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__UnwindProtectEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::UnwindProtectEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SymbolMacroletEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__FunctionContainerEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::FunctionContainerEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__StackValueEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StackValueEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__BlockEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::BlockEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__MacroletEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::MacroletEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__CatchEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::CatchEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__GlueEnvironment_O : {
  mps_res_t result = gctools::obj_scan_helper<core::GlueEnvironment_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Array_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Array_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ArrayObjects_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ArrayObjects_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ArrayDisplaced_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ArrayDisplaced_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Vector_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Vector_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__BitVector_O : {
  mps_res_t result = gctools::obj_scan_helper<core::BitVector_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SimpleBitVector_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SimpleBitVector_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__BitVectorWithFillPtr_O : {
  mps_res_t result = gctools::obj_scan_helper<core::BitVectorWithFillPtr_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__VectorDisplaced_O : {
  mps_res_t result = gctools::obj_scan_helper<core::VectorDisplaced_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__String_O : {
  mps_res_t result = gctools::obj_scan_helper<core::String_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__Str_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Str_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__StrWithFillPtr_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StrWithFillPtr_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__VectorObjects_O : {
  mps_res_t result = gctools::obj_scan_helper<core::VectorObjects_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O : {
  mps_res_t result = gctools::obj_scan_helper<core::VectorObjectsWithFillPtr_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SingleDispatchMethod_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SingleDispatchMethod_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__RandomState_O : {
  mps_res_t result = gctools::obj_scan_helper<core::RandomState_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O : {
  core::WrappedPointer_O *obj_gc_safe = reinterpret_cast<core::WrappedPointer_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DebugLoc_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DebugLoc_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Attribute_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Attribute_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__RegexMatch_O : {
  mps_res_t result = gctools::obj_scan_helper<core::RegexMatch_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__WeakPointer_O : {
  mps_res_t result = gctools::obj_scan_helper<core::WeakPointer_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__VaList_dummy_O : {
  mps_res_t result = gctools::obj_scan_helper<core::VaList_dummy_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__StandardObject_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StandardObject_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__Metaobject_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Metaobject_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__Specializer_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Specializer_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__Class_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Class_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__StdClass_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StdClass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__StandardClass_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StandardClass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__FuncallableStandardClass_O : {
  mps_res_t result = gctools::obj_scan_helper<core::FuncallableStandardClass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__StructureClass_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StructureClass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ForwardReferencedClass_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ForwardReferencedClass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__CxxClass_O : {
  mps_res_t result = gctools::obj_scan_helper<core::CxxClass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__BuiltInClass_O : {
  mps_res_t result = gctools::obj_scan_helper<core::BuiltInClass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_clbind__ClassRep_O : {
  mps_res_t result = gctools::obj_scan_helper<clbind::ClassRep_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ExternalObject_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ExternalObject_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Value_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Value_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Argument_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Argument_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__User_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::User_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Instruction_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Instruction_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__AtomicRMWInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::AtomicRMWInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__LandingPadInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::LandingPadInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__PHINode_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::PHINode_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__CallInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::CallInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__StoreInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::StoreInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__UnaryInstruction_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::UnaryInstruction_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__LoadInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::LoadInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__AllocaInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::AllocaInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__VAArgInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::VAArgInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::AtomicCmpXchgInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__TerminatorInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::TerminatorInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__UnreachableInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::UnreachableInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__SwitchInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::SwitchInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ReturnInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ReturnInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ResumeInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ResumeInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__BranchInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::BranchInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__InvokeInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::InvokeInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__IndirectBrInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::IndirectBrInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__FenceInst_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::FenceInst_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Constant_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Constant_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__BlockAddress_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::BlockAddress_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__GlobalValue_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::GlobalValue_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__GlobalVariable_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::GlobalVariable_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Function_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Function_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ConstantArray_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ConstantArray_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ConstantInt_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ConstantInt_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ConstantDataSequential_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ConstantDataSequential_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ConstantDataArray_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ConstantDataArray_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ConstantStruct_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ConstantStruct_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ConstantFP_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ConstantFP_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__UndefValue_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::UndefValue_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ConstantPointerNull_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ConstantPointerNull_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ConstantExpr_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ConstantExpr_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__BasicBlock_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::BasicBlock_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__IRBuilderBase_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::IRBuilderBase_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__IRBuilder_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::IRBuilder_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DIBuilder_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DIBuilder_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Metadata_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Metadata_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ValueAsMetadata_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ValueAsMetadata_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__MDNode_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::MDNode_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__MDString_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::MDString_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ExecutionEngine_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ExecutionEngine_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__APFloat_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::APFloat_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__PassManagerBuilder_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::PassManagerBuilder_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DataLayout_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DataLayout_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Triple_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Triple_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__APInt_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::APInt_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__PassManagerBase_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::PassManagerBase_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__FunctionPassManager_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::FunctionPassManager_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__PassManager_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::PassManager_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__TargetMachine_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::TargetMachine_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::LLVMTargetMachine_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__TargetOptions_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::TargetOptions_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Type_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Type_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__IntegerType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::IntegerType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__CompositeType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::CompositeType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__SequentialType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::SequentialType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__VectorType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::VectorType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__PointerType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::PointerType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ArrayType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ArrayType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__StructType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::StructType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__FunctionType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::FunctionType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__NamedMDNode_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::NamedMDNode_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Linker_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Linker_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Pass_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Pass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__FunctionPass_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::FunctionPass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ModulePass_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ModulePass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__ImmutablePass_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::ImmutablePass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DataLayoutPass_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DataLayoutPass_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::TargetLibraryInfo_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::MCSubtargetInfo_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::TargetSubtargetInfo_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Module_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Module_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__EngineBuilder_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::EngineBuilder_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ForeignData_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ForeignData_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__LLVMContext_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::LLVMContext_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__Target_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::Target_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__LoadTimeValues_O : {
  mps_res_t result = gctools::obj_scan_helper<core::LoadTimeValues_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Binder_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Binder_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__IntArray_O : {
  mps_res_t result = gctools::obj_scan_helper<core::IntArray_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SourceManager_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SourceManager_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Record_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Record_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__LightUserData_O : {
  mps_res_t result = gctools::obj_scan_helper<core::LightUserData_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__UserData_O : {
  mps_res_t result = gctools::obj_scan_helper<core::UserData_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_BOOTSTRAP_core__Symbol_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Symbol_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Null_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Null_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SourcePosInfo_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SourcePosInfo_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_TEMPLATED_LISPALLOC_core__Iterator_O : {
  core::Iterator_O *obj_gc_safe = reinterpret_cast<core::Iterator_O *>(client);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__DirectoryIterator_O : {
  mps_res_t result = gctools::obj_scan_helper<core::DirectoryIterator_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O : {
  mps_res_t result = gctools::obj_scan_helper<core::RecursiveDirectoryIterator_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Regex_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Regex_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__PosixTimeDuration_O : {
  mps_res_t result = gctools::obj_scan_helper<core::PosixTimeDuration_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SymbolToEnumConverter_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SymbolToEnumConverter_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__CandoException_O : {
  mps_res_t result = gctools::obj_scan_helper<core::CandoException_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Stream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Stream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__AnsiStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::AnsiStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__FileStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::FileStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__IOStreamStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::IOStreamStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__IOFileStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::IOFileStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__ConcatenatedStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::ConcatenatedStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__StringStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StringStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__StringInputStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StringInputStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__StringOutputStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StringOutputStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SynonymStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SynonymStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__EchoStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::EchoStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__TwoWayStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::TwoWayStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__BroadcastStream_O : {
  mps_res_t result = gctools::obj_scan_helper<core::BroadcastStream_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Reader_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Reader_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Cons_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Cons_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Archive_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Archive_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SaveArchive_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SaveArchive_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SexpSaveArchive_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SexpSaveArchive_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__LoadArchive_O : {
  mps_res_t result = gctools::obj_scan_helper<core::LoadArchive_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SexpLoadArchive_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SexpLoadArchive_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__HashTable_O : {
  mps_res_t result = gctools::obj_scan_helper<core::HashTable_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__HashTableEq_O : {
  mps_res_t result = gctools::obj_scan_helper<core::HashTableEq_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__HashTableEqualp_O : {
  mps_res_t result = gctools::obj_scan_helper<core::HashTableEqualp_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__HashTableEql_O : {
  mps_res_t result = gctools::obj_scan_helper<core::HashTableEql_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__HashTableEqual_O : {
  mps_res_t result = gctools::obj_scan_helper<core::HashTableEqual_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_cffi__Pointer_O : {
  mps_res_t result = gctools::obj_scan_helper<cffi::Pointer_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__CxxObject_O : {
  mps_res_t result = gctools::obj_scan_helper<core::CxxObject_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__WeakKeyMapping_O : {
  mps_res_t result = gctools::obj_scan_helper<core::WeakKeyMapping_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__LambdaListHandler_O : {
  mps_res_t result = gctools::obj_scan_helper<core::LambdaListHandler_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__InsertPoint_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::InsertPoint_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SourceFileInfo_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SourceFileInfo_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SNode_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SNode_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__LeafSNode_O : {
  mps_res_t result = gctools::obj_scan_helper<core::LeafSNode_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__BranchSNode_O : {
  mps_res_t result = gctools::obj_scan_helper<core::BranchSNode_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Path_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Path_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_asttooling__AstVisitor_O : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::AstVisitor_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__AttributeSet_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::AttributeSet_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__StructureObject_O : {
  mps_res_t result = gctools::obj_scan_helper<core::StructureObject_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O : {
  mps_res_t result = gctools::obj_scan_helper<core::InvocationHistoryFrameIterator_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Package_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Package_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__DirectoryEntry_O : {
  mps_res_t result = gctools::obj_scan_helper<core::DirectoryEntry_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Character_dummy_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Character_dummy_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Function_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Function_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__CompiledFunction_O : {
  mps_res_t result = gctools::obj_scan_helper<core::CompiledFunction_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SingleDispatchGenericFunction_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SpecialForm_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SpecialForm_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SingleDispatchEffectiveMethodFunction_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Instance_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Instance_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Pointer_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Pointer_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_clbind__ClassRegistry_O : {
  mps_res_t result = gctools::obj_scan_helper<clbind::ClassRegistry_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DebugInfo_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DebugInfo_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DIDerivedType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DIDerivedType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DIArray_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DIArray_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DIBasicType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DIBasicType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DISubprogram_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DISubprogram_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DILexicalBlock_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DILexicalBlock_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DICompileUnit_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DICompileUnit_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DIDescriptor_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DIDescriptor_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DIType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DIType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DISubroutineType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DISubroutineType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DICompositeType_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DICompositeType_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DITypeArray_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DITypeArray_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DIFile_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DIFile_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_llvmo__DIScope_O : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::DIScope_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SmallMultimap_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SmallMultimap_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__Pathname_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Pathname_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__LogicalPathname_O : {
  mps_res_t result = gctools::obj_scan_helper<core::LogicalPathname_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__PosixTime_O : {
  mps_res_t result = gctools::obj_scan_helper<core::PosixTime_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_LISPALLOC_core__SmallMap_O : {
  mps_res_t result = gctools::obj_scan_helper<core::SmallMap_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__Cache : {
  mps_res_t result = gctools::obj_scan_helper<core::Cache>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_ROOTCLASSALLOC_core__Lisp_O : {
  mps_res_t result = gctools::obj_scan_helper<core::Lisp_O>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__ : {
  gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> *>(client);
  for (gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    TAGGED_POINTER_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_ : {
  gctools::GCVector_moveable<core::KeywordArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::KeywordArgument> *>(client);
  for (gctools::GCVector_moveable<core::KeywordArgument>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->_ArgTarget);
    SMART_PTR_FIX(it->_Default);
    SMART_PTR_FIX(it->_Keyword);
    SMART_PTR_FIX(it->_Sensor._ArgTarget);
  }
  typedef typename gctools::GCVector_moveable<core::KeywordArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_ : {
  gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> *>(client);
  for (gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 0> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure : {
  mps_res_t result = gctools::obj_scan_helper<core::SingleDispatchGenericFunctionClosure>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> *>(client);
  for (gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCSTRING_gctools__GCString_moveable_char_ : {
  // Should never be invoked
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_ : {
  gctools::GCVector_moveable<core::RequiredArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::RequiredArgument> *>(client);
  for (gctools::GCVector_moveable<core::RequiredArgument>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->_ArgTarget);
  }
  typedef typename gctools::GCVector_moveable<core::RequiredArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_llvmo__CompiledClosure : {
  mps_res_t result = gctools::obj_scan_helper<llvmo::CompiledClosure>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> *>(client);
  for (gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::internal::VariadicOperatorMatcherDescriptor>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___ : {
  gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> *>(client);
  for (gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->first);
    SMART_PTR_FIX(it->second);
  }
  typedef typename gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>, gctools::smart_ptr<core::T_O>>> type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::internal::OverloadedMatcherDescriptor>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_ : {
  gctools::GCVector_moveable<core::SymbolStorage> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::SymbolStorage> *>(client);
  for (gctools::GCVector_moveable<core::SymbolStorage>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->_Symbol);
  }
  typedef typename gctools::GCVector_moveable<core::SymbolStorage> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_ : {
  gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> *>(client);
  for (gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 4> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_ : {
  gctools::GCVector_moveable<asttooling::ContextFrame> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ContextFrame> *>(client);
  for (gctools::GCVector_moveable<asttooling::ContextFrame>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->Range);
  }
  typedef typename gctools::GCVector_moveable<asttooling::ContextFrame> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::internal::FixedArgCountMatcherDescriptor>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_ : {
  gctools::GCVector_moveable<core::T_O *> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::T_O *> *>(client);
  for (gctools::GCVector_moveable<core::T_O *>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SIMPLE_POINTER_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<core::T_O *> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::internal::FreeFuncMatcherDescriptor>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__MacroClosure : {
  mps_res_t result = gctools::obj_scan_helper<core::MacroClosure>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__ConsStepper : {
  mps_res_t result = gctools::obj_scan_helper<core::ConsStepper>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_ : {
  gctools::GCVector_moveable<core::AuxArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::AuxArgument> *>(client);
  for (gctools::GCVector_moveable<core::AuxArgument>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->_ArgTarget);
    SMART_PTR_FIX(it->_Expression);
  }
  typedef typename gctools::GCVector_moveable<core::AuxArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_ : {
  gctools::GCVector_moveable<asttooling::ParserValue> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ParserValue> *>(client);
  for (gctools::GCVector_moveable<asttooling::ParserValue>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->Range);
  }
  typedef typename gctools::GCVector_moveable<asttooling::ParserValue> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> *>(client);
  for (gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_ : {
  gctools::GCVector_moveable<core::SymbolClassPair> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::SymbolClassPair> *>(client);
  for (gctools::GCVector_moveable<core::SymbolClassPair>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->symbol);
    SMART_PTR_FIX(it->theClass);
  }
  typedef typename gctools::GCVector_moveable<core::SymbolClassPair> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_ : {
  gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> *>(client);
  for (gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->Name);
    TAGGED_POINTER_FIX(it->matcher);
  }
  typedef typename gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___ : {
  gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> *>(client);
  for (gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->first);
    SMART_PTR_FIX(it->second);
  }
  typedef typename gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>, gctools::smart_ptr<core::T_O>>> type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_ : {
  gctools::GCVector_moveable<core::CacheRecord> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::CacheRecord> *>(client);
  for (gctools::GCVector_moveable<core::CacheRecord>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->_key);
    SMART_PTR_FIX(it->_value);
  }
  typedef typename gctools::GCVector_moveable<core::CacheRecord> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__InstanceClosure : {
  mps_res_t result = gctools::obj_scan_helper<core::InstanceClosure>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> *>(client);
  for (gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::DerivableFrontendActionFactory>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_ : {
  gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> *obj_gc_safe = reinterpret_cast<gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> *>(client);
  for (gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>, 1> type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_LISPALLOC_asttooling__DerivableMatchCallback : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::DerivableMatchCallback>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_ : {
  gctools::GCVector_moveable<asttooling::ErrorContent> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::ErrorContent> *>(client);
  for (gctools::GCVector_moveable<asttooling::ErrorContent>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    TAGGED_POINTER_FIX(it->ContextStack._Vector._Contents);
    TAGGED_POINTER_FIX(it->Messages._Vector._Contents);
  }
  typedef typename gctools::GCVector_moveable<asttooling::ErrorContent> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::DerivableASTFrontendAction>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_ : {
  gctools::GCVector_moveable<asttooling::Message> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<asttooling::Message> *>(client);
  for (gctools::GCVector_moveable<asttooling::Message>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->Range);
  }
  typedef typename gctools::GCVector_moveable<asttooling::Message> type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__ : {
  gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> *>(client);
  for (gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    TAGGED_POINTER_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__CoreExposer : {
  mps_res_t result = gctools::obj_scan_helper<core::CoreExposer>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> *>(client);
  for (gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction : {
  mps_res_t result = gctools::obj_scan_helper<asttooling::DerivableSyntaxOnlyAction>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> *>(client);
  for (gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_ : {
  gctools::GCVector_moveable<core::OptionalArgument> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::OptionalArgument> *>(client);
  for (gctools::GCVector_moveable<core::OptionalArgument>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->_ArgTarget);
    SMART_PTR_FIX(it->_Default);
    SMART_PTR_FIX(it->_Sensor._ArgTarget);
  }
  typedef typename gctools::GCVector_moveable<core::OptionalArgument> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> *>(client);
  for (gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure : {
  core::BuiltinClosure *obj_gc_safe = reinterpret_cast<core::BuiltinClosure *>(client);
  SMART_PTR_FIX(obj_gc_safe->name);
  SMART_PTR_FIX(obj_gc_safe->closedEnvironment);
  SMART_PTR_FIX(obj_gc_safe->kind);
  SMART_PTR_FIX(obj_gc_safe->_cleavir_ast);
  SMART_PTR_FIX(obj_gc_safe->_lambdaListHandler);
  client = (char *)client + AlignUp(obj_gc_safe->templatedSizeof()) + global_alignup_sizeof_header;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_ : {
  gctools::GCVector_moveable<core::ExceptionEntry> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::ExceptionEntry> *>(client);
  for (gctools::GCVector_moveable<core::ExceptionEntry>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->_Key);
  }
  typedef typename gctools::GCVector_moveable<core::ExceptionEntry> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__InterpretedClosure : {
  mps_res_t result = gctools::obj_scan_helper<core::InterpretedClosure>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_ : {
  gctools::GCVector_moveable<core::DynamicBinding> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<core::DynamicBinding> *>(client);
  for (gctools::GCVector_moveable<core::DynamicBinding>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(it->_Var);
    SMART_PTR_FIX(it->_Val);
  }
  typedef typename gctools::GCVector_moveable<core::DynamicBinding> type_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
obj_scan_KIND_CLASSALLOC_core__VectorStepper : {
  mps_res_t result = gctools::obj_scan_helper<core::VectorStepper>(_ss, _mps_zs, _mps_w, _mps_ufs, _mps_wt, client);
  if (result != MPS_RES_OK)
    return result;
}
goto TOP;
obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__ : {
  gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> *obj_gc_safe = reinterpret_cast<gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> *>(client);
  for (gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>>::iterator it = obj_gc_safe->begin(); it != obj_gc_safe->end(); ++it) {
    SMART_PTR_FIX(*it);
  }
  typedef typename gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>> type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__;
  size_t header_and_gccontainer_size = AlignUp(sizeof_container<type_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__>(obj_gc_safe->capacity())) + AlignUp(sizeof(gctools::Header_s));
  client = (char *)client + header_and_gccontainer_size;
}
goto TOP;
#endif // defined(GC_OBJ_SCAN)
#if defined(GC_OBJ_SCAN_HELPERS)
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::RegMap::RegistryMaps>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::RegMap::RegistryMaps *obj_gc_safe = reinterpret_cast<asttooling::RegMap::RegistryMaps *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->Constructors._Vector._Contents);
  typedef asttooling::RegMap::RegistryMaps type_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps;
  client = (char *)client + AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<clbind::detail::class_map>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  clbind::detail::class_map *obj_gc_safe = reinterpret_cast<clbind::detail::class_map *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->m_classes._Vector._Contents);
  typedef clbind::detail::class_map type_KIND_ROOTCLASSALLOC_clbind__detail__class_map;
  client = (char *)client + AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_clbind__detail__class_map)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<clbind::DummyCreator>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef clbind::DummyCreator type_KIND_CLASSALLOC_clbind__DummyCreator;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_clbind__DummyCreator)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::InstanceCreator>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::InstanceCreator *obj_gc_safe = reinterpret_cast<core::InstanceCreator *>(client);
  SMART_PTR_FIX(obj_gc_safe->_className);
  typedef core::InstanceCreator type_KIND_CLASSALLOC_core__InstanceCreator;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__InstanceCreator)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::T_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::T_O type_KIND_BOOTSTRAP_core__T_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__T_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::MultiStringBuffer_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::MultiStringBuffer_O type_KIND_LISPALLOC_core__MultiStringBuffer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__MultiStringBuffer_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ReadTable_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ReadTable_O *obj_gc_safe = reinterpret_cast<core::ReadTable_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Case);
  SMART_PTR_FIX(obj_gc_safe->_SyntaxTypes);
  SMART_PTR_FIX(obj_gc_safe->_MacroCharacters);
  SMART_PTR_FIX(obj_gc_safe->_DispatchMacroCharacters);
  typedef core::ReadTable_O type_KIND_LISPALLOC_core__ReadTable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ReadTable_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Number_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Number_O type_KIND_LISPALLOC_core__Number_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Number_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Complex_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Complex_O *obj_gc_safe = reinterpret_cast<core::Complex_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_real);
  SMART_PTR_FIX(obj_gc_safe->_imaginary);
  typedef core::Complex_O type_KIND_LISPALLOC_core__Complex_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Complex_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Real_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Real_O type_KIND_LISPALLOC_core__Real_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Real_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Rational_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Rational_O type_KIND_LISPALLOC_core__Rational_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Rational_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Integer_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Integer_O type_KIND_LISPALLOC_core__Integer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Integer_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Bignum_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Bignum_O type_KIND_LISPALLOC_core__Bignum_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Bignum_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Fixnum_dummy_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Fixnum_dummy_O type_KIND_LISPALLOC_core__Fixnum_dummy_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Fixnum_dummy_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Ratio_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Ratio_O *obj_gc_safe = reinterpret_cast<core::Ratio_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_numerator);
  SMART_PTR_FIX(obj_gc_safe->_denominator);
  typedef core::Ratio_O type_KIND_LISPALLOC_core__Ratio_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Ratio_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Float_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Float_O type_KIND_LISPALLOC_core__Float_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Float_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::DoubleFloat_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::DoubleFloat_O type_KIND_LISPALLOC_core__DoubleFloat_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__DoubleFloat_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::LongFloat_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::LongFloat_O type_KIND_LISPALLOC_core__LongFloat_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LongFloat_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SingleFloat_dummy_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::SingleFloat_dummy_O type_KIND_LISPALLOC_core__SingleFloat_dummy_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleFloat_dummy_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ShortFloat_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::ShortFloat_O type_KIND_LISPALLOC_core__ShortFloat_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ShortFloat_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::FileStatus_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::FileStatus_O type_KIND_LISPALLOC_core__FileStatus_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FileStatus_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::WeakHashTable_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::WeakHashTable_O type_KIND_LISPALLOC_core__WeakHashTable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakHashTable_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::WeakKeyHashTable_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::WeakKeyHashTable_O *obj_gc_safe = reinterpret_cast<core::WeakKeyHashTable_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_HashTable._Keys);
  TAGGED_POINTER_FIX(obj_gc_safe->_HashTable._Values);
  typedef core::WeakKeyHashTable_O type_KIND_LISPALLOC_core__WeakKeyHashTable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakKeyHashTable_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Environment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Environment_O type_KIND_LISPALLOC_core__Environment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Environment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ActivationFrame_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::ActivationFrame_O type_KIND_LISPALLOC_core__ActivationFrame_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ActivationFrame_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::TagbodyFrame_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::TagbodyFrame_O *obj_gc_safe = reinterpret_cast<core::TagbodyFrame_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentFrame);
  typedef core::TagbodyFrame_O type_KIND_LISPALLOC_core__TagbodyFrame_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__TagbodyFrame_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ValueFrame_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ValueFrame_O *obj_gc_safe = reinterpret_cast<core::ValueFrame_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentFrame);
  TAGGED_POINTER_FIX(obj_gc_safe->_Objects._Array._Contents);
  SMART_PTR_FIX(obj_gc_safe->_DebuggingInfo);
  typedef core::ValueFrame_O type_KIND_LISPALLOC_core__ValueFrame_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ValueFrame_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::FunctionFrame_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::FunctionFrame_O *obj_gc_safe = reinterpret_cast<core::FunctionFrame_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentFrame);
  TAGGED_POINTER_FIX(obj_gc_safe->_Objects._Array._Contents);
  typedef core::FunctionFrame_O type_KIND_LISPALLOC_core__FunctionFrame_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionFrame_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::LexicalEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::LexicalEnvironment_O *obj_gc_safe = reinterpret_cast<core::LexicalEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  typedef core::LexicalEnvironment_O type_KIND_LISPALLOC_core__LexicalEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LexicalEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::RuntimeVisibleEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::RuntimeVisibleEnvironment_O *obj_gc_safe = reinterpret_cast<core::RuntimeVisibleEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_RuntimeEnvironment);
  typedef core::RuntimeVisibleEnvironment_O type_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::FunctionValueEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::FunctionValueEnvironment_O *obj_gc_safe = reinterpret_cast<core::FunctionValueEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_RuntimeEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_FunctionIndices);
  SMART_PTR_FIX(obj_gc_safe->_FunctionFrame);
  typedef core::FunctionValueEnvironment_O type_KIND_LISPALLOC_core__FunctionValueEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionValueEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ValueEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ValueEnvironment_O *obj_gc_safe = reinterpret_cast<core::ValueEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_RuntimeEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_SymbolIndex);
  SMART_PTR_FIX(obj_gc_safe->_ActivationFrame);
  typedef core::ValueEnvironment_O type_KIND_LISPALLOC_core__ValueEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ValueEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::TagbodyEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::TagbodyEnvironment_O *obj_gc_safe = reinterpret_cast<core::TagbodyEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_RuntimeEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Tags);
  TAGGED_POINTER_FIX(obj_gc_safe->_TagCode._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_ActivationFrame);
  typedef core::TagbodyEnvironment_O type_KIND_LISPALLOC_core__TagbodyEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__TagbodyEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::CompileTimeEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::CompileTimeEnvironment_O *obj_gc_safe = reinterpret_cast<core::CompileTimeEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  typedef core::CompileTimeEnvironment_O type_KIND_LISPALLOC_core__CompileTimeEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CompileTimeEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::UnwindProtectEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::UnwindProtectEnvironment_O *obj_gc_safe = reinterpret_cast<core::UnwindProtectEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_CleanupForm);
  typedef core::UnwindProtectEnvironment_O type_KIND_LISPALLOC_core__UnwindProtectEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__UnwindProtectEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SymbolMacroletEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SymbolMacroletEnvironment_O *obj_gc_safe = reinterpret_cast<core::SymbolMacroletEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_Macros);
  typedef core::SymbolMacroletEnvironment_O type_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::FunctionContainerEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::FunctionContainerEnvironment_O *obj_gc_safe = reinterpret_cast<core::FunctionContainerEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  typedef core::FunctionContainerEnvironment_O type_KIND_LISPALLOC_core__FunctionContainerEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FunctionContainerEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StackValueEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StackValueEnvironment_O *obj_gc_safe = reinterpret_cast<core::StackValueEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_Values);
  typedef core::StackValueEnvironment_O type_KIND_LISPALLOC_core__StackValueEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StackValueEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::BlockEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::BlockEnvironment_O *obj_gc_safe = reinterpret_cast<core::BlockEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_BlockSymbol);
  typedef core::BlockEnvironment_O type_KIND_LISPALLOC_core__BlockEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BlockEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::MacroletEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::MacroletEnvironment_O *obj_gc_safe = reinterpret_cast<core::MacroletEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  SMART_PTR_FIX(obj_gc_safe->_Macros);
  typedef core::MacroletEnvironment_O type_KIND_LISPALLOC_core__MacroletEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__MacroletEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::CatchEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::CatchEnvironment_O *obj_gc_safe = reinterpret_cast<core::CatchEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ParentEnvironment);
  SMART_PTR_FIX(obj_gc_safe->_Metadata);
  typedef core::CatchEnvironment_O type_KIND_LISPALLOC_core__CatchEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CatchEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::GlueEnvironment_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::GlueEnvironment_O *obj_gc_safe = reinterpret_cast<core::GlueEnvironment_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Map);
  SMART_PTR_FIX(obj_gc_safe->_Args);
  typedef core::GlueEnvironment_O type_KIND_LISPALLOC_core__GlueEnvironment_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__GlueEnvironment_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Array_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Array_O type_KIND_LISPALLOC_core__Array_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Array_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ArrayObjects_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ArrayObjects_O *obj_gc_safe = reinterpret_cast<core::ArrayObjects_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ElementType);
  TAGGED_POINTER_FIX(obj_gc_safe->_Values._Vector._Contents);
  typedef core::ArrayObjects_O type_KIND_LISPALLOC_core__ArrayObjects_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ArrayObjects_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ArrayDisplaced_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ArrayDisplaced_O *obj_gc_safe = reinterpret_cast<core::ArrayDisplaced_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ElementType);
  SMART_PTR_FIX(obj_gc_safe->_Array);
  typedef core::ArrayDisplaced_O type_KIND_LISPALLOC_core__ArrayDisplaced_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ArrayDisplaced_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Vector_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Vector_O type_KIND_LISPALLOC_core__Vector_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Vector_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::BitVector_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::BitVector_O type_KIND_LISPALLOC_core__BitVector_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BitVector_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SimpleBitVector_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::SimpleBitVector_O type_KIND_LISPALLOC_core__SimpleBitVector_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SimpleBitVector_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::BitVectorWithFillPtr_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::BitVectorWithFillPtr_O type_KIND_LISPALLOC_core__BitVectorWithFillPtr_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BitVectorWithFillPtr_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::VectorDisplaced_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::VectorDisplaced_O *obj_gc_safe = reinterpret_cast<core::VectorDisplaced_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ElementType);
  SMART_PTR_FIX(obj_gc_safe->_Vector);
  typedef core::VectorDisplaced_O type_KIND_LISPALLOC_core__VectorDisplaced_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorDisplaced_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::String_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::String_O type_KIND_LISPALLOC_core__String_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__String_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Str_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Str_O *obj_gc_safe = reinterpret_cast<core::Str_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_Contents._Contents);
  typedef core::Str_O type_KIND_BOOTSTRAP_core__Str_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Str_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StrWithFillPtr_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StrWithFillPtr_O *obj_gc_safe = reinterpret_cast<core::StrWithFillPtr_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_Contents._Contents);
  typedef core::StrWithFillPtr_O type_KIND_LISPALLOC_core__StrWithFillPtr_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StrWithFillPtr_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::VectorObjects_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::VectorObjects_O *obj_gc_safe = reinterpret_cast<core::VectorObjects_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ElementType);
  TAGGED_POINTER_FIX(obj_gc_safe->_Values._Vector._Contents);
  typedef core::VectorObjects_O type_KIND_LISPALLOC_core__VectorObjects_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorObjects_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::VectorObjectsWithFillPtr_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::VectorObjectsWithFillPtr_O *obj_gc_safe = reinterpret_cast<core::VectorObjectsWithFillPtr_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ElementType);
  TAGGED_POINTER_FIX(obj_gc_safe->_Values._Vector._Contents);
  typedef core::VectorObjectsWithFillPtr_O type_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SingleDispatchMethod_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SingleDispatchMethod_O *obj_gc_safe = reinterpret_cast<core::SingleDispatchMethod_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_name);
  SMART_PTR_FIX(obj_gc_safe->_receiver_class);
  SMART_PTR_FIX(obj_gc_safe->code);
  SMART_PTR_FIX(obj_gc_safe->_argument_handler);
  SMART_PTR_FIX(obj_gc_safe->_declares);
  SMART_PTR_FIX(obj_gc_safe->_docstring);
  typedef core::SingleDispatchMethod_O type_KIND_LISPALLOC_core__SingleDispatchMethod_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchMethod_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::RandomState_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::RandomState_O type_KIND_LISPALLOC_core__RandomState_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__RandomState_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DebugLoc_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DebugLoc_O type_KIND_LISPALLOC_llvmo__DebugLoc_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DebugLoc_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Attribute_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::Attribute_O type_KIND_LISPALLOC_llvmo__Attribute_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Attribute_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::RegexMatch_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::RegexMatch_O type_KIND_LISPALLOC_core__RegexMatch_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__RegexMatch_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::WeakPointer_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::WeakPointer_O *obj_gc_safe = reinterpret_cast<core::WeakPointer_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_WeakObject.pointer);
  typedef core::WeakPointer_O type_KIND_LISPALLOC_core__WeakPointer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakPointer_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::VaList_dummy_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::VaList_dummy_O type_KIND_LISPALLOC_core__VaList_dummy_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__VaList_dummy_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StandardObject_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::StandardObject_O type_KIND_BOOTSTRAP_core__StandardObject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StandardObject_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Metaobject_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Metaobject_O type_KIND_BOOTSTRAP_core__Metaobject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Metaobject_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Specializer_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Specializer_O type_KIND_BOOTSTRAP_core__Specializer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Specializer_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Class_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Class_O *obj_gc_safe = reinterpret_cast<core::Class_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  typedef core::Class_O type_KIND_BOOTSTRAP_core__Class_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Class_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StdClass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StdClass_O *obj_gc_safe = reinterpret_cast<core::StdClass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  typedef core::StdClass_O type_KIND_BOOTSTRAP_core__StdClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StdClass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StandardClass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StandardClass_O *obj_gc_safe = reinterpret_cast<core::StandardClass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_InstanceCoreClass);
  typedef core::StandardClass_O type_KIND_BOOTSTRAP_core__StandardClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StandardClass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::FuncallableStandardClass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::FuncallableStandardClass_O *obj_gc_safe = reinterpret_cast<core::FuncallableStandardClass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_InstanceCoreClass);
  typedef core::FuncallableStandardClass_O type_KIND_LISPALLOC_core__FuncallableStandardClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FuncallableStandardClass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StructureClass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StructureClass_O *obj_gc_safe = reinterpret_cast<core::StructureClass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_InstanceCoreClass);
  typedef core::StructureClass_O type_KIND_BOOTSTRAP_core__StructureClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__StructureClass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ForwardReferencedClass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ForwardReferencedClass_O *obj_gc_safe = reinterpret_cast<core::ForwardReferencedClass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_InstanceCoreClass);
  typedef core::ForwardReferencedClass_O type_KIND_LISPALLOC_core__ForwardReferencedClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ForwardReferencedClass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::CxxClass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::CxxClass_O *obj_gc_safe = reinterpret_cast<core::CxxClass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  typedef core::CxxClass_O type_KIND_LISPALLOC_core__CxxClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CxxClass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::BuiltInClass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::BuiltInClass_O *obj_gc_safe = reinterpret_cast<core::BuiltInClass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  typedef core::BuiltInClass_O type_KIND_BOOTSTRAP_core__BuiltInClass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__BuiltInClass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<clbind::ClassRep_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  clbind::ClassRep_O *obj_gc_safe = reinterpret_cast<clbind::ClassRep_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Signature_ClassSlots);
  TAGGED_POINTER_FIX(obj_gc_safe->_theCreator);
  TAGGED_POINTER_FIX(obj_gc_safe->_MetaClassSlots._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->m_bases._Vector._Contents);
  typedef clbind::ClassRep_O type_KIND_LISPALLOC_clbind__ClassRep_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_clbind__ClassRep_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ExternalObject_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ExternalObject_O *obj_gc_safe = reinterpret_cast<core::ExternalObject_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef core::ExternalObject_O type_KIND_LISPALLOC_core__ExternalObject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ExternalObject_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Value_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Value_O *obj_gc_safe = reinterpret_cast<llvmo::Value_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Value_O type_KIND_LISPALLOC_llvmo__Value_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Value_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Argument_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Argument_O *obj_gc_safe = reinterpret_cast<llvmo::Argument_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Argument_O type_KIND_LISPALLOC_llvmo__Argument_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Argument_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::User_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::User_O *obj_gc_safe = reinterpret_cast<llvmo::User_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::User_O type_KIND_LISPALLOC_llvmo__User_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__User_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Instruction_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Instruction_O *obj_gc_safe = reinterpret_cast<llvmo::Instruction_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Instruction_O type_KIND_LISPALLOC_llvmo__Instruction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Instruction_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::AtomicRMWInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::AtomicRMWInst_O *obj_gc_safe = reinterpret_cast<llvmo::AtomicRMWInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::AtomicRMWInst_O type_KIND_LISPALLOC_llvmo__AtomicRMWInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AtomicRMWInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::LandingPadInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::LandingPadInst_O *obj_gc_safe = reinterpret_cast<llvmo::LandingPadInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::LandingPadInst_O type_KIND_LISPALLOC_llvmo__LandingPadInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LandingPadInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::PHINode_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::PHINode_O *obj_gc_safe = reinterpret_cast<llvmo::PHINode_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::PHINode_O type_KIND_LISPALLOC_llvmo__PHINode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PHINode_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::CallInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::CallInst_O *obj_gc_safe = reinterpret_cast<llvmo::CallInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::CallInst_O type_KIND_LISPALLOC_llvmo__CallInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__CallInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::StoreInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::StoreInst_O *obj_gc_safe = reinterpret_cast<llvmo::StoreInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::StoreInst_O type_KIND_LISPALLOC_llvmo__StoreInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__StoreInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::UnaryInstruction_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::UnaryInstruction_O *obj_gc_safe = reinterpret_cast<llvmo::UnaryInstruction_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::UnaryInstruction_O type_KIND_LISPALLOC_llvmo__UnaryInstruction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UnaryInstruction_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::LoadInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::LoadInst_O *obj_gc_safe = reinterpret_cast<llvmo::LoadInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::LoadInst_O type_KIND_LISPALLOC_llvmo__LoadInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LoadInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::AllocaInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::AllocaInst_O *obj_gc_safe = reinterpret_cast<llvmo::AllocaInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::AllocaInst_O type_KIND_LISPALLOC_llvmo__AllocaInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AllocaInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::VAArgInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::VAArgInst_O *obj_gc_safe = reinterpret_cast<llvmo::VAArgInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::VAArgInst_O type_KIND_LISPALLOC_llvmo__VAArgInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__VAArgInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::AtomicCmpXchgInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::AtomicCmpXchgInst_O *obj_gc_safe = reinterpret_cast<llvmo::AtomicCmpXchgInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::AtomicCmpXchgInst_O type_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::TerminatorInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::TerminatorInst_O *obj_gc_safe = reinterpret_cast<llvmo::TerminatorInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::TerminatorInst_O type_KIND_LISPALLOC_llvmo__TerminatorInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TerminatorInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::UnreachableInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::UnreachableInst_O *obj_gc_safe = reinterpret_cast<llvmo::UnreachableInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::UnreachableInst_O type_KIND_LISPALLOC_llvmo__UnreachableInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UnreachableInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::SwitchInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::SwitchInst_O *obj_gc_safe = reinterpret_cast<llvmo::SwitchInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::SwitchInst_O type_KIND_LISPALLOC_llvmo__SwitchInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__SwitchInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ReturnInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ReturnInst_O *obj_gc_safe = reinterpret_cast<llvmo::ReturnInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ReturnInst_O type_KIND_LISPALLOC_llvmo__ReturnInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ReturnInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ResumeInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ResumeInst_O *obj_gc_safe = reinterpret_cast<llvmo::ResumeInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ResumeInst_O type_KIND_LISPALLOC_llvmo__ResumeInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ResumeInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::BranchInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::BranchInst_O *obj_gc_safe = reinterpret_cast<llvmo::BranchInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::BranchInst_O type_KIND_LISPALLOC_llvmo__BranchInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BranchInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::InvokeInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::InvokeInst_O *obj_gc_safe = reinterpret_cast<llvmo::InvokeInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::InvokeInst_O type_KIND_LISPALLOC_llvmo__InvokeInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__InvokeInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::IndirectBrInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::IndirectBrInst_O *obj_gc_safe = reinterpret_cast<llvmo::IndirectBrInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::IndirectBrInst_O type_KIND_LISPALLOC_llvmo__IndirectBrInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IndirectBrInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::FenceInst_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::FenceInst_O *obj_gc_safe = reinterpret_cast<llvmo::FenceInst_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::FenceInst_O type_KIND_LISPALLOC_llvmo__FenceInst_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FenceInst_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Constant_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Constant_O *obj_gc_safe = reinterpret_cast<llvmo::Constant_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Constant_O type_KIND_LISPALLOC_llvmo__Constant_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Constant_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::BlockAddress_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::BlockAddress_O *obj_gc_safe = reinterpret_cast<llvmo::BlockAddress_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::BlockAddress_O type_KIND_LISPALLOC_llvmo__BlockAddress_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BlockAddress_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::GlobalValue_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::GlobalValue_O *obj_gc_safe = reinterpret_cast<llvmo::GlobalValue_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::GlobalValue_O type_KIND_LISPALLOC_llvmo__GlobalValue_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__GlobalValue_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::GlobalVariable_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::GlobalVariable_O *obj_gc_safe = reinterpret_cast<llvmo::GlobalVariable_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::GlobalVariable_O type_KIND_LISPALLOC_llvmo__GlobalVariable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__GlobalVariable_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Function_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Function_O *obj_gc_safe = reinterpret_cast<llvmo::Function_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  SMART_PTR_FIX(obj_gc_safe->_RunTimeValues);
  typedef llvmo::Function_O type_KIND_LISPALLOC_llvmo__Function_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Function_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ConstantArray_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ConstantArray_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantArray_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ConstantArray_O type_KIND_LISPALLOC_llvmo__ConstantArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantArray_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ConstantInt_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ConstantInt_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantInt_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ConstantInt_O type_KIND_LISPALLOC_llvmo__ConstantInt_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantInt_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ConstantDataSequential_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ConstantDataSequential_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantDataSequential_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ConstantDataSequential_O type_KIND_LISPALLOC_llvmo__ConstantDataSequential_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantDataSequential_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ConstantDataArray_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ConstantDataArray_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantDataArray_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ConstantDataArray_O type_KIND_LISPALLOC_llvmo__ConstantDataArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantDataArray_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ConstantStruct_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ConstantStruct_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantStruct_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ConstantStruct_O type_KIND_LISPALLOC_llvmo__ConstantStruct_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantStruct_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ConstantFP_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ConstantFP_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantFP_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ConstantFP_O type_KIND_LISPALLOC_llvmo__ConstantFP_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantFP_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::UndefValue_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::UndefValue_O *obj_gc_safe = reinterpret_cast<llvmo::UndefValue_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::UndefValue_O type_KIND_LISPALLOC_llvmo__UndefValue_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__UndefValue_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ConstantPointerNull_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ConstantPointerNull_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantPointerNull_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ConstantPointerNull_O type_KIND_LISPALLOC_llvmo__ConstantPointerNull_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantPointerNull_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ConstantExpr_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ConstantExpr_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantExpr_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ConstantExpr_O type_KIND_LISPALLOC_llvmo__ConstantExpr_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ConstantExpr_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::BasicBlock_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::BasicBlock_O *obj_gc_safe = reinterpret_cast<llvmo::BasicBlock_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::BasicBlock_O type_KIND_LISPALLOC_llvmo__BasicBlock_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__BasicBlock_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::IRBuilderBase_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::IRBuilderBase_O *obj_gc_safe = reinterpret_cast<llvmo::IRBuilderBase_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::IRBuilderBase_O type_KIND_LISPALLOC_llvmo__IRBuilderBase_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IRBuilderBase_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::IRBuilder_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::IRBuilder_O *obj_gc_safe = reinterpret_cast<llvmo::IRBuilder_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::IRBuilder_O type_KIND_LISPALLOC_llvmo__IRBuilder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IRBuilder_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DIBuilder_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::DIBuilder_O *obj_gc_safe = reinterpret_cast<llvmo::DIBuilder_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::DIBuilder_O type_KIND_LISPALLOC_llvmo__DIBuilder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIBuilder_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Metadata_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Metadata_O *obj_gc_safe = reinterpret_cast<llvmo::Metadata_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Metadata_O type_KIND_LISPALLOC_llvmo__Metadata_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Metadata_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ValueAsMetadata_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ValueAsMetadata_O *obj_gc_safe = reinterpret_cast<llvmo::ValueAsMetadata_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ValueAsMetadata_O type_KIND_LISPALLOC_llvmo__ValueAsMetadata_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ValueAsMetadata_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::MDNode_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::MDNode_O *obj_gc_safe = reinterpret_cast<llvmo::MDNode_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::MDNode_O type_KIND_LISPALLOC_llvmo__MDNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MDNode_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::MDString_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::MDString_O *obj_gc_safe = reinterpret_cast<llvmo::MDString_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::MDString_O type_KIND_LISPALLOC_llvmo__MDString_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MDString_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ExecutionEngine_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ExecutionEngine_O *obj_gc_safe = reinterpret_cast<llvmo::ExecutionEngine_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  SMART_PTR_FIX(obj_gc_safe->_DependentModules);
  typedef llvmo::ExecutionEngine_O type_KIND_LISPALLOC_llvmo__ExecutionEngine_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ExecutionEngine_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::APFloat_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::APFloat_O *obj_gc_safe = reinterpret_cast<llvmo::APFloat_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::APFloat_O type_KIND_LISPALLOC_llvmo__APFloat_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__APFloat_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::PassManagerBuilder_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::PassManagerBuilder_O *obj_gc_safe = reinterpret_cast<llvmo::PassManagerBuilder_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::PassManagerBuilder_O type_KIND_LISPALLOC_llvmo__PassManagerBuilder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManagerBuilder_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DataLayout_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::DataLayout_O *obj_gc_safe = reinterpret_cast<llvmo::DataLayout_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::DataLayout_O type_KIND_LISPALLOC_llvmo__DataLayout_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DataLayout_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Triple_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Triple_O *obj_gc_safe = reinterpret_cast<llvmo::Triple_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Triple_O type_KIND_LISPALLOC_llvmo__Triple_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Triple_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::APInt_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::APInt_O *obj_gc_safe = reinterpret_cast<llvmo::APInt_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::APInt_O type_KIND_LISPALLOC_llvmo__APInt_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__APInt_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::PassManagerBase_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::PassManagerBase_O *obj_gc_safe = reinterpret_cast<llvmo::PassManagerBase_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::PassManagerBase_O type_KIND_LISPALLOC_llvmo__PassManagerBase_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManagerBase_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::FunctionPassManager_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::FunctionPassManager_O *obj_gc_safe = reinterpret_cast<llvmo::FunctionPassManager_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::FunctionPassManager_O type_KIND_LISPALLOC_llvmo__FunctionPassManager_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionPassManager_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::PassManager_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::PassManager_O *obj_gc_safe = reinterpret_cast<llvmo::PassManager_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::PassManager_O type_KIND_LISPALLOC_llvmo__PassManager_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PassManager_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::TargetMachine_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::TargetMachine_O *obj_gc_safe = reinterpret_cast<llvmo::TargetMachine_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::TargetMachine_O type_KIND_LISPALLOC_llvmo__TargetMachine_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetMachine_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::LLVMTargetMachine_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::LLVMTargetMachine_O *obj_gc_safe = reinterpret_cast<llvmo::LLVMTargetMachine_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::LLVMTargetMachine_O type_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::TargetOptions_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::TargetOptions_O *obj_gc_safe = reinterpret_cast<llvmo::TargetOptions_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::TargetOptions_O type_KIND_LISPALLOC_llvmo__TargetOptions_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetOptions_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Type_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Type_O *obj_gc_safe = reinterpret_cast<llvmo::Type_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Type_O type_KIND_LISPALLOC_llvmo__Type_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Type_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::IntegerType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::IntegerType_O *obj_gc_safe = reinterpret_cast<llvmo::IntegerType_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::IntegerType_O type_KIND_LISPALLOC_llvmo__IntegerType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__IntegerType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::CompositeType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::CompositeType_O *obj_gc_safe = reinterpret_cast<llvmo::CompositeType_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::CompositeType_O type_KIND_LISPALLOC_llvmo__CompositeType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__CompositeType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::SequentialType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::SequentialType_O *obj_gc_safe = reinterpret_cast<llvmo::SequentialType_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::SequentialType_O type_KIND_LISPALLOC_llvmo__SequentialType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__SequentialType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::VectorType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::VectorType_O *obj_gc_safe = reinterpret_cast<llvmo::VectorType_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::VectorType_O type_KIND_LISPALLOC_llvmo__VectorType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__VectorType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::PointerType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::PointerType_O *obj_gc_safe = reinterpret_cast<llvmo::PointerType_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::PointerType_O type_KIND_LISPALLOC_llvmo__PointerType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__PointerType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ArrayType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ArrayType_O *obj_gc_safe = reinterpret_cast<llvmo::ArrayType_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ArrayType_O type_KIND_LISPALLOC_llvmo__ArrayType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ArrayType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::StructType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::StructType_O *obj_gc_safe = reinterpret_cast<llvmo::StructType_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::StructType_O type_KIND_LISPALLOC_llvmo__StructType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__StructType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::FunctionType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::FunctionType_O *obj_gc_safe = reinterpret_cast<llvmo::FunctionType_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::FunctionType_O type_KIND_LISPALLOC_llvmo__FunctionType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::NamedMDNode_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::NamedMDNode_O *obj_gc_safe = reinterpret_cast<llvmo::NamedMDNode_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::NamedMDNode_O type_KIND_LISPALLOC_llvmo__NamedMDNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__NamedMDNode_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Linker_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Linker_O *obj_gc_safe = reinterpret_cast<llvmo::Linker_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Linker_O type_KIND_LISPALLOC_llvmo__Linker_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Linker_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Pass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Pass_O *obj_gc_safe = reinterpret_cast<llvmo::Pass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Pass_O type_KIND_LISPALLOC_llvmo__Pass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Pass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::FunctionPass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::FunctionPass_O *obj_gc_safe = reinterpret_cast<llvmo::FunctionPass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::FunctionPass_O type_KIND_LISPALLOC_llvmo__FunctionPass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__FunctionPass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ModulePass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ModulePass_O *obj_gc_safe = reinterpret_cast<llvmo::ModulePass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ModulePass_O type_KIND_LISPALLOC_llvmo__ModulePass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ModulePass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::ImmutablePass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::ImmutablePass_O *obj_gc_safe = reinterpret_cast<llvmo::ImmutablePass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::ImmutablePass_O type_KIND_LISPALLOC_llvmo__ImmutablePass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__ImmutablePass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DataLayoutPass_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::DataLayoutPass_O *obj_gc_safe = reinterpret_cast<llvmo::DataLayoutPass_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::DataLayoutPass_O type_KIND_LISPALLOC_llvmo__DataLayoutPass_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DataLayoutPass_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::TargetLibraryInfo_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::TargetLibraryInfo_O *obj_gc_safe = reinterpret_cast<llvmo::TargetLibraryInfo_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::TargetLibraryInfo_O type_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::MCSubtargetInfo_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::MCSubtargetInfo_O *obj_gc_safe = reinterpret_cast<llvmo::MCSubtargetInfo_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::MCSubtargetInfo_O type_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::TargetSubtargetInfo_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::TargetSubtargetInfo_O *obj_gc_safe = reinterpret_cast<llvmo::TargetSubtargetInfo_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::TargetSubtargetInfo_O type_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Module_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Module_O *obj_gc_safe = reinterpret_cast<llvmo::Module_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  SMART_PTR_FIX(obj_gc_safe->_UniqueGlobalVariableStrings);
  typedef llvmo::Module_O type_KIND_LISPALLOC_llvmo__Module_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Module_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::EngineBuilder_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::EngineBuilder_O *obj_gc_safe = reinterpret_cast<llvmo::EngineBuilder_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::EngineBuilder_O type_KIND_LISPALLOC_llvmo__EngineBuilder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__EngineBuilder_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ForeignData_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ForeignData_O *obj_gc_safe = reinterpret_cast<core::ForeignData_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  SMART_PTR_FIX(obj_gc_safe->_Kind);
  typedef core::ForeignData_O type_KIND_LISPALLOC_core__ForeignData_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ForeignData_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::LLVMContext_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::LLVMContext_O *obj_gc_safe = reinterpret_cast<llvmo::LLVMContext_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::LLVMContext_O type_KIND_LISPALLOC_llvmo__LLVMContext_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__LLVMContext_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::Target_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::Target_O *obj_gc_safe = reinterpret_cast<llvmo::Target_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  typedef llvmo::Target_O type_KIND_LISPALLOC_llvmo__Target_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__Target_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::LoadTimeValues_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::LoadTimeValues_O *obj_gc_safe = reinterpret_cast<core::LoadTimeValues_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_Objects._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->_Symbols._Vector._Contents);
  typedef core::LoadTimeValues_O type_KIND_LISPALLOC_core__LoadTimeValues_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LoadTimeValues_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Binder_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Binder_O *obj_gc_safe = reinterpret_cast<core::Binder_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Bindings);
  SMART_PTR_FIX(obj_gc_safe->_Values);
  typedef core::Binder_O type_KIND_LISPALLOC_core__Binder_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Binder_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::IntArray_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::IntArray_O type_KIND_LISPALLOC_core__IntArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__IntArray_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SourceManager_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SourceManager_O *obj_gc_safe = reinterpret_cast<core::SourceManager_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_SourcePosInfo);
  typedef core::SourceManager_O type_KIND_LISPALLOC_core__SourceManager_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SourceManager_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Record_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Record_O *obj_gc_safe = reinterpret_cast<core::Record_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_alist);
  SMART_PTR_FIX(obj_gc_safe->_replacement_table);
  SMART_PTR_FIX(obj_gc_safe->_Seen);
  typedef core::Record_O type_KIND_LISPALLOC_core__Record_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Record_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::LightUserData_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::LightUserData_O type_KIND_LISPALLOC_core__LightUserData_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LightUserData_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::UserData_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::UserData_O type_KIND_LISPALLOC_core__UserData_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__UserData_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Symbol_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Symbol_O *obj_gc_safe = reinterpret_cast<core::Symbol_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Name);
  SMART_PTR_FIX(obj_gc_safe->_HomePackage);
  SMART_PTR_FIX(obj_gc_safe->_Value);
  SMART_PTR_FIX(obj_gc_safe->_Function);
  SMART_PTR_FIX(obj_gc_safe->_SetfFunction);
  SMART_PTR_FIX(obj_gc_safe->_PropertyList);
  typedef core::Symbol_O type_KIND_BOOTSTRAP_core__Symbol_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_BOOTSTRAP_core__Symbol_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Null_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Null_O *obj_gc_safe = reinterpret_cast<core::Null_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Name);
  SMART_PTR_FIX(obj_gc_safe->_HomePackage);
  SMART_PTR_FIX(obj_gc_safe->_Value);
  SMART_PTR_FIX(obj_gc_safe->_Function);
  SMART_PTR_FIX(obj_gc_safe->_SetfFunction);
  SMART_PTR_FIX(obj_gc_safe->_PropertyList);
  typedef core::Null_O type_KIND_LISPALLOC_core__Null_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Null_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SourcePosInfo_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::SourcePosInfo_O type_KIND_LISPALLOC_core__SourcePosInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SourcePosInfo_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::DirectoryIterator_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::DirectoryIterator_O *obj_gc_safe = reinterpret_cast<core::DirectoryIterator_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Path);
  typedef core::DirectoryIterator_O type_KIND_LISPALLOC_core__DirectoryIterator_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__DirectoryIterator_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::RecursiveDirectoryIterator_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::RecursiveDirectoryIterator_O *obj_gc_safe = reinterpret_cast<core::RecursiveDirectoryIterator_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Path);
  typedef core::RecursiveDirectoryIterator_O type_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Regex_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Regex_O type_KIND_LISPALLOC_core__Regex_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Regex_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::PosixTimeDuration_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::PosixTimeDuration_O type_KIND_LISPALLOC_core__PosixTimeDuration_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__PosixTimeDuration_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SymbolToEnumConverter_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SymbolToEnumConverter_O *obj_gc_safe = reinterpret_cast<core::SymbolToEnumConverter_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_WhatTheEnumsRepresent._Contents);
  SMART_PTR_FIX(obj_gc_safe->_EnumToSymbol);
  SMART_PTR_FIX(obj_gc_safe->_ArchiveSymbolToEnum);
  SMART_PTR_FIX(obj_gc_safe->_EnumToArchiveSymbol);
  SMART_PTR_FIX(obj_gc_safe->_SymbolToEnum);
  typedef core::SymbolToEnumConverter_O type_KIND_LISPALLOC_core__SymbolToEnumConverter_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SymbolToEnumConverter_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::CandoException_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::CandoException_O *obj_gc_safe = reinterpret_cast<core::CandoException_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_message._Contents);
  typedef core::CandoException_O type_KIND_LISPALLOC_core__CandoException_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CandoException_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Stream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Stream_O *obj_gc_safe = reinterpret_cast<core::Stream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  typedef core::Stream_O type_KIND_LISPALLOC_core__Stream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Stream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::AnsiStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::AnsiStream_O *obj_gc_safe = reinterpret_cast<core::AnsiStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  typedef core::AnsiStream_O type_KIND_LISPALLOC_core__AnsiStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__AnsiStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::FileStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::FileStream_O *obj_gc_safe = reinterpret_cast<core::FileStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_Filename);
  SMART_PTR_FIX(obj_gc_safe->_ElementType);
  typedef core::FileStream_O type_KIND_LISPALLOC_core__FileStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__FileStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::IOStreamStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::IOStreamStream_O *obj_gc_safe = reinterpret_cast<core::IOStreamStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_Filename);
  SMART_PTR_FIX(obj_gc_safe->_ElementType);
  typedef core::IOStreamStream_O type_KIND_LISPALLOC_core__IOStreamStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__IOStreamStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::IOFileStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::IOFileStream_O *obj_gc_safe = reinterpret_cast<core::IOFileStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_Filename);
  SMART_PTR_FIX(obj_gc_safe->_ElementType);
  typedef core::IOFileStream_O type_KIND_LISPALLOC_core__IOFileStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__IOFileStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ConcatenatedStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ConcatenatedStream_O *obj_gc_safe = reinterpret_cast<core::ConcatenatedStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_List);
  typedef core::ConcatenatedStream_O type_KIND_LISPALLOC_core__ConcatenatedStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__ConcatenatedStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StringStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StringStream_O *obj_gc_safe = reinterpret_cast<core::StringStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  typedef core::StringStream_O type_KIND_LISPALLOC_core__StringStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StringStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StringInputStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StringInputStream_O *obj_gc_safe = reinterpret_cast<core::StringInputStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_Contents);
  typedef core::StringInputStream_O type_KIND_LISPALLOC_core__StringInputStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StringInputStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StringOutputStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StringOutputStream_O *obj_gc_safe = reinterpret_cast<core::StringOutputStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_Contents);
  typedef core::StringOutputStream_O type_KIND_LISPALLOC_core__StringOutputStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StringOutputStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SynonymStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SynonymStream_O *obj_gc_safe = reinterpret_cast<core::SynonymStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_SynonymSymbol);
  typedef core::SynonymStream_O type_KIND_LISPALLOC_core__SynonymStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SynonymStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::EchoStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::EchoStream_O *obj_gc_safe = reinterpret_cast<core::EchoStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_In);
  SMART_PTR_FIX(obj_gc_safe->_Out);
  typedef core::EchoStream_O type_KIND_LISPALLOC_core__EchoStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__EchoStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::TwoWayStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::TwoWayStream_O *obj_gc_safe = reinterpret_cast<core::TwoWayStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_In);
  SMART_PTR_FIX(obj_gc_safe->_Out);
  typedef core::TwoWayStream_O type_KIND_LISPALLOC_core__TwoWayStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__TwoWayStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::BroadcastStream_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::BroadcastStream_O *obj_gc_safe = reinterpret_cast<core::BroadcastStream_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Format);
  SMART_PTR_FIX(obj_gc_safe->_ByteStack);
  SMART_PTR_FIX(obj_gc_safe->_ExternalFormat);
  SMART_PTR_FIX(obj_gc_safe->_Streams);
  typedef core::BroadcastStream_O type_KIND_LISPALLOC_core__BroadcastStream_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BroadcastStream_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Reader_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Reader_O *obj_gc_safe = reinterpret_cast<core::Reader_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Input);
  typedef core::Reader_O type_KIND_LISPALLOC_core__Reader_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Reader_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
ALWAYS_INLINE mps_res_t obj_scan_helper<core::Cons_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Cons_O *obj_gc_safe = reinterpret_cast<core::Cons_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Car);
  SMART_PTR_FIX(obj_gc_safe->_Cdr);
  typedef core::Cons_O type_KIND_LISPALLOC_core__Cons_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Cons_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Archive_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Archive_O *obj_gc_safe = reinterpret_cast<core::Archive_O *>(client);
  SIMPLE_POINTER_FIX(obj_gc_safe->_TopNode.theObject);
  typedef core::Archive_O type_KIND_LISPALLOC_core__Archive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Archive_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SaveArchive_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SaveArchive_O *obj_gc_safe = reinterpret_cast<core::SaveArchive_O *>(client);
  SIMPLE_POINTER_FIX(obj_gc_safe->_TopNode.theObject);
  SMART_PTR_FIX(obj_gc_safe->_SNodeForObject);
  typedef core::SaveArchive_O type_KIND_LISPALLOC_core__SaveArchive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SaveArchive_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SexpSaveArchive_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SexpSaveArchive_O *obj_gc_safe = reinterpret_cast<core::SexpSaveArchive_O *>(client);
  SIMPLE_POINTER_FIX(obj_gc_safe->_TopNode.theObject);
  SMART_PTR_FIX(obj_gc_safe->_SNodeForObject);
  typedef core::SexpSaveArchive_O type_KIND_LISPALLOC_core__SexpSaveArchive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SexpSaveArchive_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::LoadArchive_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::LoadArchive_O *obj_gc_safe = reinterpret_cast<core::LoadArchive_O *>(client);
  SIMPLE_POINTER_FIX(obj_gc_safe->_TopNode.theObject);
  SMART_PTR_FIX(obj_gc_safe->_ObjectForSNode);
  SMART_PTR_FIX(obj_gc_safe->_NodesToFinalize);
  typedef core::LoadArchive_O type_KIND_LISPALLOC_core__LoadArchive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LoadArchive_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SexpLoadArchive_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SexpLoadArchive_O *obj_gc_safe = reinterpret_cast<core::SexpLoadArchive_O *>(client);
  SIMPLE_POINTER_FIX(obj_gc_safe->_TopNode.theObject);
  SMART_PTR_FIX(obj_gc_safe->_ObjectForSNode);
  SMART_PTR_FIX(obj_gc_safe->_NodesToFinalize);
  typedef core::SexpLoadArchive_O type_KIND_LISPALLOC_core__SexpLoadArchive_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SexpLoadArchive_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::HashTable_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::HashTable_O *obj_gc_safe = reinterpret_cast<core::HashTable_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_RehashSize);
  SMART_PTR_FIX(obj_gc_safe->_HashTable);
  typedef core::HashTable_O type_KIND_LISPALLOC_core__HashTable_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTable_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::HashTableEq_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::HashTableEq_O *obj_gc_safe = reinterpret_cast<core::HashTableEq_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_RehashSize);
  SMART_PTR_FIX(obj_gc_safe->_HashTable);
  typedef core::HashTableEq_O type_KIND_LISPALLOC_core__HashTableEq_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEq_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::HashTableEqualp_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::HashTableEqualp_O *obj_gc_safe = reinterpret_cast<core::HashTableEqualp_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_RehashSize);
  SMART_PTR_FIX(obj_gc_safe->_HashTable);
  typedef core::HashTableEqualp_O type_KIND_LISPALLOC_core__HashTableEqualp_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEqualp_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::HashTableEql_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::HashTableEql_O *obj_gc_safe = reinterpret_cast<core::HashTableEql_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_RehashSize);
  SMART_PTR_FIX(obj_gc_safe->_HashTable);
  typedef core::HashTableEql_O type_KIND_LISPALLOC_core__HashTableEql_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEql_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::HashTableEqual_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::HashTableEqual_O *obj_gc_safe = reinterpret_cast<core::HashTableEqual_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_RehashSize);
  SMART_PTR_FIX(obj_gc_safe->_HashTable);
  typedef core::HashTableEqual_O type_KIND_LISPALLOC_core__HashTableEqual_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__HashTableEqual_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<cffi::Pointer_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef cffi::Pointer_O type_KIND_LISPALLOC_cffi__Pointer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_cffi__Pointer_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::CxxObject_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::CxxObject_O type_KIND_LISPALLOC_core__CxxObject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CxxObject_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::WeakKeyMapping_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::WeakKeyMapping_O *obj_gc_safe = reinterpret_cast<core::WeakKeyMapping_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_WeakObject.Key);
  TAGGED_POINTER_FIX(obj_gc_safe->_WeakObject.Value);
  typedef core::WeakKeyMapping_O type_KIND_LISPALLOC_core__WeakKeyMapping_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__WeakKeyMapping_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::LambdaListHandler_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::LambdaListHandler_O *obj_gc_safe = reinterpret_cast<core::LambdaListHandler_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_ClassifiedSymbolList);
  SIMPLE_POINTER_FIX(obj_gc_safe->_SpecialSymbolSet.theObject);
  SMART_PTR_FIX(obj_gc_safe->_DeclareSpecifierList);
  TAGGED_POINTER_FIX(obj_gc_safe->_RequiredArguments._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->_OptionalArguments._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_RestArgument._ArgTarget);
  SMART_PTR_FIX(obj_gc_safe->_KeyFlag);
  TAGGED_POINTER_FIX(obj_gc_safe->_KeywordArguments._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_AllowOtherKeys);
  TAGGED_POINTER_FIX(obj_gc_safe->_AuxArguments._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->_Comment._Contents);
  SMART_PTR_FIX(obj_gc_safe->_LexicalVariableNamesForDebugging);
  typedef core::LambdaListHandler_O type_KIND_LISPALLOC_core__LambdaListHandler_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LambdaListHandler_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::InsertPoint_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::InsertPoint_O type_KIND_LISPALLOC_llvmo__InsertPoint_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__InsertPoint_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SourceFileInfo_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SourceFileInfo_O *obj_gc_safe = reinterpret_cast<core::SourceFileInfo_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_pathname);
  SMART_PTR_FIX(obj_gc_safe->_SourceDebugNamestring);
  typedef core::SourceFileInfo_O type_KIND_LISPALLOC_core__SourceFileInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SourceFileInfo_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SNode_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::SNode_O type_KIND_LISPALLOC_core__SNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SNode_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::LeafSNode_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::LeafSNode_O *obj_gc_safe = reinterpret_cast<core::LeafSNode_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Object);
  typedef core::LeafSNode_O type_KIND_LISPALLOC_core__LeafSNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LeafSNode_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::BranchSNode_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::BranchSNode_O *obj_gc_safe = reinterpret_cast<core::BranchSNode_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Kind);
  SMART_PTR_FIX(obj_gc_safe->_SNodePList);
  SIMPLE_POINTER_FIX(obj_gc_safe->_VectorSNodes.theObject);
  typedef core::BranchSNode_O type_KIND_LISPALLOC_core__BranchSNode_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__BranchSNode_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Path_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Path_O type_KIND_LISPALLOC_core__Path_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Path_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::AstVisitor_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::AstVisitor_O *obj_gc_safe = reinterpret_cast<asttooling::AstVisitor_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Target);
  typedef asttooling::AstVisitor_O type_KIND_LISPALLOC_asttooling__AstVisitor_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__AstVisitor_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::AttributeSet_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::AttributeSet_O type_KIND_LISPALLOC_llvmo__AttributeSet_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__AttributeSet_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::StructureObject_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::StructureObject_O *obj_gc_safe = reinterpret_cast<core::StructureObject_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Type);
  TAGGED_POINTER_FIX(obj_gc_safe->_Slots._Vector._Contents);
  typedef core::StructureObject_O type_KIND_LISPALLOC_core__StructureObject_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__StructureObject_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::InvocationHistoryFrameIterator_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::InvocationHistoryFrameIterator_O type_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Package_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Package_O *obj_gc_safe = reinterpret_cast<core::Package_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_Name._Contents);
  SMART_PTR_FIX(obj_gc_safe->_InternalSymbols);
  SMART_PTR_FIX(obj_gc_safe->_ExternalSymbols);
  SMART_PTR_FIX(obj_gc_safe->_Shadowing);
  TAGGED_POINTER_FIX(obj_gc_safe->_UsingPackages._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->_PackagesUsedBy._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Nicknames);
  typedef core::Package_O type_KIND_LISPALLOC_core__Package_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Package_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::DirectoryEntry_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::DirectoryEntry_O type_KIND_LISPALLOC_core__DirectoryEntry_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__DirectoryEntry_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Character_dummy_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Character_dummy_O type_KIND_LISPALLOC_core__Character_dummy_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Character_dummy_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Function_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Function_O *obj_gc_safe = reinterpret_cast<core::Function_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  typedef core::Function_O type_KIND_LISPALLOC_core__Function_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Function_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::CompiledFunction_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::CompiledFunction_O *obj_gc_safe = reinterpret_cast<core::CompiledFunction_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  typedef core::CompiledFunction_O type_KIND_LISPALLOC_core__CompiledFunction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__CompiledFunction_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SingleDispatchGenericFunction_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SingleDispatchGenericFunction_O *obj_gc_safe = reinterpret_cast<core::SingleDispatchGenericFunction_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  typedef core::SingleDispatchGenericFunction_O type_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SpecialForm_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SpecialForm_O *obj_gc_safe = reinterpret_cast<core::SpecialForm_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  SMART_PTR_FIX(obj_gc_safe->_SpecialSymbol);
  typedef core::SpecialForm_O type_KIND_LISPALLOC_core__SpecialForm_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SpecialForm_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SingleDispatchEffectiveMethodFunction_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SingleDispatchEffectiveMethodFunction_O *obj_gc_safe = reinterpret_cast<core::SingleDispatchEffectiveMethodFunction_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  SMART_PTR_FIX(obj_gc_safe->_Methods);
  typedef core::SingleDispatchEffectiveMethodFunction_O type_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Instance_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Instance_O *obj_gc_safe = reinterpret_cast<core::Instance_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  TAGGED_POINTER_FIX(obj_gc_safe->_Slots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Sig);
  typedef core::Instance_O type_KIND_LISPALLOC_core__Instance_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Instance_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Pointer_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::Pointer_O type_KIND_LISPALLOC_core__Pointer_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Pointer_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<clbind::ClassRegistry_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  clbind::ClassRegistry_O *obj_gc_safe = reinterpret_cast<clbind::ClassRegistry_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->m_classes);
  typedef clbind::ClassRegistry_O type_KIND_LISPALLOC_clbind__ClassRegistry_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_clbind__ClassRegistry_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DebugInfo_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DebugInfo_O type_KIND_LISPALLOC_llvmo__DebugInfo_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DebugInfo_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DIDerivedType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DIDerivedType_O type_KIND_LISPALLOC_llvmo__DIDerivedType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIDerivedType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DIArray_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DIArray_O type_KIND_LISPALLOC_llvmo__DIArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIArray_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DIBasicType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DIBasicType_O type_KIND_LISPALLOC_llvmo__DIBasicType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIBasicType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DISubprogram_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DISubprogram_O type_KIND_LISPALLOC_llvmo__DISubprogram_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DISubprogram_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DILexicalBlock_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DILexicalBlock_O type_KIND_LISPALLOC_llvmo__DILexicalBlock_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DILexicalBlock_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DICompileUnit_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DICompileUnit_O type_KIND_LISPALLOC_llvmo__DICompileUnit_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DICompileUnit_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DIDescriptor_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DIDescriptor_O type_KIND_LISPALLOC_llvmo__DIDescriptor_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIDescriptor_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DIType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DIType_O type_KIND_LISPALLOC_llvmo__DIType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DISubroutineType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DISubroutineType_O type_KIND_LISPALLOC_llvmo__DISubroutineType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DISubroutineType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DICompositeType_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DICompositeType_O type_KIND_LISPALLOC_llvmo__DICompositeType_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DICompositeType_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DITypeArray_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DITypeArray_O type_KIND_LISPALLOC_llvmo__DITypeArray_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DITypeArray_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DIFile_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DIFile_O type_KIND_LISPALLOC_llvmo__DIFile_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIFile_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::DIScope_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef llvmo::DIScope_O type_KIND_LISPALLOC_llvmo__DIScope_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_llvmo__DIScope_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SmallMultimap_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SmallMultimap_O *obj_gc_safe = reinterpret_cast<core::SmallMultimap_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->map._Contents);
  typedef core::SmallMultimap_O type_KIND_LISPALLOC_core__SmallMultimap_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SmallMultimap_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Pathname_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Pathname_O *obj_gc_safe = reinterpret_cast<core::Pathname_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Host);
  SMART_PTR_FIX(obj_gc_safe->_Device);
  SMART_PTR_FIX(obj_gc_safe->_Directory);
  SMART_PTR_FIX(obj_gc_safe->_Name);
  SMART_PTR_FIX(obj_gc_safe->_Type);
  SMART_PTR_FIX(obj_gc_safe->_Version);
  typedef core::Pathname_O type_KIND_LISPALLOC_core__Pathname_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__Pathname_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::LogicalPathname_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::LogicalPathname_O *obj_gc_safe = reinterpret_cast<core::LogicalPathname_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Host);
  SMART_PTR_FIX(obj_gc_safe->_Device);
  SMART_PTR_FIX(obj_gc_safe->_Directory);
  SMART_PTR_FIX(obj_gc_safe->_Name);
  SMART_PTR_FIX(obj_gc_safe->_Type);
  SMART_PTR_FIX(obj_gc_safe->_Version);
  typedef core::LogicalPathname_O type_KIND_LISPALLOC_core__LogicalPathname_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__LogicalPathname_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::PosixTime_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  typedef core::PosixTime_O type_KIND_LISPALLOC_core__PosixTime_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__PosixTime_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SmallMap_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SmallMap_O *obj_gc_safe = reinterpret_cast<core::SmallMap_O *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->map._Contents);
  typedef core::SmallMap_O type_KIND_LISPALLOC_core__SmallMap_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_core__SmallMap_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Cache>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Cache *obj_gc_safe = reinterpret_cast<core::Cache *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->_keys._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->_table._Vector._Contents);
  typedef core::Cache type_KIND_CLASSALLOC_core__Cache;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__Cache)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::Lisp_O>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::Lisp_O *obj_gc_safe = reinterpret_cast<core::Lisp_O *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Roots._BufferStringPool);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots._ExceptionStack._Stack._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Roots._TerminalIO);
  SMART_PTR_FIX(obj_gc_safe->_Roots._BformatStringOutputStream);
  SMART_PTR_FIX(obj_gc_safe->_Roots._BignumRegister0);
  SMART_PTR_FIX(obj_gc_safe->_Roots._BignumRegister1);
  SMART_PTR_FIX(obj_gc_safe->_Roots._BignumRegister2);
  SMART_PTR_FIX(obj_gc_safe->_Roots._IntegerOverflowAdjust);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots.charInfo.gIndexedCharacters._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots.charInfo.gCharacterNames._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots._ClassSymbolsHolder._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Roots._SystemProperties);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots._Bindings._Bindings._Vector._Contents);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots._SourceFiles._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Roots._CatchInfo);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots.bootClassTable._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Roots._LoadTimeValueArrays);
  SMART_PTR_FIX(obj_gc_safe->_Roots._CommandLineArguments);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots._Packages._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Roots._SetfDefinitions);
  SMART_PTR_FIX(obj_gc_safe->_Roots._CorePackage);
  SMART_PTR_FIX(obj_gc_safe->_Roots._KeywordPackage);
  SMART_PTR_FIX(obj_gc_safe->_Roots._CommonLispPackage);
  SMART_PTR_FIX(obj_gc_safe->_Roots._SpecialForms);
  SMART_PTR_FIX(obj_gc_safe->_Roots._SingleDispatchGenericFunctionTable);
  SMART_PTR_FIX(obj_gc_safe->_Roots._TrueObject);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots._SingleDispatchMethodCachePtr);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots._MethodCachePtr);
  TAGGED_POINTER_FIX(obj_gc_safe->_Roots._SlotCachePtr);
  SMART_PTR_FIX(obj_gc_safe->_Roots._RehashSize);
  SMART_PTR_FIX(obj_gc_safe->_Roots._RehashThreshold);
  SMART_PTR_FIX(obj_gc_safe->_Roots._NullStream);
  SMART_PTR_FIX(obj_gc_safe->_Roots._PathnameTranslations);
  SMART_PTR_FIX(obj_gc_safe->_Roots._ImaginaryUnit);
  SMART_PTR_FIX(obj_gc_safe->_Roots._ImaginaryUnitNegative);
  SMART_PTR_FIX(obj_gc_safe->_Roots._PlusHalf);
  SMART_PTR_FIX(obj_gc_safe->_Roots._MinusHalf);
  SMART_PTR_FIX(obj_gc_safe->_Roots._SingleFloatMinusZero);
  SMART_PTR_FIX(obj_gc_safe->_Roots._SingleFloatPlusZero);
  SMART_PTR_FIX(obj_gc_safe->_Roots._DoubleFloatMinusZero);
  SMART_PTR_FIX(obj_gc_safe->_Roots._DoubleFloatPlusZero);
  SMART_PTR_FIX(obj_gc_safe->_Roots._SingleFloatOne);
  SMART_PTR_FIX(obj_gc_safe->_Roots._DoubleFloatOne);
  typedef core::Lisp_O type_KIND_ROOTCLASSALLOC_core__Lisp_O;
  client = (char *)client + AlignUp(sizeof(type_KIND_ROOTCLASSALLOC_core__Lisp_O)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::SingleDispatchGenericFunctionClosure>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::SingleDispatchGenericFunctionClosure *obj_gc_safe = reinterpret_cast<core::SingleDispatchGenericFunctionClosure *>(client);
  SMART_PTR_FIX(obj_gc_safe->name);
  SMART_PTR_FIX(obj_gc_safe->closedEnvironment);
  SMART_PTR_FIX(obj_gc_safe->kind);
  SMART_PTR_FIX(obj_gc_safe->_cleavir_ast);
  SMART_PTR_FIX(obj_gc_safe->_Methods);
  SMART_PTR_FIX(obj_gc_safe->_lambdaListHandler);
  typedef core::SingleDispatchGenericFunctionClosure type_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<llvmo::CompiledClosure>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  llvmo::CompiledClosure *obj_gc_safe = reinterpret_cast<llvmo::CompiledClosure *>(client);
  SMART_PTR_FIX(obj_gc_safe->name);
  SMART_PTR_FIX(obj_gc_safe->closedEnvironment);
  SMART_PTR_FIX(obj_gc_safe->kind);
  SMART_PTR_FIX(obj_gc_safe->_cleavir_ast);
  SMART_PTR_FIX(obj_gc_safe->llvmFunction);
  SMART_PTR_FIX(obj_gc_safe->associatedFunctions);
  SMART_PTR_FIX(obj_gc_safe->_lambdaList);
  typedef llvmo::CompiledClosure type_KIND_CLASSALLOC_llvmo__CompiledClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_llvmo__CompiledClosure)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::internal::VariadicOperatorMatcherDescriptor>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::internal::VariadicOperatorMatcherDescriptor *obj_gc_safe = reinterpret_cast<asttooling::internal::VariadicOperatorMatcherDescriptor *>(client);
  SMART_PTR_FIX(obj_gc_safe->MatcherName);
  typedef asttooling::internal::VariadicOperatorMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::internal::OverloadedMatcherDescriptor>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::internal::OverloadedMatcherDescriptor *obj_gc_safe = reinterpret_cast<asttooling::internal::OverloadedMatcherDescriptor *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->Overloads._Vector._Contents);
  typedef asttooling::internal::OverloadedMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::internal::FixedArgCountMatcherDescriptor>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::internal::FixedArgCountMatcherDescriptor *obj_gc_safe = reinterpret_cast<asttooling::internal::FixedArgCountMatcherDescriptor *>(client);
  SMART_PTR_FIX(obj_gc_safe->MatcherName);
  typedef asttooling::internal::FixedArgCountMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::internal::FreeFuncMatcherDescriptor>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::internal::FreeFuncMatcherDescriptor *obj_gc_safe = reinterpret_cast<asttooling::internal::FreeFuncMatcherDescriptor *>(client);
  SMART_PTR_FIX(obj_gc_safe->MatcherName);
  typedef asttooling::internal::FreeFuncMatcherDescriptor type_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::MacroClosure>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::MacroClosure *obj_gc_safe = reinterpret_cast<core::MacroClosure *>(client);
  SMART_PTR_FIX(obj_gc_safe->name);
  SMART_PTR_FIX(obj_gc_safe->closedEnvironment);
  SMART_PTR_FIX(obj_gc_safe->kind);
  SMART_PTR_FIX(obj_gc_safe->_cleavir_ast);
  SMART_PTR_FIX(obj_gc_safe->_lambdaListHandler);
  typedef core::MacroClosure type_KIND_CLASSALLOC_core__MacroClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__MacroClosure)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::ConsStepper>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::ConsStepper *obj_gc_safe = reinterpret_cast<core::ConsStepper *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Cur);
  typedef core::ConsStepper type_KIND_CLASSALLOC_core__ConsStepper;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__ConsStepper)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::InstanceClosure>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::InstanceClosure *obj_gc_safe = reinterpret_cast<core::InstanceClosure *>(client);
  SMART_PTR_FIX(obj_gc_safe->name);
  SMART_PTR_FIX(obj_gc_safe->closedEnvironment);
  SMART_PTR_FIX(obj_gc_safe->kind);
  SMART_PTR_FIX(obj_gc_safe->_cleavir_ast);
  SMART_PTR_FIX(obj_gc_safe->instance);
  typedef core::InstanceClosure type_KIND_CLASSALLOC_core__InstanceClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__InstanceClosure)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::DerivableFrontendActionFactory>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::DerivableFrontendActionFactory *obj_gc_safe = reinterpret_cast<asttooling::DerivableFrontendActionFactory *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  TAGGED_POINTER_FIX(obj_gc_safe->_Slots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Sig);
  typedef asttooling::DerivableFrontendActionFactory type_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::DerivableMatchCallback>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::DerivableMatchCallback *obj_gc_safe = reinterpret_cast<asttooling::DerivableMatchCallback *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  TAGGED_POINTER_FIX(obj_gc_safe->_Slots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Sig);
  typedef asttooling::DerivableMatchCallback type_KIND_LISPALLOC_asttooling__DerivableMatchCallback;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableMatchCallback)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::DerivableASTFrontendAction>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::DerivableASTFrontendAction *obj_gc_safe = reinterpret_cast<asttooling::DerivableASTFrontendAction *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  TAGGED_POINTER_FIX(obj_gc_safe->_Slots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Sig);
  typedef asttooling::DerivableASTFrontendAction type_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::CoreExposer>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::CoreExposer *obj_gc_safe = reinterpret_cast<core::CoreExposer *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Package);
  typedef core::CoreExposer type_KIND_CLASSALLOC_core__CoreExposer;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__CoreExposer)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<asttooling::DerivableSyntaxOnlyAction>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  asttooling::DerivableSyntaxOnlyAction *obj_gc_safe = reinterpret_cast<asttooling::DerivableSyntaxOnlyAction *>(client);
  TAGGED_POINTER_FIX(obj_gc_safe->closure);
  SMART_PTR_FIX(obj_gc_safe->_Class);
  TAGGED_POINTER_FIX(obj_gc_safe->_Slots._Vector._Contents);
  SMART_PTR_FIX(obj_gc_safe->_Sig);
  typedef asttooling::DerivableSyntaxOnlyAction type_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction;
  client = (char *)client + AlignUp(sizeof(type_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::InterpretedClosure>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::InterpretedClosure *obj_gc_safe = reinterpret_cast<core::InterpretedClosure *>(client);
  SMART_PTR_FIX(obj_gc_safe->name);
  SMART_PTR_FIX(obj_gc_safe->closedEnvironment);
  SMART_PTR_FIX(obj_gc_safe->kind);
  SMART_PTR_FIX(obj_gc_safe->_cleavir_ast);
  SMART_PTR_FIX(obj_gc_safe->_lambdaListHandler);
  SMART_PTR_FIX(obj_gc_safe->_declares);
  SMART_PTR_FIX(obj_gc_safe->_docstring);
  SMART_PTR_FIX(obj_gc_safe->_code);
  typedef core::InterpretedClosure type_KIND_CLASSALLOC_core__InterpretedClosure;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__InterpretedClosure)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}
template <>
MAYBE_INLINE mps_res_t obj_scan_helper<core::VectorStepper>(mps_ss_t _ss, mps_word_t _mps_zs, mps_word_t _mps_w, mps_word_t &_mps_ufs, mps_word_t _mps_wt, mps_addr_t &client) {
  core::VectorStepper *obj_gc_safe = reinterpret_cast<core::VectorStepper *>(client);
  SMART_PTR_FIX(obj_gc_safe->_Domain);
  typedef core::VectorStepper type_KIND_CLASSALLOC_core__VectorStepper;
  client = (char *)client + AlignUp(sizeof(type_KIND_CLASSALLOC_core__VectorStepper)) + global_alignup_sizeof_header;
  return MPS_RES_OK;
}

#endif // defined(GC_OBJ_SCAN_HELPERS)
#if defined(GC_OBJ_SCAN_TABLE)
static void *OBJ_SCAN_table[] = {NULL, NULL /* Skip entry for immediate */
                                 ,
                                 NULL /* Skip entry for immediate */
                                 ,
                                 NULL /* Skip entry for immediate */
                                 /* 4 */,
                                 &&obj_scan_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps
                                 /* 5 */,
                                 &&obj_scan_KIND_ROOTCLASSALLOC_clbind__detail__class_map
                                 /* 6 */,
                                 &&obj_scan_KIND_TEMPLATED_CLASSALLOC_core__Creator
                                 /* 7 */,
                                 &&obj_scan_KIND_CLASSALLOC_clbind__DummyCreator
                                 /* 8 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__InstanceCreator
                                 /* 9 */,
                                 &&obj_scan_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator
                                 /* 10 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__T_O
                                 /* 11 */,
                                 &&obj_scan_KIND_LISPALLOC_core__MultiStringBuffer_O
                                 /* 12 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ReadTable_O
                                 /* 13 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Number_O
                                 /* 14 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Complex_O
                                 /* 15 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Real_O
                                 /* 16 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Rational_O
                                 /* 17 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Integer_O
                                 /* 18 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Bignum_O
                                 /* 19 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Fixnum_dummy_O
                                 /* 20 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Ratio_O
                                 /* 21 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Float_O
                                 /* 22 */,
                                 &&obj_scan_KIND_LISPALLOC_core__DoubleFloat_O
                                 /* 23 */,
                                 &&obj_scan_KIND_LISPALLOC_core__LongFloat_O
                                 /* 24 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SingleFloat_dummy_O
                                 /* 25 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ShortFloat_O
                                 /* 26 */,
                                 &&obj_scan_KIND_LISPALLOC_core__FileStatus_O
                                 /* 27 */,
                                 &&obj_scan_KIND_LISPALLOC_core__WeakHashTable_O
                                 /* 28 */,
                                 &&obj_scan_KIND_LISPALLOC_core__WeakKeyHashTable_O
                                 /* 29 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Environment_O
                                 /* 30 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ActivationFrame_O
                                 /* 31 */,
                                 &&obj_scan_KIND_LISPALLOC_core__TagbodyFrame_O
                                 /* 32 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ValueFrame_O
                                 /* 33 */,
                                 &&obj_scan_KIND_LISPALLOC_core__FunctionFrame_O
                                 /* 34 */,
                                 &&obj_scan_KIND_LISPALLOC_core__LexicalEnvironment_O
                                 /* 35 */,
                                 &&obj_scan_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O
                                 /* 36 */,
                                 &&obj_scan_KIND_LISPALLOC_core__FunctionValueEnvironment_O
                                 /* 37 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ValueEnvironment_O
                                 /* 38 */,
                                 &&obj_scan_KIND_LISPALLOC_core__TagbodyEnvironment_O
                                 /* 39 */,
                                 &&obj_scan_KIND_LISPALLOC_core__CompileTimeEnvironment_O
                                 /* 40 */,
                                 &&obj_scan_KIND_LISPALLOC_core__UnwindProtectEnvironment_O
                                 /* 41 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O
                                 /* 42 */,
                                 &&obj_scan_KIND_LISPALLOC_core__FunctionContainerEnvironment_O
                                 /* 43 */,
                                 &&obj_scan_KIND_LISPALLOC_core__StackValueEnvironment_O
                                 /* 44 */,
                                 &&obj_scan_KIND_LISPALLOC_core__BlockEnvironment_O
                                 /* 45 */,
                                 &&obj_scan_KIND_LISPALLOC_core__MacroletEnvironment_O
                                 /* 46 */,
                                 &&obj_scan_KIND_LISPALLOC_core__CatchEnvironment_O
                                 /* 47 */,
                                 &&obj_scan_KIND_LISPALLOC_core__GlueEnvironment_O
                                 /* 48 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Array_O
                                 /* 49 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ArrayObjects_O
                                 /* 50 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ArrayDisplaced_O
                                 /* 51 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Vector_O
                                 /* 52 */,
                                 &&obj_scan_KIND_LISPALLOC_core__BitVector_O
                                 /* 53 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SimpleBitVector_O
                                 /* 54 */,
                                 &&obj_scan_KIND_LISPALLOC_core__BitVectorWithFillPtr_O
                                 /* 55 */,
                                 &&obj_scan_KIND_LISPALLOC_core__VectorDisplaced_O
                                 /* 56 */,
                                 &&obj_scan_KIND_LISPALLOC_core__String_O
                                 /* 57 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__Str_O
                                 /* 58 */,
                                 &&obj_scan_KIND_LISPALLOC_core__StrWithFillPtr_O
                                 /* 59 */,
                                 &&obj_scan_KIND_LISPALLOC_core__VectorObjects_O
                                 /* 60 */,
                                 &&obj_scan_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O
                                 /* 61 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SingleDispatchMethod_O
                                 /* 62 */,
                                 &&obj_scan_KIND_LISPALLOC_core__RandomState_O
                                 /* 63 */,
                                 &&obj_scan_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O
                                 /* 64 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DebugLoc_O
                                 /* 65 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Attribute_O
                                 /* 66 */,
                                 &&obj_scan_KIND_LISPALLOC_core__RegexMatch_O
                                 /* 67 */,
                                 &&obj_scan_KIND_LISPALLOC_core__WeakPointer_O
                                 /* 68 */,
                                 &&obj_scan_KIND_LISPALLOC_core__VaList_dummy_O
                                 /* 69 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__StandardObject_O
                                 /* 70 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__Metaobject_O
                                 /* 71 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__Specializer_O
                                 /* 72 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__Class_O
                                 /* 73 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__StdClass_O
                                 /* 74 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__StandardClass_O
                                 /* 75 */,
                                 &&obj_scan_KIND_LISPALLOC_core__FuncallableStandardClass_O
                                 /* 76 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__StructureClass_O
                                 /* 77 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ForwardReferencedClass_O
                                 /* 78 */,
                                 &&obj_scan_KIND_LISPALLOC_core__CxxClass_O
                                 /* 79 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__BuiltInClass_O
                                 /* 80 */,
                                 &&obj_scan_KIND_LISPALLOC_clbind__ClassRep_O
                                 /* 81 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ExternalObject_O
                                 /* 82 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Value_O
                                 /* 83 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Argument_O
                                 /* 84 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__User_O
                                 /* 85 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Instruction_O
                                 /* 86 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__AtomicRMWInst_O
                                 /* 87 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__LandingPadInst_O
                                 /* 88 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__PHINode_O
                                 /* 89 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__CallInst_O
                                 /* 90 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__StoreInst_O
                                 /* 91 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__UnaryInstruction_O
                                 /* 92 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__LoadInst_O
                                 /* 93 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__AllocaInst_O
                                 /* 94 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__VAArgInst_O
                                 /* 95 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O
                                 /* 96 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__TerminatorInst_O
                                 /* 97 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__UnreachableInst_O
                                 /* 98 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__SwitchInst_O
                                 /* 99 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ReturnInst_O
                                 /* 100 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ResumeInst_O
                                 /* 101 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__BranchInst_O
                                 /* 102 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__InvokeInst_O
                                 /* 103 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__IndirectBrInst_O
                                 /* 104 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__FenceInst_O
                                 /* 105 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Constant_O
                                 /* 106 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__BlockAddress_O
                                 /* 107 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__GlobalValue_O
                                 /* 108 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__GlobalVariable_O
                                 /* 109 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Function_O
                                 /* 110 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ConstantArray_O
                                 /* 111 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ConstantInt_O
                                 /* 112 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ConstantDataSequential_O
                                 /* 113 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ConstantDataArray_O
                                 /* 114 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ConstantStruct_O
                                 /* 115 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ConstantFP_O
                                 /* 116 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__UndefValue_O
                                 /* 117 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ConstantPointerNull_O
                                 /* 118 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ConstantExpr_O
                                 /* 119 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__BasicBlock_O
                                 /* 120 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__IRBuilderBase_O
                                 /* 121 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__IRBuilder_O
                                 /* 122 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DIBuilder_O
                                 /* 123 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Metadata_O
                                 /* 124 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ValueAsMetadata_O
                                 /* 125 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__MDNode_O
                                 /* 126 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__MDString_O
                                 /* 127 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ExecutionEngine_O
                                 /* 128 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__APFloat_O
                                 /* 129 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__PassManagerBuilder_O
                                 /* 130 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DataLayout_O
                                 /* 131 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Triple_O
                                 /* 132 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__APInt_O
                                 /* 133 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__PassManagerBase_O
                                 /* 134 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__FunctionPassManager_O
                                 /* 135 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__PassManager_O
                                 /* 136 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__TargetMachine_O
                                 /* 137 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O
                                 /* 138 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__TargetOptions_O
                                 /* 139 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Type_O
                                 /* 140 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__IntegerType_O
                                 /* 141 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__CompositeType_O
                                 /* 142 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__SequentialType_O
                                 /* 143 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__VectorType_O
                                 /* 144 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__PointerType_O
                                 /* 145 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ArrayType_O
                                 /* 146 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__StructType_O
                                 /* 147 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__FunctionType_O
                                 /* 148 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__NamedMDNode_O
                                 /* 149 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Linker_O
                                 /* 150 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Pass_O
                                 /* 151 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__FunctionPass_O
                                 /* 152 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ModulePass_O
                                 /* 153 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__ImmutablePass_O
                                 /* 154 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DataLayoutPass_O
                                 /* 155 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O
                                 /* 156 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O
                                 /* 157 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O
                                 /* 158 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Module_O
                                 /* 159 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__EngineBuilder_O
                                 /* 160 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ForeignData_O
                                 /* 161 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__LLVMContext_O
                                 /* 162 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__Target_O
                                 /* 163 */,
                                 &&obj_scan_KIND_LISPALLOC_core__LoadTimeValues_O
                                 /* 164 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Binder_O
                                 /* 165 */,
                                 &&obj_scan_KIND_LISPALLOC_core__IntArray_O
                                 /* 166 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SourceManager_O
                                 /* 167 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Record_O
                                 /* 168 */,
                                 &&obj_scan_KIND_LISPALLOC_core__LightUserData_O
                                 /* 169 */,
                                 &&obj_scan_KIND_LISPALLOC_core__UserData_O
                                 /* 170 */,
                                 &&obj_scan_KIND_BOOTSTRAP_core__Symbol_O
                                 /* 171 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Null_O
                                 /* 172 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SourcePosInfo_O
                                 /* 173 */,
                                 &&obj_scan_KIND_TEMPLATED_LISPALLOC_core__Iterator_O
                                 /* 174 */,
                                 &&obj_scan_KIND_LISPALLOC_core__DirectoryIterator_O
                                 /* 175 */,
                                 &&obj_scan_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O
                                 /* 176 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Regex_O
                                 /* 177 */,
                                 &&obj_scan_KIND_LISPALLOC_core__PosixTimeDuration_O
                                 /* 178 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SymbolToEnumConverter_O
                                 /* 179 */,
                                 &&obj_scan_KIND_LISPALLOC_core__CandoException_O
                                 /* 180 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Stream_O
                                 /* 181 */,
                                 &&obj_scan_KIND_LISPALLOC_core__AnsiStream_O
                                 /* 182 */,
                                 &&obj_scan_KIND_LISPALLOC_core__FileStream_O
                                 /* 183 */,
                                 &&obj_scan_KIND_LISPALLOC_core__IOStreamStream_O
                                 /* 184 */,
                                 &&obj_scan_KIND_LISPALLOC_core__IOFileStream_O
                                 /* 185 */,
                                 &&obj_scan_KIND_LISPALLOC_core__ConcatenatedStream_O
                                 /* 186 */,
                                 &&obj_scan_KIND_LISPALLOC_core__StringStream_O
                                 /* 187 */,
                                 &&obj_scan_KIND_LISPALLOC_core__StringInputStream_O
                                 /* 188 */,
                                 &&obj_scan_KIND_LISPALLOC_core__StringOutputStream_O
                                 /* 189 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SynonymStream_O
                                 /* 190 */,
                                 &&obj_scan_KIND_LISPALLOC_core__EchoStream_O
                                 /* 191 */,
                                 &&obj_scan_KIND_LISPALLOC_core__TwoWayStream_O
                                 /* 192 */,
                                 &&obj_scan_KIND_LISPALLOC_core__BroadcastStream_O
                                 /* 193 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Reader_O
                                 /* 194 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Cons_O
                                 /* 195 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Archive_O
                                 /* 196 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SaveArchive_O
                                 /* 197 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SexpSaveArchive_O
                                 /* 198 */,
                                 &&obj_scan_KIND_LISPALLOC_core__LoadArchive_O
                                 /* 199 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SexpLoadArchive_O
                                 /* 200 */,
                                 &&obj_scan_KIND_LISPALLOC_core__HashTable_O
                                 /* 201 */,
                                 &&obj_scan_KIND_LISPALLOC_core__HashTableEq_O
                                 /* 202 */,
                                 &&obj_scan_KIND_LISPALLOC_core__HashTableEqualp_O
                                 /* 203 */,
                                 &&obj_scan_KIND_LISPALLOC_core__HashTableEql_O
                                 /* 204 */,
                                 &&obj_scan_KIND_LISPALLOC_core__HashTableEqual_O
                                 /* 205 */,
                                 &&obj_scan_KIND_LISPALLOC_cffi__Pointer_O
                                 /* 206 */,
                                 &&obj_scan_KIND_LISPALLOC_core__CxxObject_O
                                 /* 207 */,
                                 &&obj_scan_KIND_LISPALLOC_core__WeakKeyMapping_O
                                 /* 208 */,
                                 &&obj_scan_KIND_LISPALLOC_core__LambdaListHandler_O
                                 /* 209 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__InsertPoint_O
                                 /* 210 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SourceFileInfo_O
                                 /* 211 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SNode_O
                                 /* 212 */,
                                 &&obj_scan_KIND_LISPALLOC_core__LeafSNode_O
                                 /* 213 */,
                                 &&obj_scan_KIND_LISPALLOC_core__BranchSNode_O
                                 /* 214 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Path_O
                                 /* 215 */,
                                 &&obj_scan_KIND_LISPALLOC_asttooling__AstVisitor_O
                                 /* 216 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__AttributeSet_O
                                 /* 217 */,
                                 &&obj_scan_KIND_LISPALLOC_core__StructureObject_O
                                 /* 218 */,
                                 &&obj_scan_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O
                                 /* 219 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Package_O
                                 /* 220 */,
                                 &&obj_scan_KIND_LISPALLOC_core__DirectoryEntry_O
                                 /* 221 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Character_dummy_O
                                 /* 222 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Function_O
                                 /* 223 */,
                                 &&obj_scan_KIND_LISPALLOC_core__CompiledFunction_O
                                 /* 224 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O
                                 /* 225 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SpecialForm_O
                                 /* 226 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O
                                 /* 227 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Instance_O
                                 /* 228 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Pointer_O
                                 /* 229 */,
                                 &&obj_scan_KIND_LISPALLOC_clbind__ClassRegistry_O
                                 /* 230 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DebugInfo_O
                                 /* 231 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DIDerivedType_O
                                 /* 232 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DIArray_O
                                 /* 233 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DIBasicType_O
                                 /* 234 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DISubprogram_O
                                 /* 235 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DILexicalBlock_O
                                 /* 236 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DICompileUnit_O
                                 /* 237 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DIDescriptor_O
                                 /* 238 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DIType_O
                                 /* 239 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DISubroutineType_O
                                 /* 240 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DICompositeType_O
                                 /* 241 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DITypeArray_O
                                 /* 242 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DIFile_O
                                 /* 243 */,
                                 &&obj_scan_KIND_LISPALLOC_llvmo__DIScope_O
                                 /* 244 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SmallMultimap_O
                                 /* 245 */,
                                 &&obj_scan_KIND_LISPALLOC_core__Pathname_O
                                 /* 246 */,
                                 &&obj_scan_KIND_LISPALLOC_core__LogicalPathname_O
                                 /* 247 */,
                                 &&obj_scan_KIND_LISPALLOC_core__PosixTime_O
                                 /* 248 */,
                                 &&obj_scan_KIND_LISPALLOC_core__SmallMap_O
                                 /* 249 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__Cache
                                 /* 250 */,
                                 &&obj_scan_KIND_ROOTCLASSALLOC_core__Lisp_O
                                 /* 251 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__
                                 /* 252 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_
                                 /* 253 */,
                                 &&obj_scan_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_
                                 /* 254 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure
                                 /* 255 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__
                                 /* 256 */,
                                 &&obj_scan_KIND_GCSTRING_gctools__GCString_moveable_char_
                                 /* 257 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_
                                 /* 258 */,
                                 &&obj_scan_KIND_CLASSALLOC_llvmo__CompiledClosure
                                 /* 259 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__
                                 /* 260 */,
                                 &&obj_scan_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor
                                 /* 261 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___
                                 /* 262 */,
                                 &&obj_scan_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor
                                 /* 263 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_
                                 /* 264 */,
                                 &&obj_scan_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_
                                 /* 265 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_
                                 /* 266 */,
                                 &&obj_scan_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor
                                 /* 267 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_
                                 /* 268 */,
                                 &&obj_scan_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor
                                 /* 269 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__MacroClosure
                                 /* 270 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__ConsStepper
                                 /* 271 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_
                                 /* 272 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_
                                 /* 273 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__
                                 /* 274 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_
                                 /* 275 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_
                                 /* 276 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___
                                 /* 277 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_
                                 /* 278 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__InstanceClosure
                                 /* 279 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__
                                 /* 280 */,
                                 &&obj_scan_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory
                                 /* 281 */,
                                 &&obj_scan_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_
                                 /* 282 */,
                                 &&obj_scan_KIND_LISPALLOC_asttooling__DerivableMatchCallback
                                 /* 283 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_
                                 /* 284 */,
                                 &&obj_scan_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction
                                 /* 285 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_
                                 /* 286 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__
                                 /* 287 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__CoreExposer
                                 /* 288 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__
                                 /* 289 */,
                                 &&obj_scan_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction
                                 /* 290 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__
                                 /* 291 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_
                                 /* 292 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__
                                 /* 293 */,
                                 &&obj_scan_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure
                                 /* 294 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_
                                 /* 295 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__InterpretedClosure
                                 /* 296 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_
                                 /* 297 */,
                                 &&obj_scan_KIND_CLASSALLOC_core__VectorStepper
                                 /* 298 */,
                                 &&obj_scan_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__};
#endif // defined(GC_OBJ_SCAN_TABLE)
#if defined(GC_OBJ_FINALIZE)
obj_finalize_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps : {
  asttooling::RegMap::RegistryMaps *obj_gc_safe = reinterpret_cast<asttooling::RegMap::RegistryMaps *>(client);
  obj_gc_safe->~RegistryMaps();
  return;
}
obj_finalize_KIND_ROOTCLASSALLOC_clbind__detail__class_map : {
  clbind::detail::class_map *obj_gc_safe = reinterpret_cast<clbind::detail::class_map *>(client);
  obj_gc_safe->~class_map();
  return;
}
obj_finalize_KIND_TEMPLATED_CLASSALLOC_core__Creator : {
  core::Creator *obj_gc_safe = reinterpret_cast<core::Creator *>(client);
  obj_gc_safe->~Creator();
}
obj_finalize_KIND_CLASSALLOC_clbind__DummyCreator : {
  clbind::DummyCreator *obj_gc_safe = reinterpret_cast<clbind::DummyCreator *>(client);
  obj_gc_safe->~DummyCreator();
  return;
}
obj_finalize_KIND_CLASSALLOC_core__InstanceCreator : {
  core::InstanceCreator *obj_gc_safe = reinterpret_cast<core::InstanceCreator *>(client);
  obj_gc_safe->~InstanceCreator();
  return;
}
obj_finalize_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator : {
  clbind::ConstructorCreator *obj_gc_safe = reinterpret_cast<clbind::ConstructorCreator *>(client);
  obj_gc_safe->~ConstructorCreator();
}
obj_finalize_KIND_BOOTSTRAP_core__T_O : {
  core::T_O *obj_gc_safe = reinterpret_cast<core::T_O *>(client);
  obj_gc_safe->~T_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__MultiStringBuffer_O : {
  core::MultiStringBuffer_O *obj_gc_safe = reinterpret_cast<core::MultiStringBuffer_O *>(client);
  obj_gc_safe->~MultiStringBuffer_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ReadTable_O : {
  core::ReadTable_O *obj_gc_safe = reinterpret_cast<core::ReadTable_O *>(client);
  obj_gc_safe->~ReadTable_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Number_O : {
  core::Number_O *obj_gc_safe = reinterpret_cast<core::Number_O *>(client);
  obj_gc_safe->~Number_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Complex_O : {
  core::Complex_O *obj_gc_safe = reinterpret_cast<core::Complex_O *>(client);
  obj_gc_safe->~Complex_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Real_O : {
  core::Real_O *obj_gc_safe = reinterpret_cast<core::Real_O *>(client);
  obj_gc_safe->~Real_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Rational_O : {
  core::Rational_O *obj_gc_safe = reinterpret_cast<core::Rational_O *>(client);
  obj_gc_safe->~Rational_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Integer_O : {
  core::Integer_O *obj_gc_safe = reinterpret_cast<core::Integer_O *>(client);
  obj_gc_safe->~Integer_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Bignum_O : {
  core::Bignum_O *obj_gc_safe = reinterpret_cast<core::Bignum_O *>(client);
  obj_gc_safe->~Bignum_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Fixnum_dummy_O : {
  core::Fixnum_dummy_O *obj_gc_safe = reinterpret_cast<core::Fixnum_dummy_O *>(client);
  obj_gc_safe->~Fixnum_dummy_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Ratio_O : {
  core::Ratio_O *obj_gc_safe = reinterpret_cast<core::Ratio_O *>(client);
  obj_gc_safe->~Ratio_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Float_O : {
  core::Float_O *obj_gc_safe = reinterpret_cast<core::Float_O *>(client);
  obj_gc_safe->~Float_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__DoubleFloat_O : {
  core::DoubleFloat_O *obj_gc_safe = reinterpret_cast<core::DoubleFloat_O *>(client);
  obj_gc_safe->~DoubleFloat_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__LongFloat_O : {
  core::LongFloat_O *obj_gc_safe = reinterpret_cast<core::LongFloat_O *>(client);
  obj_gc_safe->~LongFloat_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SingleFloat_dummy_O : {
  core::SingleFloat_dummy_O *obj_gc_safe = reinterpret_cast<core::SingleFloat_dummy_O *>(client);
  obj_gc_safe->~SingleFloat_dummy_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ShortFloat_O : {
  core::ShortFloat_O *obj_gc_safe = reinterpret_cast<core::ShortFloat_O *>(client);
  obj_gc_safe->~ShortFloat_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__FileStatus_O : {
  core::FileStatus_O *obj_gc_safe = reinterpret_cast<core::FileStatus_O *>(client);
  obj_gc_safe->~FileStatus_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__WeakHashTable_O : {
  core::WeakHashTable_O *obj_gc_safe = reinterpret_cast<core::WeakHashTable_O *>(client);
  obj_gc_safe->~WeakHashTable_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__WeakKeyHashTable_O : {
  core::WeakKeyHashTable_O *obj_gc_safe = reinterpret_cast<core::WeakKeyHashTable_O *>(client);
  obj_gc_safe->~WeakKeyHashTable_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Environment_O : {
  core::Environment_O *obj_gc_safe = reinterpret_cast<core::Environment_O *>(client);
  obj_gc_safe->~Environment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ActivationFrame_O : {
  core::ActivationFrame_O *obj_gc_safe = reinterpret_cast<core::ActivationFrame_O *>(client);
  obj_gc_safe->~ActivationFrame_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__TagbodyFrame_O : {
  core::TagbodyFrame_O *obj_gc_safe = reinterpret_cast<core::TagbodyFrame_O *>(client);
  obj_gc_safe->~TagbodyFrame_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ValueFrame_O : {
  core::ValueFrame_O *obj_gc_safe = reinterpret_cast<core::ValueFrame_O *>(client);
  obj_gc_safe->~ValueFrame_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__FunctionFrame_O : {
  core::FunctionFrame_O *obj_gc_safe = reinterpret_cast<core::FunctionFrame_O *>(client);
  obj_gc_safe->~FunctionFrame_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__LexicalEnvironment_O : {
  core::LexicalEnvironment_O *obj_gc_safe = reinterpret_cast<core::LexicalEnvironment_O *>(client);
  obj_gc_safe->~LexicalEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O : {
  core::RuntimeVisibleEnvironment_O *obj_gc_safe = reinterpret_cast<core::RuntimeVisibleEnvironment_O *>(client);
  obj_gc_safe->~RuntimeVisibleEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__FunctionValueEnvironment_O : {
  core::FunctionValueEnvironment_O *obj_gc_safe = reinterpret_cast<core::FunctionValueEnvironment_O *>(client);
  obj_gc_safe->~FunctionValueEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ValueEnvironment_O : {
  core::ValueEnvironment_O *obj_gc_safe = reinterpret_cast<core::ValueEnvironment_O *>(client);
  obj_gc_safe->~ValueEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__TagbodyEnvironment_O : {
  core::TagbodyEnvironment_O *obj_gc_safe = reinterpret_cast<core::TagbodyEnvironment_O *>(client);
  obj_gc_safe->~TagbodyEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__CompileTimeEnvironment_O : {
  core::CompileTimeEnvironment_O *obj_gc_safe = reinterpret_cast<core::CompileTimeEnvironment_O *>(client);
  obj_gc_safe->~CompileTimeEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__UnwindProtectEnvironment_O : {
  core::UnwindProtectEnvironment_O *obj_gc_safe = reinterpret_cast<core::UnwindProtectEnvironment_O *>(client);
  obj_gc_safe->~UnwindProtectEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O : {
  core::SymbolMacroletEnvironment_O *obj_gc_safe = reinterpret_cast<core::SymbolMacroletEnvironment_O *>(client);
  obj_gc_safe->~SymbolMacroletEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__FunctionContainerEnvironment_O : {
  core::FunctionContainerEnvironment_O *obj_gc_safe = reinterpret_cast<core::FunctionContainerEnvironment_O *>(client);
  obj_gc_safe->~FunctionContainerEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__StackValueEnvironment_O : {
  core::StackValueEnvironment_O *obj_gc_safe = reinterpret_cast<core::StackValueEnvironment_O *>(client);
  obj_gc_safe->~StackValueEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__BlockEnvironment_O : {
  core::BlockEnvironment_O *obj_gc_safe = reinterpret_cast<core::BlockEnvironment_O *>(client);
  obj_gc_safe->~BlockEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__MacroletEnvironment_O : {
  core::MacroletEnvironment_O *obj_gc_safe = reinterpret_cast<core::MacroletEnvironment_O *>(client);
  obj_gc_safe->~MacroletEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__CatchEnvironment_O : {
  core::CatchEnvironment_O *obj_gc_safe = reinterpret_cast<core::CatchEnvironment_O *>(client);
  obj_gc_safe->~CatchEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__GlueEnvironment_O : {
  core::GlueEnvironment_O *obj_gc_safe = reinterpret_cast<core::GlueEnvironment_O *>(client);
  obj_gc_safe->~GlueEnvironment_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Array_O : {
  core::Array_O *obj_gc_safe = reinterpret_cast<core::Array_O *>(client);
  obj_gc_safe->~Array_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ArrayObjects_O : {
  core::ArrayObjects_O *obj_gc_safe = reinterpret_cast<core::ArrayObjects_O *>(client);
  obj_gc_safe->~ArrayObjects_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ArrayDisplaced_O : {
  core::ArrayDisplaced_O *obj_gc_safe = reinterpret_cast<core::ArrayDisplaced_O *>(client);
  obj_gc_safe->~ArrayDisplaced_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Vector_O : {
  core::Vector_O *obj_gc_safe = reinterpret_cast<core::Vector_O *>(client);
  obj_gc_safe->~Vector_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__BitVector_O : {
  core::BitVector_O *obj_gc_safe = reinterpret_cast<core::BitVector_O *>(client);
  obj_gc_safe->~BitVector_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SimpleBitVector_O : {
  core::SimpleBitVector_O *obj_gc_safe = reinterpret_cast<core::SimpleBitVector_O *>(client);
  obj_gc_safe->~SimpleBitVector_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__BitVectorWithFillPtr_O : {
  core::BitVectorWithFillPtr_O *obj_gc_safe = reinterpret_cast<core::BitVectorWithFillPtr_O *>(client);
  obj_gc_safe->~BitVectorWithFillPtr_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__VectorDisplaced_O : {
  core::VectorDisplaced_O *obj_gc_safe = reinterpret_cast<core::VectorDisplaced_O *>(client);
  obj_gc_safe->~VectorDisplaced_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__String_O : {
  core::String_O *obj_gc_safe = reinterpret_cast<core::String_O *>(client);
  obj_gc_safe->~String_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__Str_O : {
  core::Str_O *obj_gc_safe = reinterpret_cast<core::Str_O *>(client);
  obj_gc_safe->~Str_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__StrWithFillPtr_O : {
  core::StrWithFillPtr_O *obj_gc_safe = reinterpret_cast<core::StrWithFillPtr_O *>(client);
  obj_gc_safe->~StrWithFillPtr_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__VectorObjects_O : {
  core::VectorObjects_O *obj_gc_safe = reinterpret_cast<core::VectorObjects_O *>(client);
  obj_gc_safe->~VectorObjects_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O : {
  core::VectorObjectsWithFillPtr_O *obj_gc_safe = reinterpret_cast<core::VectorObjectsWithFillPtr_O *>(client);
  obj_gc_safe->~VectorObjectsWithFillPtr_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SingleDispatchMethod_O : {
  core::SingleDispatchMethod_O *obj_gc_safe = reinterpret_cast<core::SingleDispatchMethod_O *>(client);
  obj_gc_safe->~SingleDispatchMethod_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__RandomState_O : {
  core::RandomState_O *obj_gc_safe = reinterpret_cast<core::RandomState_O *>(client);
  obj_gc_safe->~RandomState_O();
  return;
}
obj_finalize_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O : {
  core::WrappedPointer_O *obj_gc_safe = reinterpret_cast<core::WrappedPointer_O *>(client);
  obj_gc_safe->~WrappedPointer_O();
}
obj_finalize_KIND_LISPALLOC_llvmo__DebugLoc_O : {
  llvmo::DebugLoc_O *obj_gc_safe = reinterpret_cast<llvmo::DebugLoc_O *>(client);
  obj_gc_safe->~DebugLoc_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Attribute_O : {
  llvmo::Attribute_O *obj_gc_safe = reinterpret_cast<llvmo::Attribute_O *>(client);
  obj_gc_safe->~Attribute_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__RegexMatch_O : {
  core::RegexMatch_O *obj_gc_safe = reinterpret_cast<core::RegexMatch_O *>(client);
  obj_gc_safe->~RegexMatch_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__WeakPointer_O : {
  core::WeakPointer_O *obj_gc_safe = reinterpret_cast<core::WeakPointer_O *>(client);
  obj_gc_safe->~WeakPointer_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__VaList_dummy_O : {
  core::VaList_dummy_O *obj_gc_safe = reinterpret_cast<core::VaList_dummy_O *>(client);
  obj_gc_safe->~VaList_dummy_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__StandardObject_O : {
  core::StandardObject_O *obj_gc_safe = reinterpret_cast<core::StandardObject_O *>(client);
  obj_gc_safe->~StandardObject_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__Metaobject_O : {
  core::Metaobject_O *obj_gc_safe = reinterpret_cast<core::Metaobject_O *>(client);
  obj_gc_safe->~Metaobject_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__Specializer_O : {
  core::Specializer_O *obj_gc_safe = reinterpret_cast<core::Specializer_O *>(client);
  obj_gc_safe->~Specializer_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__Class_O : {
  core::Class_O *obj_gc_safe = reinterpret_cast<core::Class_O *>(client);
  obj_gc_safe->~Class_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__StdClass_O : {
  core::StdClass_O *obj_gc_safe = reinterpret_cast<core::StdClass_O *>(client);
  obj_gc_safe->~StdClass_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__StandardClass_O : {
  core::StandardClass_O *obj_gc_safe = reinterpret_cast<core::StandardClass_O *>(client);
  obj_gc_safe->~StandardClass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__FuncallableStandardClass_O : {
  core::FuncallableStandardClass_O *obj_gc_safe = reinterpret_cast<core::FuncallableStandardClass_O *>(client);
  obj_gc_safe->~FuncallableStandardClass_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__StructureClass_O : {
  core::StructureClass_O *obj_gc_safe = reinterpret_cast<core::StructureClass_O *>(client);
  obj_gc_safe->~StructureClass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ForwardReferencedClass_O : {
  core::ForwardReferencedClass_O *obj_gc_safe = reinterpret_cast<core::ForwardReferencedClass_O *>(client);
  obj_gc_safe->~ForwardReferencedClass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__CxxClass_O : {
  core::CxxClass_O *obj_gc_safe = reinterpret_cast<core::CxxClass_O *>(client);
  obj_gc_safe->~CxxClass_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__BuiltInClass_O : {
  core::BuiltInClass_O *obj_gc_safe = reinterpret_cast<core::BuiltInClass_O *>(client);
  obj_gc_safe->~BuiltInClass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_clbind__ClassRep_O : {
  clbind::ClassRep_O *obj_gc_safe = reinterpret_cast<clbind::ClassRep_O *>(client);
  obj_gc_safe->~ClassRep_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ExternalObject_O : {
  core::ExternalObject_O *obj_gc_safe = reinterpret_cast<core::ExternalObject_O *>(client);
  obj_gc_safe->~ExternalObject_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Value_O : {
  llvmo::Value_O *obj_gc_safe = reinterpret_cast<llvmo::Value_O *>(client);
  obj_gc_safe->~Value_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Argument_O : {
  llvmo::Argument_O *obj_gc_safe = reinterpret_cast<llvmo::Argument_O *>(client);
  obj_gc_safe->~Argument_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__User_O : {
  llvmo::User_O *obj_gc_safe = reinterpret_cast<llvmo::User_O *>(client);
  obj_gc_safe->~User_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Instruction_O : {
  llvmo::Instruction_O *obj_gc_safe = reinterpret_cast<llvmo::Instruction_O *>(client);
  obj_gc_safe->~Instruction_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__AtomicRMWInst_O : {
  llvmo::AtomicRMWInst_O *obj_gc_safe = reinterpret_cast<llvmo::AtomicRMWInst_O *>(client);
  obj_gc_safe->~AtomicRMWInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__LandingPadInst_O : {
  llvmo::LandingPadInst_O *obj_gc_safe = reinterpret_cast<llvmo::LandingPadInst_O *>(client);
  obj_gc_safe->~LandingPadInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__PHINode_O : {
  llvmo::PHINode_O *obj_gc_safe = reinterpret_cast<llvmo::PHINode_O *>(client);
  obj_gc_safe->~PHINode_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__CallInst_O : {
  llvmo::CallInst_O *obj_gc_safe = reinterpret_cast<llvmo::CallInst_O *>(client);
  obj_gc_safe->~CallInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__StoreInst_O : {
  llvmo::StoreInst_O *obj_gc_safe = reinterpret_cast<llvmo::StoreInst_O *>(client);
  obj_gc_safe->~StoreInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__UnaryInstruction_O : {
  llvmo::UnaryInstruction_O *obj_gc_safe = reinterpret_cast<llvmo::UnaryInstruction_O *>(client);
  obj_gc_safe->~UnaryInstruction_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__LoadInst_O : {
  llvmo::LoadInst_O *obj_gc_safe = reinterpret_cast<llvmo::LoadInst_O *>(client);
  obj_gc_safe->~LoadInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__AllocaInst_O : {
  llvmo::AllocaInst_O *obj_gc_safe = reinterpret_cast<llvmo::AllocaInst_O *>(client);
  obj_gc_safe->~AllocaInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__VAArgInst_O : {
  llvmo::VAArgInst_O *obj_gc_safe = reinterpret_cast<llvmo::VAArgInst_O *>(client);
  obj_gc_safe->~VAArgInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O : {
  llvmo::AtomicCmpXchgInst_O *obj_gc_safe = reinterpret_cast<llvmo::AtomicCmpXchgInst_O *>(client);
  obj_gc_safe->~AtomicCmpXchgInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__TerminatorInst_O : {
  llvmo::TerminatorInst_O *obj_gc_safe = reinterpret_cast<llvmo::TerminatorInst_O *>(client);
  obj_gc_safe->~TerminatorInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__UnreachableInst_O : {
  llvmo::UnreachableInst_O *obj_gc_safe = reinterpret_cast<llvmo::UnreachableInst_O *>(client);
  obj_gc_safe->~UnreachableInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__SwitchInst_O : {
  llvmo::SwitchInst_O *obj_gc_safe = reinterpret_cast<llvmo::SwitchInst_O *>(client);
  obj_gc_safe->~SwitchInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ReturnInst_O : {
  llvmo::ReturnInst_O *obj_gc_safe = reinterpret_cast<llvmo::ReturnInst_O *>(client);
  obj_gc_safe->~ReturnInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ResumeInst_O : {
  llvmo::ResumeInst_O *obj_gc_safe = reinterpret_cast<llvmo::ResumeInst_O *>(client);
  obj_gc_safe->~ResumeInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__BranchInst_O : {
  llvmo::BranchInst_O *obj_gc_safe = reinterpret_cast<llvmo::BranchInst_O *>(client);
  obj_gc_safe->~BranchInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__InvokeInst_O : {
  llvmo::InvokeInst_O *obj_gc_safe = reinterpret_cast<llvmo::InvokeInst_O *>(client);
  obj_gc_safe->~InvokeInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__IndirectBrInst_O : {
  llvmo::IndirectBrInst_O *obj_gc_safe = reinterpret_cast<llvmo::IndirectBrInst_O *>(client);
  obj_gc_safe->~IndirectBrInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__FenceInst_O : {
  llvmo::FenceInst_O *obj_gc_safe = reinterpret_cast<llvmo::FenceInst_O *>(client);
  obj_gc_safe->~FenceInst_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Constant_O : {
  llvmo::Constant_O *obj_gc_safe = reinterpret_cast<llvmo::Constant_O *>(client);
  obj_gc_safe->~Constant_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__BlockAddress_O : {
  llvmo::BlockAddress_O *obj_gc_safe = reinterpret_cast<llvmo::BlockAddress_O *>(client);
  obj_gc_safe->~BlockAddress_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__GlobalValue_O : {
  llvmo::GlobalValue_O *obj_gc_safe = reinterpret_cast<llvmo::GlobalValue_O *>(client);
  obj_gc_safe->~GlobalValue_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__GlobalVariable_O : {
  llvmo::GlobalVariable_O *obj_gc_safe = reinterpret_cast<llvmo::GlobalVariable_O *>(client);
  obj_gc_safe->~GlobalVariable_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Function_O : {
  llvmo::Function_O *obj_gc_safe = reinterpret_cast<llvmo::Function_O *>(client);
  obj_gc_safe->~Function_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ConstantArray_O : {
  llvmo::ConstantArray_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantArray_O *>(client);
  obj_gc_safe->~ConstantArray_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ConstantInt_O : {
  llvmo::ConstantInt_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantInt_O *>(client);
  obj_gc_safe->~ConstantInt_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ConstantDataSequential_O : {
  llvmo::ConstantDataSequential_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantDataSequential_O *>(client);
  obj_gc_safe->~ConstantDataSequential_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ConstantDataArray_O : {
  llvmo::ConstantDataArray_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantDataArray_O *>(client);
  obj_gc_safe->~ConstantDataArray_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ConstantStruct_O : {
  llvmo::ConstantStruct_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantStruct_O *>(client);
  obj_gc_safe->~ConstantStruct_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ConstantFP_O : {
  llvmo::ConstantFP_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantFP_O *>(client);
  obj_gc_safe->~ConstantFP_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__UndefValue_O : {
  llvmo::UndefValue_O *obj_gc_safe = reinterpret_cast<llvmo::UndefValue_O *>(client);
  obj_gc_safe->~UndefValue_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ConstantPointerNull_O : {
  llvmo::ConstantPointerNull_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantPointerNull_O *>(client);
  obj_gc_safe->~ConstantPointerNull_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ConstantExpr_O : {
  llvmo::ConstantExpr_O *obj_gc_safe = reinterpret_cast<llvmo::ConstantExpr_O *>(client);
  obj_gc_safe->~ConstantExpr_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__BasicBlock_O : {
  llvmo::BasicBlock_O *obj_gc_safe = reinterpret_cast<llvmo::BasicBlock_O *>(client);
  obj_gc_safe->~BasicBlock_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__IRBuilderBase_O : {
  llvmo::IRBuilderBase_O *obj_gc_safe = reinterpret_cast<llvmo::IRBuilderBase_O *>(client);
  obj_gc_safe->~IRBuilderBase_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__IRBuilder_O : {
  llvmo::IRBuilder_O *obj_gc_safe = reinterpret_cast<llvmo::IRBuilder_O *>(client);
  obj_gc_safe->~IRBuilder_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DIBuilder_O : {
  llvmo::DIBuilder_O *obj_gc_safe = reinterpret_cast<llvmo::DIBuilder_O *>(client);
  obj_gc_safe->~DIBuilder_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Metadata_O : {
  llvmo::Metadata_O *obj_gc_safe = reinterpret_cast<llvmo::Metadata_O *>(client);
  obj_gc_safe->~Metadata_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ValueAsMetadata_O : {
  llvmo::ValueAsMetadata_O *obj_gc_safe = reinterpret_cast<llvmo::ValueAsMetadata_O *>(client);
  obj_gc_safe->~ValueAsMetadata_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__MDNode_O : {
  llvmo::MDNode_O *obj_gc_safe = reinterpret_cast<llvmo::MDNode_O *>(client);
  obj_gc_safe->~MDNode_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__MDString_O : {
  llvmo::MDString_O *obj_gc_safe = reinterpret_cast<llvmo::MDString_O *>(client);
  obj_gc_safe->~MDString_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ExecutionEngine_O : {
  llvmo::ExecutionEngine_O *obj_gc_safe = reinterpret_cast<llvmo::ExecutionEngine_O *>(client);
  obj_gc_safe->~ExecutionEngine_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__APFloat_O : {
  llvmo::APFloat_O *obj_gc_safe = reinterpret_cast<llvmo::APFloat_O *>(client);
  obj_gc_safe->~APFloat_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__PassManagerBuilder_O : {
  llvmo::PassManagerBuilder_O *obj_gc_safe = reinterpret_cast<llvmo::PassManagerBuilder_O *>(client);
  obj_gc_safe->~PassManagerBuilder_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DataLayout_O : {
  llvmo::DataLayout_O *obj_gc_safe = reinterpret_cast<llvmo::DataLayout_O *>(client);
  obj_gc_safe->~DataLayout_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Triple_O : {
  llvmo::Triple_O *obj_gc_safe = reinterpret_cast<llvmo::Triple_O *>(client);
  obj_gc_safe->~Triple_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__APInt_O : {
  llvmo::APInt_O *obj_gc_safe = reinterpret_cast<llvmo::APInt_O *>(client);
  obj_gc_safe->~APInt_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__PassManagerBase_O : {
  llvmo::PassManagerBase_O *obj_gc_safe = reinterpret_cast<llvmo::PassManagerBase_O *>(client);
  obj_gc_safe->~PassManagerBase_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__FunctionPassManager_O : {
  llvmo::FunctionPassManager_O *obj_gc_safe = reinterpret_cast<llvmo::FunctionPassManager_O *>(client);
  obj_gc_safe->~FunctionPassManager_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__PassManager_O : {
  llvmo::PassManager_O *obj_gc_safe = reinterpret_cast<llvmo::PassManager_O *>(client);
  obj_gc_safe->~PassManager_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__TargetMachine_O : {
  llvmo::TargetMachine_O *obj_gc_safe = reinterpret_cast<llvmo::TargetMachine_O *>(client);
  obj_gc_safe->~TargetMachine_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O : {
  llvmo::LLVMTargetMachine_O *obj_gc_safe = reinterpret_cast<llvmo::LLVMTargetMachine_O *>(client);
  obj_gc_safe->~LLVMTargetMachine_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__TargetOptions_O : {
  llvmo::TargetOptions_O *obj_gc_safe = reinterpret_cast<llvmo::TargetOptions_O *>(client);
  obj_gc_safe->~TargetOptions_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Type_O : {
  llvmo::Type_O *obj_gc_safe = reinterpret_cast<llvmo::Type_O *>(client);
  obj_gc_safe->~Type_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__IntegerType_O : {
  llvmo::IntegerType_O *obj_gc_safe = reinterpret_cast<llvmo::IntegerType_O *>(client);
  obj_gc_safe->~IntegerType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__CompositeType_O : {
  llvmo::CompositeType_O *obj_gc_safe = reinterpret_cast<llvmo::CompositeType_O *>(client);
  obj_gc_safe->~CompositeType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__SequentialType_O : {
  llvmo::SequentialType_O *obj_gc_safe = reinterpret_cast<llvmo::SequentialType_O *>(client);
  obj_gc_safe->~SequentialType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__VectorType_O : {
  llvmo::VectorType_O *obj_gc_safe = reinterpret_cast<llvmo::VectorType_O *>(client);
  obj_gc_safe->~VectorType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__PointerType_O : {
  llvmo::PointerType_O *obj_gc_safe = reinterpret_cast<llvmo::PointerType_O *>(client);
  obj_gc_safe->~PointerType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ArrayType_O : {
  llvmo::ArrayType_O *obj_gc_safe = reinterpret_cast<llvmo::ArrayType_O *>(client);
  obj_gc_safe->~ArrayType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__StructType_O : {
  llvmo::StructType_O *obj_gc_safe = reinterpret_cast<llvmo::StructType_O *>(client);
  obj_gc_safe->~StructType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__FunctionType_O : {
  llvmo::FunctionType_O *obj_gc_safe = reinterpret_cast<llvmo::FunctionType_O *>(client);
  obj_gc_safe->~FunctionType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__NamedMDNode_O : {
  llvmo::NamedMDNode_O *obj_gc_safe = reinterpret_cast<llvmo::NamedMDNode_O *>(client);
  obj_gc_safe->~NamedMDNode_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Linker_O : {
  llvmo::Linker_O *obj_gc_safe = reinterpret_cast<llvmo::Linker_O *>(client);
  obj_gc_safe->~Linker_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Pass_O : {
  llvmo::Pass_O *obj_gc_safe = reinterpret_cast<llvmo::Pass_O *>(client);
  obj_gc_safe->~Pass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__FunctionPass_O : {
  llvmo::FunctionPass_O *obj_gc_safe = reinterpret_cast<llvmo::FunctionPass_O *>(client);
  obj_gc_safe->~FunctionPass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ModulePass_O : {
  llvmo::ModulePass_O *obj_gc_safe = reinterpret_cast<llvmo::ModulePass_O *>(client);
  obj_gc_safe->~ModulePass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__ImmutablePass_O : {
  llvmo::ImmutablePass_O *obj_gc_safe = reinterpret_cast<llvmo::ImmutablePass_O *>(client);
  obj_gc_safe->~ImmutablePass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DataLayoutPass_O : {
  llvmo::DataLayoutPass_O *obj_gc_safe = reinterpret_cast<llvmo::DataLayoutPass_O *>(client);
  obj_gc_safe->~DataLayoutPass_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O : {
  llvmo::TargetLibraryInfo_O *obj_gc_safe = reinterpret_cast<llvmo::TargetLibraryInfo_O *>(client);
  obj_gc_safe->~TargetLibraryInfo_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O : {
  llvmo::MCSubtargetInfo_O *obj_gc_safe = reinterpret_cast<llvmo::MCSubtargetInfo_O *>(client);
  obj_gc_safe->~MCSubtargetInfo_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O : {
  llvmo::TargetSubtargetInfo_O *obj_gc_safe = reinterpret_cast<llvmo::TargetSubtargetInfo_O *>(client);
  obj_gc_safe->~TargetSubtargetInfo_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Module_O : {
  llvmo::Module_O *obj_gc_safe = reinterpret_cast<llvmo::Module_O *>(client);
  obj_gc_safe->~Module_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__EngineBuilder_O : {
  llvmo::EngineBuilder_O *obj_gc_safe = reinterpret_cast<llvmo::EngineBuilder_O *>(client);
  obj_gc_safe->~EngineBuilder_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ForeignData_O : {
  core::ForeignData_O *obj_gc_safe = reinterpret_cast<core::ForeignData_O *>(client);
  obj_gc_safe->~ForeignData_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__LLVMContext_O : {
  llvmo::LLVMContext_O *obj_gc_safe = reinterpret_cast<llvmo::LLVMContext_O *>(client);
  obj_gc_safe->~LLVMContext_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__Target_O : {
  llvmo::Target_O *obj_gc_safe = reinterpret_cast<llvmo::Target_O *>(client);
  obj_gc_safe->~Target_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__LoadTimeValues_O : {
  core::LoadTimeValues_O *obj_gc_safe = reinterpret_cast<core::LoadTimeValues_O *>(client);
  obj_gc_safe->~LoadTimeValues_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Binder_O : {
  core::Binder_O *obj_gc_safe = reinterpret_cast<core::Binder_O *>(client);
  obj_gc_safe->~Binder_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__IntArray_O : {
  core::IntArray_O *obj_gc_safe = reinterpret_cast<core::IntArray_O *>(client);
  obj_gc_safe->~IntArray_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SourceManager_O : {
  core::SourceManager_O *obj_gc_safe = reinterpret_cast<core::SourceManager_O *>(client);
  obj_gc_safe->~SourceManager_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Record_O : {
  core::Record_O *obj_gc_safe = reinterpret_cast<core::Record_O *>(client);
  obj_gc_safe->~Record_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__LightUserData_O : {
  core::LightUserData_O *obj_gc_safe = reinterpret_cast<core::LightUserData_O *>(client);
  obj_gc_safe->~LightUserData_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__UserData_O : {
  core::UserData_O *obj_gc_safe = reinterpret_cast<core::UserData_O *>(client);
  obj_gc_safe->~UserData_O();
  return;
}
obj_finalize_KIND_BOOTSTRAP_core__Symbol_O : {
  core::Symbol_O *obj_gc_safe = reinterpret_cast<core::Symbol_O *>(client);
  obj_gc_safe->~Symbol_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Null_O : {
  core::Null_O *obj_gc_safe = reinterpret_cast<core::Null_O *>(client);
  obj_gc_safe->~Null_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SourcePosInfo_O : {
  core::SourcePosInfo_O *obj_gc_safe = reinterpret_cast<core::SourcePosInfo_O *>(client);
  obj_gc_safe->~SourcePosInfo_O();
  return;
}
obj_finalize_KIND_TEMPLATED_LISPALLOC_core__Iterator_O : {
  core::Iterator_O *obj_gc_safe = reinterpret_cast<core::Iterator_O *>(client);
  obj_gc_safe->~Iterator_O();
}
obj_finalize_KIND_LISPALLOC_core__DirectoryIterator_O : {
  core::DirectoryIterator_O *obj_gc_safe = reinterpret_cast<core::DirectoryIterator_O *>(client);
  obj_gc_safe->~DirectoryIterator_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O : {
  core::RecursiveDirectoryIterator_O *obj_gc_safe = reinterpret_cast<core::RecursiveDirectoryIterator_O *>(client);
  obj_gc_safe->~RecursiveDirectoryIterator_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Regex_O : {
  core::Regex_O *obj_gc_safe = reinterpret_cast<core::Regex_O *>(client);
  obj_gc_safe->~Regex_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__PosixTimeDuration_O : {
  core::PosixTimeDuration_O *obj_gc_safe = reinterpret_cast<core::PosixTimeDuration_O *>(client);
  obj_gc_safe->~PosixTimeDuration_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SymbolToEnumConverter_O : {
  core::SymbolToEnumConverter_O *obj_gc_safe = reinterpret_cast<core::SymbolToEnumConverter_O *>(client);
  obj_gc_safe->~SymbolToEnumConverter_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__CandoException_O : {
  core::CandoException_O *obj_gc_safe = reinterpret_cast<core::CandoException_O *>(client);
  obj_gc_safe->~CandoException_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Stream_O : {
  core::Stream_O *obj_gc_safe = reinterpret_cast<core::Stream_O *>(client);
  obj_gc_safe->~Stream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__AnsiStream_O : {
  core::AnsiStream_O *obj_gc_safe = reinterpret_cast<core::AnsiStream_O *>(client);
  obj_gc_safe->~AnsiStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__FileStream_O : {
  core::FileStream_O *obj_gc_safe = reinterpret_cast<core::FileStream_O *>(client);
  obj_gc_safe->~FileStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__IOStreamStream_O : {
  core::IOStreamStream_O *obj_gc_safe = reinterpret_cast<core::IOStreamStream_O *>(client);
  obj_gc_safe->~IOStreamStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__IOFileStream_O : {
  core::IOFileStream_O *obj_gc_safe = reinterpret_cast<core::IOFileStream_O *>(client);
  obj_gc_safe->~IOFileStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__ConcatenatedStream_O : {
  core::ConcatenatedStream_O *obj_gc_safe = reinterpret_cast<core::ConcatenatedStream_O *>(client);
  obj_gc_safe->~ConcatenatedStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__StringStream_O : {
  core::StringStream_O *obj_gc_safe = reinterpret_cast<core::StringStream_O *>(client);
  obj_gc_safe->~StringStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__StringInputStream_O : {
  core::StringInputStream_O *obj_gc_safe = reinterpret_cast<core::StringInputStream_O *>(client);
  obj_gc_safe->~StringInputStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__StringOutputStream_O : {
  core::StringOutputStream_O *obj_gc_safe = reinterpret_cast<core::StringOutputStream_O *>(client);
  obj_gc_safe->~StringOutputStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SynonymStream_O : {
  core::SynonymStream_O *obj_gc_safe = reinterpret_cast<core::SynonymStream_O *>(client);
  obj_gc_safe->~SynonymStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__EchoStream_O : {
  core::EchoStream_O *obj_gc_safe = reinterpret_cast<core::EchoStream_O *>(client);
  obj_gc_safe->~EchoStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__TwoWayStream_O : {
  core::TwoWayStream_O *obj_gc_safe = reinterpret_cast<core::TwoWayStream_O *>(client);
  obj_gc_safe->~TwoWayStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__BroadcastStream_O : {
  core::BroadcastStream_O *obj_gc_safe = reinterpret_cast<core::BroadcastStream_O *>(client);
  obj_gc_safe->~BroadcastStream_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Reader_O : {
  core::Reader_O *obj_gc_safe = reinterpret_cast<core::Reader_O *>(client);
  obj_gc_safe->~Reader_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Cons_O : {
  core::Cons_O *obj_gc_safe = reinterpret_cast<core::Cons_O *>(client);
  obj_gc_safe->~Cons_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Archive_O : {
  core::Archive_O *obj_gc_safe = reinterpret_cast<core::Archive_O *>(client);
  obj_gc_safe->~Archive_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SaveArchive_O : {
  core::SaveArchive_O *obj_gc_safe = reinterpret_cast<core::SaveArchive_O *>(client);
  obj_gc_safe->~SaveArchive_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SexpSaveArchive_O : {
  core::SexpSaveArchive_O *obj_gc_safe = reinterpret_cast<core::SexpSaveArchive_O *>(client);
  obj_gc_safe->~SexpSaveArchive_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__LoadArchive_O : {
  core::LoadArchive_O *obj_gc_safe = reinterpret_cast<core::LoadArchive_O *>(client);
  obj_gc_safe->~LoadArchive_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SexpLoadArchive_O : {
  core::SexpLoadArchive_O *obj_gc_safe = reinterpret_cast<core::SexpLoadArchive_O *>(client);
  obj_gc_safe->~SexpLoadArchive_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__HashTable_O : {
  core::HashTable_O *obj_gc_safe = reinterpret_cast<core::HashTable_O *>(client);
  obj_gc_safe->~HashTable_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__HashTableEq_O : {
  core::HashTableEq_O *obj_gc_safe = reinterpret_cast<core::HashTableEq_O *>(client);
  obj_gc_safe->~HashTableEq_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__HashTableEqualp_O : {
  core::HashTableEqualp_O *obj_gc_safe = reinterpret_cast<core::HashTableEqualp_O *>(client);
  obj_gc_safe->~HashTableEqualp_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__HashTableEql_O : {
  core::HashTableEql_O *obj_gc_safe = reinterpret_cast<core::HashTableEql_O *>(client);
  obj_gc_safe->~HashTableEql_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__HashTableEqual_O : {
  core::HashTableEqual_O *obj_gc_safe = reinterpret_cast<core::HashTableEqual_O *>(client);
  obj_gc_safe->~HashTableEqual_O();
  return;
}
obj_finalize_KIND_LISPALLOC_cffi__Pointer_O : {
  cffi::Pointer_O *obj_gc_safe = reinterpret_cast<cffi::Pointer_O *>(client);
  obj_gc_safe->~Pointer_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__CxxObject_O : {
  core::CxxObject_O *obj_gc_safe = reinterpret_cast<core::CxxObject_O *>(client);
  obj_gc_safe->~CxxObject_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__WeakKeyMapping_O : {
  core::WeakKeyMapping_O *obj_gc_safe = reinterpret_cast<core::WeakKeyMapping_O *>(client);
  obj_gc_safe->~WeakKeyMapping_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__LambdaListHandler_O : {
  core::LambdaListHandler_O *obj_gc_safe = reinterpret_cast<core::LambdaListHandler_O *>(client);
  obj_gc_safe->~LambdaListHandler_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__InsertPoint_O : {
  llvmo::InsertPoint_O *obj_gc_safe = reinterpret_cast<llvmo::InsertPoint_O *>(client);
  obj_gc_safe->~InsertPoint_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SourceFileInfo_O : {
  core::SourceFileInfo_O *obj_gc_safe = reinterpret_cast<core::SourceFileInfo_O *>(client);
  obj_gc_safe->~SourceFileInfo_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SNode_O : {
  core::SNode_O *obj_gc_safe = reinterpret_cast<core::SNode_O *>(client);
  obj_gc_safe->~SNode_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__LeafSNode_O : {
  core::LeafSNode_O *obj_gc_safe = reinterpret_cast<core::LeafSNode_O *>(client);
  obj_gc_safe->~LeafSNode_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__BranchSNode_O : {
  core::BranchSNode_O *obj_gc_safe = reinterpret_cast<core::BranchSNode_O *>(client);
  obj_gc_safe->~BranchSNode_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Path_O : {
  core::Path_O *obj_gc_safe = reinterpret_cast<core::Path_O *>(client);
  obj_gc_safe->~Path_O();
  return;
}
obj_finalize_KIND_LISPALLOC_asttooling__AstVisitor_O : {
  asttooling::AstVisitor_O *obj_gc_safe = reinterpret_cast<asttooling::AstVisitor_O *>(client);
  obj_gc_safe->~AstVisitor_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__AttributeSet_O : {
  llvmo::AttributeSet_O *obj_gc_safe = reinterpret_cast<llvmo::AttributeSet_O *>(client);
  obj_gc_safe->~AttributeSet_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__StructureObject_O : {
  core::StructureObject_O *obj_gc_safe = reinterpret_cast<core::StructureObject_O *>(client);
  obj_gc_safe->~StructureObject_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O : {
  core::InvocationHistoryFrameIterator_O *obj_gc_safe = reinterpret_cast<core::InvocationHistoryFrameIterator_O *>(client);
  obj_gc_safe->~InvocationHistoryFrameIterator_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Package_O : {
  core::Package_O *obj_gc_safe = reinterpret_cast<core::Package_O *>(client);
  obj_gc_safe->~Package_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__DirectoryEntry_O : {
  core::DirectoryEntry_O *obj_gc_safe = reinterpret_cast<core::DirectoryEntry_O *>(client);
  obj_gc_safe->~DirectoryEntry_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Character_dummy_O : {
  core::Character_dummy_O *obj_gc_safe = reinterpret_cast<core::Character_dummy_O *>(client);
  obj_gc_safe->~Character_dummy_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Function_O : {
  core::Function_O *obj_gc_safe = reinterpret_cast<core::Function_O *>(client);
  obj_gc_safe->~Function_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__CompiledFunction_O : {
  core::CompiledFunction_O *obj_gc_safe = reinterpret_cast<core::CompiledFunction_O *>(client);
  obj_gc_safe->~CompiledFunction_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O : {
  core::SingleDispatchGenericFunction_O *obj_gc_safe = reinterpret_cast<core::SingleDispatchGenericFunction_O *>(client);
  obj_gc_safe->~SingleDispatchGenericFunction_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SpecialForm_O : {
  core::SpecialForm_O *obj_gc_safe = reinterpret_cast<core::SpecialForm_O *>(client);
  obj_gc_safe->~SpecialForm_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O : {
  core::SingleDispatchEffectiveMethodFunction_O *obj_gc_safe = reinterpret_cast<core::SingleDispatchEffectiveMethodFunction_O *>(client);
  obj_gc_safe->~SingleDispatchEffectiveMethodFunction_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Instance_O : {
  core::Instance_O *obj_gc_safe = reinterpret_cast<core::Instance_O *>(client);
  obj_gc_safe->~Instance_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Pointer_O : {
  core::Pointer_O *obj_gc_safe = reinterpret_cast<core::Pointer_O *>(client);
  obj_gc_safe->~Pointer_O();
  return;
}
obj_finalize_KIND_LISPALLOC_clbind__ClassRegistry_O : {
  clbind::ClassRegistry_O *obj_gc_safe = reinterpret_cast<clbind::ClassRegistry_O *>(client);
  obj_gc_safe->~ClassRegistry_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DebugInfo_O : {
  llvmo::DebugInfo_O *obj_gc_safe = reinterpret_cast<llvmo::DebugInfo_O *>(client);
  obj_gc_safe->~DebugInfo_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DIDerivedType_O : {
  llvmo::DIDerivedType_O *obj_gc_safe = reinterpret_cast<llvmo::DIDerivedType_O *>(client);
  obj_gc_safe->~DIDerivedType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DIArray_O : {
  llvmo::DIArray_O *obj_gc_safe = reinterpret_cast<llvmo::DIArray_O *>(client);
  obj_gc_safe->~DIArray_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DIBasicType_O : {
  llvmo::DIBasicType_O *obj_gc_safe = reinterpret_cast<llvmo::DIBasicType_O *>(client);
  obj_gc_safe->~DIBasicType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DISubprogram_O : {
  llvmo::DISubprogram_O *obj_gc_safe = reinterpret_cast<llvmo::DISubprogram_O *>(client);
  obj_gc_safe->~DISubprogram_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DILexicalBlock_O : {
  llvmo::DILexicalBlock_O *obj_gc_safe = reinterpret_cast<llvmo::DILexicalBlock_O *>(client);
  obj_gc_safe->~DILexicalBlock_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DICompileUnit_O : {
  llvmo::DICompileUnit_O *obj_gc_safe = reinterpret_cast<llvmo::DICompileUnit_O *>(client);
  obj_gc_safe->~DICompileUnit_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DIDescriptor_O : {
  llvmo::DIDescriptor_O *obj_gc_safe = reinterpret_cast<llvmo::DIDescriptor_O *>(client);
  obj_gc_safe->~DIDescriptor_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DIType_O : {
  llvmo::DIType_O *obj_gc_safe = reinterpret_cast<llvmo::DIType_O *>(client);
  obj_gc_safe->~DIType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DISubroutineType_O : {
  llvmo::DISubroutineType_O *obj_gc_safe = reinterpret_cast<llvmo::DISubroutineType_O *>(client);
  obj_gc_safe->~DISubroutineType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DICompositeType_O : {
  llvmo::DICompositeType_O *obj_gc_safe = reinterpret_cast<llvmo::DICompositeType_O *>(client);
  obj_gc_safe->~DICompositeType_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DITypeArray_O : {
  llvmo::DITypeArray_O *obj_gc_safe = reinterpret_cast<llvmo::DITypeArray_O *>(client);
  obj_gc_safe->~DITypeArray_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DIFile_O : {
  llvmo::DIFile_O *obj_gc_safe = reinterpret_cast<llvmo::DIFile_O *>(client);
  obj_gc_safe->~DIFile_O();
  return;
}
obj_finalize_KIND_LISPALLOC_llvmo__DIScope_O : {
  llvmo::DIScope_O *obj_gc_safe = reinterpret_cast<llvmo::DIScope_O *>(client);
  obj_gc_safe->~DIScope_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SmallMultimap_O : {
  core::SmallMultimap_O *obj_gc_safe = reinterpret_cast<core::SmallMultimap_O *>(client);
  obj_gc_safe->~SmallMultimap_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__Pathname_O : {
  core::Pathname_O *obj_gc_safe = reinterpret_cast<core::Pathname_O *>(client);
  obj_gc_safe->~Pathname_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__LogicalPathname_O : {
  core::LogicalPathname_O *obj_gc_safe = reinterpret_cast<core::LogicalPathname_O *>(client);
  obj_gc_safe->~LogicalPathname_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__PosixTime_O : {
  core::PosixTime_O *obj_gc_safe = reinterpret_cast<core::PosixTime_O *>(client);
  obj_gc_safe->~PosixTime_O();
  return;
}
obj_finalize_KIND_LISPALLOC_core__SmallMap_O : {
  core::SmallMap_O *obj_gc_safe = reinterpret_cast<core::SmallMap_O *>(client);
  obj_gc_safe->~SmallMap_O();
  return;
}
obj_finalize_KIND_CLASSALLOC_core__Cache : {
  core::Cache *obj_gc_safe = reinterpret_cast<core::Cache *>(client);
  obj_gc_safe->~Cache();
  return;
}
obj_finalize_KIND_ROOTCLASSALLOC_core__Lisp_O : {
  core::Lisp_O *obj_gc_safe = reinterpret_cast<core::Lisp_O *>(client);
  obj_gc_safe->~Lisp_O();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::tagged_pointer<core::SequenceStepper>>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::KeywordArgument>"));
}
obj_finalize_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>,0>"));
}
obj_finalize_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure : {
  core::SingleDispatchGenericFunctionClosure *obj_gc_safe = reinterpret_cast<core::SingleDispatchGenericFunctionClosure *>(client);
  obj_gc_safe->~SingleDispatchGenericFunctionClosure();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::smart_ptr<core::List_V>>"));
}
obj_finalize_KIND_GCSTRING_gctools__GCString_moveable_char_ : {
  THROW_HARD_ERROR(BF("Should never finalize gcstrings gctools::GCString_moveable<char>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::RequiredArgument>"));
}
obj_finalize_KIND_CLASSALLOC_llvmo__CompiledClosure : {
  llvmo::CompiledClosure *obj_gc_safe = reinterpret_cast<llvmo::CompiledClosure *>(client);
  obj_gc_safe->~CompiledClosure();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::smart_ptr<core::SourceFileInfo_O>>"));
}
obj_finalize_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor : {
  asttooling::internal::VariadicOperatorMatcherDescriptor *obj_gc_safe = reinterpret_cast<asttooling::internal::VariadicOperatorMatcherDescriptor *>(client);
  obj_gc_safe->~VariadicOperatorMatcherDescriptor();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::Symbol_O>,gctools::smart_ptr<core::T_O>>>"));
}
obj_finalize_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor : {
  asttooling::internal::OverloadedMatcherDescriptor *obj_gc_safe = reinterpret_cast<asttooling::internal::OverloadedMatcherDescriptor *>(client);
  obj_gc_safe->~OverloadedMatcherDescriptor();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::SymbolStorage>"));
}
obj_finalize_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>,4>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<asttooling::ContextFrame>"));
}
obj_finalize_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor : {
  asttooling::internal::FixedArgCountMatcherDescriptor *obj_gc_safe = reinterpret_cast<asttooling::internal::FixedArgCountMatcherDescriptor *>(client);
  obj_gc_safe->~FixedArgCountMatcherDescriptor();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::T_O *>"));
}
obj_finalize_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor : {
  asttooling::internal::FreeFuncMatcherDescriptor *obj_gc_safe = reinterpret_cast<asttooling::internal::FreeFuncMatcherDescriptor *>(client);
  obj_gc_safe->~FreeFuncMatcherDescriptor();
  return;
}
obj_finalize_KIND_CLASSALLOC_core__MacroClosure : {
  core::MacroClosure *obj_gc_safe = reinterpret_cast<core::MacroClosure *>(client);
  obj_gc_safe->~MacroClosure();
  return;
}
obj_finalize_KIND_CLASSALLOC_core__ConsStepper : {
  core::ConsStepper *obj_gc_safe = reinterpret_cast<core::ConsStepper *>(client);
  obj_gc_safe->~ConsStepper();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::AuxArgument>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<asttooling::ParserValue>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::smart_ptr<core::Symbol_O>>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::SymbolClassPair>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<asttooling::RegMap::SymbolMatcherDescriptorPair>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<std::pair<gctools::smart_ptr<core::T_O>,gctools::smart_ptr<core::T_O>>>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::CacheRecord>"));
}
obj_finalize_KIND_CLASSALLOC_core__InstanceClosure : {
  core::InstanceClosure *obj_gc_safe = reinterpret_cast<core::InstanceClosure *>(client);
  obj_gc_safe->~InstanceClosure();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::smart_ptr<core::Cons_O>>"));
}
obj_finalize_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory : {
  asttooling::DerivableFrontendActionFactory *obj_gc_safe = reinterpret_cast<asttooling::DerivableFrontendActionFactory *>(client);
  obj_gc_safe->~DerivableFrontendActionFactory();
  return;
}
obj_finalize_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCArray_moveable<gctools::smart_ptr<core::T_O>,1>"));
}
obj_finalize_KIND_LISPALLOC_asttooling__DerivableMatchCallback : {
  asttooling::DerivableMatchCallback *obj_gc_safe = reinterpret_cast<asttooling::DerivableMatchCallback *>(client);
  obj_gc_safe->~DerivableMatchCallback();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<asttooling::ErrorContent>"));
}
obj_finalize_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction : {
  asttooling::DerivableASTFrontendAction *obj_gc_safe = reinterpret_cast<asttooling::DerivableASTFrontendAction *>(client);
  obj_gc_safe->~DerivableASTFrontendAction();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<asttooling::Message>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::tagged_pointer<asttooling::internal::MatcherDescriptor>>"));
}
obj_finalize_KIND_CLASSALLOC_core__CoreExposer : {
  core::CoreExposer *obj_gc_safe = reinterpret_cast<core::CoreExposer *>(client);
  obj_gc_safe->~CoreExposer();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::smart_ptr<core::T_O>>"));
}
obj_finalize_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction : {
  asttooling::DerivableSyntaxOnlyAction *obj_gc_safe = reinterpret_cast<asttooling::DerivableSyntaxOnlyAction *>(client);
  obj_gc_safe->~DerivableSyntaxOnlyAction();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::smart_ptr<core::SingleDispatchMethod_O>>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::OptionalArgument>"));
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::smart_ptr<core::Package_O>>"));
}
obj_finalize_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure : {
  core::BuiltinClosure *obj_gc_safe = reinterpret_cast<core::BuiltinClosure *>(client);
  obj_gc_safe->~BuiltinClosure();
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::ExceptionEntry>"));
}
obj_finalize_KIND_CLASSALLOC_core__InterpretedClosure : {
  core::InterpretedClosure *obj_gc_safe = reinterpret_cast<core::InterpretedClosure *>(client);
  obj_gc_safe->~InterpretedClosure();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<core::DynamicBinding>"));
}
obj_finalize_KIND_CLASSALLOC_core__VectorStepper : {
  core::VectorStepper *obj_gc_safe = reinterpret_cast<core::VectorStepper *>(client);
  obj_gc_safe->~VectorStepper();
  return;
}
obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__ : {
  THROW_HARD_ERROR(BF("Should never finalize containers gctools::GCVector_moveable<gctools::smart_ptr<clbind::ClassRep_O>>"));
}
#endif // defined(GC_OBJ_FINALIZE)
#if defined(GC_OBJ_FINALIZE_HELPERS)

#endif // defined(GC_OBJ_FINALIZE_HELPERS)
#if defined(GC_OBJ_FINALIZE_TABLE)
static void *OBJ_FINALIZE_table[] = {NULL, NULL /* Skip entry for immediate */
                                     ,
                                     NULL /* Skip entry for immediate */
                                     ,
                                     NULL /* Skip entry for immediate */
                                     /* 4 */,
                                     &&obj_finalize_KIND_ROOTCLASSALLOC_asttooling__RegMap__RegistryMaps
                                     /* 5 */,
                                     &&obj_finalize_KIND_ROOTCLASSALLOC_clbind__detail__class_map
                                     /* 6 */,
                                     &&obj_finalize_KIND_TEMPLATED_CLASSALLOC_core__Creator
                                     /* 7 */,
                                     &&obj_finalize_KIND_CLASSALLOC_clbind__DummyCreator
                                     /* 8 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__InstanceCreator
                                     /* 9 */,
                                     &&obj_finalize_KIND_TEMPLATED_CLASSALLOC_clbind__ConstructorCreator
                                     /* 10 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__T_O
                                     /* 11 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__MultiStringBuffer_O
                                     /* 12 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ReadTable_O
                                     /* 13 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Number_O
                                     /* 14 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Complex_O
                                     /* 15 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Real_O
                                     /* 16 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Rational_O
                                     /* 17 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Integer_O
                                     /* 18 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Bignum_O
                                     /* 19 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Fixnum_dummy_O
                                     /* 20 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Ratio_O
                                     /* 21 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Float_O
                                     /* 22 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__DoubleFloat_O
                                     /* 23 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__LongFloat_O
                                     /* 24 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SingleFloat_dummy_O
                                     /* 25 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ShortFloat_O
                                     /* 26 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__FileStatus_O
                                     /* 27 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__WeakHashTable_O
                                     /* 28 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__WeakKeyHashTable_O
                                     /* 29 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Environment_O
                                     /* 30 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ActivationFrame_O
                                     /* 31 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__TagbodyFrame_O
                                     /* 32 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ValueFrame_O
                                     /* 33 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__FunctionFrame_O
                                     /* 34 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__LexicalEnvironment_O
                                     /* 35 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__RuntimeVisibleEnvironment_O
                                     /* 36 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__FunctionValueEnvironment_O
                                     /* 37 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ValueEnvironment_O
                                     /* 38 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__TagbodyEnvironment_O
                                     /* 39 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__CompileTimeEnvironment_O
                                     /* 40 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__UnwindProtectEnvironment_O
                                     /* 41 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SymbolMacroletEnvironment_O
                                     /* 42 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__FunctionContainerEnvironment_O
                                     /* 43 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__StackValueEnvironment_O
                                     /* 44 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__BlockEnvironment_O
                                     /* 45 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__MacroletEnvironment_O
                                     /* 46 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__CatchEnvironment_O
                                     /* 47 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__GlueEnvironment_O
                                     /* 48 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Array_O
                                     /* 49 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ArrayObjects_O
                                     /* 50 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ArrayDisplaced_O
                                     /* 51 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Vector_O
                                     /* 52 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__BitVector_O
                                     /* 53 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SimpleBitVector_O
                                     /* 54 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__BitVectorWithFillPtr_O
                                     /* 55 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__VectorDisplaced_O
                                     /* 56 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__String_O
                                     /* 57 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__Str_O
                                     /* 58 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__StrWithFillPtr_O
                                     /* 59 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__VectorObjects_O
                                     /* 60 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__VectorObjectsWithFillPtr_O
                                     /* 61 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SingleDispatchMethod_O
                                     /* 62 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__RandomState_O
                                     /* 63 */,
                                     &&obj_finalize_KIND_TEMPLATED_LISPALLOC_core__WrappedPointer_O
                                     /* 64 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DebugLoc_O
                                     /* 65 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Attribute_O
                                     /* 66 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__RegexMatch_O
                                     /* 67 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__WeakPointer_O
                                     /* 68 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__VaList_dummy_O
                                     /* 69 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__StandardObject_O
                                     /* 70 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__Metaobject_O
                                     /* 71 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__Specializer_O
                                     /* 72 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__Class_O
                                     /* 73 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__StdClass_O
                                     /* 74 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__StandardClass_O
                                     /* 75 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__FuncallableStandardClass_O
                                     /* 76 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__StructureClass_O
                                     /* 77 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ForwardReferencedClass_O
                                     /* 78 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__CxxClass_O
                                     /* 79 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__BuiltInClass_O
                                     /* 80 */,
                                     &&obj_finalize_KIND_LISPALLOC_clbind__ClassRep_O
                                     /* 81 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ExternalObject_O
                                     /* 82 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Value_O
                                     /* 83 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Argument_O
                                     /* 84 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__User_O
                                     /* 85 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Instruction_O
                                     /* 86 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__AtomicRMWInst_O
                                     /* 87 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__LandingPadInst_O
                                     /* 88 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__PHINode_O
                                     /* 89 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__CallInst_O
                                     /* 90 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__StoreInst_O
                                     /* 91 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__UnaryInstruction_O
                                     /* 92 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__LoadInst_O
                                     /* 93 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__AllocaInst_O
                                     /* 94 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__VAArgInst_O
                                     /* 95 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__AtomicCmpXchgInst_O
                                     /* 96 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__TerminatorInst_O
                                     /* 97 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__UnreachableInst_O
                                     /* 98 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__SwitchInst_O
                                     /* 99 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ReturnInst_O
                                     /* 100 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ResumeInst_O
                                     /* 101 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__BranchInst_O
                                     /* 102 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__InvokeInst_O
                                     /* 103 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__IndirectBrInst_O
                                     /* 104 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__FenceInst_O
                                     /* 105 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Constant_O
                                     /* 106 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__BlockAddress_O
                                     /* 107 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__GlobalValue_O
                                     /* 108 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__GlobalVariable_O
                                     /* 109 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Function_O
                                     /* 110 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ConstantArray_O
                                     /* 111 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ConstantInt_O
                                     /* 112 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ConstantDataSequential_O
                                     /* 113 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ConstantDataArray_O
                                     /* 114 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ConstantStruct_O
                                     /* 115 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ConstantFP_O
                                     /* 116 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__UndefValue_O
                                     /* 117 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ConstantPointerNull_O
                                     /* 118 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ConstantExpr_O
                                     /* 119 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__BasicBlock_O
                                     /* 120 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__IRBuilderBase_O
                                     /* 121 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__IRBuilder_O
                                     /* 122 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DIBuilder_O
                                     /* 123 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Metadata_O
                                     /* 124 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ValueAsMetadata_O
                                     /* 125 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__MDNode_O
                                     /* 126 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__MDString_O
                                     /* 127 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ExecutionEngine_O
                                     /* 128 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__APFloat_O
                                     /* 129 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__PassManagerBuilder_O
                                     /* 130 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DataLayout_O
                                     /* 131 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Triple_O
                                     /* 132 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__APInt_O
                                     /* 133 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__PassManagerBase_O
                                     /* 134 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__FunctionPassManager_O
                                     /* 135 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__PassManager_O
                                     /* 136 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__TargetMachine_O
                                     /* 137 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__LLVMTargetMachine_O
                                     /* 138 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__TargetOptions_O
                                     /* 139 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Type_O
                                     /* 140 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__IntegerType_O
                                     /* 141 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__CompositeType_O
                                     /* 142 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__SequentialType_O
                                     /* 143 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__VectorType_O
                                     /* 144 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__PointerType_O
                                     /* 145 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ArrayType_O
                                     /* 146 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__StructType_O
                                     /* 147 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__FunctionType_O
                                     /* 148 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__NamedMDNode_O
                                     /* 149 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Linker_O
                                     /* 150 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Pass_O
                                     /* 151 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__FunctionPass_O
                                     /* 152 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ModulePass_O
                                     /* 153 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__ImmutablePass_O
                                     /* 154 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DataLayoutPass_O
                                     /* 155 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__TargetLibraryInfo_O
                                     /* 156 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__MCSubtargetInfo_O
                                     /* 157 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__TargetSubtargetInfo_O
                                     /* 158 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Module_O
                                     /* 159 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__EngineBuilder_O
                                     /* 160 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ForeignData_O
                                     /* 161 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__LLVMContext_O
                                     /* 162 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__Target_O
                                     /* 163 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__LoadTimeValues_O
                                     /* 164 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Binder_O
                                     /* 165 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__IntArray_O
                                     /* 166 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SourceManager_O
                                     /* 167 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Record_O
                                     /* 168 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__LightUserData_O
                                     /* 169 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__UserData_O
                                     /* 170 */,
                                     &&obj_finalize_KIND_BOOTSTRAP_core__Symbol_O
                                     /* 171 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Null_O
                                     /* 172 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SourcePosInfo_O
                                     /* 173 */,
                                     &&obj_finalize_KIND_TEMPLATED_LISPALLOC_core__Iterator_O
                                     /* 174 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__DirectoryIterator_O
                                     /* 175 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__RecursiveDirectoryIterator_O
                                     /* 176 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Regex_O
                                     /* 177 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__PosixTimeDuration_O
                                     /* 178 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SymbolToEnumConverter_O
                                     /* 179 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__CandoException_O
                                     /* 180 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Stream_O
                                     /* 181 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__AnsiStream_O
                                     /* 182 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__FileStream_O
                                     /* 183 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__IOStreamStream_O
                                     /* 184 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__IOFileStream_O
                                     /* 185 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__ConcatenatedStream_O
                                     /* 186 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__StringStream_O
                                     /* 187 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__StringInputStream_O
                                     /* 188 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__StringOutputStream_O
                                     /* 189 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SynonymStream_O
                                     /* 190 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__EchoStream_O
                                     /* 191 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__TwoWayStream_O
                                     /* 192 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__BroadcastStream_O
                                     /* 193 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Reader_O
                                     /* 194 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Cons_O
                                     /* 195 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Archive_O
                                     /* 196 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SaveArchive_O
                                     /* 197 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SexpSaveArchive_O
                                     /* 198 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__LoadArchive_O
                                     /* 199 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SexpLoadArchive_O
                                     /* 200 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__HashTable_O
                                     /* 201 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__HashTableEq_O
                                     /* 202 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__HashTableEqualp_O
                                     /* 203 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__HashTableEql_O
                                     /* 204 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__HashTableEqual_O
                                     /* 205 */,
                                     &&obj_finalize_KIND_LISPALLOC_cffi__Pointer_O
                                     /* 206 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__CxxObject_O
                                     /* 207 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__WeakKeyMapping_O
                                     /* 208 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__LambdaListHandler_O
                                     /* 209 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__InsertPoint_O
                                     /* 210 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SourceFileInfo_O
                                     /* 211 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SNode_O
                                     /* 212 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__LeafSNode_O
                                     /* 213 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__BranchSNode_O
                                     /* 214 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Path_O
                                     /* 215 */,
                                     &&obj_finalize_KIND_LISPALLOC_asttooling__AstVisitor_O
                                     /* 216 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__AttributeSet_O
                                     /* 217 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__StructureObject_O
                                     /* 218 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__InvocationHistoryFrameIterator_O
                                     /* 219 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Package_O
                                     /* 220 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__DirectoryEntry_O
                                     /* 221 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Character_dummy_O
                                     /* 222 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Function_O
                                     /* 223 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__CompiledFunction_O
                                     /* 224 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SingleDispatchGenericFunction_O
                                     /* 225 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SpecialForm_O
                                     /* 226 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SingleDispatchEffectiveMethodFunction_O
                                     /* 227 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Instance_O
                                     /* 228 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Pointer_O
                                     /* 229 */,
                                     &&obj_finalize_KIND_LISPALLOC_clbind__ClassRegistry_O
                                     /* 230 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DebugInfo_O
                                     /* 231 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DIDerivedType_O
                                     /* 232 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DIArray_O
                                     /* 233 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DIBasicType_O
                                     /* 234 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DISubprogram_O
                                     /* 235 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DILexicalBlock_O
                                     /* 236 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DICompileUnit_O
                                     /* 237 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DIDescriptor_O
                                     /* 238 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DIType_O
                                     /* 239 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DISubroutineType_O
                                     /* 240 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DICompositeType_O
                                     /* 241 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DITypeArray_O
                                     /* 242 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DIFile_O
                                     /* 243 */,
                                     &&obj_finalize_KIND_LISPALLOC_llvmo__DIScope_O
                                     /* 244 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SmallMultimap_O
                                     /* 245 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__Pathname_O
                                     /* 246 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__LogicalPathname_O
                                     /* 247 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__PosixTime_O
                                     /* 248 */,
                                     &&obj_finalize_KIND_LISPALLOC_core__SmallMap_O
                                     /* 249 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__Cache
                                     /* 250 */,
                                     &&obj_finalize_KIND_ROOTCLASSALLOC_core__Lisp_O
                                     /* 251 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_core__SequenceStepper__
                                     /* 252 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__KeywordArgument_
                                     /* 253 */,
                                     &&obj_finalize_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__0_
                                     /* 254 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__SingleDispatchGenericFunctionClosure
                                     /* 255 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__List_V__
                                     /* 256 */,
                                     &&obj_finalize_KIND_GCSTRING_gctools__GCString_moveable_char_
                                     /* 257 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__RequiredArgument_
                                     /* 258 */,
                                     &&obj_finalize_KIND_CLASSALLOC_llvmo__CompiledClosure
                                     /* 259 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SourceFileInfo_O__
                                     /* 260 */,
                                     &&obj_finalize_KIND_CLASSALLOC_asttooling__internal__VariadicOperatorMatcherDescriptor
                                     /* 261 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__Symbol_O__gctools__smart_ptr_core__T_O___
                                     /* 262 */,
                                     &&obj_finalize_KIND_CLASSALLOC_asttooling__internal__OverloadedMatcherDescriptor
                                     /* 263 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolStorage_
                                     /* 264 */,
                                     &&obj_finalize_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__4_
                                     /* 265 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ContextFrame_
                                     /* 266 */,
                                     &&obj_finalize_KIND_CLASSALLOC_asttooling__internal__FixedArgCountMatcherDescriptor
                                     /* 267 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__T_O_P_
                                     /* 268 */,
                                     &&obj_finalize_KIND_CLASSALLOC_asttooling__internal__FreeFuncMatcherDescriptor
                                     /* 269 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__MacroClosure
                                     /* 270 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__ConsStepper
                                     /* 271 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__AuxArgument_
                                     /* 272 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ParserValue_
                                     /* 273 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Symbol_O__
                                     /* 274 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__SymbolClassPair_
                                     /* 275 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__RegMap__SymbolMatcherDescriptorPair_
                                     /* 276 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_std__pair_gctools__smart_ptr_core__T_O__gctools__smart_ptr_core__T_O___
                                     /* 277 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__CacheRecord_
                                     /* 278 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__InstanceClosure
                                     /* 279 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Cons_O__
                                     /* 280 */,
                                     &&obj_finalize_KIND_LISPALLOC_asttooling__DerivableFrontendActionFactory
                                     /* 281 */,
                                     &&obj_finalize_KIND_GCARRAY_gctools__GCArray_moveable_gctools__smart_ptr_core__T_O__1_
                                     /* 282 */,
                                     &&obj_finalize_KIND_LISPALLOC_asttooling__DerivableMatchCallback
                                     /* 283 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__ErrorContent_
                                     /* 284 */,
                                     &&obj_finalize_KIND_LISPALLOC_asttooling__DerivableASTFrontendAction
                                     /* 285 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_asttooling__Message_
                                     /* 286 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__tagged_pointer_asttooling__internal__MatcherDescriptor__
                                     /* 287 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__CoreExposer
                                     /* 288 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__T_O__
                                     /* 289 */,
                                     &&obj_finalize_KIND_LISPALLOC_asttooling__DerivableSyntaxOnlyAction
                                     /* 290 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__SingleDispatchMethod_O__
                                     /* 291 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__OptionalArgument_
                                     /* 292 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_core__Package_O__
                                     /* 293 */,
                                     &&obj_finalize_KIND_TEMPLATED_CLASSALLOC_core__BuiltinClosure
                                     /* 294 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__ExceptionEntry_
                                     /* 295 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__InterpretedClosure
                                     /* 296 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_core__DynamicBinding_
                                     /* 297 */,
                                     &&obj_finalize_KIND_CLASSALLOC_core__VectorStepper
                                     /* 298 */,
                                     &&obj_finalize_KIND_GCVECTOR_gctools__GCVector_moveable_gctools__smart_ptr_clbind__ClassRep_O__};
#endif // defined(GC_OBJ_FINALIZE_TABLE)
#if defined(GC_GLOBALS)
SMART_PTR_FIX(core::FunctionFrame_O::___staticClass);
SMART_PTR_FIX(core::StructureClass_O::___staticClassSymbol);
SMART_PTR_FIX(core::FuncallableStandardClass_O::___staticClass);
TAGGED_POINTER_FIX(core::SaveArchive_O::static_creator);
SMART_PTR_FIX(core::WeakHashTable_O::___staticClassSymbol);
SMART_PTR_FIX(core::ArrayDisplaced_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::MCSubtargetInfo_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::StructType_O::static_creator);
TAGGED_POINTER_FIX(core::Float_O::static_creator);
TAGGED_POINTER_FIX(core::Fixnum_dummy_O::static_creator);
SMART_PTR_FIX(llvmo::Linker_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::ConstantDataArray_O::static_creator);
SMART_PTR_FIX(core::CandoException_O::___staticClass);
SMART_PTR_FIX(llvmo::DIFile_O::___staticClass);
SMART_PTR_FIX(core::Specializer_O::___staticClass);
SIMPLE_POINTER_FIX(gctools::global_tagged_Symbol_OP_nil);
SMART_PTR_FIX(llvmo::DILexicalBlock_O::___staticClassSymbol);
SMART_PTR_FIX(core::WrappedPointer_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::ReadTable_O::static_creator);
SMART_PTR_FIX(core::PosixTime_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Complex_O::static_creator);
SMART_PTR_FIX(core::IOFileStream_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::FunctionType_O::static_creator);
TAGGED_POINTER_FIX(core::WeakHashTable_O::static_creator);
TAGGED_POINTER_FIX(core::HashTableEql_O::static_creator);
SMART_PTR_FIX(core::Cons_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::Target_O::static_creator);
SMART_PTR_FIX(core::BuiltInClass_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::PosixTimeDuration_O::static_creator);
SMART_PTR_FIX(core::Regex_O::___staticClass);
SMART_PTR_FIX(core::MultiStringBuffer_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::LandingPadInst_O::static_creator);
SMART_PTR_FIX(core::Package_O::___staticClassSymbol);
SMART_PTR_FIX(core::LambdaListHandler_O::___staticClassSymbol);
SMART_PTR_FIX(core::FunctionValueEnvironment_O::___staticClass);
TAGGED_POINTER_FIX(core::Ratio_O::static_creator);
SMART_PTR_FIX(core::Pointer_O::___staticClass);
SMART_PTR_FIX(llvmo::UndefValue_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::StructureClass_O::static_creator);
SMART_PTR_FIX(core::VectorObjects_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Rational_O::static_creator);
SMART_PTR_FIX(llvmo::CompositeType_O::___staticClass);
SMART_PTR_FIX(llvmo::InsertPoint_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::StackValueEnvironment_O::static_creator);
SMART_PTR_FIX(core::FunctionValueEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Function_O::___staticClass);
SMART_PTR_FIX(llvmo::MDString_O::___staticClass);
TAGGED_POINTER_FIX(core::LexicalEnvironment_O::static_creator);
TAGGED_POINTER_FIX(llvmo::BranchInst_O::static_creator);
SMART_PTR_FIX(llvmo::DIArray_O::___staticClass);
SMART_PTR_FIX(core::Complex_O::___staticClassSymbol);
SMART_PTR_FIX(core::Array_O::___staticClass);
SMART_PTR_FIX(llvmo::GlobalValue_O::___staticClassSymbol);
SMART_PTR_FIX(core::LoadArchive_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::TargetLibraryInfo_O::static_creator);
TAGGED_POINTER_FIX(core::FileStream_O::static_creator);
TAGGED_POINTER_FIX(core::RegexMatch_O::static_creator);
SMART_PTR_FIX(llvmo::Instruction_O::___staticClass);
SMART_PTR_FIX(llvmo::DebugLoc_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::DataLayout_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ResumeInst_O::___staticClass);
SMART_PTR_FIX(llvmo::BranchInst_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::StringStream_O::static_creator);
SMART_PTR_FIX(llvmo::DISubprogram_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::WeakKeyHashTable_O::static_creator);
SMART_PTR_FIX(llvmo::ExecutionEngine_O::___staticClassSymbol);
SMART_PTR_FIX(core::Function_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::ConstantArray_O::static_creator);
SMART_PTR_FIX(llvmo::ImmutablePass_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Package_O::static_creator);
TAGGED_POINTER_FIX(llvmo::GlobalVariable_O::static_creator);
SMART_PTR_FIX(core::SingleDispatchMethod_O::___staticClass);
SMART_PTR_FIX(clbind::ClassRep_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::EngineBuilder_O::___staticClassSymbol);
SMART_PTR_FIX(core::Metaobject_O::___staticClass);
SMART_PTR_FIX(llvmo::GlobalVariable_O::___staticClassSymbol);
SMART_PTR_FIX(core::StandardObject_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Value_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::LoadInst_O::___staticClassSymbol);
SMART_PTR_FIX(core::HashTableEqual_O::___staticClass);
SMART_PTR_FIX(core::StructureObject_O::___staticClass);
SMART_PTR_FIX(core::ForeignData_O::___staticClassSymbol);
SMART_PTR_FIX(core::TagbodyEnvironment_O::___staticClass);
SMART_PTR_FIX(asttooling::AstVisitor_O::___staticClass);
SMART_PTR_FIX(core::UnwindProtectEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(core::RegexMatch_O::___staticClass);
SMART_PTR_FIX(llvmo::FunctionType_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::APInt_O::static_creator);
TAGGED_POINTER_FIX(core::SimpleBitVector_O::static_creator);
SMART_PTR_FIX(core::Vector_O::___staticClass);
TAGGED_POINTER_FIX(core::DirectoryEntry_O::static_creator);
SMART_PTR_FIX(llvmo::DIBasicType_O::___staticClassSymbol);
SMART_PTR_FIX(core::PosixTime_O::___staticClass);
SMART_PTR_FIX(core::Record_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::AllocaInst_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DISubprogram_O::static_creator);
SMART_PTR_FIX(llvmo::AttributeSet_O::___staticClass);
SMART_PTR_FIX(llvmo::PointerType_O::___staticClass);
SMART_PTR_FIX(core::Binder_O::___staticClass);
SMART_PTR_FIX(core::VectorObjectsWithFillPtr_O::___staticClass);
SMART_PTR_FIX(core::Metaobject_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::ImmutablePass_O::static_creator);
SMART_PTR_FIX(core::LeafSNode_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::UnaryInstruction_O::___staticClass);
SMART_PTR_FIX(core::SimpleBitVector_O::___staticClass);
SMART_PTR_FIX(core::EchoStream_O::___staticClass);
SMART_PTR_FIX(core::StringOutputStream_O::___staticClassSymbol);
TAGGED_POINTER_FIX(_lisp);
SMART_PTR_FIX(core::Integer_O::___staticClassSymbol);
SMART_PTR_FIX(core::Ratio_O::___staticClass);
SMART_PTR_FIX(core::SingleDispatchGenericFunction_O::___staticClass);
SMART_PTR_FIX(llvmo::Attribute_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Target_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::MCSubtargetInfo_O::static_creator);
TAGGED_POINTER_FIX(llvmo::TargetMachine_O::static_creator);
SMART_PTR_FIX(llvmo::ConstantPointerNull_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::IntegerType_O::___staticClass);
SMART_PTR_FIX(core::ValueEnvironment_O::___staticClass);
TAGGED_POINTER_FIX(core::Character_dummy_O::static_creator);
SMART_PTR_FIX(llvmo::ModulePass_O::___staticClass);
SMART_PTR_FIX(llvmo::LandingPadInst_O::___staticClass);
SMART_PTR_FIX(llvmo::ConstantFP_O::___staticClassSymbol);
SMART_PTR_FIX(core::WeakKeyMapping_O::___staticClassSymbol);
SMART_PTR_FIX(core::StandardClass_O::___staticClass);
SMART_PTR_FIX(llvmo::LLVMTargetMachine_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::User_O::___staticClass);
SMART_PTR_FIX(llvmo::StoreInst_O::___staticClass);
TAGGED_POINTER_FIX(core::SexpLoadArchive_O::static_creator);
TAGGED_POINTER_FIX(core::Record_O::static_creator);
TAGGED_POINTER_FIX(core::BlockEnvironment_O::static_creator);
TAGGED_POINTER_FIX(core::Iterator_O::static_creator);
TAGGED_POINTER_FIX(core::Array_O::static_creator);
TAGGED_POINTER_FIX(asttooling::AstVisitor_O::static_creator);
SMART_PTR_FIX(llvmo::Triple_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::HashTable_O::static_creator);
TAGGED_POINTER_FIX(core::Number_O::static_creator);
SMART_PTR_FIX(llvmo::Module_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::AtomicRMWInst_O::static_creator);
SMART_PTR_FIX(core::CxxClass_O::___staticClassSymbol);
SMART_PTR_FIX(core::Path_O::___staticClassSymbol);
SMART_PTR_FIX(core::FunctionContainerEnvironment_O::___staticClass);
TAGGED_POINTER_FIX(core::SmallMap_O::static_creator);
SMART_PTR_FIX(llvmo::DIType_O::___staticClassSymbol);
SMART_PTR_FIX(core::BuiltInClass_O::___staticClass);
TAGGED_POINTER_FIX(core::VaList_dummy_O::static_creator);
SMART_PTR_FIX(core::WeakKeyHashTable_O::___staticClass);
SMART_PTR_FIX(core::HashTableEqual_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::VAArgInst_O::___staticClass);
SMART_PTR_FIX(llvmo::ConstantDataArray_O::___staticClass);
TAGGED_POINTER_FIX(core::VectorDisplaced_O::static_creator);
SMART_PTR_FIX(core::RandomState_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::StringOutputStream_O::static_creator);
SMART_PTR_FIX(core::Null_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::ResumeInst_O::static_creator);
TAGGED_POINTER_FIX(core::Instance_O::static_creator);
SMART_PTR_FIX(core::CompiledFunction_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::NamedMDNode_O::___staticClass);
SIMPLE_POINTER_FIX(gctools::global_tagged_Symbol_OP_sameAsKey);
TAGGED_POINTER_FIX(core::CompiledFunction_O::static_creator);
SMART_PTR_FIX(core::FuncallableStandardClass_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DIScope_O::static_creator);
SMART_PTR_FIX(core::SourceManager_O::___staticClass);
SMART_PTR_FIX(llvmo::StoreInst_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::IndirectBrInst_O::static_creator);
TAGGED_POINTER_FIX(core::ForwardReferencedClass_O::static_creator);
SMART_PTR_FIX(core::DirectoryEntry_O::___staticClassSymbol);
SMART_PTR_FIX(core::CatchEnvironment_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::MultiStringBuffer_O::static_creator);
SMART_PTR_FIX(core::SingleDispatchEffectiveMethodFunction_O::___staticClassSymbol);
SMART_PTR_FIX(core::Float_O::___staticClassSymbol);
SMART_PTR_FIX(core::Regex_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::Instruction_O::static_creator);
TAGGED_POINTER_FIX(core::FunctionFrame_O::static_creator);
TAGGED_POINTER_FIX(core::Pointer_O::static_creator);
SMART_PTR_FIX(core::HashTableEq_O::___staticClass);
SMART_PTR_FIX(llvmo::PassManagerBase_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::LoadArchive_O::static_creator);
SMART_PTR_FIX(llvmo::DebugInfo_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::DataLayoutPass_O::___staticClassSymbol);
SMART_PTR_FIX(core::ReadTable_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Constant_O::___staticClass);
SMART_PTR_FIX(core::SingleDispatchMethod_O::___staticClassSymbol);
SMART_PTR_FIX(core::RuntimeVisibleEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(core::WeakKeyMapping_O::___staticClass);
SMART_PTR_FIX(llvmo::InvokeInst_O::___staticClassSymbol);
SIMPLE_POINTER_FIX(gctools::global_tagged_Symbol_OP_unbound);
TAGGED_POINTER_FIX(llvmo::NamedMDNode_O::static_creator);
SMART_PTR_FIX(core::Iterator_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Integer_O::static_creator);
SMART_PTR_FIX(llvmo::StructType_O::___staticClass);
SMART_PTR_FIX(llvmo::ConstantPointerNull_O::___staticClass);
SMART_PTR_FIX(core::ArrayObjects_O::___staticClass);
TAGGED_POINTER_FIX(core::HashTableEqualp_O::static_creator);
TAGGED_POINTER_FIX(core::ForeignData_O::static_creator);
TAGGED_POINTER_FIX(core::SpecialForm_O::static_creator);
SIMPLE_POINTER_FIX(gctools::global_tagged_Symbol_OP_deleted);
SMART_PTR_FIX(core::InvocationHistoryFrameIterator_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::FunctionPass_O::static_creator);
SMART_PTR_FIX(llvmo::AtomicCmpXchgInst_O::___staticClass);
SMART_PTR_FIX(core::SmallMap_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::PHINode_O::static_creator);
TAGGED_POINTER_FIX(core::IOFileStream_O::static_creator);
TAGGED_POINTER_FIX(core::Archive_O::static_creator);
TAGGED_POINTER_FIX(llvmo::DICompileUnit_O::static_creator);
SMART_PTR_FIX(core::Instance_O::___staticClass);
TAGGED_POINTER_FIX(core::BuiltInClass_O::static_creator);
TAGGED_POINTER_FIX(core::ValueFrame_O::static_creator);
SMART_PTR_FIX(llvmo::IRBuilderBase_O::___staticClass);
TAGGED_POINTER_FIX(core::Vector_O::static_creator);
SMART_PTR_FIX(core::Archive_O::___staticClass);
SMART_PTR_FIX(llvmo::Linker_O::___staticClass);
SMART_PTR_FIX(core::LongFloat_O::___staticClass);
TAGGED_POINTER_FIX(core::LongFloat_O::static_creator);
SMART_PTR_FIX(core::SymbolMacroletEnvironment_O::___staticClass);
SMART_PTR_FIX(llvmo::IntegerType_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::T_O::static_creator);
SMART_PTR_FIX(core::LightUserData_O::___staticClass);
TAGGED_POINTER_FIX(core::RecursiveDirectoryIterator_O::static_creator);
TAGGED_POINTER_FIX(core::ArrayObjects_O::static_creator);
SMART_PTR_FIX(core::StrWithFillPtr_O::___staticClassSymbol);
SMART_PTR_FIX(core::SingleDispatchGenericFunction_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ConstantExpr_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ArrayType_O::___staticClassSymbol);
SMART_PTR_FIX(core::SexpLoadArchive_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::ReturnInst_O::static_creator);
SMART_PTR_FIX(llvmo::DIFile_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::GlueEnvironment_O::static_creator);
SMART_PTR_FIX(core::StrWithFillPtr_O::___staticClass);
SMART_PTR_FIX(core::Cons_O::___staticClass);
SMART_PTR_FIX(core::LongFloat_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::StoreInst_O::static_creator);
TAGGED_POINTER_FIX(core::SynonymStream_O::static_creator);
SMART_PTR_FIX(core::Fixnum_dummy_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::AllocaInst_O::static_creator);
SMART_PTR_FIX(core::Null_O::___staticClass);
SMART_PTR_FIX(llvmo::Type_O::___staticClassSymbol);
TAGGED_POINTER_FIX(clbind::globalClassMap);
SMART_PTR_FIX(llvmo::GlobalVariable_O::___staticClass);
SMART_PTR_FIX(llvmo::IRBuilder_O::___staticClass);
SMART_PTR_FIX(core::SingleFloat_dummy_O::___staticClass);
SMART_PTR_FIX(core::DoubleFloat_O::___staticClass);
SMART_PTR_FIX(llvmo::MDNode_O::___staticClassSymbol);
SMART_PTR_FIX(core::ValueFrame_O::___staticClassSymbol);
SMART_PTR_FIX(core::T_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::TargetSubtargetInfo_O::static_creator);
TAGGED_POINTER_FIX(core::Environment_O::static_creator);
SMART_PTR_FIX(core::Reader_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::TagbodyFrame_O::static_creator);
SMART_PTR_FIX(core::ExternalObject_O::___staticClass);
TAGGED_POINTER_FIX(core::Stream_O::static_creator);
SMART_PTR_FIX(llvmo::DIBuilder_O::___staticClass);
SMART_PTR_FIX(llvmo::VectorType_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Argument_O::___staticClassSymbol);
SMART_PTR_FIX(core::LoadArchive_O::___staticClass);
SMART_PTR_FIX(llvmo::Target_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::DICompileUnit_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Module_O::___staticClass);
SMART_PTR_FIX(llvmo::AttributeSet_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::FuncallableStandardClass_O::static_creator);
SMART_PTR_FIX(llvmo::FunctionPass_O::___staticClass);
SMART_PTR_FIX(core::ValueFrame_O::___staticClass);
SMART_PTR_FIX(llvmo::IRBuilderBase_O::___staticClassSymbol);
SMART_PTR_FIX(core::SNode_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::GlobalValue_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::DataLayoutPass_O::static_creator);
TAGGED_POINTER_FIX(core::VectorObjects_O::static_creator);
TAGGED_POINTER_FIX(core::SymbolMacroletEnvironment_O::static_creator);
SMART_PTR_FIX(core::SingleFloat_dummy_O::___staticClassSymbol);
SMART_PTR_FIX(core::RegexMatch_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DISubroutineType_O::static_creator);
SMART_PTR_FIX(llvmo::Instruction_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::LLVMContext_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::AtomicRMWInst_O::___staticClass);
SMART_PTR_FIX(core::BranchSNode_O::___staticClassSymbol);
SMART_PTR_FIX(core::BlockEnvironment_O::___staticClass);
TAGGED_POINTER_FIX(core::FunctionContainerEnvironment_O::static_creator);
TAGGED_POINTER_FIX(llvmo::TargetOptions_O::static_creator);
TAGGED_POINTER_FIX(llvmo::User_O::static_creator);
TAGGED_POINTER_FIX(core::LoadTimeValues_O::static_creator);
TAGGED_POINTER_FIX(core::StdClass_O::static_creator);
TAGGED_POINTER_FIX(llvmo::LLVMTargetMachine_O::static_creator);
TAGGED_POINTER_FIX(core::RandomState_O::static_creator);
SMART_PTR_FIX(core::InvocationHistoryFrameIterator_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::DIArray_O::___staticClassSymbol);
SMART_PTR_FIX(core::AnsiStream_O::___staticClass);
SMART_PTR_FIX(core::Character_dummy_O::___staticClassSymbol);
SMART_PTR_FIX(core::Rational_O::___staticClass);
TAGGED_POINTER_FIX(core::BroadcastStream_O::static_creator);
SMART_PTR_FIX(core::PosixTimeDuration_O::___staticClass);
SMART_PTR_FIX(core::UnwindProtectEnvironment_O::___staticClass);
SMART_PTR_FIX(core::FunctionContainerEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::PassManager_O::___staticClass);
SMART_PTR_FIX(llvmo::TerminatorInst_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::DIDerivedType_O::___staticClassSymbol);
SMART_PTR_FIX(core::Number_O::___staticClassSymbol);
SMART_PTR_FIX(core::ArrayDisplaced_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::Attribute_O::static_creator);
SMART_PTR_FIX(core::VaList_dummy_O::___staticClass);
SMART_PTR_FIX(llvmo::BlockAddress_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::InvokeInst_O::static_creator);
SMART_PTR_FIX(llvmo::SwitchInst_O::___staticClass);
TAGGED_POINTER_FIX(core::ValueEnvironment_O::static_creator);
TAGGED_POINTER_FIX(llvmo::Pass_O::static_creator);
SMART_PTR_FIX(core::Real_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Type_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::PointerType_O::static_creator);
TAGGED_POINTER_FIX(clbind::ClassRep_O::static_creator);
SMART_PTR_FIX(llvmo::CallInst_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::NamedMDNode_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ArrayType_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::LLVMContext_O::static_creator);
TAGGED_POINTER_FIX(core::ArrayDisplaced_O::static_creator);
SMART_PTR_FIX(llvmo::UndefValue_O::___staticClass);
SMART_PTR_FIX(core::SaveArchive_O::___staticClass);
SMART_PTR_FIX(core::SynonymStream_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Symbol_O::static_creator);
SMART_PTR_FIX(llvmo::APFloat_O::___staticClass);
SMART_PTR_FIX(llvmo::DIDescriptor_O::___staticClass);
SMART_PTR_FIX(core::HashTableEq_O::___staticClassSymbol);
SMART_PTR_FIX(core::Binder_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::InvokeInst_O::___staticClass);
SMART_PTR_FIX(core::ActivationFrame_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DebugInfo_O::static_creator);
SMART_PTR_FIX(core::VaList_dummy_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::TargetMachine_O::___staticClassSymbol);
SMART_PTR_FIX(core::CandoException_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Null_O::static_creator);
SMART_PTR_FIX(core::SmallMultimap_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::SexpSaveArchive_O::static_creator);
SMART_PTR_FIX(core::ReadTable_O::___staticClass);
SMART_PTR_FIX(core::Function_O::___staticClass);
SMART_PTR_FIX(core::HashTable_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ConstantStruct_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::CompileTimeEnvironment_O::static_creator);
SMART_PTR_FIX(llvmo::LLVMContext_O::___staticClass);
TAGGED_POINTER_FIX(core::Class_O::static_creator);
SMART_PTR_FIX(core::Symbol_O::___staticClassSymbol);
SMART_PTR_FIX(core::LogicalPathname_O::___staticClassSymbol);
SMART_PTR_FIX(core::SexpLoadArchive_O::___staticClassSymbol);
SMART_PTR_FIX(core::StringInputStream_O::___staticClassSymbol);
SMART_PTR_FIX(core::TwoWayStream_O::___staticClassSymbol);
SMART_PTR_FIX(core::SpecialForm_O::___staticClass);
TAGGED_POINTER_FIX(core::StringInputStream_O::static_creator);
SMART_PTR_FIX(core::StructureObject_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ValueAsMetadata_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::VAArgInst_O::static_creator);
TAGGED_POINTER_FIX(llvmo::UnaryInstruction_O::static_creator);
SMART_PTR_FIX(core::LexicalEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(core::CxxClass_O::___staticClass);
SMART_PTR_FIX(core::ExternalObject_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DIDerivedType_O::static_creator);
SMART_PTR_FIX(core::StandardClass_O::___staticClassSymbol);
SMART_PTR_FIX(core::ForeignData_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::ConstantExpr_O::static_creator);
SMART_PTR_FIX(core::Reader_O::___staticClass);
SMART_PTR_FIX(core::BlockEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(cffi::Pointer_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::Argument_O::static_creator);
TAGGED_POINTER_FIX(core::SourceManager_O::static_creator);
SMART_PTR_FIX(llvmo::ImmutablePass_O::___staticClass);
SMART_PTR_FIX(llvmo::DebugLoc_O::___staticClass);
SMART_PTR_FIX(llvmo::TargetSubtargetInfo_O::___staticClass);
SMART_PTR_FIX(core::BroadcastStream_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::AtomicCmpXchgInst_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::SequentialType_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DILexicalBlock_O::static_creator);
SMART_PTR_FIX(core::LoadTimeValues_O::___staticClass);
SMART_PTR_FIX(core::BitVector_O::___staticClass);
SMART_PTR_FIX(core::StdClass_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Binder_O::static_creator);
SMART_PTR_FIX(core::HashTableEql_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DIArray_O::static_creator);
SMART_PTR_FIX(llvmo::ConstantInt_O::___staticClass);
TAGGED_POINTER_FIX(core::UnwindProtectEnvironment_O::static_creator);
TAGGED_POINTER_FIX(llvmo::GlobalValue_O::static_creator);
SMART_PTR_FIX(asttooling::AstVisitor_O::___staticClassSymbol);
SMART_PTR_FIX(core::Iterator_O::___staticClass);
SMART_PTR_FIX(core::ArrayObjects_O::___staticClassSymbol);
SMART_PTR_FIX(core::HashTableEqualp_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::LoadInst_O::___staticClass);
SMART_PTR_FIX(clbind::ClassRep_O::___staticClass);
SMART_PTR_FIX(llvmo::BlockAddress_O::___staticClassSymbol);
SMART_PTR_FIX(core::Complex_O::___staticClass);
TAGGED_POINTER_FIX(core::LightUserData_O::static_creator);
TAGGED_POINTER_FIX(llvmo::UnreachableInst_O::static_creator);
SMART_PTR_FIX(llvmo::PassManager_O::___staticClassSymbol);
SMART_PTR_FIX(core::RuntimeVisibleEnvironment_O::___staticClass);
SMART_PTR_FIX(llvmo::DIScope_O::___staticClassSymbol);
SMART_PTR_FIX(core::StackValueEnvironment_O::___staticClass);
SMART_PTR_FIX(llvmo::DIBasicType_O::___staticClass);
SMART_PTR_FIX(core::Stream_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::SingleDispatchEffectiveMethodFunction_O::static_creator);
SMART_PTR_FIX(llvmo::DICompileUnit_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::AtomicCmpXchgInst_O::static_creator);
SMART_PTR_FIX(core::ActivationFrame_O::___staticClass);
TAGGED_POINTER_FIX(core::SymbolToEnumConverter_O::static_creator);
SMART_PTR_FIX(llvmo::Pass_O::___staticClassSymbol);
SMART_PTR_FIX(core::GlueEnvironment_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::SingleDispatchMethod_O::static_creator);
SMART_PTR_FIX(core::Bignum_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::TargetOptions_O::___staticClass);
SMART_PTR_FIX(core::CxxObject_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::IntArray_O::static_creator);
TAGGED_POINTER_FIX(llvmo::Type_O::static_creator);
SMART_PTR_FIX(core::SpecialForm_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::ArrayType_O::static_creator);
SMART_PTR_FIX(llvmo::DataLayoutPass_O::___staticClass);
TAGGED_POINTER_FIX(core::SourcePosInfo_O::static_creator);
TAGGED_POINTER_FIX(llvmo::ValueAsMetadata_O::static_creator);
TAGGED_POINTER_FIX(core::StrWithFillPtr_O::static_creator);
SMART_PTR_FIX(llvmo::APFloat_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::DITypeArray_O::___staticClass);
SMART_PTR_FIX(llvmo::Pass_O::___staticClass);
SMART_PTR_FIX(core::SexpSaveArchive_O::___staticClass);
SMART_PTR_FIX(core::DirectoryIterator_O::___staticClassSymbol);
SMART_PTR_FIX(core::MultiStringBuffer_O::___staticClass);
TAGGED_POINTER_FIX(cffi::Pointer_O::static_creator);
SMART_PTR_FIX(llvmo::ConstantInt_O::___staticClassSymbol);
SMART_PTR_FIX(core::VectorObjectsWithFillPtr_O::___staticClassSymbol);
SMART_PTR_FIX(core::StringStream_O::___staticClassSymbol);
SMART_PTR_FIX(core::Stream_O::___staticClass);
SMART_PTR_FIX(llvmo::LandingPadInst_O::___staticClassSymbol);
SMART_PTR_FIX(core::SourceFileInfo_O::___staticClass);
SMART_PTR_FIX(llvmo::StructType_O::___staticClassSymbol);
SMART_PTR_FIX(core::String_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::BasicBlock_O::static_creator);
SMART_PTR_FIX(llvmo::UnreachableInst_O::___staticClass);
SMART_PTR_FIX(llvmo::DataLayout_O::___staticClass);
SMART_PTR_FIX(llvmo::PHINode_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::MDNode_O::static_creator);
TAGGED_POINTER_FIX(core::RuntimeVisibleEnvironment_O::static_creator);
SMART_PTR_FIX(llvmo::ExecutionEngine_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::Linker_O::static_creator);
TAGGED_POINTER_FIX(llvmo::DICompositeType_O::static_creator);
SMART_PTR_FIX(llvmo::BasicBlock_O::___staticClass);
SMART_PTR_FIX(llvmo::UnaryInstruction_O::___staticClassSymbol);
SMART_PTR_FIX(core::ForwardReferencedClass_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::FunctionType_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::IRBuilder_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Specializer_O::static_creator);
SMART_PTR_FIX(core::Class_O::___staticClass);
SMART_PTR_FIX(core::SexpSaveArchive_O::___staticClassSymbol);
SMART_PTR_FIX(core::UserData_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::LoadInst_O::static_creator);
SMART_PTR_FIX(llvmo::MCSubtargetInfo_O::___staticClass);
TAGGED_POINTER_FIX(core::HashTableEqual_O::static_creator);
SMART_PTR_FIX(llvmo::TargetOptions_O::___staticClassSymbol);
SMART_PTR_FIX(core::SourcePosInfo_O::___staticClassSymbol);
SIMPLE_POINTER_FIX(globalTaggedRunTimeValues);
SMART_PTR_FIX(core::VectorObjects_O::___staticClass);
SMART_PTR_FIX(llvmo::PointerType_O::___staticClassSymbol);
SMART_PTR_FIX(core::TwoWayStream_O::___staticClass);
SMART_PTR_FIX(core::SymbolToEnumConverter_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::DIBuilder_O::static_creator);
TAGGED_POINTER_FIX(llvmo::FunctionPassManager_O::static_creator);
SMART_PTR_FIX(core::MacroletEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::LLVMTargetMachine_O::___staticClass);
SMART_PTR_FIX(llvmo::EngineBuilder_O::___staticClass);
SMART_PTR_FIX(llvmo::IndirectBrInst_O::___staticClass);
SMART_PTR_FIX(llvmo::DISubroutineType_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Path_O::static_creator);
TAGGED_POINTER_FIX(core::TagbodyEnvironment_O::static_creator);
TAGGED_POINTER_FIX(core::ShortFloat_O::static_creator);
SMART_PTR_FIX(core::Str_O::___staticClass);
SMART_PTR_FIX(llvmo::ConstantDataSequential_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::IRBuilderBase_O::static_creator);
SMART_PTR_FIX(core::VectorDisplaced_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::Constant_O::static_creator);
SMART_PTR_FIX(llvmo::DIDescriptor_O::___staticClassSymbol);
SMART_PTR_FIX(core::Instance_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::BranchSNode_O::static_creator);
SMART_PTR_FIX(llvmo::FunctionPassManager_O::___staticClass);
SMART_PTR_FIX(core::AnsiStream_O::___staticClassSymbol);
SMART_PTR_FIX(core::Pathname_O::___staticClassSymbol);
SMART_PTR_FIX(core::Specializer_O::___staticClassSymbol);
SMART_PTR_FIX(core::VectorDisplaced_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::InsertPoint_O::___staticClass);
SMART_PTR_FIX(llvmo::ModulePass_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::LambdaListHandler_O::static_creator);
TAGGED_POINTER_FIX(clbind::ClassRegistry_O::static_creator);
TAGGED_POINTER_FIX(core::CxxObject_O::static_creator);
SMART_PTR_FIX(core::SimpleBitVector_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Function_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::ActivationFrame_O::static_creator);
TAGGED_POINTER_FIX(core::Pathname_O::static_creator);
SMART_PTR_FIX(llvmo::PHINode_O::___staticClass);
SMART_PTR_FIX(llvmo::Triple_O::___staticClass);
SMART_PTR_FIX(llvmo::UnreachableInst_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ConstantStruct_O::___staticClass);
SMART_PTR_FIX(core::Class_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DebugLoc_O::static_creator);
SMART_PTR_FIX(core::FileStatus_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ConstantArray_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DataLayout_O::static_creator);
SMART_PTR_FIX(core::BitVector_O::___staticClassSymbol);
SMART_PTR_FIX(core::LoadTimeValues_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Cons_O::static_creator);
SMART_PTR_FIX(llvmo::FenceInst_O::___staticClassSymbol);
SMART_PTR_FIX(core::RecursiveDirectoryIterator_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::ValueAsMetadata_O::___staticClass);
TAGGED_POINTER_FIX(core::SourceFileInfo_O::static_creator);
SMART_PTR_FIX(llvmo::DIDerivedType_O::___staticClass);
SMART_PTR_FIX(core::SmallMultimap_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::CompositeType_O::static_creator);
SMART_PTR_FIX(llvmo::FunctionPass_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::PassManagerBuilder_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::DIDescriptor_O::static_creator);
SMART_PTR_FIX(core::LeafSNode_O::___staticClass);
SMART_PTR_FIX(core::BitVectorWithFillPtr_O::___staticClassSymbol);
SMART_PTR_FIX(core::IOFileStream_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::IntegerType_O::static_creator);
SMART_PTR_FIX(core::LightUserData_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::InsertPoint_O::static_creator);
TAGGED_POINTER_FIX(core::VectorObjectsWithFillPtr_O::static_creator);
SMART_PTR_FIX(core::HashTableEql_O::___staticClass);
TAGGED_POINTER_FIX(core::CandoException_O::static_creator);
TAGGED_POINTER_FIX(core::Real_O::static_creator);
SMART_PTR_FIX(core::StdClass_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::FenceInst_O::static_creator);
SMART_PTR_FIX(llvmo::ConstantExpr_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::Triple_O::static_creator);
SMART_PTR_FIX(llvmo::DISubroutineType_O::___staticClass);
SMART_PTR_FIX(core::SaveArchive_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::IOStreamStream_O::static_creator);
TAGGED_POINTER_FIX(llvmo::Value_O::static_creator);
SMART_PTR_FIX(core::IOStreamStream_O::___staticClass);
TAGGED_POINTER_FIX(core::Regex_O::static_creator);
SMART_PTR_FIX(core::Character_dummy_O::___staticClass);
SMART_PTR_FIX(llvmo::DICompositeType_O::___staticClass);
TAGGED_POINTER_FIX(core::SmallMultimap_O::static_creator);
TAGGED_POINTER_FIX(core::DirectoryIterator_O::static_creator);
SMART_PTR_FIX(llvmo::MDString_O::___staticClassSymbol);
SMART_PTR_FIX(core::Record_O::___staticClass);
SMART_PTR_FIX(core::Environment_O::___staticClass);
SMART_PTR_FIX(llvmo::SwitchInst_O::___staticClassSymbol);
SMART_PTR_FIX(core::FileStream_O::___staticClass);
SMART_PTR_FIX(llvmo::DITypeArray_O::___staticClassSymbol);
SMART_PTR_FIX(core::ValueEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(core::String_O::___staticClassSymbol);
SMART_PTR_FIX(core::Array_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Metadata_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::ExecutionEngine_O::static_creator);
TAGGED_POINTER_FIX(llvmo::Metadata_O::static_creator);
SMART_PTR_FIX(llvmo::ResumeInst_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::AllocaInst_O::___staticClass);
TAGGED_POINTER_FIX(core::LeafSNode_O::static_creator);
SMART_PTR_FIX(llvmo::SequentialType_O::___staticClass);
SMART_PTR_FIX(core::SymbolToEnumConverter_O::___staticClassSymbol);
SMART_PTR_FIX(core::StringInputStream_O::___staticClass);
SMART_PTR_FIX(llvmo::User_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Attribute_O::___staticClass);
SMART_PTR_FIX(core::LexicalEnvironment_O::___staticClass);
SMART_PTR_FIX(llvmo::DIScope_O::___staticClass);
SMART_PTR_FIX(llvmo::ReturnInst_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::PassManagerBuilder_O::___staticClassSymbol);
SMART_PTR_FIX(core::LogicalPathname_O::___staticClass);
SMART_PTR_FIX(core::Pointer_O::___staticClassSymbol);
SMART_PTR_FIX(core::SourcePosInfo_O::___staticClass);
SMART_PTR_FIX(core::FileStream_O::___staticClassSymbol);
SMART_PTR_FIX(core::UserData_O::___staticClass);
TAGGED_POINTER_FIX(core::PosixTime_O::static_creator);
SMART_PTR_FIX(core::SynonymStream_O::___staticClass);
SMART_PTR_FIX(core::Number_O::___staticClass);
SMART_PTR_FIX(llvmo::TargetLibraryInfo_O::___staticClass);
SMART_PTR_FIX(core::IntArray_O::___staticClass);
TAGGED_POINTER_FIX(core::ConcatenatedStream_O::static_creator);
SMART_PTR_FIX(clbind::ClassRegistry_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::MacroletEnvironment_O::static_creator);
SMART_PTR_FIX(core::EchoStream_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::ConstantInt_O::static_creator);
TAGGED_POINTER_FIX(core::FunctionValueEnvironment_O::static_creator);
TAGGED_POINTER_FIX(llvmo::VectorType_O::static_creator);
TAGGED_POINTER_FIX(llvmo::ModulePass_O::static_creator);
TAGGED_POINTER_FIX(asttooling::RegMap::RegistryData);
TAGGED_POINTER_FIX(llvmo::TerminatorInst_O::static_creator);
SMART_PTR_FIX(core::HashTable_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::SwitchInst_O::static_creator);
TAGGED_POINTER_FIX(core::CatchEnvironment_O::static_creator);
TAGGED_POINTER_FIX(core::InvocationHistoryFrameIterator_O::static_creator);
SMART_PTR_FIX(core::TagbodyEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(core::SNode_O::___staticClass);
SMART_PTR_FIX(core::Symbol_O::___staticClass);
SMART_PTR_FIX(llvmo::ConstantFP_O::___staticClass);
SMART_PTR_FIX(llvmo::FenceInst_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::ConstantDataSequential_O::static_creator);
SMART_PTR_FIX(core::Bignum_O::___staticClass);
TAGGED_POINTER_FIX(core::WeakKeyMapping_O::static_creator);
SMART_PTR_FIX(core::WrappedPointer_O::___staticClass);
SMART_PTR_FIX(core::DirectoryEntry_O::___staticClass);
SMART_PTR_FIX(llvmo::DebugInfo_O::___staticClass);
SMART_PTR_FIX(llvmo::DICompositeType_O::___staticClassSymbol);
SMART_PTR_FIX(core::BroadcastStream_O::___staticClass);
SMART_PTR_FIX(core::Vector_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::CallInst_O::___staticClass);
SMART_PTR_FIX(core::RandomState_O::___staticClass);
SMART_PTR_FIX(llvmo::APInt_O::___staticClassSymbol);
SMART_PTR_FIX(core::Real_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::MDString_O::static_creator);
SMART_PTR_FIX(llvmo::Value_O::___staticClass);
SMART_PTR_FIX(core::GlueEnvironment_O::___staticClass);
SMART_PTR_FIX(llvmo::VectorType_O::___staticClass);
TAGGED_POINTER_FIX(core::Reader_O::static_creator);
TAGGED_POINTER_FIX(core::StandardObject_O::static_creator);
TAGGED_POINTER_FIX(core::FileStatus_O::static_creator);
SMART_PTR_FIX(llvmo::FunctionPassManager_O::___staticClassSymbol);
SMART_PTR_FIX(core::StringStream_O::___staticClass);
TAGGED_POINTER_FIX(core::Str_O::static_creator);
SMART_PTR_FIX(llvmo::DIType_O::___staticClass);
SMART_PTR_FIX(core::SymbolMacroletEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(core::TagbodyFrame_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Constant_O::___staticClassSymbol);
SMART_PTR_FIX(core::Ratio_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::IRBuilder_O::static_creator);
SMART_PTR_FIX(llvmo::BasicBlock_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::EngineBuilder_O::static_creator);
TAGGED_POINTER_FIX(llvmo::ConstantFP_O::static_creator);
SMART_PTR_FIX(core::Pathname_O::___staticClass);
SMART_PTR_FIX(llvmo::CompositeType_O::___staticClassSymbol);
SMART_PTR_FIX(core::FunctionFrame_O::___staticClassSymbol);
SMART_PTR_FIX(core::LambdaListHandler_O::___staticClass);
SMART_PTR_FIX(core::SingleDispatchEffectiveMethodFunction_O::___staticClass);
TAGGED_POINTER_FIX(core::DoubleFloat_O::static_creator);
SMART_PTR_FIX(core::Integer_O::___staticClass);
SMART_PTR_FIX(core::SmallMap_O::___staticClass);
SMART_PTR_FIX(core::Package_O::___staticClass);
TAGGED_POINTER_FIX(core::CxxClass_O::static_creator);
TAGGED_POINTER_FIX(llvmo::PassManagerBase_O::static_creator);
TAGGED_POINTER_FIX(llvmo::DIFile_O::static_creator);
TAGGED_POINTER_FIX(llvmo::DIBasicType_O::static_creator);
TAGGED_POINTER_FIX(llvmo::BlockAddress_O::static_creator);
TAGGED_POINTER_FIX(core::SNode_O::static_creator);
TAGGED_POINTER_FIX(core::ExternalObject_O::static_creator);
SMART_PTR_FIX(llvmo::MDNode_O::___staticClass);
SMART_PTR_FIX(llvmo::DILexicalBlock_O::___staticClass);
SMART_PTR_FIX(core::WeakPointer_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::DISubprogram_O::___staticClass);
SMART_PTR_FIX(core::Environment_O::___staticClassSymbol);
SMART_PTR_FIX(core::DoubleFloat_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::DITypeArray_O::static_creator);
SMART_PTR_FIX(llvmo::ReturnInst_O::___staticClass);
SMART_PTR_FIX(core::Str_O::___staticClassSymbol);
SMART_PTR_FIX(core::Float_O::___staticClass);
TAGGED_POINTER_FIX(core::LogicalPathname_O::static_creator);
TAGGED_POINTER_FIX(llvmo::Function_O::static_creator);
SMART_PTR_FIX(llvmo::VAArgInst_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::HashTableEq_O::static_creator);
TAGGED_POINTER_FIX(core::BitVector_O::static_creator);
SMART_PTR_FIX(core::CxxObject_O::___staticClass);
TAGGED_POINTER_FIX(core::StandardClass_O::static_creator);
SMART_PTR_FIX(core::StringOutputStream_O::___staticClass);
SMART_PTR_FIX(core::WeakHashTable_O::___staticClass);
TAGGED_POINTER_FIX(core::AnsiStream_O::static_creator);
SMART_PTR_FIX(llvmo::TargetSubtargetInfo_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::APFloat_O::static_creator);
TAGGED_POINTER_FIX(core::UserData_O::static_creator);
TAGGED_POINTER_FIX(llvmo::CallInst_O::static_creator);
TAGGED_POINTER_FIX(core::SingleDispatchGenericFunction_O::static_creator);
TAGGED_POINTER_FIX(core::WeakPointer_O::static_creator);
SMART_PTR_FIX(core::HashTableEqualp_O::___staticClass);
SMART_PTR_FIX(core::CompileTimeEnvironment_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::UndefValue_O::static_creator);
SMART_PTR_FIX(core::ConcatenatedStream_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::DIBuilder_O::___staticClassSymbol);
SMART_PTR_FIX(core::IntArray_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::BranchInst_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::PassManager_O::static_creator);
SMART_PTR_FIX(clbind::ClassRegistry_O::___staticClass);
SMART_PTR_FIX(core::StructureClass_O::___staticClass);
SMART_PTR_FIX(llvmo::AtomicRMWInst_O::___staticClassSymbol);
SMART_PTR_FIX(core::MacroletEnvironment_O::___staticClass);
SMART_PTR_FIX(core::ForwardReferencedClass_O::___staticClass);
SMART_PTR_FIX(core::WeakKeyHashTable_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::TargetMachine_O::___staticClass);
SMART_PTR_FIX(llvmo::ConstantDataSequential_O::___staticClass);
SMART_PTR_FIX(core::CompiledFunction_O::___staticClass);
SMART_PTR_FIX(llvmo::ConstantDataArray_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::TargetLibraryInfo_O::___staticClassSymbol);
SMART_PTR_FIX(core::FileStatus_O::___staticClass);
SMART_PTR_FIX(core::ShortFloat_O::___staticClass);
TAGGED_POINTER_FIX(core::WrappedPointer_O::static_creator);
SMART_PTR_FIX(llvmo::ConstantArray_O::___staticClass);
SMART_PTR_FIX(core::IOStreamStream_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::String_O::static_creator);
SMART_PTR_FIX(core::Fixnum_dummy_O::___staticClassSymbol);
SMART_PTR_FIX(core::StandardObject_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::ConstantStruct_O::static_creator);
SMART_PTR_FIX(core::SourceManager_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::SingleFloat_dummy_O::static_creator);
TAGGED_POINTER_FIX(llvmo::SequentialType_O::static_creator);
SMART_PTR_FIX(core::WeakPointer_O::___staticClass);
TAGGED_POINTER_FIX(core::Bignum_O::static_creator);
SMART_PTR_FIX(cffi::Pointer_O::___staticClass);
SMART_PTR_FIX(core::ShortFloat_O::___staticClassSymbol);
TAGGED_POINTER_FIX(llvmo::Module_O::static_creator);
SMART_PTR_FIX(llvmo::Metadata_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::Argument_O::___staticClass);
SMART_PTR_FIX(llvmo::IndirectBrInst_O::___staticClassSymbol);
SMART_PTR_FIX(core::Rational_O::___staticClassSymbol);
SMART_PTR_FIX(core::BranchSNode_O::___staticClass);
SMART_PTR_FIX(core::DirectoryIterator_O::___staticClass);
SMART_PTR_FIX(core::RecursiveDirectoryIterator_O::___staticClass);
SMART_PTR_FIX(core::BitVectorWithFillPtr_O::___staticClass);
SMART_PTR_FIX(core::CompileTimeEnvironment_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Metaobject_O::static_creator);
TAGGED_POINTER_FIX(core::StructureObject_O::static_creator);
TAGGED_POINTER_FIX(core::BitVectorWithFillPtr_O::static_creator);
TAGGED_POINTER_FIX(core::TwoWayStream_O::static_creator);
SMART_PTR_FIX(core::T_O::___staticClassSymbol);
SMART_PTR_FIX(core::SourceFileInfo_O::___staticClassSymbol);
SMART_PTR_FIX(core::PosixTimeDuration_O::___staticClassSymbol);
SMART_PTR_FIX(core::TagbodyFrame_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::DIType_O::static_creator);
SMART_PTR_FIX(core::StackValueEnvironment_O::___staticClassSymbol);
SMART_PTR_FIX(llvmo::TerminatorInst_O::___staticClass);
SMART_PTR_FIX(llvmo::PassManagerBase_O::___staticClass);
SMART_PTR_FIX(core::ConcatenatedStream_O::___staticClass);
SMART_PTR_FIX(core::Archive_O::___staticClassSymbol);
TAGGED_POINTER_FIX(core::Function_O::static_creator);
SMART_PTR_FIX(llvmo::APInt_O::___staticClass);
TAGGED_POINTER_FIX(core::EchoStream_O::static_creator);
SMART_PTR_FIX(core::Path_O::___staticClass);
TAGGED_POINTER_FIX(llvmo::ConstantPointerNull_O::static_creator);
TAGGED_POINTER_FIX(llvmo::PassManagerBuilder_O::static_creator);
TAGGED_POINTER_FIX(llvmo::AttributeSet_O::static_creator);
SMART_PTR_FIX(core::CatchEnvironment_O::___staticClass);
#endif // defined(GC_GLOBALS)
#if defined(GC_GLOBAL_SYMBOLS)
SMART_PTR_FIX(cl::_sym_base_char);
SMART_PTR_FIX(core::_sym_libraryPath);
SMART_PTR_FIX(llvmo::_sym_Mul);
SMART_PTR_FIX(llvmo::_sym_llvm_value_p);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_MSVC);
SMART_PTR_FIX(kw::_sym_ignoreInitImage);
SMART_PTR_FIX(llvmo::_sym_PtrToInt);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v7em);
SMART_PTR_FIX(gray::_sym_stream_write_char);
SMART_PTR_FIX(cl::_sym_keywordp);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_template_value_parameter);
SMART_PTR_FIX(cl::_sym_acons);
SMART_PTR_FIX(llvmo::_sym_FPExt);
SMART_PTR_FIX(llvmo::_sym_CodeGenFileType_AssemblyFile);
SMART_PTR_FIX(cl::_sym_packagep);
SMART_PTR_FIX(cl::_sym_mapcon);
SMART_PTR_FIX(core::_sym_lambda_with_handler);
SMART_PTR_FIX(cl::_sym_probe_file);
SMART_PTR_FIX(gctools::_sym_bootstrapKindSymbols);
SMART_PTR_FIX(cl::_sym_generic_function);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_typedef);
SMART_PTR_FIX(core::_sym_wrongIndex);
SMART_PTR_FIX(core::_sym_HashTableEqualp_O);
SMART_PTR_FIX(cl::_sym_STARloadPathnameSTAR);
SMART_PTR_FIX(cl::_sym_string_LE_);
SMART_PTR_FIX(llvmo::_sym_Pass_O);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v4t);
SMART_PTR_FIX(llvmo::_sym_Module_O);
SMART_PTR_FIX(core::_sym_UnwindProtectEnvironment_O);
SMART_PTR_FIX(llvmo::_sym_ICMP_SLT);
SMART_PTR_FIX(cl::_sym_nil);
SMART_PTR_FIX(cl::_sym_acosh);
SMART_PTR_FIX(clos::_sym_compute_effective_method_function);
SMART_PTR_FIX(core::_sym_path);
SMART_PTR_FIX(ext::_sym_float_nan_string);
SMART_PTR_FIX(core::_sym__PLUS_numberOfFixedArguments_PLUS_);
SMART_PTR_FIX(cl::_sym_getOutputStreamString);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_Android);
SMART_PTR_FIX(clos::_sym_class_precedence_list);
SMART_PTR_FIX(core::_sym_end);
SMART_PTR_FIX(cl::_sym_sin);
SMART_PTR_FIX(core::_sym_quasiquote);
SMART_PTR_FIX(core::_sym_stackUsed);
SMART_PTR_FIX(kw::_sym_podSymbolMap);
SMART_PTR_FIX(llvmo::_sym_SubArchType_KalimbaSubArch_v5);
SMART_PTR_FIX(kw::_sym_fully_buffered);
SMART_PTR_FIX(llvmo::_sym_TargetMachine_O);
SMART_PTR_FIX(core::_sym_lookupSourceFileInfo);
SMART_PTR_FIX(core::_sym_fileColumn);
SMART_PTR_FIX(cl::_sym_LongFloat_O);
SMART_PTR_FIX(cl::_sym_read_from_string);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_hi_user);
SMART_PTR_FIX(core::_sym_setfSubseq);
SMART_PTR_FIX(core::_sym_unrecognizedKeywordArgumentError);
SMART_PTR_FIX(cl::_sym_maphash);
SMART_PTR_FIX(cl::_sym_nreverse);
SMART_PTR_FIX(cl::_sym_Bit);
SMART_PTR_FIX(llvmo::_sym_URem);
SMART_PTR_FIX(cl::_sym_union);
SMART_PTR_FIX(cl::_sym_char_LE_);
SMART_PTR_FIX(cl::_sym_BitVectorWithFillPtr_O);
SMART_PTR_FIX(core::_sym_STARdebugInterpretedClosureSTAR);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_class_template);
SMART_PTR_FIX(cl::_sym_string_GE_);
SMART_PTR_FIX(core::_sym_SmallMap_O);
SMART_PTR_FIX(cl::_sym_copyList);
SMART_PTR_FIX(cl::_sym_eval);
SMART_PTR_FIX(clbind::_sym_ClassRegistry_O);
SMART_PTR_FIX(sockets::_sym_ff_close);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_MIPS_loop);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_GNUX32);
SMART_PTR_FIX(kw::_sym_upcase);
SMART_PTR_FIX(core::_sym_makeStringOutputStreamFromString);
SMART_PTR_FIX(serveEvent::_sym_ll_fdset_size);
SMART_PTR_FIX(llvmo::_sym_FPTrunc);
SMART_PTR_FIX(core::_sym_type_to_symbol);
SMART_PTR_FIX(core::_sym_gdbInspect);
SMART_PTR_FIX(sockets::_sym__PLUS_EOPNOTSUPP_PLUS_);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_subroutine_type);
SMART_PTR_FIX(sockets::_sym_ll_setSockoptTimeval);
SMART_PTR_FIX(core::_sym_singleDispatchWrongNumberArgumentsError);
SMART_PTR_FIX(cl::_sym_leastPositiveDoubleFloat);
SMART_PTR_FIX(core::_sym_Pointer_O);
SMART_PTR_FIX(cl::_sym_STARmodulesSTAR);
SMART_PTR_FIX(core::_sym_STARcodeWalkerSTAR);
SMART_PTR_FIX(kw::_sym_calledFunction);
SMART_PTR_FIX(cl::_sym_sleep);
SMART_PTR_FIX(cl::_sym_read);
SMART_PTR_FIX(llvmo::_sym_ValueAsMetadata_O);
SMART_PTR_FIX(core::_sym_integerToString);
SMART_PTR_FIX(cl::_sym_clearOutput);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_namespace);
SMART_PTR_FIX(cl::_sym_leastNegativeNormalizedShortFloat);
SMART_PTR_FIX(core::_sym_unbound);
SMART_PTR_FIX(kw::_sym_end);
SMART_PTR_FIX(core::_sym_STARcircle_counterSTAR);
SMART_PTR_FIX(cl::_sym_gcd);
SMART_PTR_FIX(llvmo::_sym_LinkerPrivateLinkage);
SMART_PTR_FIX(llvmo::_sym_Sub);
SMART_PTR_FIX(llvmo::_sym_DILexicalBlock_O);
SMART_PTR_FIX(llvmo::_sym_CodeGenOpt_Aggressive);
SMART_PTR_FIX(core::_sym_WeakHashTable_O);
SMART_PTR_FIX(cl::_sym_progn);
SMART_PTR_FIX(cl::_sym_floatingPointInexact);
SMART_PTR_FIX(core::_sym_backquote_maptree);
SMART_PTR_FIX(llvmo::_sym_mdnodeGet);
SMART_PTR_FIX(cl::_sym_RandomState_O);
SMART_PTR_FIX(llvmo::_sym_DIDerivedType_O);
SMART_PTR_FIX(cl::_sym_boole_nand);
SMART_PTR_FIX(llvmo::_sym_ArchType_mipsel);
SMART_PTR_FIX(llvmo::_sym_jit);
SMART_PTR_FIX(core::_sym_STARstartRunTimeSTAR);
SMART_PTR_FIX(core::_sym_STARsharp_equal_temp_tableSTAR);
SMART_PTR_FIX(cl::_sym_terpri);
SMART_PTR_FIX(cl::_sym_namestring);
SMART_PTR_FIX(core::_sym_makeInvocationHistoryFrameIterator);
SMART_PTR_FIX(cl::_sym_string_not_lessp);
SMART_PTR_FIX(cl::_sym_leastPositiveNormalizedShortFloat);
SMART_PTR_FIX(llvmo::_sym_VendorType_NVIDIA);
SMART_PTR_FIX(cl::_sym_characterp);
SMART_PTR_FIX(cl::_sym_acos);
SMART_PTR_FIX(clos::_sym_StdClass_O);
SMART_PTR_FIX(cl::_sym_compute_restarts);
SMART_PTR_FIX(asttooling::_sym_AstVisitor_O);
SMART_PTR_FIX(llvmo::_sym_PrivateLinkage);
SMART_PTR_FIX(cl::_sym_freshLine);
SMART_PTR_FIX(cl::_sym_AMPenvironment);
SMART_PTR_FIX(core::_sym_script_dir);
SMART_PTR_FIX(sockets::_sym_ll_socketAccept_localSocket);
SMART_PTR_FIX(cl::_sym_cerror);
SMART_PTR_FIX(kw::_sym_capitalize);
SMART_PTR_FIX(core::_sym_LambdaListHandler_O);
SMART_PTR_FIX(kw::_sym_host);
SMART_PTR_FIX(core::_sym_Archive_O);
SMART_PTR_FIX(cl::_sym_writeByte);
SMART_PTR_FIX(cffi::_sym_unsigned_long);
SMART_PTR_FIX(cl::_sym_case);
SMART_PTR_FIX(cl::_sym_StructureClass_O);
SMART_PTR_FIX(llvmo::_sym_DebugLoc_O);
SMART_PTR_FIX(cl::_sym_revappend);
SMART_PTR_FIX(gray::_sym_stream_write_string);
SMART_PTR_FIX(llvmo::_sym_GlobalValue_O);
SMART_PTR_FIX(asttooling::_sym_VisitStmt);
SMART_PTR_FIX(cl::_sym_butlast);
SMART_PTR_FIX(cl::_sym_SimpleBitVector_O);
SMART_PTR_FIX(cl::_sym_stringLeftTrim);
SMART_PTR_FIX(core::_sym_getline);
SMART_PTR_FIX(kw::_sym_deleted);
SMART_PTR_FIX(core::_sym_STARprintPackageSTAR);
SMART_PTR_FIX(core::_sym_sharp_x);
SMART_PTR_FIX(kw::_sym_package);
SMART_PTR_FIX(llvmo::_sym_DLLImportLinkage);
SMART_PTR_FIX(comp::_sym_aSingleCompilerSymbol);
SMART_PTR_FIX(cl::_sym_find_restart);
SMART_PTR_FIX(sockets::_sym__PLUS_ENOBUFS_PLUS_);
SMART_PTR_FIX(core::_sym_bdsTop);
SMART_PTR_FIX(cl::_sym_mismatch);
SMART_PTR_FIX(cl::_sym_atanh);
SMART_PTR_FIX(cl::_sym_charGreaterp);
SMART_PTR_FIX(kw::_sym_pathname);
SMART_PTR_FIX(core::_sym_UserData_O);
SMART_PTR_FIX(cl::_sym_eql);
SMART_PTR_FIX(cl::_sym_STARprint_linesSTAR);
SMART_PTR_FIX(cl::_sym_STARloadTruenameSTAR);
SMART_PTR_FIX(kw::_sym_formatArguments);
SMART_PTR_FIX(llvmo::_sym_AttributeSet_O);
SMART_PTR_FIX(llvmo::_sym_OSType_AIX);
SMART_PTR_FIX(cffi::_sym_long);
SMART_PTR_FIX(cl::_sym__MINUS_);
SMART_PTR_FIX(core::_sym_backquote_remove_tokens);
SMART_PTR_FIX(llvmo::_sym_CodeGenOpt_None);
SMART_PTR_FIX(llvmo::_sym_RelocModel);
SMART_PTR_FIX(cl::_sym_STARprint_pprint_dispatchSTAR);
SMART_PTR_FIX(core::_sym_classNameAsString);
SMART_PTR_FIX(llvmo::_sym_ArchType_systemz);
SMART_PTR_FIX(core::_sym_dlsym);
SMART_PTR_FIX(llvmo::_sym_UnreachableInst_O);
SMART_PTR_FIX(cl::_sym_floatSign);
SMART_PTR_FIX(llvmo::_sym_InsertPoint_O);
SMART_PTR_FIX(sockets::_sym_ll_dup);
SMART_PTR_FIX(cl::_sym_simpleError);
SMART_PTR_FIX(cl::_sym_simpleCondition);
SMART_PTR_FIX(cffi::_sym_PERCENTforeign_type_size);
SMART_PTR_FIX(cl::_sym_string_EQ_);
SMART_PTR_FIX(cl::_sym_read_delimited_list);
SMART_PTR_FIX(cl::_sym_echo_stream_input_stream);
SMART_PTR_FIX(core::_sym_acosh);
SMART_PTR_FIX(cl::_sym_shadowing_import);
SMART_PTR_FIX(llvmo::_sym_AttributeStackProtect);
SMART_PTR_FIX(cl::_sym_schar);
SMART_PTR_FIX(llvmo::_sym_DIBasicType_O);
SMART_PTR_FIX(kw::_sym_landingPadFrame);
SMART_PTR_FIX(ext::_sym__PLUS_processErrorOutput_PLUS_);
SMART_PTR_FIX(cl::_sym_floor);
SMART_PTR_FIX(gray::_sym_open_stream_p);
SMART_PTR_FIX(kw::_sym_new_version);
SMART_PTR_FIX(kw::_sym_and);
SMART_PTR_FIX(serveEvent::_sym_ll_fd_zero);
SMART_PTR_FIX(cl::_sym_cdr);
SMART_PTR_FIX(cl::_sym_error);
SMART_PTR_FIX(sockets::_sym_ll_socket_errno);
SMART_PTR_FIX(kw::_sym_debugStartup);
SMART_PTR_FIX(cl::_sym_do);
SMART_PTR_FIX(cl::_sym_mostNegativeSingleFloat);
SMART_PTR_FIX(core::_sym_reader_double_quote_string);
SMART_PTR_FIX(llvmo::_sym_PassManager_O);
SMART_PTR_FIX(cl::_sym_Complex_O);
SMART_PTR_FIX(clbind::_sym_STARtheClassRegistrySTAR);
SMART_PTR_FIX(cl::_sym_notany);
SMART_PTR_FIX(cl::_sym_STARstandard_outputSTAR);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_GNU);
SMART_PTR_FIX(cl::_sym_truncate);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_catch_block);
SMART_PTR_FIX(core::_sym_backquote_attach_append);
SMART_PTR_FIX(cl::_sym_STARload_printSTAR);
SMART_PTR_FIX(core::_sym_test_not);
SMART_PTR_FIX(cl::_sym_streamp);
SMART_PTR_FIX(cl::_sym_pprint_dispatch);
SMART_PTR_FIX(llvmo::_sym_GeneralDynamicTLSModel);
SMART_PTR_FIX(llvmo::_sym_DW_LANG_COMMON_LISP);
SMART_PTR_FIX(cl::_sym_AMPaux);
SMART_PTR_FIX(core::_sym_HashTableEq_O);
SMART_PTR_FIX(cl::_sym_translateLogicalPathname);
SMART_PTR_FIX(core::_sym_macroexpand_default);
SMART_PTR_FIX(llvmo::_sym_And);
SMART_PTR_FIX(sockets::_sym_ll_socketPeername_inetSocket);
SMART_PTR_FIX(cffi::_sym_unsigned_long_long);
SMART_PTR_FIX(cl::_sym_STARload_verboseSTAR);
SMART_PTR_FIX(core::_sym_bformat);
SMART_PTR_FIX(cl::_sym_SignedByte);
SMART_PTR_FIX(core::_sym_dumpTaggedFixnum);
SMART_PTR_FIX(core::_sym_LightUserData_O);
SMART_PTR_FIX(cffi::_sym_PERCENTload_foreign_library);
SMART_PTR_FIX(cl::_sym_gentemp);
SMART_PTR_FIX(core::_sym_rem_sysprop);
SMART_PTR_FIX(cl::_sym_list);
SMART_PTR_FIX(llvmo::_sym_STARaccumulatedLlvmFinalizationTimeSTAR);
SMART_PTR_FIX(llvmo::_sym_CodeGenFileType_Null);
SMART_PTR_FIX(llvmo::_sym_attributesGet);
SMART_PTR_FIX(asttooling::_sym_bind);
SMART_PTR_FIX(kw::_sym_object);
SMART_PTR_FIX(llvmo::_sym_CodeModel_Default);
SMART_PTR_FIX(core::_sym_setCurrentWorkingDirectory);
SMART_PTR_FIX(llvmo::_sym_UIToFP);
SMART_PTR_FIX(llvmo::_sym_ICMP_SGE);
SMART_PTR_FIX(ext::_sym__PLUS_processStandardOutput_PLUS_);
SMART_PTR_FIX(llvmo::_sym__PLUS_DebugMetadataVersion_PLUS_);
SMART_PTR_FIX(kw::_sym_brcl);
SMART_PTR_FIX(cl::_sym_eq);
SMART_PTR_FIX(llvmo::_sym_CodeGenOpt);
SMART_PTR_FIX(llvmo::_sym_Nand);
SMART_PTR_FIX(core::_sym_SourceFileInfo_O);
SMART_PTR_FIX(sockets::_sym__PLUS_ECONNREFUSED_PLUS_);
SMART_PTR_FIX(cl::_sym_prin1);
SMART_PTR_FIX(cl::_sym_method);
SMART_PTR_FIX(core::_sym_isSubClassOf);
SMART_PTR_FIX(cl::_sym_pi);
SMART_PTR_FIX(ext::_sym_aSingleExtSymbol);
SMART_PTR_FIX(llvmo::_sym_UnaryInstruction_O);
SMART_PTR_FIX(cl::_sym_floatingPointOverflow);
SMART_PTR_FIX(cl::_sym_stream_external_format);
SMART_PTR_FIX(cl::_sym_compute_applicable_methods);
SMART_PTR_FIX(cl::_sym_progv);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_DONTROUTE_PLUS_);
SMART_PTR_FIX(sockets::_sym__PLUS_sock_stream_PLUS_);
SMART_PTR_FIX(llvmo::_sym_SequentiallyConsistent);
SMART_PTR_FIX(cl::_sym_STARmacroexpand_hookSTAR);
SMART_PTR_FIX(llvmo::_sym_FCMP_OGE);
SMART_PTR_FIX(llvmo::_sym_ArchType_sparcv9);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v8);
SMART_PTR_FIX(core::_sym_dynamicGo);
SMART_PTR_FIX(cl::_sym_symbolName);
SMART_PTR_FIX(cl::_sym_consp);
SMART_PTR_FIX(cl::_sym_char_GE_);
SMART_PTR_FIX(llvmo::_sym_OSType_MacOSX);
SMART_PTR_FIX(core::_sym_Reader_O);
SMART_PTR_FIX(llvmo::_sym__PLUS_ClaspMainFunctionName_PLUS_);
SMART_PTR_FIX(cl::_sym_cons);
SMART_PTR_FIX(core::_sym_sharedReferenceCountedPointer);
SMART_PTR_FIX(cl::_sym_boole);
SMART_PTR_FIX(core::_sym_file_kind);
SMART_PTR_FIX(sockets::_sym__PLUS_ENOMEM_PLUS_);
SMART_PTR_FIX(cl::_sym_programError);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_entry_point);
SMART_PTR_FIX(core::_sym_LoadArchive_O);
SMART_PTR_FIX(ext::_sym_annotate);
SMART_PTR_FIX(cl::_sym_charNotGreaterp);
SMART_PTR_FIX(kw::_sym_bigEndian);
SMART_PTR_FIX(cl::_sym_single_float);
SMART_PTR_FIX(kw::_sym_back);
SMART_PTR_FIX(llvmo::_sym_ObjectFormatType_COFF);
SMART_PTR_FIX(clbind::_sym_ClassRep_O);
SMART_PTR_FIX(sockets::_sym_ll_getSockoptLinger);
SMART_PTR_FIX(cl::_sym_catch);
SMART_PTR_FIX(sockets::_sym_ll_strerror);
SMART_PTR_FIX(llvmo::_sym_APInt_O);
SMART_PTR_FIX(cl::_sym_callNextMethod);
SMART_PTR_FIX(llvmo::_sym_AttributeReadOnly);
SMART_PTR_FIX(cl::_sym_unboundSlot);
SMART_PTR_FIX(cl::_sym_leastPositiveNormalizedDoubleFloat);
SMART_PTR_FIX(core::_sym_instance);
SMART_PTR_FIX(llvmo::_sym_RelocModel_Static);
SMART_PTR_FIX(llvmo::_sym_FPToSI);
SMART_PTR_FIX(llvmo::_sym_ArchType_ppc64);
SMART_PTR_FIX(llvmo::_sym_OSType_Solaris);
SMART_PTR_FIX(cl::_sym_sinh);
SMART_PTR_FIX(kw::_sym_docstring);
SMART_PTR_FIX(cl::_sym_log);
SMART_PTR_FIX(core::_sym_ifDoesNotExist);
SMART_PTR_FIX(llvmo::_sym_ExternalLinkage);
SMART_PTR_FIX(core::_sym_size_t);
SMART_PTR_FIX(llvmo::_sym_VendorType_Freescale);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_class_type);
SMART_PTR_FIX(cl::_sym_makeStringOutputStream);
SMART_PTR_FIX(llvmo::_sym_TargetSubtargetInfo_O);
SMART_PTR_FIX(cl::_sym_clrhash);
SMART_PTR_FIX(llvmo::_sym_LoadInst_O);
SMART_PTR_FIX(core::_sym_sharp_asterisk);
SMART_PTR_FIX(core::_sym_DirectoryEntry_O);
SMART_PTR_FIX(llvmo::_sym_CommonLinkage);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_thrown_type);
SMART_PTR_FIX(cl::_sym_char_NE_);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_lexical_block);
SMART_PTR_FIX(cl::_sym_logorc2);
SMART_PTR_FIX(cl::_sym_mostPositiveSingleFloat);
SMART_PTR_FIX(core::_sym__PLUS_ecl_syntax_progv_list_PLUS_);
SMART_PTR_FIX(core::_sym_macro);
SMART_PTR_FIX(cl::_sym_reverse);
SMART_PTR_FIX(core::_sym_STARechoReplReadSTAR);
SMART_PTR_FIX(llvmo::_sym_AvailableExternallyLinkage);
SMART_PTR_FIX(kw::_sym_macro_function);
SMART_PTR_FIX(sockets::_sym__PLUS_TRY_AGAIN_PLUS_);
SMART_PTR_FIX(llvmo::_sym_PassManagerBase_O);
SMART_PTR_FIX(cl::_sym_apply);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_common_block);
SMART_PTR_FIX(cl::_sym_printNotReadableObject);
SMART_PTR_FIX(llvmo::_sym_Or);
SMART_PTR_FIX(llvmo::_sym_FIRST_FCMP_PREDICATE);
SMART_PTR_FIX(cl::_sym_symbolValue);
SMART_PTR_FIX(sockets::_sym__PLUS_clasp_stream_mode_io_PLUS_);
SMART_PTR_FIX(cl::_sym_simpleWarning);
SMART_PTR_FIX(core::_sym_rem_f);
SMART_PTR_FIX(cl::_sym_peekChar);
SMART_PTR_FIX(kw::_sym_case);
SMART_PTR_FIX(llvmo::_sym_Constant_O);
SMART_PTR_FIX(core::_sym_theClibBacktraceFunctionSymbol);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_access_declaration);
SMART_PTR_FIX(llvmo::_sym_moduleFlagAppend);
SMART_PTR_FIX(gray::_sym_close);
SMART_PTR_FIX(llvmo::_sym_ICMP_EQ);
SMART_PTR_FIX(core::_sym_findFileInLispPath);
SMART_PTR_FIX(cl::_sym_leastPositiveLongFloat);
SMART_PTR_FIX(core::_sym_probe);
SMART_PTR_FIX(core::_sym_coerceToFilename);
SMART_PTR_FIX(llvmo::_sym_moduleFlagOverride);
SMART_PTR_FIX(core::_sym_IOFileStream_O);
SMART_PTR_FIX(core::_sym_sharp_dot);
SMART_PTR_FIX(cl::_sym_make_symbol);
SMART_PTR_FIX(cl::_sym_STARreadDefaultFloatFormatSTAR);
SMART_PTR_FIX(core::_sym_streamLinenumber);
SMART_PTR_FIX(gray::_sym_stream_read_sequence);
SMART_PTR_FIX(llvmo::_sym_moduleFlagWarning);
SMART_PTR_FIX(core::_sym_copy_subarray);
SMART_PTR_FIX(kw::_sym_littleEndian);
SMART_PTR_FIX(sockets::_sym_ll_socketBind_localSocket);
SMART_PTR_FIX(llvmo::_sym_RelocModel_DynamicNoPIC);
SMART_PTR_FIX(cl::_sym_symbolPackage);
SMART_PTR_FIX(core::_sym_dladdr);
SMART_PTR_FIX(core::_sym_setfElt);
SMART_PTR_FIX(llvmo::_sym_FCMP_OEQ);
SMART_PTR_FIX(llvmo::_sym_ArchType_amdil64);
SMART_PTR_FIX(core::_sym_tsp);
SMART_PTR_FIX(asttooling::_sym_VisitType);
SMART_PTR_FIX(llvmo::_sym_STARrunTimeExecutionEngineSTAR);
SMART_PTR_FIX(cl::_sym_Ratio_O);
SMART_PTR_FIX(core::_sym_smartPointerDetails);
SMART_PTR_FIX(kw::_sym_target_os_darwin);
SMART_PTR_FIX(clos::_sym_aSingleClosSymbol);
SMART_PTR_FIX(cl::_sym_make_two_way_stream);
SMART_PTR_FIX(llvmo::_sym_ICMP_NE);
SMART_PTR_FIX(cl::_sym_streamError);
SMART_PTR_FIX(kw::_sym_load_toplevel);
SMART_PTR_FIX(core::_sym_integer_divide);
SMART_PTR_FIX(llvmo::_sym_VendorType_IBM);
SMART_PTR_FIX(llvmo::_sym_CompositeType_O);
SMART_PTR_FIX(kw::_sym_downcase);
SMART_PTR_FIX(core::_sym_sequence_start_end);
SMART_PTR_FIX(kw::_sym_body);
SMART_PTR_FIX(kw::_sym_allow_other_keys);
SMART_PTR_FIX(cl::_sym_multiple_value_prog1);
SMART_PTR_FIX(core::_sym_STARbq_clobberableSTAR);
SMART_PTR_FIX(cl::_sym_force_output);
SMART_PTR_FIX(comp::_sym_STARall_functions_for_one_compileSTAR);
SMART_PTR_FIX(core::_sym_ArrayDisplaced_O);
SMART_PTR_FIX(cl::_sym_get);
SMART_PTR_FIX(llvmo::_sym_DIBuilder_O);
SMART_PTR_FIX(cl::_sym_dynamic_extent);
SMART_PTR_FIX(core::_sym_STARdocumentation_databaseSTAR);
SMART_PTR_FIX(llvmo::_sym_StructType_O);
SMART_PTR_FIX(cl::_sym_mapl);
SMART_PTR_FIX(cl::_sym_concatenated_stream_streams);
SMART_PTR_FIX(core::_sym_dimensions);
SMART_PTR_FIX(core::_sym_io);
SMART_PTR_FIX(core::_sym_key);
SMART_PTR_FIX(cl::_sym_vectorPushExtend);
SMART_PTR_FIX(cl::_sym__TIMES_);
SMART_PTR_FIX(cl::_sym__PLUS_);
SMART_PTR_FIX(cl::_sym_file_write_date);
SMART_PTR_FIX(llvmo::_sym_Xchg);
SMART_PTR_FIX(cl::_sym_character);
SMART_PTR_FIX(core::_sym_environmentList);
SMART_PTR_FIX(cl::_sym_tagbody);
SMART_PTR_FIX(sockets::_sym_ll_setSockoptLinger);
SMART_PTR_FIX(kw::_sym_append);
SMART_PTR_FIX(serveEvent::_sym_ll_serveEventWithTimeout);
SMART_PTR_FIX(kw::_sym_crlf);
SMART_PTR_FIX(core::_sym_bitArrayOp);
SMART_PTR_FIX(cl::_sym_mostNegativeDoubleFloat);
SMART_PTR_FIX(cl::_sym_mapcar);
SMART_PTR_FIX(cffi::_sym_foreign_symbol_pointer);
SMART_PTR_FIX(core::_sym_unquote_nsplice);
SMART_PTR_FIX(llvmo::_sym_FCMP_OGT);
SMART_PTR_FIX(llvmo::_sym_ArchType_nvptx);
SMART_PTR_FIX(core::_sym_double_backquote);
SMART_PTR_FIX(cffi::_sym_short);
SMART_PTR_FIX(cl::_sym_vector);
SMART_PTR_FIX(llvmo::_sym_ImmutablePass_O);
SMART_PTR_FIX(cl::_sym_hash_table);
SMART_PTR_FIX(llvmo::_sym_ArchType_arm);
SMART_PTR_FIX(cl::_sym_undefinedFunction);
SMART_PTR_FIX(core::_sym_sorted);
SMART_PTR_FIX(ext::_sym_setenv);
SMART_PTR_FIX(llvmo::_sym_STARglobal_value_linkage_typesSTAR);
SMART_PTR_FIX(cl::_sym_elt);
SMART_PTR_FIX(core::_sym_fixnum_number_of_bits);
SMART_PTR_FIX(cl::_sym_sequence);
SMART_PTR_FIX(core::_sym_WeakKeyMapping_O);
SMART_PTR_FIX(cl::_sym_divisionByZero);
SMART_PTR_FIX(core::_sym_signalSimpleError);
SMART_PTR_FIX(ext::_sym_system);
SMART_PTR_FIX(core::_sym_lispCodePath);
SMART_PTR_FIX(cl::_sym_hostNamestring);
SMART_PTR_FIX(llvmo::_sym_LLVMDebugVersion9);
SMART_PTR_FIX(llvmo::_sym_ObjectFormatType_ELF);
SMART_PTR_FIX(llvmo::_sym_DISubroutineType_O);
SMART_PTR_FIX(core::_sym_sharp_plus);
SMART_PTR_FIX(core::_sym_RegexMatch_O);
SMART_PTR_FIX(sockets::_sym_ll_getSockoptTimeval);
SMART_PTR_FIX(llvmo::_sym_CrossThread);
SMART_PTR_FIX(kw::_sym_givenNumberOfArguments);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_subrange_type);
SMART_PTR_FIX(llvmo::_sym_ArchType_le32);
SMART_PTR_FIX(cl::_sym_describe);
SMART_PTR_FIX(cl::_sym_read_preserving_whitespace);
SMART_PTR_FIX(core::_sym_ihsPrev);
SMART_PTR_FIX(cl::_sym_printNotReadable);
SMART_PTR_FIX(core::_sym_backquote_simplify);
SMART_PTR_FIX(core::_sym_tooManyArgumentsError);
SMART_PTR_FIX(core::_sym_bq_bracket);
SMART_PTR_FIX(cl::_sym_STARstandard_inputSTAR);
SMART_PTR_FIX(core::_sym_CandoException_O);
SMART_PTR_FIX(kw::_sym_test);
SMART_PTR_FIX(llvmo::_sym_ArchType_sparc);
SMART_PTR_FIX(cl::_sym_input_stream_p);
SMART_PTR_FIX(cffi::_sym_PERCENTmem_ref);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_common_inclusion);
SMART_PTR_FIX(llvmo::_sym_OSType_NaCl);
SMART_PTR_FIX(clos::_sym_standardOptimizedWriterMethod);
SMART_PTR_FIX(core::_sym_VaList_dummy_O);
SMART_PTR_FIX(kw::_sym_special);
SMART_PTR_FIX(core::_sym_sharp_backslash);
SMART_PTR_FIX(llvmo::_sym_FRem);
SMART_PTR_FIX(llvmo::_sym_CodeModel_Large);
SMART_PTR_FIX(cl::_sym_rest);
SMART_PTR_FIX(cl::_sym_lognor);
SMART_PTR_FIX(cl::_sym_ConcatenatedStream_O);
SMART_PTR_FIX(core::_sym_item);
SMART_PTR_FIX(kw::_sym_invalid_character);
SMART_PTR_FIX(core::_sym_symbolMacroletLambda);
SMART_PTR_FIX(llvmo::_sym_LinkOnceAnyLinkage);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_packed_type);
SMART_PTR_FIX(llvmo::_sym_ArchType_le64);
SMART_PTR_FIX(cl::_sym_charDowncase);
SMART_PTR_FIX(llvmo::_sym_IndirectBrInst_O);
SMART_PTR_FIX(sockets::_sym_ll_socketAccept_inetSocket);
SMART_PTR_FIX(kw::_sym_broken_link);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_rvalue_reference_type);
SMART_PTR_FIX(asttooling::_sym_create);
SMART_PTR_FIX(core::_sym_dlopen);
SMART_PTR_FIX(core::_sym_RuntimeVisibleEnvironment_O);
SMART_PTR_FIX(core::_sym_isNil);
SMART_PTR_FIX(cl::_sym_remove);
SMART_PTR_FIX(core::_sym_structurep);
SMART_PTR_FIX(core::_sym_sharp_equal);
SMART_PTR_FIX(cl::_sym_multipleValueSetq);
SMART_PTR_FIX(cl::_sym_first);
SMART_PTR_FIX(llvmo::_sym_writeBitcodeToFile);
SMART_PTR_FIX(llvmo::_sym_InvokeInst_O);
SMART_PTR_FIX(kw::_sym_requiredNumberOfArguments);
SMART_PTR_FIX(cl::_sym_macroexpand_1);
SMART_PTR_FIX(core::_sym_sharp_p);
SMART_PTR_FIX(cl::_sym_boole_c1);
SMART_PTR_FIX(cl::_sym_boole_ior);
SMART_PTR_FIX(gray::_sym_stream_force_output);
SMART_PTR_FIX(cl::_sym_filePosition);
SMART_PTR_FIX(cl::_sym_charEqual);
SMART_PTR_FIX(llvmo::_sym_ConstantFP_O);
SMART_PTR_FIX(cl::_sym_userHomedirPathname);
SMART_PTR_FIX(kw::_sym_key);
SMART_PTR_FIX(core::_sym_reader_feature_p);
SMART_PTR_FIX(cl::_sym_makePackage);
SMART_PTR_FIX(core::_sym_lookupLoadTimeSymbol);
SMART_PTR_FIX(core::_sym_STARexecutable_nameSTAR);
SMART_PTR_FIX(llvmo::_sym_DLLExportLinkage);
SMART_PTR_FIX(llvmo::_sym_STARmostRecentLlvmFinalizationTimeSTAR);
SMART_PTR_FIX(gray::_sym_stream_terpri);
SMART_PTR_FIX(cleavirPrimops::_sym_callWithVariableBound);
SMART_PTR_FIX(gray::_sym_stream_write_sequence);
SMART_PTR_FIX(core::_sym_SymbolToEnumConverter_O);
SMART_PTR_FIX(asttooling::_sym_x);
SMART_PTR_FIX(llvmo::_sym_ExternalWeakLinkage);
SMART_PTR_FIX(llvmo::_sym_SIToFP);
SMART_PTR_FIX(llvmo::_sym_SubArchType_KalimbaSubArch_v3);
SMART_PTR_FIX(cl::_sym_readerError);
SMART_PTR_FIX(llvmo::_sym_TargetLibraryInfo_O);
SMART_PTR_FIX(kw::_sym_instance);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_TYPE_PLUS_);
SMART_PTR_FIX(cl::_sym_pathname);
SMART_PTR_FIX(llvmo::_sym_LLVMContext_O);
SMART_PTR_FIX(cl::_sym_setMacroCharacter);
SMART_PTR_FIX(cl::_sym_cos);
SMART_PTR_FIX(kw::_sym_address_model_64);
SMART_PTR_FIX(core::_sym_classifyLetVariablesAndDeclares);
SMART_PTR_FIX(core::_sym_coerceToPhysicalPathname);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_EABIHF);
SMART_PTR_FIX(cl::_sym_logand);
SMART_PTR_FIX(llvmo::_sym_ConstantStruct_O);
SMART_PTR_FIX(sockets::_sym_ll_autoCloseTwoWayStream);
SMART_PTR_FIX(llvmo::_sym_ArchType_ppc);
SMART_PTR_FIX(kw::_sym__uid);
SMART_PTR_FIX(cl::_sym_boole_2);
SMART_PTR_FIX(kw::_sym_cclasp);
SMART_PTR_FIX(core::_sym__PLUS_executableName_PLUS_);
SMART_PTR_FIX(cl::_sym_leastNegativeShortFloat);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_namelist_item);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_variant);
SMART_PTR_FIX(cl::_sym_fmakunbound);
SMART_PTR_FIX(core::_sym_VectorDisplaced_O);
SMART_PTR_FIX(core::_sym_sharp_a);
SMART_PTR_FIX(core::_sym_instanceClassSet);
SMART_PTR_FIX(core::_sym_MacroletEnvironment_O);
SMART_PTR_FIX(llvmo::_sym_Xor);
SMART_PTR_FIX(asttooling::_sym_onEndOfTranslationUnit);
SMART_PTR_FIX(llvmo::_sym_Metadata_O);
SMART_PTR_FIX(cl::_sym_clearInput);
SMART_PTR_FIX(cl::_sym_STARprint_escapeSTAR);
SMART_PTR_FIX(cl::_sym_boole_set);
SMART_PTR_FIX(cl::_sym_destructuring_bind);
SMART_PTR_FIX(cl::_sym_two_way_stream_input_stream);
SMART_PTR_FIX(core::_sym_serialize);
SMART_PTR_FIX(kw::_sym_compile_toplevel);
SMART_PTR_FIX(cl::_sym_getInternalRealTime);
SMART_PTR_FIX(cl::_sym_TwoWayStream_O);
SMART_PTR_FIX(llvmo::_sym_ArchType_mips64el);
SMART_PTR_FIX(cl::_sym_numerator);
SMART_PTR_FIX(llvmo::_sym_makeStringGlobal);
SMART_PTR_FIX(gray::_sym_streamClearInput);
SMART_PTR_FIX(core::_sym_backquote_frob);
SMART_PTR_FIX(cl::_sym_listAllPackages);
SMART_PTR_FIX(kw::_sym_rtld_self);
SMART_PTR_FIX(gray::_sym_stream_clear_output);
SMART_PTR_FIX(cffi::_sym_int);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_module);
SMART_PTR_FIX(core::_sym_mpsGarbageCollection);
SMART_PTR_FIX(llvmo::_sym_ArchType_x86);
SMART_PTR_FIX(llvmo::_sym_AtomicCmpXchgInst_O);
SMART_PTR_FIX(llvmo::_sym_MDString_O);
SMART_PTR_FIX(core::_sym_singleDispatchTooManyArgumentsError);
SMART_PTR_FIX(cl::_sym_defvar);
SMART_PTR_FIX(cl::_sym_space);
SMART_PTR_FIX(llvmo::_sym_STARnumberOfLlvmFinalizationsSTAR);
SMART_PTR_FIX(core::_sym_STARllvmFunctionNameHookSTAR);
SMART_PTR_FIX(llvmo::_sym_FCMP_UNO);
SMART_PTR_FIX(cl::_sym_pathnameMatchP);
SMART_PTR_FIX(llvmo::_sym_ArchType);
SMART_PTR_FIX(core::_sym_separatePairList);
SMART_PTR_FIX(llvmo::_sym_SingleThread);
SMART_PTR_FIX(llvmo::_sym_RelocModel_PIC_);
SMART_PTR_FIX(llvmo::_sym_AquireRelease);
SMART_PTR_FIX(sockets::_sym_ll_getProtocolByName);
SMART_PTR_FIX(cl::_sym_denominator);
SMART_PTR_FIX(cl::_sym_string_equal);
SMART_PTR_FIX(cl::_sym_MultipleValuesLimit);
SMART_PTR_FIX(core::_sym_bq_remove_tokens);
SMART_PTR_FIX(cl::_sym_StandardObject_O);
SMART_PTR_FIX(kw::_sym_use_boehm);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_label);
SMART_PTR_FIX(cl::_sym_Function_O);
SMART_PTR_FIX(kw::_sym_use_mps);
SMART_PTR_FIX(llvmo::_sym_Add);
SMART_PTR_FIX(core::_sym_fromTaggedFixnum);
SMART_PTR_FIX(core::_sym_reader_comma_form);
SMART_PTR_FIX(cl::_sym_makeArray);
SMART_PTR_FIX(core::_sym_deserialize_xml);
SMART_PTR_FIX(llvmo::_sym_ArchType_armeb);
SMART_PTR_FIX(core::_sym_ExternalObject_O);
SMART_PTR_FIX(llvmo::_sym_OSType_Haiku);
SMART_PTR_FIX(llvmo::_sym_FMul);
SMART_PTR_FIX(core::_sym_IntArray_O);
SMART_PTR_FIX(core::_sym_WrappedPointer_O);
SMART_PTR_FIX(cl::_sym__LE_);
SMART_PTR_FIX(cl::_sym_STARquery_ioSTAR);
SMART_PTR_FIX(cl::_sym_STARprint_radixSTAR);
SMART_PTR_FIX(cl::_sym_compiled_function_p);
SMART_PTR_FIX(cl::_sym_defparameter);
SMART_PTR_FIX(cl::_sym_deleteFile);
SMART_PTR_FIX(ext::_sym_STARinspectorHookSTAR);
SMART_PTR_FIX(core::_sym_STARbq_appendSTAR);
SMART_PTR_FIX(cl::_sym_string_not_equal);
SMART_PTR_FIX(core::_sym_DirectoryIterator_O);
SMART_PTR_FIX(cffi::_sym_PERCENTforeign_type_alignment);
SMART_PTR_FIX(kw::_sym_preserve);
SMART_PTR_FIX(llvmo::_sym_OSType_Bitrig);
SMART_PTR_FIX(core::_sym_reader_backquoted_expression);
SMART_PTR_FIX(cl::_sym_fixnum);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_unspecified_type);
SMART_PTR_FIX(cffi::_sym_float);
SMART_PTR_FIX(llvmo::_sym_OSType_CUDA);
SMART_PTR_FIX(cl::_sym_UnsignedByte);
SMART_PTR_FIX(core::_sym_isTopLevelScript);
SMART_PTR_FIX(core::_sym_ihsBacktrace);
SMART_PTR_FIX(cl::_sym_or);
SMART_PTR_FIX(cl::_sym_floatingPointInvalidOperation);
SMART_PTR_FIX(cl::_sym_enoughNamestring);
SMART_PTR_FIX(cl::_sym_prog1);
SMART_PTR_FIX(cl::_sym_synonym_stream_symbol);
SMART_PTR_FIX(cl::_sym_dotimes);
SMART_PTR_FIX(cl::_sym_float);
SMART_PTR_FIX(core::_sym_conditionMessage);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_restrict_type);
SMART_PTR_FIX(llvmo::_sym_CodeModel_Small);
SMART_PTR_FIX(cl::_sym_interactive_stream_p);
SMART_PTR_FIX(cl::_sym_Number_O);
SMART_PTR_FIX(kw::_sym_line);
SMART_PTR_FIX(sockets::_sym_ll_getNameServiceErrorMessage);
SMART_PTR_FIX(cl::_sym_char_GT_);
SMART_PTR_FIX(cl::_sym_values_list);
SMART_PTR_FIX(kw::_sym_rename_and_delete);
SMART_PTR_FIX(cl::_sym_package);
SMART_PTR_FIX(llvmo::_sym_Target_O);
SMART_PTR_FIX(core::_sym_reader_skip_semicolon_comment);
SMART_PTR_FIX(sockets::_sym__PLUS_IPPROTO_TCP_PLUS_);
SMART_PTR_FIX(core::_sym_structure_slot_descriptions);
SMART_PTR_FIX(core::_sym_STARcircle_stackSTAR);
SMART_PTR_FIX(core::_sym_STARallCxxClassesSTAR);
SMART_PTR_FIX(cl::_sym_symbol);
SMART_PTR_FIX(llvmo::_sym_CallInst_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_const_type);
SMART_PTR_FIX(cl::_sym_STARdebug_ioSTAR);
SMART_PTR_FIX(core::_sym_do_write_sequence);
SMART_PTR_FIX(cl::_sym_assoc);
SMART_PTR_FIX(cl::_sym_endOfFile);
SMART_PTR_FIX(core::_sym_STARsharp_sharp_alistSTAR);
SMART_PTR_FIX(cl::_sym_min);
SMART_PTR_FIX(cl::_sym_member);
SMART_PTR_FIX(core::_sym_env);
SMART_PTR_FIX(cl::_sym_functionp);
SMART_PTR_FIX(core::_sym_atanh);
SMART_PTR_FIX(gray::_sym_stream_listen);
SMART_PTR_FIX(sockets::_sym__PLUS_EPERM_PLUS_);
SMART_PTR_FIX(cl::_sym_Package_O);
SMART_PTR_FIX(llvmo::_sym_Release);
SMART_PTR_FIX(cl::_sym_file_string_length);
SMART_PTR_FIX(llvmo::_sym_AttributeNoImplicitFloat);
SMART_PTR_FIX(sockets::_sym_ll_setSockoptInt);
SMART_PTR_FIX(cl::_sym_mostPositiveDoubleFloat);
SMART_PTR_FIX(llvmo::_sym_OSType_Darwin);
SMART_PTR_FIX(core::_sym_backquote_attach_conses);
SMART_PTR_FIX(core::_sym_globalFunction);
SMART_PTR_FIX(cl::_sym_StandardClass_O);
SMART_PTR_FIX(sockets::_sym__PLUS_NETDB_SUCCESS_PLUS_);
SMART_PTR_FIX(core::_sym_reader_quote);
SMART_PTR_FIX(cl::_sym_leastNegativeDoubleFloat);
SMART_PTR_FIX(llvmo::_sym_FPToUI);
SMART_PTR_FIX(core::_sym_STARdebugMonitorSTAR);
SMART_PTR_FIX(cl::_sym_bit);
SMART_PTR_FIX(cl::_sym_stringTrim);
SMART_PTR_FIX(core::_sym_STARuseInterpreterForEvalSTAR);
SMART_PTR_FIX(cl::_sym_decodeFloat);
SMART_PTR_FIX(gray::_sym_stream_fresh_line);
SMART_PTR_FIX(cl::_sym_char);
SMART_PTR_FIX(cl::_sym_load);
SMART_PTR_FIX(cl::_sym_wildPathnameP);
SMART_PTR_FIX(llvmo::_sym_ObjectFormatType_UnknownObjectFormat);
SMART_PTR_FIX(llvmo::_sym_ArchType_thumb);
SMART_PTR_FIX(kw::_sym_catchFrame);
SMART_PTR_FIX(llvmo::_sym_User_O);
SMART_PTR_FIX(clos::_sym_standardOptimizedReaderMethod);
SMART_PTR_FIX(llvmo::_sym_ConstantInt_O);
SMART_PTR_FIX(cl::_sym_variable);
SMART_PTR_FIX(cl::_sym_cosh);
SMART_PTR_FIX(cl::_sym_standard_char_p);
SMART_PTR_FIX(llvmo::_sym_CodeGenFileType_ObjectFile);
SMART_PTR_FIX(cl::_sym_cellError);
SMART_PTR_FIX(core::_sym_singleDispatchBadLambdaListError);
SMART_PTR_FIX(cl::_sym_nstring_downcase);
SMART_PTR_FIX(core::_sym_toTaggedFixnum);
SMART_PTR_FIX(llvmo::_sym_OSType_OpenBSD);
SMART_PTR_FIX(llvmo::_sym_OSType_Lv2);
SMART_PTR_FIX(core::_sym_evaluateVerbosity);
SMART_PTR_FIX(gctools::_sym_rampCollectAll);
SMART_PTR_FIX(cl::_sym_STARread_evalSTAR);
SMART_PTR_FIX(cl::_sym_no_applicable_method);
SMART_PTR_FIX(llvmo::_sym_RelocModel_Default);
SMART_PTR_FIX(core::_sym_STARbackquote_levelSTAR);
SMART_PTR_FIX(cl::_sym_shadow);
SMART_PTR_FIX(cl::_sym_STARbreakOnSignalsSTAR);
SMART_PTR_FIX(core::_sym_acos);
SMART_PTR_FIX(cl::_sym_fill_pointer);
SMART_PTR_FIX(cl::_sym_type_of);
SMART_PTR_FIX(llvmo::_sym_LandingPadInst_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_constant);
SMART_PTR_FIX(core::_sym_nan);
SMART_PTR_FIX(llvmo::_sym_FCMP_OLT);
SMART_PTR_FIX(llvmo::_sym_ResumeInst_O);
SMART_PTR_FIX(llvmo::_sym_MCSubtargetInfo_O);
SMART_PTR_FIX(llvmo::_sym_ICMP_SGT);
SMART_PTR_FIX(kw::_sym_changed);
SMART_PTR_FIX(core::_sym_instanceSigSet);
SMART_PTR_FIX(core::_sym_invokeInternalDebuggerFromGdb);
SMART_PTR_FIX(llvmo::_sym_WeakODRLinkage);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v5);
SMART_PTR_FIX(core::_sym_STARenvironmentPrintingTabSTAR);
SMART_PTR_FIX(llvmo::_sym_ZExt);
SMART_PTR_FIX(cl::_sym_make_sequence);
SMART_PTR_FIX(core::_sym_scharSet);
SMART_PTR_FIX(cl::_sym_the);
SMART_PTR_FIX(llvmo::_sym_VendorType);
SMART_PTR_FIX(core::_sym_walkToFindSourceInfo);
SMART_PTR_FIX(llvmo::_sym_verifyFunction);
SMART_PTR_FIX(llvmo::_sym_DebugInfo_O);
SMART_PTR_FIX(cl::_sym_STARdebuggerHookSTAR);
SMART_PTR_FIX(cl::_sym_package_shadowing_symbols);
SMART_PTR_FIX(cl::_sym_pathnameDirectory);
SMART_PTR_FIX(llvmo::_sym_AttributeZExt);
SMART_PTR_FIX(llvmo::_sym_Triple_O);
SMART_PTR_FIX(kw::_sym_class);
SMART_PTR_FIX(cl::_sym_STARdefaultPathnameDefaultsSTAR);
SMART_PTR_FIX(cl::_sym_STARpackageSTAR);
SMART_PTR_FIX(comp::_sym_STARlowLevelTracePrintSTAR);
SMART_PTR_FIX(core::_sym_backquote);
SMART_PTR_FIX(llvmo::_sym_STARglobal_ThreadLocalModesSTAR);
SMART_PTR_FIX(llvmo::_sym_FunctionPassManager_O);
SMART_PTR_FIX(cffi::_sym_uint16);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_try_block);
SMART_PTR_FIX(core::_sym_currentVisibleEnvironment);
SMART_PTR_FIX(core::_sym_BranchSNode_O);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_LINGER_PLUS_);
SMART_PTR_FIX(cl::_sym_name_char);
SMART_PTR_FIX(cl::_sym_throw);
SMART_PTR_FIX(core::_sym__PLUS_activationFrameNil_PLUS_);
SMART_PTR_FIX(cl::_sym_flet);
SMART_PTR_FIX(sockets::_sym__PLUS_EADDRINUSE_PLUS_);
SMART_PTR_FIX(cl::_sym_unread_char);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v5te);
SMART_PTR_FIX(cl::_sym_broadcast_stream_streams);
SMART_PTR_FIX(cl::_sym_nextMethodP);
SMART_PTR_FIX(core::_sym_parse_macro);
SMART_PTR_FIX(cl::_sym_restart_bind);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_ptr_to_member_type);
SMART_PTR_FIX(llvmo::_sym_ArchType_hsail);
SMART_PTR_FIX(llvmo::_sym_AttributeNoReturn);
SMART_PTR_FIX(kw::_sym_operation);
SMART_PTR_FIX(core::_sym_reader_read_double_quote_string);
SMART_PTR_FIX(core::_sym_anonymous);
SMART_PTR_FIX(kw::_sym_if_exists);
SMART_PTR_FIX(core::_sym_renameAndDelete);
SMART_PTR_FIX(cl::_sym_scaleFloat);
SMART_PTR_FIX(cl::_sym_cond);
SMART_PTR_FIX(llvmo::_sym_DICompileUnit_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_GNU_formal_parameter_pack);
SMART_PTR_FIX(llvmo::_sym_Attribute_O);
SMART_PTR_FIX(llvmo::_sym_AllocaInst_O);
SMART_PTR_FIX(cl::_sym_atom);
SMART_PTR_FIX(llvmo::_sym_ModulePass_O);
SMART_PTR_FIX(cl::_sym__GT_);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_partial_unit);
SMART_PTR_FIX(core::_sym_loadBitcode);
SMART_PTR_FIX(llvmo::_sym_LocalDynamicTLSModel);
SMART_PTR_FIX(llvmo::_sym_AttributeNoCapture);
SMART_PTR_FIX(cl::_sym_princ);
SMART_PTR_FIX(cl::_sym_logandc1);
SMART_PTR_FIX(core::_sym_Iterator_O);
SMART_PTR_FIX(cl::_sym_Character_dummy_O);
SMART_PTR_FIX(llvmo::_sym_DIFile_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_union_type);
SMART_PTR_FIX(cl::_sym_symbolFunction);
SMART_PTR_FIX(cl::_sym_vectorPush);
SMART_PTR_FIX(llvmo::_sym_DISubprogram_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_namelist);
SMART_PTR_FIX(kw::_sym_file);
SMART_PTR_FIX(llvmo::_sym_IRBuilder_O);
SMART_PTR_FIX(llvmo::_sym__PLUS_globalBootFunctionsNameSize_PLUS_);
SMART_PTR_FIX(core::_sym_alist);
SMART_PTR_FIX(core::_sym_VectorObjects_O);
SMART_PTR_FIX(cl::_sym_defsetf);
SMART_PTR_FIX(clos::_sym_std_compute_applicable_methods);
SMART_PTR_FIX(cl::_sym_car);
SMART_PTR_FIX(ext::_sym_stackVar);
SMART_PTR_FIX(core::_sym_backquote_bracket);
SMART_PTR_FIX(cl::_sym_fdefinition);
SMART_PTR_FIX(kw::_sym_print);
SMART_PTR_FIX(llvmo::_sym_NamedMDNode_O);
SMART_PTR_FIX(llvmo::_sym_FAdd);
SMART_PTR_FIX(core::_sym_STARdebugFlowControlSTAR);
SMART_PTR_FIX(sockets::_sym__PLUS_EAGAIN_PLUS_);
SMART_PTR_FIX(kw::_sym_common);
SMART_PTR_FIX(core::_sym_unquote);
SMART_PTR_FIX(kw::_sym_directory);
SMART_PTR_FIX(llvmo::_sym_OSType_Linux);
SMART_PTR_FIX(cl::_sym_string_lessp);
SMART_PTR_FIX(llvmo::_sym_DIScope_O);
SMART_PTR_FIX(core::_sym_backquote_completely_process);
SMART_PTR_FIX(cl::_sym_mergePathnames);
SMART_PTR_FIX(core::_sym_rem_record_field);
SMART_PTR_FIX(core::_sym_ActivationFrame_O);
SMART_PTR_FIX(sockets::_sym__PLUS_sock_dgram_PLUS_);
SMART_PTR_FIX(sockets::_sym_ll_get_name_service_h_errno);
SMART_PTR_FIX(kw::_sym_iclass);
SMART_PTR_FIX(llvmo::_sym_Linker_O);
SMART_PTR_FIX(core::_sym_STARinterpreterTraceSTAR);
SMART_PTR_FIX(cl::_sym_pathnameHost);
SMART_PTR_FIX(cl::_sym_ReadTable_O);
SMART_PTR_FIX(core::_sym_make_structure);
SMART_PTR_FIX(gctools::_sym_bootstrapKindsP);
SMART_PTR_FIX(cl::_sym_package_use_list);
SMART_PTR_FIX(sockets::_sym_ll_socketReceive);
SMART_PTR_FIX(llvmo::_sym_CodeModel_JITDefault);
SMART_PTR_FIX(core::_sym_STARloadSearchListSTAR);
SMART_PTR_FIX(cl::_sym_STARprint_lengthSTAR);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_CODE16);
SMART_PTR_FIX(llvmo::_sym_FunctionType_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_condition);
SMART_PTR_FIX(core::_sym_processLambdaList);
SMART_PTR_FIX(core::_sym_STARclassNameHashTableSTAR);
SMART_PTR_FIX(sockets::_sym_ll_setfNonBlockingMode);
SMART_PTR_FIX(cl::_sym_max);
SMART_PTR_FIX(ext::_sym_getEnv);
SMART_PTR_FIX(cl::_sym_print);
SMART_PTR_FIX(core::_sym_subclassp);
SMART_PTR_FIX(cl::_sym_translatePathname);
SMART_PTR_FIX(core::_sym_FunctionContainerEnvironment_O);
SMART_PTR_FIX(cl::_sym_define_method_combination);
SMART_PTR_FIX(core::_sym_isString);
SMART_PTR_FIX(llvmo::_sym_ObjectFormatType_MachO);
SMART_PTR_FIX(llvmo::_sym_PassManagerBuilder_O);
SMART_PTR_FIX(llvmo::_sym_ArchType_r600);
SMART_PTR_FIX(sockets::_sym_ll_setSockoptBool);
SMART_PTR_FIX(core::_sym_STARprintStructureSTAR);
SMART_PTR_FIX(core::_sym_mpi_rank);
SMART_PTR_FIX(cl::_sym_load_time_value);
SMART_PTR_FIX(llvmo::_sym_VendorType_BGQ);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_Cygnus);
SMART_PTR_FIX(core::_sym_STARstandard_readtableSTAR);
SMART_PTR_FIX(cl::_sym_STARreadtableSTAR);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_SNDTIMEO_PLUS_);
SMART_PTR_FIX(cl::_sym_AMPrest);
SMART_PTR_FIX(core::_sym_rehash_size);
SMART_PTR_FIX(cffi::_sym_double);
SMART_PTR_FIX(sockets::_sym__PLUS_ESOCKTNOSUPPORT_PLUS_);
SMART_PTR_FIX(llvmo::_sym_FCMP_UGT);
SMART_PTR_FIX(core::_sym__PLUS_standardReadtable_PLUS_);
SMART_PTR_FIX(cl::_sym_aref);
SMART_PTR_FIX(core::_sym_GlueEnvironment_O);
SMART_PTR_FIX(cl::_sym_exp);
SMART_PTR_FIX(core::_sym_STARenablePrintPrettySTAR);
SMART_PTR_FIX(llvmo::_sym_InternalLinkage);
SMART_PTR_FIX(gray::_sym_stream_read_byte);
SMART_PTR_FIX(llvmo::_sym_CodeModel_Medium);
SMART_PTR_FIX(llvmo::_sym_AppendingLinkage);
SMART_PTR_FIX(core::_sym_supersede);
SMART_PTR_FIX(cl::_sym_findSymbol);
SMART_PTR_FIX(cl::_sym_STARrandom_stateSTAR);
SMART_PTR_FIX(cl::_sym_make_hash_table);
SMART_PTR_FIX(core::_sym_ValueFrame_O);
SMART_PTR_FIX(cl::_sym_StringStream_O);
SMART_PTR_FIX(cl::_sym_AMPkey);
SMART_PTR_FIX(cl::_sym_locally);
SMART_PTR_FIX(cl::_sym_standard_class);
SMART_PTR_FIX(llvmo::_sym_AttributeAddressSafety);
SMART_PTR_FIX(cl::_sym_getf);
SMART_PTR_FIX(core::_sym_clock_gettime_nanoseconds);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v6t2);
SMART_PTR_FIX(llvmo::_sym_UndefValue_O);
SMART_PTR_FIX(serveEvent::_sym__PLUS_EINTR_PLUS_);
SMART_PTR_FIX(core::_sym_ensure_documentation);
SMART_PTR_FIX(cl::_sym_last);
SMART_PTR_FIX(llvmo::_sym_OSType_Minix);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v6m);
SMART_PTR_FIX(sockets::_sym__PLUS_EINVAL_PLUS_);
SMART_PTR_FIX(cl::_sym_conjugate);
SMART_PTR_FIX(cl::_sym_nbutlast);
SMART_PTR_FIX(cl::_sym_write_sequence);
SMART_PTR_FIX(kw::_sym_rtld_main_only);
SMART_PTR_FIX(core::_sym_lexical);
SMART_PTR_FIX(core::_sym_STARsilentStartupSTAR);
SMART_PTR_FIX(core::_sym_whole);
SMART_PTR_FIX(core::_sym_pathnameTranslations);
SMART_PTR_FIX(core::_sym_PosixTimeDuration_O);
SMART_PTR_FIX(cl::_sym_realpart);
SMART_PTR_FIX(llvmo::_sym_APFloat_O);
SMART_PTR_FIX(llvmo::_sym_FSub);
SMART_PTR_FIX(llvmo::_sym_STARBinaryOpsSTAR);
SMART_PTR_FIX(cl::_sym_echo_stream_output_stream);
SMART_PTR_FIX(llvmo::_sym_ConstantPointerNull_O);
SMART_PTR_FIX(cl::_sym__NE_);
SMART_PTR_FIX(core::_sym_ForwardReferencedClass_O);
SMART_PTR_FIX(cl::_sym_styleWarning);
SMART_PTR_FIX(llvmo::_sym_AttributeNoRedZone);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v6);
SMART_PTR_FIX(core::_sym_nread);
SMART_PTR_FIX(comp::_sym_compileInEnv);
SMART_PTR_FIX(core::_sym_all_keys);
SMART_PTR_FIX(core::_sym_loadSource);
SMART_PTR_FIX(cl::_sym_copySeq);
SMART_PTR_FIX(core::_sym_backquote_splicing_frob);
SMART_PTR_FIX(sockets::_sym__PLUS_clasp_stream_mode_input_PLUS_);
SMART_PTR_FIX(cl::_sym_pathnameType);
SMART_PTR_FIX(cl::_sym_string_GT_);
SMART_PTR_FIX(llvmo::_sym_getOrCreateExternalGlobal);
SMART_PTR_FIX(sockets::_sym_ll_getSockoptBool);
SMART_PTR_FIX(llvmo::_sym__PLUS_globalBootFunctionsName_PLUS_);
SMART_PTR_FIX(llvmo::_sym_FCMP_PREDICATE);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_enumerator);
SMART_PTR_FIX(cl::_sym_standard_char);
SMART_PTR_FIX(core::_sym_STARserializerArchiveSTAR);
SMART_PTR_FIX(cffi::_sym_ssize);
SMART_PTR_FIX(cl::_sym_string_not_greaterp);
SMART_PTR_FIX(kw::_sym_typeError);
SMART_PTR_FIX(gray::_sym_streamp);
SMART_PTR_FIX(cl::_sym_ash);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_template_alias);
SMART_PTR_FIX(cl::_sym_fboundp);
SMART_PTR_FIX(cffi::_sym_unsigned_short);
SMART_PTR_FIX(cl::_sym_letSTAR);
SMART_PTR_FIX(core::_sym_saveCando);
SMART_PTR_FIX(sockets::_sym__PLUS_EINTR_PLUS_);
SMART_PTR_FIX(sockets::_sym_ll_socketConnect_inetSocket);
SMART_PTR_FIX(sockets::_sym_ll_getSockoptInt);
SMART_PTR_FIX(cl::_sym_classOf);
SMART_PTR_FIX(cl::_sym_char_name);
SMART_PTR_FIX(llvmo::_sym_DIArray_O);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_GNUEABIHF);
SMART_PTR_FIX(cl::_sym_set);
SMART_PTR_FIX(cl::_sym_code_char);
SMART_PTR_FIX(core::_sym_slot);
SMART_PTR_FIX(cl::_sym_charUpcase);
SMART_PTR_FIX(cl::_sym_unintern);
SMART_PTR_FIX(cl::_sym_T);
SMART_PTR_FIX(cl::_sym_restartName);
SMART_PTR_FIX(cl::_sym_char_EQ_);
SMART_PTR_FIX(core::_sym_database_dir);
SMART_PTR_FIX(cl::_sym_string);
SMART_PTR_FIX(cl::_sym_break);
SMART_PTR_FIX(kw::_sym_absolute);
SMART_PTR_FIX(core::_sym_sourceLineColumn);
SMART_PTR_FIX(cl::_sym_AMPallow_other_keys);
SMART_PTR_FIX(core::_sym_SourceManager_O);
SMART_PTR_FIX(llvmo::_sym_OSType_UnknownOS);
SMART_PTR_FIX(llvmo::_sym_AttributeNone);
SMART_PTR_FIX(cl::_sym_makeCondition);
SMART_PTR_FIX(cl::_sym_documentation);
SMART_PTR_FIX(core::_sym_instanceRef);
SMART_PTR_FIX(kw::_sym_supersede);
SMART_PTR_FIX(core::_sym_Environment_O);
SMART_PTR_FIX(cl::_sym_simple_string_p);
SMART_PTR_FIX(cl::_sym_standardGenericFunction);
SMART_PTR_FIX(llvmo::_sym_Instruction_O);
SMART_PTR_FIX(core::_sym_SingleDispatchEffectiveMethodFunction_O);
SMART_PTR_FIX(llvmo::_sym_AttributeStackProtectReq);
SMART_PTR_FIX(llvmo::_sym_FCMP_ORD);
SMART_PTR_FIX(cl::_sym_endp);
SMART_PTR_FIX(cl::_sym_define_modify_macro);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_REUSEADDR_PLUS_);
SMART_PTR_FIX(llvmo::_sym_VAArgInst_O);
SMART_PTR_FIX(kw::_sym_stream);
SMART_PTR_FIX(gctools::_sym_garbageCollect);
SMART_PTR_FIX(kw::_sym_name);
SMART_PTR_FIX(kw::_sym_error);
SMART_PTR_FIX(cl::_sym_round);
SMART_PTR_FIX(kw::_sym_version);
SMART_PTR_FIX(cl::_sym_readCharNoHang);
SMART_PTR_FIX(cl::_sym_mostNegativeShortFloat);
SMART_PTR_FIX(kw::_sym_output);
SMART_PTR_FIX(cl::_sym_two_way_stream_output_stream);
SMART_PTR_FIX(llvmo::_sym_BitCast);
SMART_PTR_FIX(core::_sym_sharp_c);
SMART_PTR_FIX(gctools::_sym_ramp);
SMART_PTR_FIX(cl::_sym_gethash);
SMART_PTR_FIX(core::_sym_closedStream);
SMART_PTR_FIX(cl::_sym_multiple_value_call);
SMART_PTR_FIX(llvmo::_sym_LLVMDebugVersion4);
SMART_PTR_FIX(kw::_sym_start);
SMART_PTR_FIX(cl::_sym_STARerror_outputSTAR);
SMART_PTR_FIX(cl::_sym_make_string);
SMART_PTR_FIX(cl::_sym_mostNegativeLongFloat);
SMART_PTR_FIX(cl::_sym_STARprint_circleSTAR);
SMART_PTR_FIX(core::_sym_callWithVariableBound);
SMART_PTR_FIX(llvmo::_sym_FunctionPass_O);
SMART_PTR_FIX(core::_sym_sharp_o);
SMART_PTR_FIX(kw::_sym_defaults);
SMART_PTR_FIX(cl::_sym_rename_file);
SMART_PTR_FIX(cl::_sym_nth);
SMART_PTR_FIX(core::_sym_evaluateDepth);
SMART_PTR_FIX(core::_sym___init__);
SMART_PTR_FIX(cl::_sym_charNotLessp);
SMART_PTR_FIX(cl::_sym_boolean);
SMART_PTR_FIX(core::_sym_testVal);
SMART_PTR_FIX(cl::_sym_writeLine);
SMART_PTR_FIX(core::_sym_SaveArchive_O);
SMART_PTR_FIX(core::_sym_StrWithFillPtr_O);
SMART_PTR_FIX(sockets::_sym_ll_socketConnect_localSocket);
SMART_PTR_FIX(llvmo::_sym_interpreter);
SMART_PTR_FIX(core::_sym_sharp_colon);
SMART_PTR_FIX(core::_sym_defaultPathnameDefaults);
SMART_PTR_FIX(kw::_sym_up);
SMART_PTR_FIX(cl::_sym_restart);
SMART_PTR_FIX(clos::_sym_standardOptimizedReaderFunction);
SMART_PTR_FIX(llvmo::_sym_SDiv);
SMART_PTR_FIX(cl::_sym_tanh);
SMART_PTR_FIX(cl::_sym_setq);
SMART_PTR_FIX(cl::_sym_string_downcase);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_compile_unit);
SMART_PTR_FIX(core::_sym_selectPackage);
SMART_PTR_FIX(cl::_sym_readByte);
SMART_PTR_FIX(core::_sym_invocationHistoryFrame);
SMART_PTR_FIX(core::_sym_STARdebugEvalSTAR);
SMART_PTR_FIX(core::_sym_recursive_p);
SMART_PTR_FIX(cl::_sym_simple_vector_p);
SMART_PTR_FIX(cl::_sym_invoke_restart);
SMART_PTR_FIX(core::_sym_StackValueEnvironment_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_string_type);
SMART_PTR_FIX(kw::_sym_expectedType);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_base_type);
SMART_PTR_FIX(cl::_sym_ceiling);
SMART_PTR_FIX(llvmo::_sym_VendorType_BGP);
SMART_PTR_FIX(kw::_sym_debug);
SMART_PTR_FIX(core::_sym_lexicalFunction);
SMART_PTR_FIX(core::_sym_WeakPointer_O);
SMART_PTR_FIX(core::_sym_STARbq_listSTAR);
SMART_PTR_FIX(clos::_sym_std_compute_effective_method);
SMART_PTR_FIX(kw::_sym_unspecific);
SMART_PTR_FIX(core::_sym_instanceSet);
SMART_PTR_FIX(cl::_sym_constantp);
SMART_PTR_FIX(core::_sym_forget_all_single_dispatch_generic_functions);
SMART_PTR_FIX(cl::_sym_readSequence);
SMART_PTR_FIX(llvmo::_sym_makeAPWidth);
SMART_PTR_FIX(llvmo::_sym_OSType_FreeBSD);
SMART_PTR_FIX(cl::_sym_slot_value);
SMART_PTR_FIX(llvmo::_sym_DataLayoutPass_O);
SMART_PTR_FIX(cl::_sym_STARfeaturesSTAR);
SMART_PTR_FIX(llvmo::_sym_DICompositeType_O);
SMART_PTR_FIX(kw::_sym_adjustable);
SMART_PTR_FIX(cl::_sym_writeString);
SMART_PTR_FIX(core::_sym_tmv);
SMART_PTR_FIX(cl::_sym_listSTAR);
SMART_PTR_FIX(core::_sym_loadTimeValuesIds);
SMART_PTR_FIX(llvmo::_sym_LLVMDebugVersion6);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType);
SMART_PTR_FIX(kw::_sym_full);
SMART_PTR_FIX(llvmo::_sym_SequentialType_O);
SMART_PTR_FIX(core::_sym_makeStructure);
SMART_PTR_FIX(core::_sym_reader_list_allow_consing_dot);
SMART_PTR_FIX(llvmo::_sym_VendorType_Apple);
SMART_PTR_FIX(sockets::_sym__PLUS_TCP_NODELAY_PLUS_);
SMART_PTR_FIX(sockets::_sym__PLUS_EPROTONOSUPPORT_PLUS_);
SMART_PTR_FIX(cl::_sym_position);
SMART_PTR_FIX(core::_sym_STARmonitorRegisterSourceInfoSTAR);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_format_label);
SMART_PTR_FIX(llvmo::_sym_ArchType_UnknownArch);
SMART_PTR_FIX(core::_sym_environmentId);
SMART_PTR_FIX(core::_sym_STARsharp_equal_repl_tableSTAR);
SMART_PTR_FIX(cl::_sym_lognand);
SMART_PTR_FIX(core::_sym_setf_findClass);
SMART_PTR_FIX(cl::_sym_lognot);
SMART_PTR_FIX(cl::_sym_function);
SMART_PTR_FIX(comp::_sym_compileFormAndEvalWithEnv);
SMART_PTR_FIX(llvmo::_sym_module_get_function_list);
SMART_PTR_FIX(llvmo::_sym_makeAP64);
SMART_PTR_FIX(sockets::_sym__PLUS_NETDB_INTERNAL_PLUS_);
SMART_PTR_FIX(kw::_sym_direct_super_classes);
SMART_PTR_FIX(kw::_sym_arguments);
SMART_PTR_FIX(llvmo::_sym_AttributeNest);
SMART_PTR_FIX(core::_sym_adjustable);
SMART_PTR_FIX(cl::_sym_synonymStreamSymbol);
SMART_PTR_FIX(kw::_sym_array);
SMART_PTR_FIX(cl::_sym_apropos);
SMART_PTR_FIX(llvmo::_sym_AttributeNaked);
SMART_PTR_FIX(llvmo::_sym_AttributeUWTable);
SMART_PTR_FIX(llvmo::_sym_ArchType_mips64);
SMART_PTR_FIX(sockets::_sym__PLUS_af_local_PLUS_);
SMART_PTR_FIX(comp::_sym_STARimplicit_compile_hookSTAR);
SMART_PTR_FIX(llvmo::_sym_OSType_NVCL);
SMART_PTR_FIX(kw::_sym_message);
SMART_PTR_FIX(cl::_sym_simple_array);
SMART_PTR_FIX(core::_sym_SmallMultimap_O);
SMART_PTR_FIX(llvmo::_sym_makeAPInt);
SMART_PTR_FIX(kw::_sym_latin_1);
SMART_PTR_FIX(core::_sym_PosixTime_O);
SMART_PTR_FIX(llvmo::_sym_ConstantArray_O);
SMART_PTR_FIX(llvmo::_sym_AttributeByVal);
SMART_PTR_FIX(core::_sym_universalErrorHandler);
SMART_PTR_FIX(kw::_sym_relative);
SMART_PTR_FIX(core::_sym_STARfset);
SMART_PTR_FIX(core::_sym_debugLogOn);
SMART_PTR_FIX(core::_sym_STARprint_source_code_consSTAR);
SMART_PTR_FIX(cl::_sym_boole_clr);
SMART_PTR_FIX(cl::_sym_asinh);
SMART_PTR_FIX(cl::_sym_STARprint_prettySTAR);
SMART_PTR_FIX(cl::_sym_logxor);
SMART_PTR_FIX(core::_sym_unquote_splice);
SMART_PTR_FIX(core::_sym_ihsEnv);
SMART_PTR_FIX(core::_sym_backquote_null_or_quoted);
SMART_PTR_FIX(cl::_sym_macroFunction);
SMART_PTR_FIX(cl::_sym_STARprint_caseSTAR);
SMART_PTR_FIX(cl::_sym_STARterminal_ioSTAR);
SMART_PTR_FIX(llvmo::_sym_writeIrToFile);
SMART_PTR_FIX(kw::_sym_datum);
SMART_PTR_FIX(core::_sym_processDeclarations);
SMART_PTR_FIX(cl::_sym_mod);
SMART_PTR_FIX(llvmo::_sym_OSType_DragonFly);
SMART_PTR_FIX(gray::_sym_stream_interactive_p);
SMART_PTR_FIX(kw::_sym_wild_inferiors);
SMART_PTR_FIX(cl::_sym_arrayTotalSizeLimit);
SMART_PTR_FIX(llvmo::_sym_ArchType_amdil);
SMART_PTR_FIX(llvmo::_sym_AShr);
SMART_PTR_FIX(ext::_sym_specialVar);
SMART_PTR_FIX(cl::_sym_package_error);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_inheritance);
SMART_PTR_FIX(core::_sym_STARwatchDynamicBindingStackSTAR);
SMART_PTR_FIX(cl::_sym_array_rank_limit);
SMART_PTR_FIX(cl::_sym_labels);
SMART_PTR_FIX(cl::_sym_import);
SMART_PTR_FIX(cl::_sym_step);
SMART_PTR_FIX(cl::_sym_STARprint_arraySTAR);
SMART_PTR_FIX(llvmo::_sym_SwitchInst_O);
SMART_PTR_FIX(cffi::_sym_uint32);
SMART_PTR_FIX(cl::_sym_typeError);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_set_type);
SMART_PTR_FIX(core::_sym_globalSetfFunction);
SMART_PTR_FIX(cl::_sym_typep);
SMART_PTR_FIX(cl::_sym_arrayDimensionLimit);
SMART_PTR_FIX(kw::_sym_rtld_default);
SMART_PTR_FIX(core::_sym_STARdebugStartupSTAR);
SMART_PTR_FIX(llvmo::_sym_moduleFlagError);
SMART_PTR_FIX(llvmo::_sym_MDNode_O);
SMART_PTR_FIX(core::_sym_STARsourceDatabaseSTAR);
SMART_PTR_FIX(core::_sym_STARsystem_defsetf_update_functionsSTAR);
SMART_PTR_FIX(gray::_sym_stream_element_type);
SMART_PTR_FIX(core::_sym__PLUS_io_syntax_progv_list_PLUS_);
SMART_PTR_FIX(core::_sym_SingleDispatchGenericFunction_O);
SMART_PTR_FIX(core::_sym_runtimeEnvironment);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_RCVTIMEO_PLUS_);
SMART_PTR_FIX(cl::_sym_BroadcastStream_O);
SMART_PTR_FIX(core::_sym_structure_include);
SMART_PTR_FIX(cl::_sym_parseInteger);
SMART_PTR_FIX(llvmo::_sym_Value_O);
SMART_PTR_FIX(core::_sym_structureRef);
SMART_PTR_FIX(core::_sym_RecursiveDirectoryIterator_O);
SMART_PTR_FIX(cl::_sym_use_package);
SMART_PTR_FIX(llvmo::_sym_Argument_O);
SMART_PTR_FIX(cl::_sym_make_synonym_stream);
SMART_PTR_FIX(cl::_sym_Null_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_shared_type);
SMART_PTR_FIX(llvmo::_sym_DIType_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_imported_module);
SMART_PTR_FIX(kw::_sym_or);
SMART_PTR_FIX(ext::_sym_lambda_block);
SMART_PTR_FIX(core::_sym_structure_print_function);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_inlined_subroutine);
SMART_PTR_FIX(cl::_sym_Vector_O);
SMART_PTR_FIX(core::_sym_input_stream_designator);
SMART_PTR_FIX(cl::_sym_boole_xor);
SMART_PTR_FIX(core::_sym_STARcommandLineLoadEvalSequenceSTAR);
SMART_PTR_FIX(core::_sym_STARcommandLineArgumentsSTAR);
SMART_PTR_FIX(kw::_sym_formatControl);
SMART_PTR_FIX(core::_sym_structureSubtypep);
SMART_PTR_FIX(cl::_sym_HashTable_O);
SMART_PTR_FIX(ext::_sym_STARdefault_external_formatSTAR);
SMART_PTR_FIX(core::_sym_hash_equalp);
SMART_PTR_FIX(gray::_sym_stream_clear_input);
SMART_PTR_FIX(cl::_sym_read_sequence);
SMART_PTR_FIX(cl::_sym_Symbol_O);
SMART_PTR_FIX(llvmo::_sym_EngineBuilder_O);
SMART_PTR_FIX(cl::_sym_readChar);
SMART_PTR_FIX(core::_sym_debugLogOff);
SMART_PTR_FIX(kw::_sym_device);
SMART_PTR_FIX(core::_sym_STARconsing_dotSTAR);
SMART_PTR_FIX(core::_sym_printf);
SMART_PTR_FIX(llvmo::_sym_parseBitcodeFile);
SMART_PTR_FIX(llvmo::_sym_LocalExecTLSModel);
SMART_PTR_FIX(llvmo::_sym_valid);
SMART_PTR_FIX(cl::_sym_deftype);
SMART_PTR_FIX(core::_sym_FunctionValueEnvironment_O);
SMART_PTR_FIX(sockets::_sym__PLUS_SOL_SOCKET_PLUS_);
SMART_PTR_FIX(cffi::_sym_unsigned_int);
SMART_PTR_FIX(cl::_sym_array);
SMART_PTR_FIX(cl::_sym_leastNegativeLongFloat);
SMART_PTR_FIX(sockets::_sym_ll_socketBind_inetSocket);
SMART_PTR_FIX(cl::_sym_string_greaterp);
SMART_PTR_FIX(llvmo::_sym_NotThreadLocal);
SMART_PTR_FIX(gray::_sym_stream_write_byte);
SMART_PTR_FIX(cl::_sym_BitVector_O);
SMART_PTR_FIX(core::_sym_printUnreadableObjectFunction);
SMART_PTR_FIX(llvmo::_sym_LinkOnceODRAutoHideLinkage);
SMART_PTR_FIX(kw::_sym_overwrite);
SMART_PTR_FIX(llvmo::_sym_VendorType_MipsTechnologies);
SMART_PTR_FIX(sockets::_sym__PLUS_NO_RECOVERY_PLUS_);
SMART_PTR_FIX(cl::_sym_T_O);
SMART_PTR_FIX(cl::_sym_realp);
SMART_PTR_FIX(llvmo::_sym_AttributeReadNone);
SMART_PTR_FIX(cl::_sym_seriousCondition);
SMART_PTR_FIX(cl::_sym_STARtrace_outputSTAR);
SMART_PTR_FIX(core::_sym_bq_simplify);
SMART_PTR_FIX(cl::_sym_copyTree);
SMART_PTR_FIX(llvmo::_sym_Type_O);
SMART_PTR_FIX(gray::_sym_input_stream_p);
SMART_PTR_FIX(core::_sym_read_list_allow_consing_dot);
SMART_PTR_FIX(gctools::_sym_maxBootstrapKinds);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_lo_user);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_member);
SMART_PTR_FIX(cl::_sym_macroexpand);
SMART_PTR_FIX(core::_sym_exit);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_unspecified_parameters);
SMART_PTR_FIX(cl::_sym_Array_O);
SMART_PTR_FIX(cl::_sym_null);
SMART_PTR_FIX(llvmo::_sym_LLVMDebugVersion8);
SMART_PTR_FIX(core::_sym_get_sysprop);
SMART_PTR_FIX(clos::_sym_clearGfunHash);
SMART_PTR_FIX(llvmo::_sym_OSType);
SMART_PTR_FIX(cl::_sym_Bignum_O);
SMART_PTR_FIX(cl::_sym_find_package);
SMART_PTR_FIX(llvmo::_sym_ArchType_msp430);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_structure_type);
SMART_PTR_FIX(core::_sym_STARdebugReaderSTAR);
SMART_PTR_FIX(core::_sym_STARcurrent_working_directorySTAR);
SMART_PTR_FIX(core::_sym_object);
SMART_PTR_FIX(sockets::_sym__PLUS_HOST_NOT_FOUND_PLUS_);
SMART_PTR_FIX(core::_sym_STARnestedErrorDepthSTAR);
SMART_PTR_FIX(cl::_sym_format);
SMART_PTR_FIX(core::_sym_LoadTimeValues_O);
SMART_PTR_FIX(core::_sym_singleDispatchMissingDispatchArgumentError);
SMART_PTR_FIX(cl::_sym_make_list);
SMART_PTR_FIX(llvmo::_sym_ICMP_SLE);
SMART_PTR_FIX(cl::_sym_AMPoptional);
SMART_PTR_FIX(core::_sym_data);
SMART_PTR_FIX(cl::_sym_symbol_macrolet);
SMART_PTR_FIX(kw::_sym_terminating_macro_character);
SMART_PTR_FIX(llvmo::_sym_DITypeArray_O);
SMART_PTR_FIX(core::_sym_instanceClass);
SMART_PTR_FIX(cl::_sym_declare);
SMART_PTR_FIX(kw::_sym_unrecognizedKeyword);
SMART_PTR_FIX(kw::_sym_blockFrame);
SMART_PTR_FIX(cl::_sym_pathnameVersion);
SMART_PTR_FIX(kw::_sym_lambda_list_handler);
SMART_PTR_FIX(kw::_sym_FullDebug);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_RCVBUF_PLUS_);
SMART_PTR_FIX(core::_sym_process_single_dispatch_lambda_list);
SMART_PTR_FIX(core::_sym_initial_element);
SMART_PTR_FIX(cl::_sym_logicalPathnameTranslations);
SMART_PTR_FIX(cl::_sym_char_code_limit);
SMART_PTR_FIX(core::_sym_instanceSig);
SMART_PTR_FIX(llvmo::_sym_VendorType_CSR);
SMART_PTR_FIX(cl::_sym_logior);
SMART_PTR_FIX(cl::_sym_floatp);
SMART_PTR_FIX(core::_sym_record_field);
SMART_PTR_FIX(cl::_sym_if);
SMART_PTR_FIX(cl::_sym_writeChar);
SMART_PTR_FIX(core::_sym_bdsVar);
SMART_PTR_FIX(cl::_sym_logical_pathname);
SMART_PTR_FIX(cl::_sym_EchoStream_O);
SMART_PTR_FIX(core::_sym_cArgumentsLimit);
SMART_PTR_FIX(core::_sym_reader_error_unmatched_close_parenthesis);
SMART_PTR_FIX(cl::_sym_notevery);
SMART_PTR_FIX(core::_sym_STARbackquote_expand_hookSTAR);
SMART_PTR_FIX(cl::_sym_mapc);
SMART_PTR_FIX(core::_sym_lambdaName);
SMART_PTR_FIX(llvmo::_sym_VendorType_SCEI);
SMART_PTR_FIX(sockets::_sym__PLUS_clasp_stream_mode_output_PLUS_);
SMART_PTR_FIX(core::_sym_sharp_single_quote);
SMART_PTR_FIX(core::_sym_STARihsCurrentSTAR);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_with_stmt);
SMART_PTR_FIX(cl::_sym_gensym);
SMART_PTR_FIX(core::_sym_symbolMacro);
SMART_PTR_FIX(cl::_sym_specialOperatorP);
SMART_PTR_FIX(cl::_sym_internalTimeUnitsPerSecond);
SMART_PTR_FIX(cl::_sym_subtypep);
SMART_PTR_FIX(cl::_sym_unwind_protect);
SMART_PTR_FIX(ext::_sym_getenv);
SMART_PTR_FIX(llvmo::_sym_CodeGenOpt_Default);
SMART_PTR_FIX(kw::_sym_default);
SMART_PTR_FIX(core::_sym_CompileTimeEnvironment_O);
SMART_PTR_FIX(cffi::_sym_int16);
SMART_PTR_FIX(core::_sym_AMPva_rest);
SMART_PTR_FIX(core::_sym_STARpollTicksPerGcSTAR);
SMART_PTR_FIX(cl::_sym_boole_1);
SMART_PTR_FIX(core::_sym_makeSureClosClassSlotsMatchClass);
SMART_PTR_FIX(cl::_sym_maplist);
SMART_PTR_FIX(cl::_sym_string_upcase);
SMART_PTR_FIX(cl::_sym_floatDigits);
SMART_PTR_FIX(llvmo::_sym_AttributeAlignment);
SMART_PTR_FIX(gray::_sym_aSingleGraySymbol);
SMART_PTR_FIX(core::_sym_cl_fixnum_bits);
SMART_PTR_FIX(cl::_sym_write);
SMART_PTR_FIX(llvmo::_sym_SubArchType);
SMART_PTR_FIX(llvmo::_sym_SubArchType_KalimbaSubArch_v4);
SMART_PTR_FIX(llvmo::_sym_CodeGenOpt_Less);
SMART_PTR_FIX(llvmo::_sym_BlockAddress_O);
SMART_PTR_FIX(llvmo::_sym_AttributeOptimizeForSize);
SMART_PTR_FIX(cffi::_sym_size);
SMART_PTR_FIX(core::_sym_FileStatus_O);
SMART_PTR_FIX(sockets::_sym_ll_getHostByName);
SMART_PTR_FIX(llvmo::_sym_AtomicRMWInst_O);
SMART_PTR_FIX(core::_sym_color);
SMART_PTR_FIX(cl::_sym_stringp);
SMART_PTR_FIX(cl::_sym_return_from);
SMART_PTR_FIX(cl::_sym_complexp);
SMART_PTR_FIX(core::_sym_testProfileTimer);
SMART_PTR_FIX(core::_sym_TagbodyEnvironment_O);
SMART_PTR_FIX(cl::_sym_append);
SMART_PTR_FIX(llvmo::_sym_Function_O);
SMART_PTR_FIX(gctools::_sym_STARallocPatternStackSTAR);
SMART_PTR_FIX(cl::_sym_pathnamep);
SMART_PTR_FIX(core::_sym_makeLambdaListHandler);
SMART_PTR_FIX(cl::_sym_optimize);
SMART_PTR_FIX(kw::_sym_elementType);
SMART_PTR_FIX(kw::_sym_gzip);
SMART_PTR_FIX(cl::_sym_boole_and);
SMART_PTR_FIX(cl::_sym_STARprint_levelSTAR);
SMART_PTR_FIX(core::_sym_SourcePosInfo_O);
SMART_PTR_FIX(core::_sym_render);
SMART_PTR_FIX(core::_sym_STARsharp_equal_final_tableSTAR);
SMART_PTR_FIX(llvmo::_sym_AttributeEnum);
SMART_PTR_FIX(llvmo::_sym_STARAtomicRMWInstBinOpSTAR);
SMART_PTR_FIX(cl::_sym_pathnameName);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_GNUEABI);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_volatile_type);
SMART_PTR_FIX(core::_sym_make_vector);
SMART_PTR_FIX(cl::_sym_disassemble);
SMART_PTR_FIX(cl::_sym_unuse_package);
SMART_PTR_FIX(llvmo::_sym_InitialExecTLSModel);
SMART_PTR_FIX(core::_sym_STARcircleCounterSTAR);
SMART_PTR_FIX(cl::_sym_lambda);
SMART_PTR_FIX(cl::_sym_STARprint_baseSTAR);
SMART_PTR_FIX(core::_sym_set_record_field);
SMART_PTR_FIX(llvmo::_sym_PHINode_O);
SMART_PTR_FIX(llvmo::_sym_Monotonic);
SMART_PTR_FIX(cl::_sym_warn);
SMART_PTR_FIX(cl::_sym_intern);
SMART_PTR_FIX(llvmo::_sym_verifyModule);
SMART_PTR_FIX(llvmo::_sym_LinkerPrivateWeakLinkage);
SMART_PTR_FIX(core::_sym_STARsharp_equal_alistSTAR);
SMART_PTR_FIX(cl::_sym_StructureObject_O);
SMART_PTR_FIX(cl::_sym_close);
SMART_PTR_FIX(cl::_sym_callArgumentsLimit);
SMART_PTR_FIX(cl::_sym_cadr);
SMART_PTR_FIX(core::_sym_structureSet);
SMART_PTR_FIX(core::_sym_ArrayObjects_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_dwarf_procedure);
SMART_PTR_FIX(core::_sym_implementationClass);
SMART_PTR_FIX(core::_sym_sharp_b);
SMART_PTR_FIX(cl::_sym_BuiltInClass_O);
SMART_PTR_FIX(core::_sym_SexpLoadArchive_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_file_type);
SMART_PTR_FIX(llvmo::_sym_CodeGenFileType);
SMART_PTR_FIX(core::_sym_TagbodyFrame_O);
SMART_PTR_FIX(kw::_sym_internal);
SMART_PTR_FIX(cl::_sym_copyStructure);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_EABI);
SMART_PTR_FIX(llvmo::_sym_STARCmpInstPredicateSTAR);
SMART_PTR_FIX(kw::_sym_fillPointer);
SMART_PTR_FIX(llvmo::_sym_PointerType_O);
SMART_PTR_FIX(sockets::_sym__PLUS_af_inet_PLUS_);
SMART_PTR_FIX(llvmo::_sym_STARdwarfConstantsSTAR);
SMART_PTR_FIX(cl::_sym_Cons_O);
SMART_PTR_FIX(llvmo::_sym_OSType_CNK);
SMART_PTR_FIX(ext::_sym_integer8);
SMART_PTR_FIX(core::_sym_ValueEnvironment_O);
SMART_PTR_FIX(cl::_sym_expt);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_array_type);
SMART_PTR_FIX(cl::_sym_leastNegativeNormalizedLongFloat);
SMART_PTR_FIX(core::_sym_DOT);
SMART_PTR_FIX(core::_sym_ensureSingleDispatchGenericFunction);
SMART_PTR_FIX(llvmo::_sym_ObjectFormatType);
SMART_PTR_FIX(llvmo::_sym_FCMP_OLE);
SMART_PTR_FIX(cl::_sym_SynonymStream_O);
SMART_PTR_FIX(llvmo::_sym_DW_LANG_C);
SMART_PTR_FIX(clos::_sym_setFuncallableInstanceFunction);
SMART_PTR_FIX(cl::_sym_logeqv);
SMART_PTR_FIX(core::_sym_STARPATHSTAR);
SMART_PTR_FIX(cl::_sym_boundp);
SMART_PTR_FIX(core::_sym_currentDir);
SMART_PTR_FIX(cl::_sym_provide);
SMART_PTR_FIX(cl::_sym_makePathname);
SMART_PTR_FIX(cl::_sym_Class_O);
SMART_PTR_FIX(ext::_sym_AnsiStream_O);
SMART_PTR_FIX(cl::_sym_fileNamestring);
SMART_PTR_FIX(core::_sym_STARbq_nconcSTAR);
SMART_PTR_FIX(llvmo::_sym_FCMP_ULT);
SMART_PTR_FIX(core::_sym_SpecialForm_O);
SMART_PTR_FIX(llvmo::_sym_ArchType_kalimba);
SMART_PTR_FIX(kw::_sym_multiple_escape_character);
SMART_PTR_FIX(llvmo::_sym_FCMP_TRUE);
SMART_PTR_FIX(cl::_sym_fileError);
SMART_PTR_FIX(core::_sym_STARbq_quoteSTAR);
SMART_PTR_FIX(core::_sym_foreach);
SMART_PTR_FIX(cffi::_sym_uint8);
SMART_PTR_FIX(cl::_sym_type);
SMART_PTR_FIX(core::_sym_calculateMissingCommonLispSymbols);
SMART_PTR_FIX(core::_sym_debug_message);
SMART_PTR_FIX(core::_sym_STARnotify_on_compileSTAR);
SMART_PTR_FIX(llvmo::_sym_ArchType_hexagon);
SMART_PTR_FIX(kw::_sym_bclasp);
SMART_PTR_FIX(llvmo::_sym_AttributeInReg);
SMART_PTR_FIX(gray::_sym_stream_line_column);
SMART_PTR_FIX(core::_sym_dlload);
SMART_PTR_FIX(cl::_sym_compile);
SMART_PTR_FIX(sockets::_sym__PLUS_ENETUNREACH_PLUS_);
SMART_PTR_FIX(cl::_sym_finish_output);
SMART_PTR_FIX(core::_sym_sharp_s);
SMART_PTR_FIX(core::_sym_loadBundle);
SMART_PTR_FIX(kw::_sym_use_boehmdc);
SMART_PTR_FIX(cl::_sym_Stream_O);
SMART_PTR_FIX(cl::_sym_boole_eqv);
SMART_PTR_FIX(gray::_sym_stream_advance_to_column);
SMART_PTR_FIX(core::_sym_tooFewArguments);
SMART_PTR_FIX(core::_sym_STARcurrentSourcePosInfoSTAR);
SMART_PTR_FIX(cl::_sym_Pathname_O);
SMART_PTR_FIX(cl::_sym_values);
SMART_PTR_FIX(core::_sym_invalidKeywordArgumentError);
SMART_PTR_FIX(llvmo::_sym_ArchType_mips);
SMART_PTR_FIX(cl::_sym_setf);
SMART_PTR_FIX(llvmo::_sym__PLUS_DW_ATE_SIGNED_FIXED_PLUS_);
SMART_PTR_FIX(core::_sym_Metaobject_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_formal_parameter);
SMART_PTR_FIX(core::_sym_find_single_dispatch_generic_function);
SMART_PTR_FIX(core::_sym_STARprint_structureSTAR);
SMART_PTR_FIX(kw::_sym_newest);
SMART_PTR_FIX(cl::_sym_char_int);
SMART_PTR_FIX(kw::_sym_junkAllowed);
SMART_PTR_FIX(cleavirEnv::_sym_symbolMacroExpansion);
SMART_PTR_FIX(core::_sym_threadInfo);
SMART_PTR_FIX(kw::_sym_function);
SMART_PTR_FIX(cl::_sym_logorc1);
SMART_PTR_FIX(cl::_sym_funcall);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v7m);
SMART_PTR_FIX(kw::_sym_eof);
SMART_PTR_FIX(ext::_sym_byte8);
SMART_PTR_FIX(cffi::_sym_foreign_alloc);
SMART_PTR_FIX(core::_sym_environmentTypeList);
SMART_PTR_FIX(ext::_sym_STARinvokeDebuggerHookSTAR);
SMART_PTR_FIX(core::_sym_STARbq_simplifySTAR);
SMART_PTR_FIX(llvmo::_sym_FenceInst_O);
SMART_PTR_FIX(llvmo::_sym_FCMP_ULE);
SMART_PTR_FIX(core::_sym_makeRegex);
SMART_PTR_FIX(cl::_sym_get_output_stream_string);
SMART_PTR_FIX(kw::_sym_unbound);
SMART_PTR_FIX(cl::_sym_count);
SMART_PTR_FIX(core::_sym_SingleDispatchMethod_O);
SMART_PTR_FIX(cl::_sym_simple_bit_vector_p);
SMART_PTR_FIX(cl::_sym_printObject);
SMART_PTR_FIX(cl::_sym_two_way_stream);
SMART_PTR_FIX(sockets::_sym_ff_socket);
SMART_PTR_FIX(sockets::_sym_socketSendNoAddress);
SMART_PTR_FIX(core::_sym_circle_subst);
SMART_PTR_FIX(cl::_sym_sqrt);
SMART_PTR_FIX(llvmo::_sym_AttributeInlineHint);
SMART_PTR_FIX(llvmo::_sym_AttributeSExt);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_imported_declaration);
SMART_PTR_FIX(cl::_sym_DoubleFloat_O);
SMART_PTR_FIX(cl::_sym_mapcan);
SMART_PTR_FIX(kw::_sym_input);
SMART_PTR_FIX(cl::_sym_and);
SMART_PTR_FIX(core::_sym_eltSet);
SMART_PTR_FIX(clos::_sym_compute_applicable_methods_using_classes);
SMART_PTR_FIX(llvmo::_sym_GlobalVariable_O);
SMART_PTR_FIX(llvmo::_sym_DIDescriptor_O);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_subprogram);
SMART_PTR_FIX(cffi::_sym_int64);
SMART_PTR_FIX(core::_sym_sharp_sharp);
SMART_PTR_FIX(cl::_sym_remhash);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_Itanium);
SMART_PTR_FIX(core::_sym_SNode_O);
SMART_PTR_FIX(cffi::_sym_int32);
SMART_PTR_FIX(cl::_sym_speed);
SMART_PTR_FIX(core::_sym_VectorObjectsWithFillPtr_O);
SMART_PTR_FIX(cl::_sym_boole_nor);
SMART_PTR_FIX(llvmo::_sym_SRem);
SMART_PTR_FIX(cl::_sym_simpleTypeError);
SMART_PTR_FIX(kw::_sym_external);
SMART_PTR_FIX(core::_sym_Specializer_O);
SMART_PTR_FIX(kw::_sym_whitespace_character);
SMART_PTR_FIX(core::_sym_STARcommandLineLoadSTAR);
SMART_PTR_FIX(cl::_sym_char_LT_);
SMART_PTR_FIX(cl::_sym_eval_when);
SMART_PTR_FIX(cl::_sym_extended_char);
SMART_PTR_FIX(ext::_sym_maybeQuote);
SMART_PTR_FIX(core::_sym_StringOutputStream_O);
SMART_PTR_FIX(core::_sym__BANG_unbound_BANG_);
SMART_PTR_FIX(cl::_sym_length);
SMART_PTR_FIX(core::_sym_mpi_size);
SMART_PTR_FIX(llvmo::_sym_ExecutionEngine_O);
SMART_PTR_FIX(core::_sym_InvocationHistoryFrameIterator_O);
SMART_PTR_FIX(cl::_sym_leastNegativeNormalizedSingleFloat);
SMART_PTR_FIX(core::_sym_asinh);
SMART_PTR_FIX(kw::_sym_ecl_min);
SMART_PTR_FIX(cl::_sym_ftype);
SMART_PTR_FIX(gray::_sym_output_stream_p);
SMART_PTR_FIX(core::_sym_adjustVector);
SMART_PTR_FIX(cl::_sym_intersection);
SMART_PTR_FIX(kw::_sym_splatted);
SMART_PTR_FIX(cl::_sym__EQ_);
SMART_PTR_FIX(core::_sym_eof_value);
SMART_PTR_FIX(llvmo::_sym_FCMP_UGE);
SMART_PTR_FIX(core::_sym_setf_find_single_dispatch_generic_function);
SMART_PTR_FIX(cl::_sym_charNotEqual);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_enumeration_type);
SMART_PTR_FIX(cl::_sym_block);
SMART_PTR_FIX(core::_sym_CxxClass_O);
SMART_PTR_FIX(core::_sym_lookupLoadTimeValue);
SMART_PTR_FIX(llvmo::_sym_VendorType_ImaginationTechnologies);
SMART_PTR_FIX(llvmo::_sym_AttributeNonLazyBind);
SMART_PTR_FIX(llvmo::_sym_FCMP_UEQ);
SMART_PTR_FIX(core::_sym_Record_O);
SMART_PTR_FIX(core::_sym_STARcurrentSourceFileInfoSTAR);
SMART_PTR_FIX(core::_sym_sharp_minus);
SMART_PTR_FIX(kw::_sym_escape);
SMART_PTR_FIX(core::_sym_ihsFun);
SMART_PTR_FIX(cl::_sym_boole_c2);
SMART_PTR_FIX(core::_sym_Binder_O);
SMART_PTR_FIX(llvmo::_sym_AttributeStructRet);
SMART_PTR_FIX(ext::_sym__PLUS_processStandardInput_PLUS_);
SMART_PTR_FIX(cl::_sym_leastPositiveNormalizedSingleFloat);
SMART_PTR_FIX(asttooling::_sym_ArgumentsAdjusterAdjust);
SMART_PTR_FIX(llvmo::_sym_DataLayout_O);
SMART_PTR_FIX(cl::_sym_Float_O);
SMART_PTR_FIX(core::_sym_invokeInternalDebugger);
SMART_PTR_FIX(cl::_sym_Integer_O);
SMART_PTR_FIX(cl::_sym__GE_);
SMART_PTR_FIX(cl::_sym_integer);
SMART_PTR_FIX(core::_sym_STARtopLevelCommandHookSTAR);
SMART_PTR_FIX(core::_sym_Regex_O);
SMART_PTR_FIX(core::_sym_LexicalEnvironment_O);
SMART_PTR_FIX(core::_sym_base_string_concatenate);
SMART_PTR_FIX(cl::_sym_floatPrecision);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_reference_type);
SMART_PTR_FIX(core::_sym_allocateRawClass);
SMART_PTR_FIX(kw::_sym_if_does_not_exist);
SMART_PTR_FIX(core::_sym_ensureSingleDispatchMethod);
SMART_PTR_FIX(cl::_sym_symbolp);
SMART_PTR_FIX(ext::_sym_float_infinity_string);
SMART_PTR_FIX(cl::_sym_rem);
SMART_PTR_FIX(core::_sym_loadCando);
SMART_PTR_FIX(cl::_sym_leastNegativeSingleFloat);
SMART_PTR_FIX(cl::_sym_defun);
SMART_PTR_FIX(llvmo::_sym_CodeModel);
SMART_PTR_FIX(cl::_sym_export);
SMART_PTR_FIX(llvmo::_sym_makeAPInt1);
SMART_PTR_FIX(core::_sym_monitorReader);
SMART_PTR_FIX(core::_sym_isAssignableTo);
SMART_PTR_FIX(kw::_sym_probe);
SMART_PTR_FIX(core::_sym_STARtrace_startupSTAR);
SMART_PTR_FIX(core::_sym_instancep);
SMART_PTR_FIX(cl::_sym_lambdaParametersLimit);
SMART_PTR_FIX(cl::_sym_boole_orc1);
SMART_PTR_FIX(kw::_sym_tagbodyFrame);
SMART_PTR_FIX(llvmo::_sym_Min);
SMART_PTR_FIX(core::_sym_intrusiveReferenceCountedPointer);
SMART_PTR_FIX(kw::_sym_rename);
SMART_PTR_FIX(llvmo::_sym_LLVMDebugVersion11);
SMART_PTR_FIX(core::_sym_sourceFileName);
SMART_PTR_FIX(cl::_sym_compileFile);
SMART_PTR_FIX(core::_sym_functionBlockName);
SMART_PTR_FIX(cl::_sym_integerp);
SMART_PTR_FIX(llvmo::_sym_AttributeStackAlignment);
SMART_PTR_FIX(cl::_sym_complex);
SMART_PTR_FIX(llvmo::_sym_STARaSTAR);
SMART_PTR_FIX(gray::_sym_stream_file_position);
SMART_PTR_FIX(llvmo::_sym_OSType_RTEMS);
SMART_PTR_FIX(llvmo::_sym_LLVMDebugVersion7);
SMART_PTR_FIX(cl::_sym_logandc2);
SMART_PTR_FIX(cl::_sym_not);
SMART_PTR_FIX(cl::_sym_read_line);
SMART_PTR_FIX(kw::_sym_execute);
SMART_PTR_FIX(core::_sym_STARsharpEqContextSTAR);
SMART_PTR_FIX(cl::_sym_nconc);
SMART_PTR_FIX(llvmo::_sym_makeAP32);
SMART_PTR_FIX(cl::_sym_dolist);
SMART_PTR_FIX(core::_sym_rehash_threshold);
SMART_PTR_FIX(llvmo::_sym_UMax);
SMART_PTR_FIX(core::_sym_STARconsing_dot_allowedSTAR);
SMART_PTR_FIX(llvmo::_sym_NotAtomic);
SMART_PTR_FIX(core::_sym_bdsVal);
SMART_PTR_FIX(cl::_sym_leastPositiveShortFloat);
SMART_PTR_FIX(llvmo::_sym_VectorType_O);
SMART_PTR_FIX(cleavirEnv::_sym_macroFunction);
SMART_PTR_FIX(core::_sym_backquote_append);
SMART_PTR_FIX(kw::_sym_constituent_character);
SMART_PTR_FIX(cl::_sym_safety);
SMART_PTR_FIX(asttooling::_sym_STARclangTemplateSpecializationKindSTAR);
SMART_PTR_FIX(llvmo::_sym_FCMP_ONE);
SMART_PTR_FIX(kw::_sym_local);
SMART_PTR_FIX(cl::_sym_most_negative_fixnum);
SMART_PTR_FIX(kw::_sym_syntax);
SMART_PTR_FIX(core::_sym_member1);
SMART_PTR_FIX(cl::_sym_stream);
SMART_PTR_FIX(llvmo::_sym_LLVMDebugVersion10);
SMART_PTR_FIX(core::_sym_serialize_xml);
SMART_PTR_FIX(sockets::_sym_ff_listen);
SMART_PTR_FIX(cl::_sym_simple_vector);
SMART_PTR_FIX(asttooling::_sym_STARclangTemplateArgumentArgKindSTAR);
SMART_PTR_FIX(core::_sym_Instance_O);
SMART_PTR_FIX(cl::_sym_Rational_O);
SMART_PTR_FIX(llvmo::_sym_CodeModel_Kernel);
SMART_PTR_FIX(core::_sym_start);
SMART_PTR_FIX(core::_sym_environmentActivationFrame);
SMART_PTR_FIX(llvmo::_sym_moduleFlagAppendUnique);
SMART_PTR_FIX(cl::_sym_defconstant);
SMART_PTR_FIX(core::_sym_dispatch_macro_character);
SMART_PTR_FIX(ext::_sym_truly_the);
SMART_PTR_FIX(core::_sym_wrongTypeNthArg);
SMART_PTR_FIX(gray::_sym_stream_peek_char);
SMART_PTR_FIX(cl::_sym_STARgensym_counterSTAR);
SMART_PTR_FIX(core::_sym_STARenvironmentPrintingTabIncrementSTAR);
SMART_PTR_FIX(cl::_sym_STARprint_right_marginSTAR);
SMART_PTR_FIX(llvmo::_sym_Acquire);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_template_type_parameter);
SMART_PTR_FIX(kw::_sym_operands);
SMART_PTR_FIX(llvmo::_sym_LShr);
SMART_PTR_FIX(llvmo::_sym_VendorType_UnknownVendor);
SMART_PTR_FIX(serveEvent::_sym_ll_serveEventNoTimeout);
SMART_PTR_FIX(kw::_sym_not);
SMART_PTR_FIX(llvmo::_sym_UMin);
SMART_PTR_FIX(kw::_sym_address_model_32);
SMART_PTR_FIX(llvmo::_sym_BasicBlock_O);
SMART_PTR_FIX(core::_sym_SexpSaveArchive_O);
SMART_PTR_FIX(core::_sym_eof_error_p);
SMART_PTR_FIX(cffi::_sym_uint64);
SMART_PTR_FIX(core::_sym_STARdebugInterpretedFunctionsSTAR);
SMART_PTR_FIX(core::_sym_STARcommandLineImageSTAR);
SMART_PTR_FIX(core::_sym_put_f);
SMART_PTR_FIX(cl::_sym__LT_);
SMART_PTR_FIX(cl::_sym_boole_andc1);
SMART_PTR_FIX(cl::_sym_nthcdr);
SMART_PTR_FIX(core::_sym_forward_referenced_class);
SMART_PTR_FIX(llvmo::_sym_UDiv);
SMART_PTR_FIX(llvmo::_sym_ArchType_tce);
SMART_PTR_FIX(cl::_sym_every);
SMART_PTR_FIX(llvmo::_sym_LLVMTargetMachine_O);
SMART_PTR_FIX(cl::_sym_listp);
SMART_PTR_FIX(gray::_sym_stream_finish_output);
SMART_PTR_FIX(cffi::_sym_long_long);
SMART_PTR_FIX(cl::_sym_condition);
SMART_PTR_FIX(llvmo::_sym_ArchType_ppc64le);
SMART_PTR_FIX(llvmo::_sym_ConstantDataArray_O);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_REUSEPORT_PLUS_);
SMART_PTR_FIX(cl::_sym_parseNamestring);
SMART_PTR_FIX(cl::_sym_debug);
SMART_PTR_FIX(asttooling::_sym_CreateASTConsumer);
SMART_PTR_FIX(core::_sym_IOStreamStream_O);
SMART_PTR_FIX(llvmo::_sym_Max);
SMART_PTR_FIX(cl::_sym_listen);
SMART_PTR_FIX(cl::_sym_floatingPointUnderflow);
SMART_PTR_FIX(cffi::_sym_int8);
SMART_PTR_FIX(core::_sym_dot);
SMART_PTR_FIX(cffi::_sym_ptrdiff);
SMART_PTR_FIX(kw::_sym_invert);
SMART_PTR_FIX(llvmo::_sym_TerminatorInst_O);
SMART_PTR_FIX(core::_sym_default);
SMART_PTR_FIX(kw::_sym_create);
SMART_PTR_FIX(cffi::_sym_PERCENTsetf_mem_ref);
SMART_PTR_FIX(sockets::_sym__PLUS_SO_KEEPALIVE_PLUS_);
SMART_PTR_FIX(cl::_sym_go);
SMART_PTR_FIX(cl::_sym_zerop);
SMART_PTR_FIX(core::_sym_put_sysprop);
SMART_PTR_FIX(core::_sym_dispatchTable);
SMART_PTR_FIX(core::_sym_makeStringOutputStream);
SMART_PTR_FIX(core::_sym_simpleProgramError);
SMART_PTR_FIX(core::_sym_quit);
SMART_PTR_FIX(llvmo::_sym_IRBuilderBase_O);
SMART_PTR_FIX(gray::_sym_stream_unread_char);
SMART_PTR_FIX(core::_sym_setThrowPosition);
SMART_PTR_FIX(core::_sym_STARpreserve_whitespace_pSTAR);
SMART_PTR_FIX(cl::_sym_getInternalRunTime);
SMART_PTR_FIX(cl::_sym_string_LT_);
SMART_PTR_FIX(core::_sym_pointer);
SMART_PTR_FIX(cffi::_sym_Pointer_O);
SMART_PTR_FIX(comp::_sym_STARlowLevelTraceSTAR);
SMART_PTR_FIX(core::_sym_FunctionFrame_O);
SMART_PTR_FIX(core::_sym_element_type);
SMART_PTR_FIX(core::_sym_newVersion);
SMART_PTR_FIX(cl::_sym_parseError);
SMART_PTR_FIX(kw::_sym_macro);
SMART_PTR_FIX(core::_sym_stackMonitor);
SMART_PTR_FIX(cl::_sym_controlError);
SMART_PTR_FIX(cl::_sym_equalp);
SMART_PTR_FIX(core::_sym_repr);
SMART_PTR_FIX(serveEvent::_sym_ll_fd_isset);
SMART_PTR_FIX(llvmo::_sym_OSType_KFreeBSD);
SMART_PTR_FIX(core::_sym_testMemoryError);
SMART_PTR_FIX(kw::_sym_non_terminating_macro_character);
SMART_PTR_FIX(cl::_sym_ignore);
SMART_PTR_FIX(core::_sym_float_to_digits);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_friend);
SMART_PTR_FIX(core::_sym_coerceToFilePathname);
SMART_PTR_FIX(cl::_sym_directoryNamestring);
SMART_PTR_FIX(cl::_sym_subseq);
SMART_PTR_FIX(llvmo::_sym_ICMP_ULE);
SMART_PTR_FIX(core::_sym_exportToPython);
SMART_PTR_FIX(ext::_sym_STARloadHooksSTAR);
SMART_PTR_FIX(llvmo::_sym_STARatomic_orderingSTAR);
SMART_PTR_FIX(kw::_sym_UnsignedByte);
SMART_PTR_FIX(core::_sym_LeafSNode_O);
SMART_PTR_FIX(core::_sym_STARdocumentation_poolSTAR);
SMART_PTR_FIX(core::_sym_single_dispatch_on);
SMART_PTR_FIX(cl::_sym_digitCharP);
SMART_PTR_FIX(llvmo::_sym_FDiv);
SMART_PTR_FIX(core::_sym_hash_eql);
SMART_PTR_FIX(llvmo::_sym_ArchType_spir);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v7);
SMART_PTR_FIX(sockets::_sym__PLUS_NO_ADDRESS_PLUS_);
SMART_PTR_FIX(llvmo::_sym_AttributeAlwaysInline);
SMART_PTR_FIX(cl::_sym_ShortFloat_O);
SMART_PTR_FIX(llvmo::_sym_dwTag);
SMART_PTR_FIX(llvmo::_sym_ICMP_UGE);
SMART_PTR_FIX(cl::_sym_equal);
SMART_PTR_FIX(llvmo::_sym_valuep);
SMART_PTR_FIX(cl::_sym_vectorp);
SMART_PTR_FIX(llvmo::_sym_FCMP_UNE);
SMART_PTR_FIX(core::_sym_isArray);
SMART_PTR_FIX(cl::_sym_satisfies);
SMART_PTR_FIX(llvmo::_sym_LLVMDebugVersion5);
SMART_PTR_FIX(kw::_sym_target_os_linux);
SMART_PTR_FIX(core::_sym_STARbacktraceFrameSelectorHookSTAR);
SMART_PTR_FIX(cl::_sym_fileStream);
SMART_PTR_FIX(llvmo::_sym_IntegerType_O);
SMART_PTR_FIX(cl::_sym_STARread_suppressSTAR);
SMART_PTR_FIX(core::_sym_validFunctionNameP);
SMART_PTR_FIX(core::_sym_topLevel);
SMART_PTR_FIX(cl::_sym_directory);
SMART_PTR_FIX(core::_sym_Path_O);
SMART_PTR_FIX(core::_sym_ihsNext);
SMART_PTR_FIX(asttooling::_sym_VisitDecl);
SMART_PTR_FIX(sockets::_sym_ll_strerror_errno);
SMART_PTR_FIX(cl::_sym_FileStream_O);
SMART_PTR_FIX(core::_sym_WeakKeyHashTable_O);
SMART_PTR_FIX(llvmo::_sym_BranchInst_O);
SMART_PTR_FIX(core::_sym_sharp_left_parenthesis);
SMART_PTR_FIX(llvmo::_sym_ReturnInst_O);
SMART_PTR_FIX(cl::_sym_arrayp);
SMART_PTR_FIX(core::_sym_input_stream);
SMART_PTR_FIX(core::_sym_setupStackMonitor);
SMART_PTR_FIX(cffi::_sym_pointer);
SMART_PTR_FIX(cl::_sym_leastPositiveNormalizedLongFloat);
SMART_PTR_FIX(llvmo::_sym_OSType_IOS);
SMART_PTR_FIX(core::_sym_STARargsSTAR);
SMART_PTR_FIX(core::_sym_BlockEnvironment_O);
SMART_PTR_FIX(cl::_sym_rationalp);
SMART_PTR_FIX(sockets::_sym_ll_socketSendAddress);
SMART_PTR_FIX(llvmo::_sym_LinkOnceODRLinkage);
SMART_PTR_FIX(core::_sym_aset);
SMART_PTR_FIX(ext::_sym_lexicalVar);
SMART_PTR_FIX(llvmo::_sym_StoreInst_O);
SMART_PTR_FIX(cl::_sym_Fixnum_dummy_O);
SMART_PTR_FIX(core::_sym_tooFewArgumentsError);
SMART_PTR_FIX(asttooling::_sym_onStartOfTranslationUnit);
SMART_PTR_FIX(cl::_sym_let);
SMART_PTR_FIX(core::_sym_mapappend);
SMART_PTR_FIX(kw::_sym_type);
SMART_PTR_FIX(sockets::_sym_ll_makeStreamFromFd);
SMART_PTR_FIX(core::_sym_sharp_vertical_bar);
SMART_PTR_FIX(kw::_sym_dispatch_table);
SMART_PTR_FIX(core::_sym_STAReval_with_env_hookSTAR);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_GNU_template_template_param);
SMART_PTR_FIX(gray::_sym_stream_read_char_no_hang);
SMART_PTR_FIX(sockets::_sym__PLUS_ETIMEDOUT_PLUS_);
SMART_PTR_FIX(llvmo::_sym_FCMP_FALSE);
SMART_PTR_FIX(llvmo::_sym_ICMP_ULT);
SMART_PTR_FIX(sockets::_sym_ll_nonBlockingMode);
SMART_PTR_FIX(core::_sym_hash_equal);
SMART_PTR_FIX(cl::_sym_numberp);
SMART_PTR_FIX(llvmo::_sym_throwIfMismatchedStructureSizes);
SMART_PTR_FIX(sockets::_sym_ll_getHostByAddress);
SMART_PTR_FIX(cl::_sym_string_NE_);
SMART_PTR_FIX(llvmo::_sym_SExt);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_imported_unit);
SMART_PTR_FIX(core::_sym_asin);
SMART_PTR_FIX(asttooling::_sym_HandleTranslationUnit);
SMART_PTR_FIX(clos::_sym_FuncallableStandardClass_O);
SMART_PTR_FIX(cl::_sym_macrolet);
SMART_PTR_FIX(core::_sym_create);
SMART_PTR_FIX(cl::_sym_STARprint_miser_widthSTAR);
SMART_PTR_FIX(serveEvent::_sym_ll_fd_set);
SMART_PTR_FIX(core::_sym_declaredSpecial);
SMART_PTR_FIX(cl::_sym_leastNegativeNormalizedDoubleFloat);
SMART_PTR_FIX(core::_sym_backquote_process);
SMART_PTR_FIX(cl::_sym_hash_table_p);
SMART_PTR_FIX(cl::_sym_charLessp);
SMART_PTR_FIX(cffi::_sym_unsigned_char);
SMART_PTR_FIX(llvmo::_sym_ArchType_thumbeb);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_pointer_type);
SMART_PTR_FIX(llvmo::_sym_VendorType_PC);
SMART_PTR_FIX(kw::_sym_lf);
SMART_PTR_FIX(core::_sym_generic);
SMART_PTR_FIX(core::_sym_CxxObject_O);
SMART_PTR_FIX(sockets::_sym_socketPeername_localSocket);
SMART_PTR_FIX(clos::_sym_standardOptimizedWriterFunction);
SMART_PTR_FIX(kw::_sym_LineTablesOnly);
SMART_PTR_FIX(core::_sym_okey);
SMART_PTR_FIX(cl::_sym_storageCondition);
SMART_PTR_FIX(cl::_sym_STARprint_gensymSTAR);
SMART_PTR_FIX(cl::_sym_STARread_baseSTAR);
SMART_PTR_FIX(cffi::_sym_time);
SMART_PTR_FIX(cl::_sym_mostPositiveShortFloat);
SMART_PTR_FIX(cl::_sym_sort);
SMART_PTR_FIX(core::_sym_ForeignData_O);
SMART_PTR_FIX(cffi::_sym_char);
SMART_PTR_FIX(llvmo::_sym_ArchType_aarch64);
SMART_PTR_FIX(core::_sym_StringInputStream_O);
SMART_PTR_FIX(core::_sym_eval_with_env_default);
SMART_PTR_FIX(llvmo::_sym_AttributeNoUnwind);
SMART_PTR_FIX(core::_sym_STARdebugMacroexpandSTAR);
SMART_PTR_FIX(llvmo::_sym_SubArchType_ARMSubArch_v7s);
SMART_PTR_FIX(gray::_sym_stream_read_char);
SMART_PTR_FIX(cl::_sym_open_stream_p);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_type_unit);
SMART_PTR_FIX(llvmo::_sym_ArchType_xcore);
SMART_PTR_FIX(core::_sym_slBoundp);
SMART_PTR_FIX(llvmo::_sym_STARInstructionCastOpsSTAR);
SMART_PTR_FIX(kw::_sym_line_buffered);
SMART_PTR_FIX(sockets::_sym_ll_socketName);
SMART_PTR_FIX(core::_sym__SHARP__BANG_);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_variable);
SMART_PTR_FIX(cl::_sym_nreconc);
SMART_PTR_FIX(kw::_sym_rtld_next);
SMART_PTR_FIX(core::_sym_overwrite);
SMART_PTR_FIX(core::_sym_STARdebugLoadTimeValuesSTAR);
SMART_PTR_FIX(cl::_sym_integer_decode_float);
SMART_PTR_FIX(ext::_sym_compiledFunctionName);
SMART_PTR_FIX(cl::_sym_STARprint_readablySTAR);
SMART_PTR_FIX(cl::_sym_SingleFloat_dummy_O);
SMART_PTR_FIX(core::_sym__PLUS_llvmTargetTriple_PLUS_);
SMART_PTR_FIX(llvmo::_sym_AttributeReturnsTwice);
SMART_PTR_FIX(cl::_sym_keyword);
SMART_PTR_FIX(cl::_sym_alpha_char_p);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_variant_part);
SMART_PTR_FIX(cl::_sym_CompiledFunction_O);
SMART_PTR_FIX(cl::_sym_arithmeticError);
SMART_PTR_FIX(llvmo::_sym_moduleFlagRequire);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_GNU_template_parameter_pack);
SMART_PTR_FIX(llvmo::_sym_ArchType_nvptx64);
SMART_PTR_FIX(llvmo::_sym_ArchType_x86_64);
SMART_PTR_FIX(llvmo::_sym_STARmoduleModFlagBehaviorSTAR);
SMART_PTR_FIX(cl::_sym_String_O);
SMART_PTR_FIX(cl::_sym_AMPbody);
SMART_PTR_FIX(cl::_sym_random);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_APPLE_property);
SMART_PTR_FIX(cl::_sym_getDispatchMacroCharacter);
SMART_PTR_FIX(asttooling::_sym_run);
SMART_PTR_FIX(cl::_sym_mostPositiveLongFloat);
SMART_PTR_FIX(kw::_sym_eval);
SMART_PTR_FIX(cl::_sym_stringRightTrim);
SMART_PTR_FIX(llvmo::_sym_AttributeNoAlias);
SMART_PTR_FIX(core::_sym_HashTableEql_O);
SMART_PTR_FIX(core::_sym_CatchEnvironment_O);
SMART_PTR_FIX(kw::_sym_load);
SMART_PTR_FIX(core::_sym_STARinput_streamSTAR);
SMART_PTR_FIX(cl::_sym_imagpart);
SMART_PTR_FIX(kw::_sym_inherited);
SMART_PTR_FIX(core::_sym_sharp_r);
SMART_PTR_FIX(kw::_sym_passThrough);
SMART_PTR_FIX(core::_sym_setRunTimeValuesVector);
SMART_PTR_FIX(llvmo::_sym_IntToPtr);
SMART_PTR_FIX(core::_sym_mpi_enabled);
SMART_PTR_FIX(kw::_sym_wild);
SMART_PTR_FIX(cl::_sym_asin);
SMART_PTR_FIX(llvmo::_sym_ICMP_UGT);
SMART_PTR_FIX(cl::_sym_truename);
SMART_PTR_FIX(llvmo::_sym_STARsynchronization_scopeSTAR);
SMART_PTR_FIX(core::_sym_ihsTop);
SMART_PTR_FIX(core::_sym_inheritDefaultAllocator);
SMART_PTR_FIX(core::_sym_SymbolMacroletEnvironment_O);
SMART_PTR_FIX(cl::_sym_boole_orc2);
SMART_PTR_FIX(cl::_sym__DIVIDE_);
SMART_PTR_FIX(cl::_sym_boole_andc2);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_function_template);
SMART_PTR_FIX(core::_sym_STARbq_listSTARSTAR);
SMART_PTR_FIX(cl::_sym_output_stream_p);
SMART_PTR_FIX(core::_sym_printCurrentIhsFrameEnvironment);
SMART_PTR_FIX(comp::_sym_implicit_compile_hook_default);
SMART_PTR_FIX(cl::_sym_char_code);
SMART_PTR_FIX(cl::_sym_lcm);
SMART_PTR_FIX(llvmo::_sym_TargetOptions_O);
SMART_PTR_FIX(cl::_sym_otherwise);
SMART_PTR_FIX(llvmo::_sym_OSType_Win32);
SMART_PTR_FIX(cl::_sym_pathnameDevice);
SMART_PTR_FIX(llvmo::_sym_ArchType_spir64);
SMART_PTR_FIX(llvmo::_sym_ArchType_hsail64);
SMART_PTR_FIX(llvmo::_sym_DW_LANG_C_plus_plus);
SMART_PTR_FIX(kw::_sym_next);
SMART_PTR_FIX(cl::_sym_quote);
SMART_PTR_FIX(cl::_sym_Str_O);
SMART_PTR_FIX(core::_sym_STARbq_quote_nilSTAR);
SMART_PTR_FIX(kw::_sym_cr);
SMART_PTR_FIX(llvmo::_sym_Trunc);
SMART_PTR_FIX(kw::_sym_link);
SMART_PTR_FIX(llvmo::_sym_AttributeNoInline);
SMART_PTR_FIX(core::_sym_HashTableEqual_O);
SMART_PTR_FIX(cl::_sym_bit_vector_p);
SMART_PTR_FIX(core::_sym_STARprintVersionOnStartupSTAR);
SMART_PTR_FIX(cl::_sym_some);
SMART_PTR_FIX(cl::_sym_identity);
SMART_PTR_FIX(llvmo::_sym_SubArchType_NoSubArch);
SMART_PTR_FIX(cl::_sym_findClass);
SMART_PTR_FIX(core::_sym_gdb);
SMART_PTR_FIX(cl::_sym_Real_O);
SMART_PTR_FIX(core::_sym_log1p);
SMART_PTR_FIX(core::_sym_loadTimeValueArray);
SMART_PTR_FIX(cl::_sym_leastPositiveSingleFloat);
SMART_PTR_FIX(llvmo::_sym_Shl);
SMART_PTR_FIX(kw::_sym_ucs_4);
SMART_PTR_FIX(cl::_sym_getUniversalTime);
SMART_PTR_FIX(llvmo::_sym_ValueAsMetadataGet);
SMART_PTR_FIX(cl::_sym_LogicalPathname_O);
SMART_PTR_FIX(llvmo::_sym_WeakAnyLinkage);
SMART_PTR_FIX(core::_sym_localGo);
SMART_PTR_FIX(llvmo::_sym_ConstantDataSequential_O);
SMART_PTR_FIX(cl::_sym_setDispatchMacroCharacter);
SMART_PTR_FIX(cl::_sym_nstring_upcase);
SMART_PTR_FIX(llvmo::_sym_EnvironmentType_UnknownEnvironment);
SMART_PTR_FIX(cl::_sym_special);
SMART_PTR_FIX(core::_sym_record_cons);
SMART_PTR_FIX(cl::_sym_most_positive_fixnum);
SMART_PTR_FIX(llvmo::_sym_OSType_NetBSD);
SMART_PTR_FIX(kw::_sym_prev);
SMART_PTR_FIX(core::_sym_process_macro_lambda_list);
SMART_PTR_FIX(core::_sym_streamColumn);
SMART_PTR_FIX(kw::_sym_io);
SMART_PTR_FIX(llvmo::_sym_ConstantExpr_O);
SMART_PTR_FIX(llvmo::_sym_ArrayType_O);
SMART_PTR_FIX(cffi::_sym_void);
SMART_PTR_FIX(cl::_sym_warning);
SMART_PTR_FIX(sockets::_sym__PLUS_EBADF_PLUS_);
SMART_PTR_FIX(llvmo::_sym_ArchType_aarch64_be);
SMART_PTR_FIX(cl::_sym_tan);
SMART_PTR_FIX(core::_sym_preserve_whitespace);
SMART_PTR_FIX(clos::_sym_classp);
SMART_PTR_FIX(llvmo::_sym_disassembleSTAR);
SMART_PTR_FIX(cl::_sym_AMPwhole);
SMART_PTR_FIX(llvmo::_sym_Unordered);
SMART_PTR_FIX(llvmo::_sym_DW_TAG_interface_type);
SMART_PTR_FIX(kw::_sym_none);
SMART_PTR_FIX(kw::_sym_single_escape_character);
SMART_PTR_FIX(cl::_sym_unboundVariable);
SMART_PTR_FIX(core::_sym_MultiStringBuffer_O);
#endif // defined(GC_GLOBAL_SYMBOLS)
