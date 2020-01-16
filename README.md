Fanuc motion for Gastro project

include/move_fanuc.h contains an encapsulated version of moveit command

include/joint_angles.h contains joint angles for each waypoints

include/fanuc_motion.h contains functions that can be called to move the arms to each location

Motions on both arms are done. Left arm on sauce dispenser side. Riht arm on pasta dispenser side

Run $ rosrun move_fanuc move_left_arm and $ rosrun move_fanuc move_right_arm
