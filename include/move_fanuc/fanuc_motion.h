#include <move_fanuc/joint_angles.h>

#ifndef FANUC_MOTION_H
#define FANUC_MOTION_H

void pickUpCleanPan(fanuc::Arm &robot, bool step = true);
void dropOffDirtyPan(fanuc::Arm &robot, bool step = true);

void getSauce(fanuc::Arm &robot, bool step = true, double time);

void servePasta(fanuc::Arm &robot, bool step = true);

void placePan1(fanuc::Arm &robot, bool step = true);
/*
void pickUpPan1(fanuc::Arm &robot, bool step = true);
void placePan2(fanuc::Arm &robot, bool step = true);
void pickUpPan2(fanuc::Arm &robot, bool step = true);
void placePan3(fanuc::Arm &robot, bool step = true);
void pickUpPan3(fanuc::Arm &robot, bool step = true);
*/
#endif