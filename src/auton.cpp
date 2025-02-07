#include "main.h"
#include "devices.h"
#include "auton.h"

void blue_pos() {

    chassis.moveToPoint(0.5, -32, 1000, {.forwards = false});
    chassis.turnToHeading(33, 200);
    chassis.moveToPoint(-8, -50, 1000, {.forwards  = false});
    //chassis.moveToPose(10, -49, -28, 2000, {.forwards = false});
    pros::delay(900);
    clampState(true);
    pros::delay(500);
    runIntake(true, -127);
    chassis.turnToHeading(0, 200);
    chassis.moveToPoint(-8, -30, 1000, {.forwards = true});
    pros::delay(1560);
    chassis.turnToHeading(-131, 1000);
    clampState(false);
    runIntake(false, 0);
    pros::delay(1000);
    chassis.turnToHeading(-273, 1000);
    chassis.moveToPoint(-35, -35, 1000, {.forwards = false});
    pros::delay(850);
    clampState(true);
    pros::delay(400);
    runIntake(true, -127);
    pros::delay(1500);
    clampState(false);
    chassis.moveToPoint(-59, -10, 1500, {.forwards = true});
    chassis.moveToPoint(-72, 0, 1500, {.forwards = true});
    chassis.turnToHeading(270, 1000);
    chassis.moveToPoint(-66, 4, 1000, {.forwards = false});
    chassis.turnToHeading(180, 1000);
    pros::delay(120);
    runIntake(false, 0);
    chassis.moveToPoint(-67, 5, 1000, {.forwards = false});
    runIntake(true, -127);
    pros::delay(100);
    runIntake(false, 0);

    /*
    pros::delay(1000);
    chassis.moveToPose(-44, -46, -137, 3000, {.forwards = true});
    pros::delay(500);
    ladyBrown(127, 700);
    */
    /*
    chassis.turnToHeading(251, 1000);
    pros::delay(300);
    clampState(false);
    chassis.moveToPose(-66, -4, -320, 2000, {.forwards = true});
    pros::delay(250);
    intakeState(true);
    chassis.moveToPoint(-60, -11, 1000, {.forwards = false});
    intakeState(false);
    chassis.moveToPoint(-68, -6, 1000, {.forwards = true});
    runIntake(false, 0);
    chassis.turnToHeading(180, 1000);
    //chassis.moveToPoint(62, -15, 1000, {.forwards = false});
    runIntake(true, -127);
    chassis.moveToPoint(-30, -20, 1000);
    chassis.moveToPoint(-49, -39, 2000, {.forwards = true});
    chassis.turnToHeading(224, 1000);
    ladyBrown(127, 700);
    */

}

void blue_neg() {

    chassis.moveToPoint(-2, 10, 1000, {.forwards = true});
    pros::delay(500);
    ladyBrown(127, 500);
    ladyBrown(-127, 800);
    chassis.moveToPose(18, -21, -33, 2000, {.forwards = false});
    pros::delay(1800);
    clampState(true);
    chassis.turnToHeading(-148, 1000);
    runIntake(true, -127);
    chassis.moveToPoint(6, -39, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(16, -60, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(6, -55, 2000, {.forwards = false});
    chassis.moveToPoint(23, -52, 2000, {.forwards = true});
    pros::delay(2000);
    ladyBrown(127, 300);
    chassis.moveToPoint(31, -34, 2000, {.forwards = true});
    chassis.turnToHeading(71, 1000);
    ladyBrown(127, 700);

}

void red_pos() {

    chassis.moveToPoint(0, -29, 1000, {.forwards = false});
    chassis.turnToHeading(-31, 300);
    chassis.moveToPoint(9, -48, 1000, {.forwards  = false});
    //chassis.moveToPose(10, -49, -28, 2000, {.forwards = false});
    pros::delay(1500);
    clampState(true);
    pros::delay(500);
    runIntake(true, -127);
    chassis.turnToHeading(0, 1000);
    chassis.moveToPoint(11, -28, 1000, {.forwards = true});
    pros::delay(1200);
    chassis.turnToHeading(153, 1000);
    clampState(false);
    runIntake(false, 0);
    pros::delay(1000);
    chassis.turnToHeading(272, 1000);
    chassis.moveToPoint(30, -27, 1000, {.forwards = false});
    pros::delay(850);
    clampState(true);
    pros::delay(400);
    runIntake(true, -127);
    pros::delay(1000);
    /*
    chassis.turnToHeading(-251, 1000);
    pros::delay(300);
    clampState(false);
    chassis.moveToPose(66, -4, -320, 2000, {.forwards = true});
    pros::delay(250);
    intakeState(true);
    chassis.moveToPoint(60, -11, 1000, {.forwards = false});
    intakeState(false);
    chassis.moveToPoint(68, -6, 1000, {.forwards = true});
    runIntake(false, 0);
    chassis.turnToHeading(180, 1000);
    //chassis.moveToPoint(62, -15, 1000, {.forwards = false});
    runIntake(true, -127);
    chassis.moveToPoint(30, -20, 1000);
    */
    chassis.moveToPoint(49, -39, 2000, {.forwards = true});
    chassis.turnToHeading(-224, 1000);
    ladyBrown(127, 700);

}

void red_neg() {

    chassis.moveToPoint(2.5, 9, 1000, {.forwards = true});
    pros::delay(500);
    ladyBrown(127, 500);
    ladyBrown(-127, 800);
    chassis.moveToPose(-15, -20, 33, 2000, {.forwards = false});
    pros::delay(1800);
    clampState(true);
    chassis.turnToHeading(150, 1000);
    runIntake(true, -127);
    chassis.moveToPoint(-13, -42, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(-21, -55, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(-13, -40, 2000, {.forwards = false});
    chassis.moveToPoint(-23, -48, 2000, {.forwards = true});
    pros::delay(2000);
    ladyBrown(127, 300);
    chassis.moveToPoint(-31, -34, 2000, {.forwards = true});
    chassis.turnToHeading(-71, 1000);
    ladyBrown(127, 700);

}

void skills() {

    ladyBrown(127, 500);
    ladyBrown(-127, 800);
    chassis.moveToPose(-7, -19, 33, 2000, {.forwards = false});
    pros::delay(1800);
    clampState(true);
    chassis.turnToHeading(157, 1000);
    runIntake(true, -127);
    chassis.moveToPoint(-1, -41, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(6, -53, 2000, {.forwards = true});
    pros::delay(2000);
    chassis.moveToPoint(-1, -42, 2000, {.forwards = false});
    chassis.turnToHeading(60, 500);
    chassis.moveToPoint(16, -39, 2000, {.forwards = true});
    chassis.turnToHeading(-74, 1000);
    chassis.moveToPoint(20, -43, 2000, {.forwards = false});
    chassis.turnToHeading(-74, 1000);
    pros::delay(1500);
    clampState(false);

}
