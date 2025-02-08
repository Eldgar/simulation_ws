
(cl:in-package :asdf)

(defsystem "tortoisebot_waypoints-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "WaypointActionAction" :depends-on ("_package_WaypointActionAction"))
    (:file "_package_WaypointActionAction" :depends-on ("_package"))
    (:file "WaypointActionActionFeedback" :depends-on ("_package_WaypointActionActionFeedback"))
    (:file "_package_WaypointActionActionFeedback" :depends-on ("_package"))
    (:file "WaypointActionActionGoal" :depends-on ("_package_WaypointActionActionGoal"))
    (:file "_package_WaypointActionActionGoal" :depends-on ("_package"))
    (:file "WaypointActionActionResult" :depends-on ("_package_WaypointActionActionResult"))
    (:file "_package_WaypointActionActionResult" :depends-on ("_package"))
    (:file "WaypointActionFeedback" :depends-on ("_package_WaypointActionFeedback"))
    (:file "_package_WaypointActionFeedback" :depends-on ("_package"))
    (:file "WaypointActionGoal" :depends-on ("_package_WaypointActionGoal"))
    (:file "_package_WaypointActionGoal" :depends-on ("_package"))
    (:file "WaypointActionResult" :depends-on ("_package_WaypointActionResult"))
    (:file "_package_WaypointActionResult" :depends-on ("_package"))
  ))