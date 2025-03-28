////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file IAscanBufferKey.h.
///
/// IAscanBufferKey is used as a unique key to retrieve a buffer and his descriptor.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <memory>
#include <string>


namespace Olympus {
  namespace Ultrasound {
    namespace Data
    {
      class IAscanBufferKey
      {
      public:
        virtual ~IAscanBufferKey() = default;

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Gets beamset name
        ///
        /// @returns  The beamset name.
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual const std::wstring& GetBeamSetName() const = 0;

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Gets the beam index  
        ///
        /// @returns  The beam index.
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual int GetBeamIndex() const = 0;
      };

      using IAscanBufferKeyConstPtr = std::shared_ptr<const IAscanBufferKey>;
    }
  }
}
