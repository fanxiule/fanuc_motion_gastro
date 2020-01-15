#include <move_fanuc/move_fanuc.h>
#include <math.h>

std::vector<double> clean_pan_pt1 = {121.622419 * M_PI / 180, 10.351567 * M_PI / 180,
                                     -52.118777 * M_PI / 180, 62.344109 * M_PI / 180,
                                     -103.630656 * M_PI / 180, 31.936237 * M_PI / 180};

std::vector<double> clean_pan_pt2 = {114.968872 * M_PI / 180, 18.678274 * M_PI / 180,
                                     -37.759511 * M_PI / 180, 67.134660 * M_PI / 180,
                                     -104.314617 * M_PI / 180, 35.497098 * M_PI / 180};

std::vector<double> sauce_dis_pt1 = {78.358491 * M_PI / 180, 0.612198 * M_PI / 180,
                                     -50.496943 * M_PI / 180, 78.950614 * M_PI / 180,
                                     -91.641420 * M_PI / 180, -32.901714 * M_PI / 180};

std::vector<double> sauce_dis_pt2 = {38.992566 * M_PI / 180, -8.288363 * M_PI / 180,
                                     -49.019916 * M_PI / 180, 94.038939 * M_PI / 180,
                                     -80.737617 * M_PI / 180, 63.567683 * M_PI / 180};

std::vector<double> sauce_dis_pt3 = {48.815700 * M_PI / 180, 28.390052 * M_PI / 180,
                                     -33.350227 * M_PI / 180, 88.795225 * M_PI / 180,
                                     -91.439847 * M_PI / 180, 42.631606 * M_PI / 180};

std::vector<double> pan_1_pt1 = {25.260676 * M_PI / 180, 50.134657 * M_PI / 180,
                                 13.220125 * M_PI / 180, 88.797131 * M_PI / 180,
                                 -91.439711 * M_PI / 180, 64.602859 * M_PI / 180};

std::vector<double> pan_1_pt2 = {25.253147 * M_PI / 180, 50.617135 * M_PI / 180,
                                 5.606243 * M_PI / 180, 88.795389 * M_PI / 180,
                                 -91.441002 * M_PI / 180, 48.580304 * M_PI / 180};

std::vector<double> pan_1_pt3 = {25.255890 * M_PI / 180, 26.484077 * M_PI / 180,
                                 -33.253071 * M_PI / 180, 88.793368 * M_PI / 180,
                                 -91.901841 * M_PI / 180, 39.380327 * M_PI / 180};

std::vector<double> pan_2_pt1 = {1.566151 * M_PI / 180, 48.722232 * M_PI / 180,
                                 15.780172 * M_PI / 180, 88.791981 * M_PI / 180,
                                 -91.440558 * M_PI / 180, 64.237048 * M_PI / 180};

std::vector<double> pan_2_pt2 = {1.564881 * M_PI / 180, 52.078335 * M_PI / 180,
                                 8.970320 * M_PI / 180, 88.795622 * M_PI / 180,
                                 -91.442190 * M_PI / 180, 52.138953 * M_PI / 180};

std::vector<double> pan_2_pt3 = {1.567774 * M_PI / 180, 33.359658 * M_PI / 180,
                                 -22.623741 * M_PI / 180, 88.797671 * M_PI / 180,
                                 -91.436453 * M_PI / 180, 41.422765 * M_PI / 180};

std::vector<double> pan_3_pt1 = {-29.064323 * M_PI / 180, 65.599999 * M_PI / 180,
                                 46.922083 * M_PI / 180, 97.241984 * M_PI / 180,
                                 -63.069441 * M_PI / 180, 78.773159 * M_PI / 180};

std::vector<double> pan_3_pt2 = {-29.063804 * M_PI / 180, 79.094567 * M_PI / 180,
                                 59.633200 * M_PI / 180, 97.240618 * M_PI / 180,
                                 -63.070759 * M_PI / 180, 74.092280 * M_PI / 180};

std::vector<double> pan_3_pt3 = {-37.305127 * M_PI / 180, 45.337990 * M_PI / 180,
                                 -0.177134 * M_PI / 180, 116.223824 * M_PI / 180,
                                 -65.258079 * M_PI / 180, 51.032807 * M_PI / 180};

std::vector<double> serve_pt_1 = {42.469443 * M_PI / 180, -1.071439 * M_PI / 180,
                                  28.003931 * M_PI / 180, 91.967377 * M_PI / 180,
                                  -90.832910 * M_PI / 180, 125.887531 * M_PI / 180};

std::vector<double> serve_pt_2 = {69.478201 * M_PI / 180, -41.839898 * M_PI / 180,
                                  -12.764022 * M_PI / 180, 91.966120 * M_PI / 180,
                                  -90.833559 * M_PI / 180, 131.136053 * M_PI / 180};

std::vector<double> serve_pt_3 = {166.919100 * M_PI / 180, 27.211037 * M_PI / 180,
                                  -12.321043 * M_PI / 180, 87.835891 * M_PI / 180,
                                  -90.379829 * M_PI / 180, 57.067914 * M_PI / 180};

std::vector<double> serve_pt_4 = {166.918950 * M_PI / 180, 24.097893 * M_PI / 180,
                                  19.387299 * M_PI / 180, 5.848084 * M_PI / 180,
                                  -90.379297 * M_PI / 180, 89.482923 * M_PI / 180};

std::vector<double> dirty_pan_pt1 = {148.915964 * M_PI / 180, 38.562025 * M_PI / 180,
                                     -5.479263 * M_PI / 180, 60.158974 * M_PI / 180,
                                     -115.842658 * M_PI / 180, 45.464406 * M_PI / 180};

std::vector<double> dirty_pan_pt2 = {143.232728 * M_PI / 180, 49.226768 * M_PI / 180,
                                     10.437226 * M_PI / 180, 61.959098 * M_PI / 180,
                                     -115.286544 * M_PI / 180, 47.870450 * M_PI / 180};

int main(int argc, char **argv)
{
  ros::init(argc, argv, "move_left_arm");
  ros::NodeHandle node_handle;
  ros::AsyncSpinner spinner(1);
  spinner.start();

  fanuc::Arm arm("manipulator");
  arm.visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window");
  std::vector<double> arm_joint_values;

  //pick up clean pan
  arm_joint_values = clean_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = clean_pan_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = clean_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //sauce dispenser
  arm_joint_values = sauce_dis_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = sauce_dis_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = sauce_dis_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  ros::Duration(5).sleep();
  arm_joint_values = sauce_dis_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //put down pan 1
  arm_joint_values = pan_1_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_1_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_1_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //pick up clean pan
  arm_joint_values = clean_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = clean_pan_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = clean_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //sauce dispenser
  arm_joint_values = sauce_dis_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = sauce_dis_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = sauce_dis_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  ros::Duration(5).sleep();
  arm_joint_values = sauce_dis_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //put down pan 2
  arm_joint_values = pan_2_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_2_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_2_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //pick up clean pan
  arm_joint_values = clean_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = clean_pan_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = clean_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //sauce dispenser
  arm_joint_values = sauce_dis_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = sauce_dis_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = sauce_dis_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  ros::Duration(5).sleep();
  arm_joint_values = sauce_dis_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //put down pan 3
  arm_joint_values = pan_3_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_3_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_3_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //pick up pan 1
  arm_joint_values = pan_1_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_1_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_1_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //serve
  arm_joint_values = serve_pt_2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_4;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_3;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //drop off dirty pan
  arm_joint_values = dirty_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = dirty_pan_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = dirty_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //pick up pan 2
  arm_joint_values = pan_2_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_2_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_2_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //serve
  arm_joint_values = serve_pt_2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_4;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_3;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //drop off dirty pan
  arm_joint_values = dirty_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = dirty_pan_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = dirty_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //pick up pan 3
  arm_joint_values = pan_3_pt3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_3_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = pan_3_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //serve
  arm_joint_values = serve_pt_2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_3;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_4;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = serve_pt_3;
  arm.moveTargetJoint(arm_joint_values, false, true);

  //drop off dirty pan
  arm_joint_values = dirty_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = dirty_pan_pt2;
  arm.moveTargetJoint(arm_joint_values, false, true);
  arm_joint_values = dirty_pan_pt1;
  arm.moveTargetJoint(arm_joint_values, false, true);

  ros::shutdown();
  return 0;
}