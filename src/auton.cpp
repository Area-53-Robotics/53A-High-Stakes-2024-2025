#include "main.h"
#include "devices.h"
#include "auton.h"

void blue_pos() {

    chassis.moveToPoint(0, -34, 1000, {.forwards = false}); //moves backwards next to stake
    chassis.turnToHeading(29, 200);
    chassis.moveToPoint(-8, -51, 1000, {.forwards  = false});
    //chassis.moveToPose(10, -49, -28, 2000, {.forwards = false});
    pros::delay(900);
    clampState(true);
    pros::delay(300);
    runIntake(true, -127);
    chassis.turnToHeading(-8, 200);
    chassis.moveToPoint(-15, -29, 1000, {.forwards = true});
    pros::delay(1000);
    runIntake(false, 0);
    //chassis.moveToPoint(-8, -30, 1000, {.forwards = true});
    chassis.turnToHeading(-131, 1000);
    clampState(false);
    pros::delay(1000);
    chassis.turnToHeading(-273, 1000);
    chassis.moveToPoint(-38, -32, 1000, {.forwards = false});
    pros::delay(900); //850
    clampState(true);
    pros::delay(400); //400
    runIntake(true, -100);
    pros::delay(1300);
    chassis.moveToPoint(-59, -10, 1500, {.forwards = true});
    clampState(false);
    chassis.moveToPoint(-76, 10, 1500, {.forwards = true});
    chassis.turnToHeading(-99, 500);
    chassis.moveToPoint(-63, 16, 1000, {.forwards = false});
    runIntake(false, 0);
    chassis.turnToHeading(50, 500);
    chassis.turnToHeading(160, 500);
    chassis.moveToPoint(-67, 12, 2000, {.forwards = false});
    chassis.turnToHeading(185, 500);
    pros::delay(500);
    runIntake(true, -90);
    pros::delay(1000);
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
    ladyBrown(-127, 600);
    chassis.moveToPose(19, -21, -33, 2000, {.forwards = false});
    pros::delay(1700);
    clampState(true);
    chassis.turnToHeading(-148, 1000);
    runIntake(true, -127);
    chassis.moveToPoint(6, -39, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(16, -62, 2000, {.forwards = true});
    pros::delay(1500);
    chassis.moveToPoint(6, -55, 2000, {.forwards = false});
    chassis.moveToPoint(24, -54, 2000, {.forwards = true});
    pros::delay(2500);
    chassis.moveToPoint(6, -55, 2000, {.forwards = false});
    /*
    ladyBrown(127, 300);
    chassis.moveToPoint(31, -34, 2000, {.forwards = true});
    chassis.turnToHeading(71, 1000);
    ladyBrown(127, 400);
    */
    chassis.moveToPoint(10, 0, 2000, {.forwards = true});
    chassis.moveToPoint(32, 65, 2000, {.forwards = true});
    pros::delay(200);
    runIntake(true, 127);
    chassis.turnToHeading(-10, 500);

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
    pros::delay(700);
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

    chassis.moveToPoint(3, 7, 1000, {.forwards = true});
    pros::delay(500);
    ladyBrown(127, 500);
    ladyBrown(-127, 600);
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
    pros::delay(2500);
    chassis.moveToPoint(-13, -40, 2000, {.forwards = false});
    /*
    ladyBrown(127, 300);
    chassis.moveToPoint(-31, -34, 2000, {.forwards = true});
    chassis.turnToHeading(-71, 1000);
    ladyBrown(127, 400);
    */
    chassis.moveToPoint(-10, 0, 2000, {.forwards = true});
    chassis.moveToPoint(-38, 67, 2000, {.forwards = true});
    pros::delay(200);
    runIntake(true, 127);

}

void skills() {

    ladyBrown(127, 500);
    ladyBrown(-127, 550);
    chassis.turnToHeading(59, 500);
    chassis.moveToPoint(-11, -5, 2000, {.forwards = false});
    chassis.turnToHeading(-31, 500);
    chassis.moveToPoint(-2, -17, 2000, {.forwards = false});
    pros::delay(1800);
    clampState(true);
    chassis.turnToHeading(146, 1000);
    runIntake(true, -127);
    chassis.moveToPoint(6, -40, 1000, {.forwards = true});
    pros::delay(1000);
    chassis.moveToPoint(14, -52, 1000, {.forwards = true});
    pros::delay(2000);
    chassis.moveToPoint(0, -44, 1000, {.forwards = false});
    chassis.turnToHeading(56, 500);
    chassis.moveToPoint(4, -44, 2000, {.forwards = true});
    chassis.turnToHeading(23, 1000);
    chassis.moveToPoint(18, -40, 2000, {.forwards = false});
    //chassis.turnToHeading(-74, 1000);
    chassis.moveToPoint(29, -34, 1000, {.forwards = false});
    pros::delay(500);
    clampState(false);
    pros::delay(500);
    chassis.moveToPoint(-23, -2, 1000, {.forwards = true});
    chassis.turnToHeading(150, 500);
    /*
    chassis.moveToPoint(-35, 18, 2000, {.forwards = false});
    pros::delay(1500);
    clampState(true);
    chassis.turnToHeading(-29, 500);
    chassis.moveToPoint(-38, 50, 1000, {.forwards = true});
    chassis.moveToPoint(-45, 63, 1000, {.forwards = true});
    pros::delay(2000);
    chassis.moveToPoint(-39, 51, 1000, {.forwards = false});
    chassis.turnToHeading(60, 500);
    chassis.moveToPoint(-37, 47, 1000, {.forwards = true});
    chassis.turnToHeading(62, 1000);
    chassis.moveToPoint(-30, 51, 2000, {.forwards = true});
    chassis.turnToHeading(74, 1000);
    */
}
