// Generated by gencpp from file course_web_dev_ros/ExampleActionGoal.msg
// DO NOT EDIT!


#ifndef COURSE_WEB_DEV_ROS_MESSAGE_EXAMPLEACTIONGOAL_H
#define COURSE_WEB_DEV_ROS_MESSAGE_EXAMPLEACTIONGOAL_H


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
struct ExampleActionGoal_
{
  typedef ExampleActionGoal_<ContainerAllocator> Type;

  ExampleActionGoal_()
    : total(0.0)  {
    }
  ExampleActionGoal_(const ContainerAllocator& _alloc)
    : total(0.0)  {
  (void)_alloc;
    }



   typedef float _total_type;
  _total_type total;





  typedef boost::shared_ptr< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ExampleActionGoal_

typedef ::course_web_dev_ros::ExampleActionGoal_<std::allocator<void> > ExampleActionGoal;

typedef boost::shared_ptr< ::course_web_dev_ros::ExampleActionGoal > ExampleActionGoalPtr;
typedef boost::shared_ptr< ::course_web_dev_ros::ExampleActionGoal const> ExampleActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator1> & lhs, const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.total == rhs.total;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator1> & lhs, const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace course_web_dev_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8714f4039a8436108c3414e0ff35edfa";
  }

  static const char* value(const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8714f4039a843610ULL;
  static const uint64_t static_value2 = 0x8c3414e0ff35edfaULL;
};

template<class ContainerAllocator>
struct DataType< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "course_web_dev_ros/ExampleActionGoal";
  }

  static const char* value(const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# goal definition\n"
"float32 total\n"
;
  }

  static const char* value(const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.total);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExampleActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::course_web_dev_ros::ExampleActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "total: ";
    Printer<float>::stream(s, indent + "  ", v.total);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COURSE_WEB_DEV_ROS_MESSAGE_EXAMPLEACTIONGOAL_H
