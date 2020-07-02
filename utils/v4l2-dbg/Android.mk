LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := v4l2-dbg
LOCAL_MODULE_TAGS := optional

LOCAL_CFLAGS += -Wno-unused-parameter
LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../.. \
    $(LOCAL_PATH)/../../include \
    bionic \
    external/libcxx

LOCAL_SHARED_LIBRARIES := libc++

LOCAL_SRC_FILES := v4l2-dbg.cpp

include $(BUILD_EXECUTABLE)
