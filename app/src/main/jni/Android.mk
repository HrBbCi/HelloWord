LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := hello-l2c
LOCAL_SRC_FILES := hello-l2c.c

include $(BUILD_SHARED_LIBRARY)