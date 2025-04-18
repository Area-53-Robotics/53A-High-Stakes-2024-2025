#pragma once
//#include <type_traits>

void runIntake(bool running, int power);
void clampState (bool state);
void intakeState (bool state);
void blueSort();
//Sides
void blue_pos();
void blue_neg();
void red_pos();
void red_neg();
void skills();
void blue_solo();
void red_solo();

//Emergency
void emergency_blue_pos();
void emergency_blue_neg();
void emergency_red_pos();
void emergency_red_neg();
void emergency_skills();
void move(int power, int timeout);
void turn(int power, int timeout);

void ladyBrown(int power, int timeout);
