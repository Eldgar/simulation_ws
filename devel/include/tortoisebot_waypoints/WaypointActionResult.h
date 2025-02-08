// Generated by gencpp from file tortoisebot_waypoints/WaypointActionResult.msg
// DO NOT EDIT!


#ifndef TORTOISEBOT_WAYPOINTS_MESSAGE_WAYPOINTACTIONRESULT_H
#define TORTOISEBOT_WAYPOINTS_MESSAGE_WAYPOINTACTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tortoisebot_waypoints
{
template <class ContainerAllocator>
struct WaypointActionResult_
{
  typedef WaypointActionResult_<ContainerAllocator> Type;

  WaypointActionResult_()
    : success(false)  {
    }
  WaypointActionResult_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointActionResult_

typedef ::tortoisebot_waypoints::WaypointActionResult_<std::allocator<void> > WaypointActionResult;

typedef boost::shared_ptr< ::tortoisebot_waypoints::WaypointActionResult > WaypointActionResultPtr;
typedef boost::shared_ptr< ::tortoisebot_waypoints::WaypointActionResult const> WaypointActionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator1> & lhs, const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator1> & lhs, const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tortoisebot_waypoints

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tortoisebot_waypoints/WaypointActionResult";
  }

  static const char* value(const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Result\n"
"bool success\n"
;
  }

  static const char* value(const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointActionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tortoisebot_waypoints::WaypointActionResult_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TORTOISEBOT_WAYPOINTS_MESSAGE_WAYPOINTACTIONRESULT_H
