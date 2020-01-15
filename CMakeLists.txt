cmake_minimum_required(VERSION 2.8.3)
project(move_fanuc)

add_compile_options(-std=c++11)

find_package(Eigen3 REQUIRED)

# Eigen 3.2 (Wily) only provides EIGEN3_INCLUDE_DIR, not EIGEN3_INCLUDE_DIRS
if(NOT EIGEN3_INCLUDE_DIRS)
  set(EIGEN3_INCLUDE_DIRS ${EIGEN3_INCLUDE_DIR})
endif()

find_package(catkin REQUIRED COMPONENTS
    roscpp
    roslib
    rospy
    std_msgs
    message_generation
    moveit_core
    moveit_visual_tools
    moveit_ros_planning
    moveit_ros_planning_interface
    pluginlib
    geometric_shapes
    rosbag
)

find_package(Boost REQUIRED system filesystem date_time thread)

catkin_package(
  LIBRARIES
    interactivity_utils
    move_fanuc
  INCLUDE_DIRS
    ${THIS_PACKAGE_INCLUDE_DIRS}
    include
  CATKIN_DEPENDS
    std_msgs
    moveit_core
    moveit_visual_tools
    moveit_ros_planning_interface
  DEPENDS
    EIGEN3
    Boost
)


###########
## Build ##
###########

include_directories(SYSTEM ${THIS_PACKAGE_INCLUDE_DIRS} ${Boost_INCLUDE_DIR} ${EIGEN3_INCLUDE_DIRS})
include_directories(${catkin_INCLUDE_DIRS})
include_directories(include)
link_directories(${catkin_LIBRARY_DIRS})

add_library(move_fanuc src/move_fanuc.cpp)
add_dependencies(move_fanuc ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

add_executable(move_right_arm src/move_right_arm.cpp)
add_dependencies(move_right_arm ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(move_right_arm
  move_fanuc
  ${catkin_LIBRARIES}
)

add_executable(move_left_arm src/move_left_arm.cpp)
add_dependencies(move_left_arm ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(move_left_arm
  move_fanuc
  ${catkin_LIBRARIES}
)

add_executable(homing src/homing.cpp)
add_dependencies(homing ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(homing
  move_fanuc
  ${catkin_LIBRARIES}
)

install(TARGETS move_fanuc
        ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
        LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
        RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
)

install(DIRECTORY include/${PROJECT_NAME}/
        DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)
