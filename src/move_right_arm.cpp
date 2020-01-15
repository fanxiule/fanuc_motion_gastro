#include <move_fanuc/move_fanuc.h>
#include <math.h>


int main(int argc, char **argv)
{
    ros::init(argc, argv, "move_right_arm");
    ros::NodeHandle node_handle;
    ros::AsyncSpinner spinner(1);
    spinner.start();

    fanuc::Arm arm("manipulator");
    arm.visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window");

    //pasta 1
    std::vector<double> arm_joint_values = {-117.471276 * M_PI / 180, 38.069285 * M_PI / 180,
                                            0.998478 * M_PI / 180, 52.067126 * M_PI / 180,
                                            43.106447 * M_PI / 180, -37.614258 * M_PI / 180};
    arm.moveTargetJoint(arm_joint_values, true, true);

    //pasta 2
    arm_joint_values = {-90.818491 * M_PI / 180, 26.352905 * M_PI / 180,
                                            -29.571683 * M_PI / 180, 10.209492 * M_PI / 180,
                                            57.126326 * M_PI / 180, -5.747538 * M_PI / 180};
    arm.moveTargetJoint(arm_joint_values, true, true);

    //pasta 3
    arm_joint_values = {-58.354794 * M_PI / 180, 39.417151 * M_PI / 180,
                                            -9.946009 * M_PI / 180, -39.666651 * M_PI / 180,
                                            60.971132 * M_PI / 180, 26.101631 * M_PI / 180};
    arm.moveTargetJoint(arm_joint_values, true, true);

    //pasta cooker
    arm_joint_values = {-38.106971 * M_PI / 180, 9.952785 * M_PI / 180,
                                            19.641833 * M_PI / 180, -37.063530 * M_PI / 180,
                                            -22.422591 * M_PI / 180, 66.184861 * M_PI / 180};
    arm.moveTargetJoint(arm_joint_values, true, true);

    ros::shutdown();
    return 0;
}