#MAKE FILE FOR DeviceInfo

DEPTH = ..
include $(DEPTH)/Build/Linux/Common.mk

TARGETLIB = libDeviceInfo$(TARGET_SUFFIX).a

INCLUDES =	-I. \
		-I$(ADL_DIR)/include \
		-I$(ADLUTIL_DIR) \
		-I$(DEVICEINFO_DIR) \
		-I$(TSINGLETON_DIR) \
		-I$(AMDTMUTEX_DIR) \
		-I$(DYNAMICLIBRARYMODULE_DIR)

# for AMD-internal builds
ifneq ("$(wildcard $(DEVICEINFO_DIR)/DeviceInfoInternal.cpp)","")
    INTERNAL_OBJ := ./$(OBJ_DIR)/DeviceInfoInternal.o
endif

LIB_OBJS = \
	./$(OBJ_DIR)/DeviceInfoUtils.o \
	$(INTERNAL_OBJ) \

include $(DEPTH)/Build/Linux/CommonTargets.mk
