#include <move_fanuc/fanuc_motion.h>
#include <math.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "move_right_arm");
    ros::NodeHandle node_handle;
    ros::AsyncSpinner spinner(1);
    spinner.start();

    fanuc::Arm arm("manipulator");
    arm.visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window");
    
    getPasta1(arm, false, 2);
    boilPasta(arm, false);
    getPasta2(arm, false, 2);
    boilPasta(arm, false);
    takeCookedPasta(arm, false);
    getPasta3(arm, false, 2);
    boilPasta(arm, false);
    takeCookedPasta(arm, false);
    takeCookedPasta(arm, false);

    ros::shutdown();
    return 0;
}