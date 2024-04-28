module;

#include "dex_builder.h"
#include "slicer/reader.h"
#include "slicer/writer.h"

export module dex_builder;

export namespace startop::dex {
    using startop::dex::ClassBuilder;
    using startop::dex::DexBuilder;
    using startop::dex::FieldBuilder;
    using startop::dex::Instruction;
    using startop::dex::LiveRegister;
    using startop::dex::MethodBuilder;
    using startop::dex::Prototype;
    using startop::dex::TypeDescriptor;
    using startop::dex::Value;
}  // namespace startop::dex

export namespace slicer {
    using slicer::MemView;
}  // namespace slicer

export namespace ir {
    using ir::Annotation;
    using ir::AnnotationElement;
    using ir::AnnotationsDirectory;
    using ir::AnnotationSet;
    using ir::AnnotationSetRefList;
    using ir::Class;
    using ir::Code;
    using ir::DebugInfo;
    using ir::DexFile;
    using ir::EncodedArray;
    using ir::EncodedField;
    using ir::EncodedMethod;
    using ir::EncodedValue;
    using ir::FieldAnnotation;
    using ir::FieldDecl;
    using ir::IndexedNode;
    using ir::MethodAnnotation;
    using ir::MethodDecl;
    using ir::Node;
    using ir::ParamAnnotation;
    using ir::Proto;
    using ir::String;
    using ir::Type;
    using ir::TypeList;
}  // namespace ir

export namespace dex {
    using dex::Reader;
    using dex::Writer;

    using dex::u1;
    using dex::u2;
    using dex::u4;
    using dex::u8;
    using dex::s1;
    using dex::s2;
    using dex::s4;
    using dex::s8;
    using dex::kEndianConstant;
    using dex::kNoIndex;
    using dex::kSHA1DigestLen;
    using dex::kVisibilityBuild;
    using dex::kVisibilityRuntime;
    using dex::kVisibilitySystem;
    using dex::kVisibilityEncoded;
    using dex::kEncodedByte;
    using dex::kEncodedShort;
    using dex::kEncodedChar;
    using dex::kEncodedInt;
    using dex::kEncodedLong;
    using dex::kEncodedFloat;
    using dex::kEncodedDouble;
    using dex::kEncodedMethodHandle;
    using dex::kEncodedMethodType;
    using dex::kEncodedString;
    using dex::kEncodedType;
    using dex::kEncodedField;
    using dex::kEncodedMethod;
    using dex::kEncodedEnum;
    using dex::kEncodedArray;
    using dex::kEncodedAnnotation;
    using dex::kEncodedNull;
    using dex::kEncodedBoolean;
    using dex::kEncodedValueTypeMask;
    using dex::kEncodedValueArgShift;
    using dex::kAccPublic;
    using dex::kAccPrivate;
    using dex::kAccProtected;
    using dex::kAccStatic;
    using dex::kAccFinal;
    using dex::kAccSynchronized;
    using dex::kAccSuper;
    using dex::kAccVolatile;
    using dex::kAccBridge;
    using dex::kAccTransient;
    using dex::kAccVarargs;
    using dex::kAccNative;
    using dex::kAccInterface;
    using dex::kAccAbstract;
    using dex::kAccStrict;
    using dex::kAccSynthetic;
    using dex::kAccAnnotation;
    using dex::kAccEnum;
    using dex::kAccConstructor;
    using dex::kAccDeclaredSynchronized;
    using dex::kHeaderItem;
    using dex::kStringIdItem;
    using dex::kTypeIdItem;
    using dex::kProtoIdItem;
    using dex::kFieldIdItem;
    using dex::kMethodIdItem;
    using dex::kClassDefItem;
    using dex::kMapList;
    using dex::kTypeList;
    using dex::kAnnotationSetRefList;
    using dex::kAnnotationSetItem;
    using dex::kClassDataItem;
    using dex::kCodeItem;
    using dex::kStringDataItem;
    using dex::kDebugInfoItem;
    using dex::kAnnotationItem;
    using dex::kEncodedArrayItem;
    using dex::kAnnotationsDirectoryItem;
    using dex::DBG_END_SEQUENCE;
    using dex::DBG_ADVANCE_PC;
    using dex::DBG_ADVANCE_LINE;
    using dex::DBG_START_LOCAL;
    using dex::DBG_START_LOCAL_EXTENDED;
    using dex::DBG_END_LOCAL;
    using dex::DBG_RESTART_LOCAL;
    using dex::DBG_SET_PROLOGUE_END;
    using dex::DBG_SET_EPILOGUE_BEGIN;
    using dex::DBG_SET_FILE;
    using dex::DBG_FIRST_SPECIAL;
    using dex::DBG_LINE_BASE;
    using dex::DBG_LINE_RANGE;
}
