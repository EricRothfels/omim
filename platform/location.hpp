#pragma once

#include "../std/string.hpp"
#include "../std/vector.hpp"
#include "../std/function.hpp"

namespace location
{
  /// after this period we cont position as "too old"
  static double const POSITION_TIMEOUT_SECONDS = 300.0;

  enum TLocationStatus
  {
    EStopped,
    EStarted,
    EFirstEvent,    //!< Sent when first valid coorinate is received
    ENotSupported,
    EDisabledByUser
  };

  enum TLocationSource
  {
    EAppleNative,
    EWindowsNative,
    EGoogle
  };

  /// @note always check m_status before using this structure
  class GpsInfo
  {
  public:
    TLocationSource m_source;
    double m_timestamp;           //!< seconds from 1st Jan 1970
    double m_latitude;            //!< degrees
    double m_longitude;           //!< degrees
    double m_horizontalAccuracy;  //!< metres
//    double m_altitude;            //!< metres
//    double m_verticalAccuracy;    //!< metres
//    double m_course;              //!< positive degrees from the true North
//    double m_speed;               //!< metres per second
  };

  /// @note always check m_status before using this structure
  class CompassInfo
  {
  public:
    double m_timestamp;           //!< how many seconds ago the heading was retrieved
    double m_magneticHeading;     //!< positive degrees from the magnetic North
    double m_trueHeading;         //!< positive degrees from the true North
    double m_accuracy;            //!< offset from magnetic to true North
//    int m_x;
//    int m_y;
//    int m_z;
  };
} // namespace location
