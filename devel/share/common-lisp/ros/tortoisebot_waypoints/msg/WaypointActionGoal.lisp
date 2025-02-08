; Auto-generated. Do not edit!


(cl:in-package tortoisebot_waypoints-msg)


;//! \htmlinclude WaypointActionGoal.msg.html

(cl:defclass <WaypointActionGoal> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point)))
)

(cl:defclass WaypointActionGoal (<WaypointActionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WaypointActionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WaypointActionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tortoisebot_waypoints-msg:<WaypointActionGoal> is deprecated: use tortoisebot_waypoints-msg:WaypointActionGoal instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <WaypointActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tortoisebot_waypoints-msg:position-val is deprecated.  Use tortoisebot_waypoints-msg:position instead.")
  (position m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WaypointActionGoal>) ostream)
  "Serializes a message object of type '<WaypointActionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'position) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WaypointActionGoal>) istream)
  "Deserializes a message object of type '<WaypointActionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'position) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WaypointActionGoal>)))
  "Returns string type for a message object of type '<WaypointActionGoal>"
  "tortoisebot_waypoints/WaypointActionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WaypointActionGoal)))
  "Returns string type for a message object of type 'WaypointActionGoal"
  "tortoisebot_waypoints/WaypointActionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WaypointActionGoal>)))
  "Returns md5sum for a message object of type '<WaypointActionGoal>"
  "e7bb0ef028c744b081acdc57743b11d8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WaypointActionGoal)))
  "Returns md5sum for a message object of type 'WaypointActionGoal"
  "e7bb0ef028c744b081acdc57743b11d8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WaypointActionGoal>)))
  "Returns full string definition for message of type '<WaypointActionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Goal~%geometry_msgs/Point position~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WaypointActionGoal)))
  "Returns full string definition for message of type 'WaypointActionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Goal~%geometry_msgs/Point position~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WaypointActionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'position))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WaypointActionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'WaypointActionGoal
    (cl:cons ':position (position msg))
))
