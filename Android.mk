LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE            := dex_builder
LOCAL_CPPFLAGS          := -std=c++17
LOCAL_C_INCLUDES        := $(LOCAL_PATH)/slicer
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)
LOCAL_SRC_FILES         := dex_builder.cc slicer/writer.cc slicer/reader.cc slicer/dex_ir.cc slicer/common.cc \
                           slicer/dex_format.cc slicer/dex_utf8.cc slicer/dex_bytecode.cc
LOCAL_STATIC_LIBRARIES  := libcxx
LOCAL_EXPORT_LDLIBS     := -lz
include $(BUILD_STATIC_LIBRARY)
