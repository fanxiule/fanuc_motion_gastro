#include <move_fanuc/move_fanuc.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "homing");
    ros::NodeHandle node_handle;
    ros::AsyncSpinner spinner(1);
    spinner.start();

    fanuc::Arm arm("manipulator");
    arm.visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window");

    std::vector<double> arm_home_joint = {0, 0, 0, 0, 0, 0};
    arm.moveTargetJoint(arm_home_joint, true, true);

    ros::shutdown();
    return 0;
}