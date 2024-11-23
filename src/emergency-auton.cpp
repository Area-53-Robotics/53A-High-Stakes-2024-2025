#include "main.h"
#include "devices.h"
#include "auton.h"

void emergency_blue_pos(){
    move(-50, 500);
    turn(30, 150);
    move(-100, 300);
    pros::delay(500);
    clampState(true);
    pros::delay(250);
    runIntake(true, -127);
    turn(50, 300);
    move(100, 500);
    pros::delay(500);
    move(-50, 300);
    pros::delay(2000);
    runIntake(false, 0);
}

void emergency_blue_neg(){
    
}

void emergency_red_pos(){
    move(-50, 500);
    turn(-30, 150);
    move(-100, 300);
    pros::delay(500);
    clampState(true);
    pros::delay(250);
    runIntake(true, -127);
    turn(-50, 300);
    move(127, 500);
    pros::delay(500);
    move(-50, 300);
    pros::delay(2000);
    runIntake(false, 0);
}

void emergency_red_neg(){
    
}


void Emergency_skills(){
    move(-50, 500);
    clampState(true);
    pros::delay(500);
    runIntake(true, -127);
    turn(-50, 400);
    move(-60, 1000);
    clampState(false);
}
