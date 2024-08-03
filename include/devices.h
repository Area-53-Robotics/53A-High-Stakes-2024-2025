#pragma once
#include "main.h"

//Controller
inline pros::Controller master(pros::E_CONTROLLER_MASTER);

//Drive Train Motors (front, middle, back)
inline pros::MotorGroup left_motors ({-20, -19, -18});
inline pros::MotorGroup right_motors ({11, 12, 13});

//Intake Motor
inline pros::Motor intake_motor (3);

//Pneumatics
inline pros::adi::Pneumatics clamp('A', false);