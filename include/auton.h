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

//Emergency
void emergency_blue_pos();
void emergency_blue_neg();
void emergency_red_pos();
void emergency_red_neg();
void move(int power, int timeout);
void turn(int power, int timeout);
