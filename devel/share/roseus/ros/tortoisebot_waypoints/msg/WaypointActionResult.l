;; Auto-generated. Do not edit!


(when (boundp 'tortoisebot_waypoints::WaypointActionResult)
  (if (not (find-package "TORTOISEBOT_WAYPOINTS"))
    (make-package "TORTOISEBOT_WAYPOINTS"))
  (shadow 'WaypointActionResult (find-package "TORTOISEBOT_WAYPOINTS")))
(unless (find-package "TORTOISEBOT_WAYPOINTS::WAYPOINTACTIONRESULT")
  (make-package "TORTOISEBOT_WAYPOINTS::WAYPOINTACTIONRESULT"))

(in-package "ROS")
;;//! \htmlinclude WaypointActionResult.msg.html


(defclass tortoisebot_waypoints::WaypointActionResult
  :super ros::object
  :slots (_success ))

(defmethod tortoisebot_waypoints::WaypointActionResult
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get tortoisebot_waypoints::WaypointActionResult :md5sum-) "358e233cde0c8a8bcfea4ce193f8fc15")
(setf (get tortoisebot_waypoints::WaypointActionResult :datatype-) "tortoisebot_waypoints/WaypointActionResult")
(setf (get tortoisebot_waypoints::WaypointActionResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Result
bool success

")



(provide :tortoisebot_waypoints/WaypointActionResult "358e233cde0c8a8bcfea4ce193f8fc15")


