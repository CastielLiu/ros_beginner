// Generated by gencpp from file turtlesim/SpawnRequest.msg
// DO NOT EDIT!


#ifndef TURTLESIM_MESSAGE_SPAWNREQUEST_H
#define TURTLESIM_MESSAGE_SPAWNREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim
{
template <class ContainerAllocator>
struct SpawnRequest_
{
  typedef SpawnRequest_<ContainerAllocator> Type;

  SpawnRequest_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)
    , name()  {
    }
  SpawnRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)
    , name(_alloc)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _theta_type;
  _theta_type theta;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;




  typedef boost::shared_ptr< ::turtlesim::SpawnRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim::SpawnRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SpawnRequest_

typedef ::turtlesim::SpawnRequest_<std::allocator<void> > SpawnRequest;

typedef boost::shared_ptr< ::turtlesim::SpawnRequest > SpawnRequestPtr;
typedef boost::shared_ptr< ::turtlesim::SpawnRequest const> SpawnRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim::SpawnRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim::SpawnRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlesim

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'turtlesim': ['/mnt/data/work/ssh_test/ros_beginner/catkin_ws/src/ros_tutorials/turtlesim/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::SpawnRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::SpawnRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::SpawnRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::SpawnRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::SpawnRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::SpawnRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim::SpawnRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "57f001c49ab7b11d699f8606c1f4f7ff";
  }

  static const char* value(const ::turtlesim::SpawnRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x57f001c49ab7b11dULL;
  static const uint64_t static_value2 = 0x699f8606c1f4f7ffULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim::SpawnRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim/SpawnRequest";
  }

  static const char* value(const ::turtlesim::SpawnRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim::SpawnRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 theta\n\
string name\n\
";
  }

  static const char* value(const ::turtlesim::SpawnRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim::SpawnRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SpawnRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim::SpawnRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlesim::SpawnRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_MESSAGE_SPAWNREQUEST_H
