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
        robot.moveTargetJoint(clean_pan_away, true, true);
        robot.moveTargetJoint(take_clean_pan, true, true);
        robot.moveTargetJoint(clean_pan_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(clean_pan_away, false, true);
        robot.moveTargetJoint(take_clean_pan, false, true);
        robot.moveTargetJoint(clean_pan_away, false, true);
    }
}

void dropOffDirtyPan(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(dirty_pan_away, true, true);
        robot.moveTargetJoint(drop_dirty_pan, true, true);
        robot.moveTargetJoint(dirty_pan_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(dirty_pan_away, false, true);
        robot.moveTargetJoint(drop_dirty_pan, false, true);
        robot.moveTargetJoint(dirty_pan_away, false, true);
    }
}

void getSauce(fanuc::Arm &robot, bool step, double time) //how much time needed for sauce to get dispensed
{
    if (step == true)
    {
        robot.moveTargetJoint(sauce_dis_avoid_colli, true, true);
        robot.moveTargetJoint(sauce_dis_away, true, true);
        robot.moveTargetJoint(get_sauce, true, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(sauce_dis_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(sauce_dis_avoid_colli, false, true);
        robot.moveTargetJoint(sauce_dis_away, false, true);
        robot.moveTargetJoint(get_sauce, false, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(sauce_dis_away, false, true);
    }
}

void servePasta(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(serve_interim, true, true);
        robot.moveTargetJoint(serve_station, true, true);
        robot.moveTargetJoint(serve_dish, true, true);
        robot.moveTargetJoint(serve_station, true, true);
    }

    else
    {
        robot.moveTargetJoint(serve_interim, false, true);
        robot.moveTargetJoint(serve_station, false, true);
        robot.moveTargetJoint(serve_dish, false, true);
        robot.moveTargetJoint(serve_station, false, true);
    }
}

void placePan1(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_1_above, true, true);
        robot.moveTargetJoint(pan_1_stove, true, true);
        robot.moveTargetJoint(pan_1_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_1_above, false, true);
        robot.moveTargetJoint(pan_1_stove, false, true);
        robot.moveTargetJoint(pan_1_away, false, true);
    }
}

void pickUpPan1(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_1_away, true, true);
        robot.moveTargetJoint(pan_1_stove, true, true);
        robot.moveTargetJoint(pan_1_above, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_1_away, false, true);
        robot.moveTargetJoint(pan_1_stove, false, true);
        robot.moveTargetJoint(pan_1_above, false, true);
    }
}

void placePan2(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_2_above, true, true);
        robot.moveTargetJoint(pan_2_stove, true, true);
        robot.moveTargetJoint(pan_2_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_2_above, false, true);
        robot.moveTargetJoint(pan_2_stove, false, true);
        robot.moveTargetJoint(pan_2_away, false, true);
    }
}

void pickUpPan2(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_2_away, true, true);
        robot.moveTargetJoint(pan_2_stove, true, true);
        robot.moveTargetJoint(pan_2_above, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_2_away, false, true);
        robot.moveTargetJoint(pan_2_stove, false, true);
        robot.moveTargetJoint(pan_2_above, false, true);
    }
}

void placePan3(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_3_above, true, true);
        robot.moveTargetJoint(pan_3_stove, true, true);
        robot.moveTargetJoint(pan_3_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_3_above, false, true);
        robot.moveTargetJoint(pan_3_stove, false, true);
        robot.moveTargetJoint(pan_3_away, false, true);
    }
}

void pickUpPan3(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(pan_3_away, true, true);
        robot.moveTargetJoint(pan_3_stove, true, true);
        robot.moveTargetJoint(pan_3_above, true, true);
    }

    else
    {
        robot.moveTargetJoint(pan_3_away, false, true);
        robot.moveTargetJoint(pan_3_stove, false, true);
        robot.moveTargetJoint(pan_3_above, false, true);
    }
}

void boilPasta(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(boiler_above_1, true, true);
        robot.moveTargetJoint(boiler_dump_pasta, true, true);
        robot.moveTargetJoint(boiler_above_1, true, true);
    }

    else
    {
        robot.moveTargetJoint(boiler_above_1, false, true);
        robot.moveTargetJoint(boiler_dump_pasta, false, true);
        robot.moveTargetJoint(boiler_above_1, false, true);
    }
}

void takeCookedPasta(fanuc::Arm &robot, bool step)
{
    if (step == true)
    {
        robot.moveTargetJoint(boiler_above_2, true, true);
        robot.moveTargetJoint(boiler_take_pasta, true, true);
        robot.moveTargetJoint(boiler_above_2, true, true);
        robot.moveTargetJoint(pan_3_above_dump_pasta, true, true);
        robot.moveTargetJoint(pan_3_dump_pasta, true, true);
        robot.moveTargetJoint(pan_3_above_dump_pasta, true, true);
        robot.moveTargetJoint(boiler_above_2, true, true);
        robot.moveTargetJoint(boiler_take_pasta, true, true);
    }

    else
    {
        robot.moveTargetJoint(boiler_above_2, false, true);
        robot.moveTargetJoint(boiler_take_pasta, false, true);
        robot.moveTargetJoint(boiler_above_2, false, true);
        robot.moveTargetJoint(pan_3_above_dump_pasta, false, true);
        robot.moveTargetJoint(pan_3_dump_pasta, false, true);
        robot.moveTargetJoint(pan_3_above_dump_pasta, false, true);
        robot.moveTargetJoint(boiler_above_2, false, true);
        robot.moveTargetJoint(boiler_take_pasta, false, true);
    }
}

void getPasta1(fanuc::Arm &robot, bool step, double time) //how much time to stay under the dispenser
{
    if (step == true)
    {
        robot.moveTargetJoint(boiler_away, true, true);
        robot.moveTargetJoint(pasta_1_away, true, true);
        robot.moveTargetJoint(pasta_1_get_pasta, true, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(pasta_1_away, true, true);
        robot.moveTargetJoint(boiler_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(boiler_away, false, true);
        robot.moveTargetJoint(pasta_1_away, false, true);
        robot.moveTargetJoint(pasta_1_get_pasta, false, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(pasta_1_away, false, true);
        robot.moveTargetJoint(boiler_away, false, true);
    }
}

void getPasta2(fanuc::Arm &robot, bool step, double time) //how much time to stay under the dispenser
{
    if (step == true)
    {
        robot.moveTargetJoint(boiler_away, true, true);
        robot.moveTargetJoint(pasta_2_away, true, true);
        robot.moveTargetJoint(pasta_2_get_pasta, true, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(pasta_2_away, true, true);
        robot.moveTargetJoint(boiler_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(boiler_away, false, true);
        robot.moveTargetJoint(pasta_2_away, false, true);
        robot.moveTargetJoint(pasta_2_get_pasta, false, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(pasta_2_away, false, true);
        robot.moveTargetJoint(boiler_away, false, true);
    }
}

void getPasta3(fanuc::Arm &robot, bool step, double time) //how much time to stay under the dispenser
{
    if (step == true)
    {
        robot.moveTargetJoint(boiler_away, true, true);
        robot.moveTargetJoint(pasta_3_away, true, true);
        robot.moveTargetJoint(pasta_3_get_pasta, true, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(pasta_3_away, true, true);
        robot.moveTargetJoint(boiler_away, true, true);
    }

    else
    {
        robot.moveTargetJoint(boiler_away, false, true);
        robot.moveTargetJoint(pasta_3_away, false, true);
        robot.moveTargetJoint(pasta_3_get_pasta, false, true);
        ros::Duration(time).sleep();
        robot.moveTargetJoint(pasta_3_away, false, true);
        robot.moveTargetJoint(boiler_away, false, true);
    }
}
#endif