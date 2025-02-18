// Generated by gencpp from file course_web_dev_ros/WaypointActionFeedback.msg
// DO NOT EDIT!


#ifndef COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONFEEDBACK_H
#define COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace course_web_dev_ros
{
template <class ContainerAllocator>
struct WaypointActionFeedback_
{
  typedef WaypointActionFeedback_<ContainerAllocator> Type;

  WaypointActionFeedback_()
    : position()
    , state()  {
    }
  WaypointActionFeedback_(const ContainerAllocator& _alloc)
    : position(_alloc)
    , state(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointActionFeedback_

typedef ::course_web_dev_ros::WaypointActionFeedback_<std::allocator<void> > WaypointActionFeedback;

typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionFeedback > WaypointActionFeedbackPtr;
typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionFeedback const> WaypointActionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator1> & lhs, const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position &&
    lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator1> & lhs, const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace course_web_dev_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4294e775dffb1318490841da75ade3a4";
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4294e775dffb1318ULL;
  static const uint64_t static_value2 = 0x490841da75ade3a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "course_web_dev_ros/WaypointActionFeedback";
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# feedback\n"
"geometry_msgs/Point position\n"
"string state\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointActionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::course_web_dev_ros::WaypointActionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONFEEDBACK_H
