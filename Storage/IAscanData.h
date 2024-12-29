////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file IAscanData.h.
///
/// Access to the basic data of a AScan buffer
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <memory>
#include <storage/BufferDataType.h>

namespace Olympus {
  namespace Ultrasound {
    namespace Data
    {
      class IAscanData
      {
      public:
        virtual ~IAscanData() = default;

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        ///  Gets the data array of the AScan. The exact type of the pointer is defined by 
        ///  IReadOnlyAscanBuffer::GetDataType(). The axis to IAscanBufferDescriptor::GetAmplitudeSamplingAxis
        ///   provides the minimum and maximum values of each data point.
        ///
        /// @returns  Null if it fails, else the data.
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual const void* GetData() const = 0;

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Query if data has been written.
        ///
        /// @returns  True if data is available.
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual bool HasData() const = 0;

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Query if data are saturated.
        ///
        /// @returns  True if data are saturated.
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual bool IsSaturated() const = 0;

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Query if data are synchronized with the source.
        /// Always true when is not synced on the Gate I.
        ///
        /// @returns  True if data are synced.
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual bool IsSyncedOnSource() const = 0;
      };

      using IAscanDataConstPtr = std::shared_ptr<const IAscanData>;
    }
  }
}
