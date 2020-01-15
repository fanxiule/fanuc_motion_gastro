#include <move_fanuc/joint_angles.h>

#ifndef FANUC_MOTION_H
#define FANUC_MOTION_H

void goHome(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(homing, true, true);
    }

    else
    {
        robot.moveTargetJoint(homing, false, true);
    }
}

void pickUpCleanPan(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(clean_pan_pt1, true, true);
        robot.moveTargetJoint(clean_pan_pt2, true, true);
        robot.moveTargetJoint(clean_pan_pt1, true, true);
    }

    else
    {
        robot.moveTargetJoint(clean_pan_pt1, false, true);
        robot.moveTargetJoint(clean_pan_pt2, false, true);
        robot.moveTargetJoint(clean_pan_pt1, false, true);
    }
}

void dropOffDirtyPan(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(dirty_pan_pt1, true, true);
        robot.moveTargetJoint(dirty_pan_pt2, true, true);
        robot.moveTargetJoint(dirty_pan_pt1, true, true);
    }

    else
    {
        robot.moveTargetJoint(dirty_pan_pt1, false, true);
        robot.moveTargetJoint(dirty_pan_pt2, false, true);
        robot.moveTargetJoint(dirty_pan_pt1, false, true);
    }
}

void getSauce(fanuc::Arm &robot, bool step, double time)
{
    if (step == true)
    {
        robot.moveTargetJoint(sauce_dis_pt1, true, true);
        robot.moveTargetJoint(sauce_dis_pt2, true, true);
        robot.moveTargetJoint(sauce_dis_pt3, true, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(sauce_dis_pt2, true, true);
    }

    else
    {
        robot.moveTargetJoint(sauce_dis_pt1, false, true);
        robot.moveTargetJoint(sauce_dis_pt2, false, true);
        robot.moveTargetJoint(sauce_dis_pt3, false, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(sauce_dis_pt2, false, true);
    }
}

void servePasta(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(serve_pt_2, true, true);
        robot.moveTargetJoint(serve_pt_3, true, true);
        robot.moveTargetJoint(serve_pt_4, true, true);
        robot.moveTargetJoint(serve_pt_3, true, true);
    }

    else
    {
        robot.moveTargetJoint(serve_pt_2, false, true);
        robot.moveTargetJoint(serve_pt_3, false, true);
        robot.moveTargetJoint(serve_pt_4, false, true);
        robot.moveTargetJoint(serve_pt_3, false, true);
    }
}

void placePan1(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_1_pt1, true, true);
        robot.moveTargetJoint(pan_1_pt2, true, true);
        robot.moveTargetJoint(pan_1_pt3, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_1_pt1, false, true);
        robot.moveTargetJoint(pan_1_pt2, false, true);
        robot.moveTargetJoint(pan_1_pt3, false, true);
    }
}

void pickUpPan1(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_1_pt3, true, true);
        robot.moveTargetJoint(pan_1_pt2, true, true);
        robot.moveTargetJoint(pan_1_pt1, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_1_pt3, false, true);
        robot.moveTargetJoint(pan_1_pt2, false, true);
        robot.moveTargetJoint(pan_1_pt1, false, true);
    }
}

void placePan2(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_2_pt1, true, true);
        robot.moveTargetJoint(pan_2_pt2, true, true);
        robot.moveTargetJoint(pan_2_pt3, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_2_pt1, false, true);
        robot.moveTargetJoint(pan_2_pt2, false, true);
        robot.moveTargetJoint(pan_2_pt3, false, true);
    }
}

void pickUpPan2(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_2_pt3, true, true);
        robot.moveTargetJoint(pan_2_pt2, true, true);
        robot.moveTargetJoint(pan_2_pt1, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_2_pt3, false, true);
        robot.moveTargetJoint(pan_2_pt2, false, true);
        robot.moveTargetJoint(pan_2_pt1, false, true);
    }
}

void placePan3(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_3_pt1, true, true);
        robot.moveTargetJoint(pan_3_pt2, true, true);
        robot.moveTargetJoint(pan_3_pt3, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_3_pt1, false, true);
        robot.moveTargetJoint(pan_3_pt2, false, true);
        robot.moveTargetJoint(pan_3_pt3, false, true);
    }
}

void pickUpPan3(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_3_pt3, true, true);
        robot.moveTargetJoint(pan_3_pt2, true, true);
        robot.moveTargetJoint(pan_3_pt1, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_3_pt3, false, true);
        robot.moveTargetJoint(pan_3_pt2, false, true);
        robot.moveTargetJoint(pan_3_pt1, false, true);
    }
}

#endif