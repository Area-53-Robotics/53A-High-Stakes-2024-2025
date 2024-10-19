#pragma once
#include <type_traits>

void runIntake(bool running, int power);
void clampState (bool state);
void intakeState (bool state);

//Sides
void blue_pos();
void blue_neg();
void red_pos();
void red_neg();