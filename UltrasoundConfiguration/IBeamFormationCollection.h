////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file ultrasoundConfiguration/IBeamFormationCollection.h
///
/// Declares the IBeamFormationCollection interface.
////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <ultrasoundConfiguration/UltrasoundTypes.h>

namespace Instrumentation
{
  class IBeamFormation;

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  /// Contains all the beam formations available. A beam formation collection 
  /// is required to create a phased array beam set in the interface IBeamSetFactory.
  ////////////////////////////////////////////////////////////////////////////////////////////////////
  class IBeamFormationCollection
  {
  public:
    virtual ~IBeamFormationCollection() = default;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Get the number of beam formations in this interface.
    ///
    /// @return
    /// The number of IBeamFormation.
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    virtual std::size_t GetCount() const = 0;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Get an interface IBeamFormation from this set by giving its index. A beam formation 
    /// contains all delays needed to create a phased array beam.
    ///
    /// @param index The position of the desired IBeamFormation in this collection.
    /// 
    /// @return
    /// The desired IBeamFormation interface.
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    virtual std::shared_ptr<IBeamFormation> GetBeamFormation(std::size_t index) const = 0;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Add an empty beam formation to this collection.
    ///
    /// @param beamFormation The interface IBeamFormation to add..
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    virtual void Add(std::shared_ptr<IBeamFormation> beamFormation) = 0;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Remove an interface IBeamFormation in this collection by giving its index.
    ///
    /// @param index The position of the IBeamFormation desired to be removed.
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    virtual void Remove(std::size_t index) = 0;
  };

  using IBeamFormationCollectionPtr = std::shared_ptr<IBeamFormationCollection>;
  using IBeamFormationCollectionConstPtr = std::shared_ptr<const IBeamFormationCollection>;
}
