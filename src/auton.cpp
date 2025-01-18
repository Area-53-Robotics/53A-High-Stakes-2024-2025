#include "main.h"
#include "devices.h"
#include "auton.h"

void blue_pos() {
    
    ladyBrown(127, 600);
    ladyBrown(-127, 600);

    /*
    chassis.moveToPoint(-5, -15, 2000, {.forwards = false, .minSpeed = 40});
    chassis.moveToPoint(4, -33, 1000, {.forwards = false});
    pros::delay(950);
    clampState(true);
    pros::delay(150);
    runIntake(true, -127);
    chassis.moveToPose(0, -5, 0, 2000, {.forwards = true, .minSpeed = 40});
    chassis.moveToPose(-22, -5, -50, 2000, {.forwards = true});
    //intakeState(true);
    pros::delay(250);
    chassis.moveToPoint(-10, -5, 2000, {.forwards = false});
    //intakeState(false);
    pros::delay(200);
    chassis.moveToPose(20, 0, -90, 2000, {.forwards = false});
    pros::delay(1350);
    clampState(false);
    chassis.moveToPoint(-15, 0, 1500, {.forwards = true});
    chassis.turnToHeading(-5, 500);
    chassis.moveToPoint(20, -43, 3000, {.forwards = false, .minSpeed = 40});
    pros::delay(1350);
    clampState(true);
    chassis.turnToHeading(60, 1000);
    chassis.moveToPoint(23, -25, 1000, {.forwards = true});
    pros::delay(250);
    chassis.moveToPose(0, -50, -150, 1000, {.forwards = true, .minSpeed = 60});
    */
}

void blue_neg() {
    chassis.moveToPoint(0, 7, 1000, {.forwards = true});
    ladyBrown(127, 600);
    ladyBrown(-127, 600);
    chassis.moveToPose(10, -23, -1, 2000, {.forwards = false});
    clampState(true);
    chassis.turnToHeading(-100, 1000);
    runIntake(true, -127);
    /*
    chassis.moveToPoint(-31, -40, 2000, {.forwards = true});
    //chassis.turnToHeading(-50, 1000);
    chassis.moveToPoint(-10, -75, 2000, {.forwards = true});
    chassis.moveToPoint(-8, -0, 2000, {.forwards = false});
    chassis.moveToPoint(-10, -75, 2000, {.forwards = false});
    //chassis.moveToPoint(0, 0, 1000, {.forwards = false});
    //chassis.turnToHeading(90, 1000);
    */
}

void red_pos() {
    chassis.moveToPoint(5, -10, 2000, {.forwards = false, .minSpeed = 40});
    chassis.moveToPoint(-4, -33, 1000, {.forwards = false});
    pros::delay(950);
    clampState(true);
    pros::delay(150);
    runIntake(true, -127);
}

void red_neg() {
    chassis.moveToPoint(-5, -15, 2000, {.forwards = false, .minSpeed = 40});
    chassis.moveToPoint(4, -33, 1000, {.forwards = false});
    pros::delay(950);
    clampState(true);
    pros::delay(150);
    runIntake(true, -127);
    chassis.moveToPose(0, -5, 0, 2000, {.forwards = true, .minSpeed = 40});
    chassis.moveToPose(-21, -5, -50, 2000, {.forwards = true});
    intakeState(true);
    pros::delay(300);
    chassis.moveToPoint(-10, -5, 2000, {.forwards = false});
    //intakeState(false);
    pros::delay(200);
    chassis.moveToPose(20, 0, -90, 2000, {.forwards = false});
    pros::delay(1350);
    clampState(false);
    
}
