#include <move_fanuc/fanuc_motion.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "homing");
    ros::NodeHandle node_handle;
    ros::AsyncSpinner spinner(1);
    spinner.start();

    fanuc::Arm arm("manipulator");
    arm.visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window");
    
    goHome(arm, true);

    ros::shutdown();
    return 0;
}