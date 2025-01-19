#include "main.h"
#include "devices.h"
#include "auton.h"

void blue_pos() {
    chassis.moveToPoint(0, -26, 1000, {.forwards = false});
    chassis.moveToPose(-10, -52, 32, 2000, {.forwards = false});
    pros::delay(2000);
    clampState(true);
    pros::delay(500);
    runIntake(true, -127);
    chassis.turnToHeading(0, 1000);
    chassis.moveToPoint(-12, -29, 1000, {.forwards = true});
    pros::delay(1200);
    chassis.turnToHeading(-145, 1000);
    clampState(false);
    runIntake(false, 0);
    pros::delay(1000);
    chassis.turnToHeading(-270, 1000);
    chassis.moveToPoint(-33, -33, 1000, {.forwards = false});
    pros::delay(1000);
    clampState(true);
    runIntake(true, -127);

}

void blue_neg() {
    chassis.moveToPoint(-2, 10, 1000, {.forwards = true});
    pros::delay(500);
    ladyBrown(127, 500);
    ladyBrown(-127, 500);
    chassis.moveToPose(18, -21, -33, 2000, {.forwards = false});
    pros::delay(1800);
    clampState(true);
    chassis.turnToHeading(-148, 1000);
    runIntake(true, -127);
    chassis.moveToPoint(6, -39, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(15, -59, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(9, -51, 2000, {.forwards = false});
    chassis.moveToPoint(22, -53, 2000, {.forwards = true});
    pros::delay(2000);
    ladyBrown(127, 300);
    chassis.moveToPoint(31, -34, 2000, {.forwards = true});
    chassis.turnToHeading(71, 1000);

}

void red_pos() {
    chassis.moveToPoint(0, -26, 1000, {.forwards = false});
    chassis.moveToPose(10, -52, -32, 2000, {.forwards = false});
    pros::delay(2000);
    clampState(true);
    pros::delay(500);
    runIntake(true, -127);
    chassis.turnToHeading(0, 1000);
    chassis.moveToPoint(12, -29, 1000, {.forwards = true});
    pros::delay(1200);
    chassis.turnToHeading(145, 1000);
    clampState(false);
    runIntake(false, 0);
    pros::delay(1000);
    chassis.turnToHeading(270, 1000);
    chassis.moveToPoint(33, -33, 1000, {.forwards = false});
    pros::delay(1000);
    clampState(true);
    runIntake(true, -127);
}

void red_neg() {
    chassis.moveToPoint(2.5, 9, 1000, {.forwards = true});
    pros::delay(500);
    ladyBrown(127, 500);
    ladyBrown(-127, 500);
    chassis.moveToPose(-18, -22, 33, 2000, {.forwards = false});
    pros::delay(1800);
    clampState(true);
    chassis.turnToHeading(148, 1000);
    runIntake(true, -127);
    chassis.moveToPoint(-13, -39, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(-22, -54, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(-9, -42, 2000, {.forwards = false});
    chassis.moveToPoint(-22, -46, 2000, {.forwards = true});
    pros::delay(2000);
    ladyBrown(127, 300);
    chassis.moveToPoint(-31, -34, 2000, {.forwards = true});
    chassis.turnToHeading(-71, 1000);
    
}
