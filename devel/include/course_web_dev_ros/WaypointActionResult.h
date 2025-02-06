// Generated by gencpp from file course_web_dev_ros/WaypointActionResult.msg
// DO NOT EDIT!


#ifndef COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONRESULT_H
#define COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace course_web_dev_ros
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





  typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointActionResult_

typedef ::course_web_dev_ros::WaypointActionResult_<std::allocator<void> > WaypointActionResult;

typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionResult > WaypointActionResultPtr;
typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionResult const> WaypointActionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator1> & lhs, const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator1> & lhs, const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace course_web_dev_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "course_web_dev_ros/WaypointActionResult";
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# result definition\n"
"bool success\n"
;
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >
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
struct Printer< ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::course_web_dev_ros::WaypointActionResult_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONRESULT_H
