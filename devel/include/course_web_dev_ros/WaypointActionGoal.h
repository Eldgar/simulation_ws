// Generated by gencpp from file course_web_dev_ros/WaypointActionGoal.msg
// DO NOT EDIT!


#ifndef COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONGOAL_H
#define COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONGOAL_H


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
struct WaypointActionGoal_
{
  typedef WaypointActionGoal_<ContainerAllocator> Type;

  WaypointActionGoal_()
    : position()  {
    }
  WaypointActionGoal_(const ContainerAllocator& _alloc)
    : position(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointActionGoal_

typedef ::course_web_dev_ros::WaypointActionGoal_<std::allocator<void> > WaypointActionGoal;

typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionGoal > WaypointActionGoalPtr;
typedef boost::shared_ptr< ::course_web_dev_ros::WaypointActionGoal const> WaypointActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator1> & lhs, const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator1> & lhs, const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace course_web_dev_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7bb0ef028c744b081acdc57743b11d8";
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7bb0ef028c744b0ULL;
  static const uint64_t static_value2 = 0x81acdc57743b11d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "course_web_dev_ros/WaypointActionGoal";
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# goal definition\n"
"geometry_msgs/Point position\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::course_web_dev_ros::WaypointActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COURSE_WEB_DEV_ROS_MESSAGE_WAYPOINTACTIONGOAL_H
