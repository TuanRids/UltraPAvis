////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file IApplicationStamp.h
///
/// The application stamp holds metadata information such as the company name, application name,
/// application version and an optional original file source.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <string>
#include <memory>
#include <storage/IOriginalFileSource.h>
#include <storage/IGeoCoordinate.h>

namespace Olympus
{
  namespace FileManagement
  {
    class IApplicationStamp
    {
    public:
      virtual ~IApplicationStamp() = default;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Gets company name
      ///
      /// NDE file HDF5 file root Attirbute "Company name"
      /// 
      /// @returns The company name.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual const std::wstring& GetCompanyName() const = 0;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Gets application name
      ///
      /// NDE file HDF5 file root Attirbute "Application name"
      /// 
      /// @returns The application name.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual const std::wstring& GetApplicationName() const = 0;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Gets application version
      ///
      /// NDE file HDF5 file root Attirbute "Application version"
      /// 
      /// @returns The application version.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual const std::wstring& GetApplicationVersion() const = 0;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Gets original file source
      ///
      /// NDE file HDF5 file root Not available in NDE
      /// 
      /// @returns The original file source.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual IOriginalFileSourcePtr GetOriginalFileSource() const = 0;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Gets GeoCoordinate
      ///
      /// NDE file HDF5 file root To DO in NDE
      /// 
      /// @returns The data file GeoCoordinate.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual IGeoCoordinatePtr GetGeoCoordinate() const = 0;
    };

    using IApplicationStampPtr = std::shared_ptr<IApplicationStamp>;
  }
}
