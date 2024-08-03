#pragma once
#include "main.h"

//Controller
inline pros::Controller master(pros::E_CONTROLLER_MASTER);

//Drive Train motors (front, back bottom, back top)
inline pros::MotorGroup left_motors ({-20, -19, -18});
inline pros::MotorGroup right_motors ({11, 12, 13});
