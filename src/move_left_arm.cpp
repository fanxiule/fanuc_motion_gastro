#include <move_fanuc/fanuc_motion.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "move_left_arm");
  ros::NodeHandle node_handle;
  ros::AsyncSpinner spinner(1);
  spinner.start();

  fanuc::Arm arm("manipulator");
  arm.visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window");

  pickUpCleanPan(arm, false);
  getSauce(arm, false, 2);
  placePan1(arm, false);

  pickUpCleanPan(arm, false);
  getSauce(arm, false, 2);
  placePan2(arm, false);

  pickUpCleanPan(arm, false);
  getSauce(arm, false, 2);
  placePan3(arm, false);

  pickUpPan1(arm, false);
  servePasta(arm, false);
  dropOffDirtyPan(arm, false);

  pickUpPan2(arm, false);
  servePasta(arm, false);
  dropOffDirtyPan(arm, false);

  pickUpPan3(arm, false);
  placePan1(arm, false);

  ros::shutdown();
  return 0;
}