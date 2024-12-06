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
    move(-95, 300);
    pros::delay(400);
    clampState(true);
    pros::delay(500);
    runIntake(true, -127);
    turn(-60, 300);
    move(90, 250);
    move(50, 350);
    pros::delay(1000);
    turn(-59, 300);
    move(65, 300);
    pros::delay(1000);
    move(-50, 500);
    turn(-51, 200);
    move(48, 600);   
    pros::delay(1000);
    move(-100, 500);
    turn(-40, 300);
    move(80, 600); 
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
    move(-95, 300);
    pros::delay(400);
    clampState(true);
    pros::delay(500);
    runIntake(true, -127);
    turn(60, 300);
    move(90, 250);
    move(50, 350);
    pros::delay(1000);
    turn(60, 300);
    move(65, 300);
    pros::delay(1000);
    move(-50, 500);
    turn(50, 200);
    move(40, 600);    
}


void emergency_skills(){
    move(-57, 400);
    pros::delay(400);
    clampState(true);
    pros::delay(350);
    runIntake(true, -127);
    turn(-42, 400);
    move(60, 1000);
    pros::delay(300);
    runIntake(true, -127);
    turn(60,700);
    pros::delay(300);
    move(60, 400);
    runIntake(true, -127);



}