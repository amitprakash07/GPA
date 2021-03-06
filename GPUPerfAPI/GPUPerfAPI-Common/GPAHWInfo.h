//==============================================================================
// Copyright (c) 2011-2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  A class for managing hardware information
//==============================================================================

#ifndef _GPA_HW_INFO_H_
#define _GPA_HW_INFO_H_

#include "GPUPerfAPITypes-Private.h"
#include "DeviceInfo.h"
#include <vector>
#include <string>

using std::string;

static const int AMD_VENDOR_ID     = 0x1002;  ///< the AMD vendor ID
static const int NVIDIA_VENDOR_ID  = 0x10DE;  ///< the NVidia vendor ID
static const int INTEL_VENDOR_ID   = 0x8086;  ///< the Intel vendor ID

/// Stores information about the hardware installed in the machine.
class GPA_HWInfo
{
public:

    /// default constructor
    GPA_HWInfo();

    /// virtual destructor
    virtual ~GPA_HWInfo();

    /// Sets the revision ID.
    /// \param id The revision ID of the available device.
    virtual void SetRevisionID(gpa_uint32 id);

    /// Sets the device ID.
    /// \param id The ID of the available device.
    virtual void SetDeviceID(gpa_uint32 id);

    /// Sets the vendor ID.
    /// \param vid The vendor ID of the available device.
    virtual void SetVendorID(gpa_uint32 vid);

    /// Sets the hardware generation that the device belongs to.
    /// \param gen The hardware generation.
    virtual void SetHWGeneration(GDT_HW_GENERATION gen);

    /// Sets the device name
    /// \param pName A name of the device (ie "ATI Radeon HD 2600 series")
    virtual void SetDeviceName(const char* pName);

    /// Set the GPU index of the GPU in the system
    /// \param gpuIndex The GPU index in the system
    virtual void SetGpuIndex(const unsigned int gpuIndex);

    /// Sets the frequecy of the clock that the timestamps are based on.
    /// \param freq The timestamp clock frequency.
    virtual void SetTimeStampFrequency(gpa_uint64 freq);

    /// Gets the number of shader engines
    /// \return the number of shader engines
    virtual size_t GetNumberShaderEngines() const { return m_numShaderEngines; }

    /// Gets the number of SIMDs
    /// \return the number of SIMDs
    virtual size_t GetNumberSIMDs() const { return m_numSIMDs; }

    /// Gets the number of clocks per primitive
    /// \return the number of clocks per primitive
    virtual size_t GetSUClocksPrim() const { return m_suClockPrim; }

    /// Gets the number of primitive pipes
    /// \return the number of primitive pipes
    virtual size_t GetNumberPrimPipes() const { return m_numPrimPipes; }

    /// Gets the revision ID.
    /// \param id [out] The revision ID.
    /// \return True if the revision ID is available; false otherwise.
    virtual bool GetRevisionID(gpa_uint32& id);

    /// Gets the device ID.
    /// \param id [out] The device ID.
    /// \return True if the device ID is available; false otherwise.
    virtual bool GetDeviceID(gpa_uint32& id);

    /// Gets the vendor id.
    /// \param vid [out] The vendor id.
    /// \return True if the vendor id is available; false otherwise.
    virtual bool GetVendorID(gpa_uint32& vid);

    /// Gets the device name.
    /// \param pName [out] The device name.
    /// \return True if the device name is available; false otherwise.
    virtual bool GetDeviceName(const char*& pName);

    /// Get the GPU index in the system
    /// \param[out] gpuIndex The GPU index in the system
    /// \return True if the gpu index is available, false otherwise
    virtual bool GetGpuIndex(unsigned int& gpuIndex);

    /// Gets the hardware generation.
    /// \param gen [out] The HW generation
    /// \return True if the HW generation is available; false otherwise.
    virtual bool GetHWGeneration(GDT_HW_GENERATION& gen);

    /// Gets the ASIC type.
    /// \param type [out] The ASIC type.
    /// \return True if the ASIC type is available; false otherwise.
    virtual bool GetHWAsicType(GDT_HW_ASIC_TYPE& type);

    /// Gets the timestamp clock frequency.
    /// \return the clock frequency.
    virtual const gpa_uint64 GetTimeStampFrequency() const
    {
        return m_timeStampFrequency;
    }

    /// uses the DeviceId to find the correct DeviceMapping and DeviceInfo.
    /// Sets devInfo and sets DeviceName and HWGeneration if not previously set.
    /// \return true if HW should be supported and information is obtained correctly.
    bool UpdateDeviceInfoBasedOnDeviceID();

    /// uses the device id and name to assign a revision id
    /// Will assign zero if it cannot find a matching device
    /// \return true if HW should be supported and information is obtained correctly.
    bool UpdateRevisionIdBasedOnDeviceIDAndName();

    /// Check if the current hardware is AMD hardware
    /// \return true if the current hardware is AMD hardware
    bool IsAMD() { return m_vendorIdSet && AMD_VENDOR_ID == m_vendorId; };

    /// Check if the current hardware is NVidia hardware
    /// \return true if the current hardware is NVidia hardware
    bool IsNVidia() { return m_vendorIdSet && NVIDIA_VENDOR_ID == m_vendorId; };

    /// Check if the current hardware is Intel hardware
    /// \return true if the current hardware is Intel hardware
    bool IsIntel() { return m_vendorIdSet && INTEL_VENDOR_ID == m_vendorId; };

protected:

    gpa_uint32 m_deviceId;  ///< The device ID
    bool m_deviceIdSet;     ///< Indicates if the Device ID has been set

    gpa_uint32 m_revisionId;///< The revision ID
    bool m_revisionIdSet;   ///< Indicates if the Revision ID has been set

    gpa_uint32 m_vendorId;  ///< The vendor ID
    bool m_vendorIdSet;     ///< Indicates if the vendor ID has been set

    string m_deviceName;    ///< the device name
    bool m_deviceNameSet;   ///< Indicates if the device name has been set

    unsigned int m_gpuIndex; ///< Index of the GPU in the system
    bool m_gpuIndexSet;      ///< Indicates the GPU index has been set

    GDT_HW_GENERATION m_generation;  ///< the hardware generation
    bool m_generationSet;            ///< Indicates if the hardware geneartion has been set

    gpa_uint64 m_timeStampFrequency; ///< the frequency of the time stamp clock
    bool m_timeStampFrequencySet;    ///< Indicates if the timestamp frequence has been set

    GDT_HW_ASIC_TYPE m_asicType;     ///< Indicates the ASIC type of this device

    size_t m_numShaderEngines;       ///< Number of shader engines
    size_t m_numSIMDs;               ///< Number of SIMDs
    size_t m_suClockPrim;            ///< Number of clocks it takes to process a primitive
    size_t m_numPrimPipes;           ///< Number of primitive pipes
};

/// Compares two GPA_HWInfo instances
/// \param pFirst the first hardware info instance
/// \param pSecond the second hardware info instance
/// \return GPA_STATUS_OK if the two instances match
GPA_Status CompareHwInfo(GPA_HWInfo* pFirst, GPA_HWInfo* pSecond);

#endif //_GPA_HW_INFO_H_
