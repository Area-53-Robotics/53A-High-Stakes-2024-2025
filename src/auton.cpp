#include "main.h"
#include "devices.h"
#include "auton.h"

void blue_solo() {
    chassis.moveToPoint(-0.5, 7.8, 1000, {.forwards = true}); //move to team stake
    pros::delay(500);
    ladyBrown(127, 500);
    pros::delay(500);
    ladyBrown(-80, 600);
    pros::delay(500);
    chassis.moveToPoint(19, -21, 2000, {.forwards = false}); //move to neg side stake
    pros::delay(1700);
    clampState(true); //clamp stake
    pros::delay(950);
    runIntake(true, -127);
    chassis.turnToHeading(-135, 1000); //turn to rings (close to right neutral stake) -148
    chassis.moveToPoint(9, -42, 2000, {.forwards = true}); //move to rings 
    pros::delay(800);
    chassis.moveToPoint(33, 69, 1500, {.forwards = true}); //move to rings in front of team stake -1, 24 / 48, -45


    
    /* chassis.moveToPoint(0,48,1000);
   chassis.setPose(-12,54, 20);
   chassis.moveToPoint(-10, 63, 1000, {.forwards = true}); // move to team stake
   pros::delay(1000);
    ladyBrown(127, 700);
    pros::delay(400);
    ladyBrown(-127, 700);
    chassis.moveToPoint(-24, -24, 1000, {.forwards = false}); //move to stake on right
    pros::delay(400);
    clampState(true); */
}



void blue_pos() {

    chassis.moveToPoint(0, -34, 1000, {.forwards = false}); //moves backwards next to stake
    chassis.turnToHeading(29, 200); //turns towards stake
    chassis.moveToPoint(-8, -51, 1000, {.forwards  = false}); //moves to stake
    //chassis.moveToPose(10, -49, -28, 2000, {.forwards = false});
    pros::delay(900);
    clampState(true); //clamps stake
    pros::delay(300);
    runIntake(true, -127);
    chassis.turnToHeading(-8, 200); //turns to rings
    chassis.moveToPoint(-15, -29, 1000, {.forwards = true}); //moves to rings
    pros::delay(1000);
    runIntake(false, 0);
    //chassis.moveToPoint(-8, -30, 1000, {.forwards = true});
    chassis.turnToHeading(-131, 1000); // turns so it can get ready to unclmap
    clampState(false); //unclamps stake
    pros::delay(1000);
    chassis.turnToHeading(-273, 1000); //turns to second state
    chassis.moveToPoint(-38, -32, 1000, {.forwards = false}); //moves to second stake
    pros::delay(900); //850
    clampState(true); //clamps stake
    pros::delay(450); //400
    runIntake(true, -100);
    pros::delay(1300);
    chassis.turnToHeading(-90,1000);
    chassis.moveToPoint(-30, -40, 1500, {.forwards = true});

    
   /* chassis.turnToHeading(-45,1000); // turns to ladder
    chassis.moveToPoint(-40, -50, 1500, {.forwards = false});
    pros::delay(300);
    ladyBrown(127, 700); */

   /* clampState(false);
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
    */

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

    chassis.moveToPoint(0, -29, 1000, {.forwards = false}); //moves to next to stack of rings
    chassis.turnToHeading(-31, 300); //turns to diagonal stake
    chassis.moveToPoint(9, -48, 1000, {.forwards  = false}); //moves to grab stake
    //chassis.moveToPose(10, -49, -28, 2000, {.forwards = false});
    pros::delay(1500);
    clampState(true);
    pros::delay(800);
    runIntake(true, -127);
    chassis.turnToHeading(0, 1000); // turns so chassis facing rings
    chassis.moveToPoint(11, -28, 1000, {.forwards = true}); //moves to intake rings
    pros::delay(1200);
    chassis.turnToHeading(153, 1000); //
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
 //   chassis.moveToPose(40, -35, -33, 2000, {.forwards = false});
   
   /* chassis.turnToHeading(45, 1000);
    chassis.moveToPoint(50, -39, 1000, {.forwards = false});
    ladyBrown(127,400); */


   /* chassis.turnToHeading(-251, 1000);
    pros::delay(300);
    clampState(true);
    chassis.moveToPoint(50, -39, 1000, {.forwards = true}); */

   /* chassis.moveToPose(66, -4, -320, 2000, {.forwards = true}); //y = -4
    chassis.turnToHeading(45,900);
    chassis.moveToPoint(70,-30,1000, {.forwards = false});
   
   chassis.moveToPoint(55, -5, 900, {.forwards = false});
    chassis.turnToHeading(-30,600);
    pros::delay(250);
    ladyBrown(127,1000); */

    /*
    chassis.moveToPoint(60, -11, 1000, {.forwards = false});
    intakeState(false);
    chassis.moveToPoint(68, -6, 1000, {.forwards = true});
    runIntake(false, 0);
    chassis.turnToHeading(180, 1000);
    //chassis.moveToPoint(62, -15, 1000, {.forwards = false});
    runIntake(true, -127);
    chassis.moveToPoint(30, -20, 1000); */
    
   /* chassis.moveToPoint(49, -39, 2000, {.forwards = true});
    chassis.turnToHeading(-224, 1000); */

}

void red_neg() { //ring side

    chassis.moveToPoint(3, 7, 1000, {.forwards = true}); //move back towards team stake
    pros::delay(500);
    ladyBrown(127, 500); //scores onto it 
    ladyBrown(-127, 600); //moves lb back into state 1
    chassis.moveToPose(-15, -20, 33, 2000, {.forwards = false}); //moves to closest stake 
    pros::delay(1800);
    clampState(true); //clamps 1st stake
    chassis.turnToHeading(150, 1000); //turns to blue/red ring stack
    runIntake(true, -127);
    chassis.moveToPoint(-13, -42, 2000, {.forwards = true}); //moves to ring stack
    pros::delay(1500);
    chassis.moveToPoint(-21, -55, 2000, {.forwards = true}); //moves to left side 4 ring stack
    pros::delay(1500);
    chassis.moveToPoint(-13, -40, 2000, {.forwards = false}); //moves to right side 4 ring stack
    chassis.moveToPoint(-23, -48, 2000, {.forwards = true});
    pros::delay(2500);
    chassis.moveToPoint(-13, -40, 2000, {.forwards = false}); //moves to angle towards team stake
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

void skills() {  // starts in front of team stake. try to get goals in the corner, or lb right red ring onto left green stake
   /* ladyBrown(127, 500); //loads ring onto stake
    ladyBrown(-127, 550); //retracts lb
    chassis.moveToPoint(-10, -0, 1000, {.forwards = false});; // moves to middle point
    chassis.turnToHeading(90,500) //turns to stake
    chassis.moveToPoint(-30,-10,1000, {.forwards = false}); //moves to stake
    pros::delay(200);
    clampState(true);
    chassis.turnToHeading(180,800); //rotates 180 so intake side is facing rings
    runIntake(true,127);
    chassis.moveToPoint(-25,-10,1000, {.forwards = false}); //moves into wall and gets both red rings
    chassis.turnToHeading(90,500); //turns to face corner
    chassis.moveToPoint(35,0,500, {.forwards = truee}); //moves to line
    chassis.turnToHeading(90,500); //turns to 3rd ring
    chassis.moveToPoint(25,0,800, {.forwards = true});
    chassis.turnToHeading(60,500); //turns to corner
    chassis.moveToPoint(-35,-5,800); //moves to corner
    clampState(false); //unclamps stake and drops at corner */
// second side 
   /*chassis.turnToHeading(30,400); //turns to parallel neg corner
    chassis.moveToPoint(7,5); // moves to point diagonal to stake 
    chassis.turnToHeading(140,600); //turns to diagonal stake
    chassis.moveToPoint(10,0,500); // moves to stake
    clampState(true);
    chassis.turnToHeading(130,500); //turn to rings
    chassis.moveToPoint(-30,0,1000); //move into rings
    chassis.turnToHeading(70,500); //turns 3rd ring in triangle
    chassis.moveToPoint(-30,5,800); //moves into ring
    chassis.turnToHeading(160,600); //turns to neg corner
    chassis.moveToPoint(-40,10,1000); //moves into neg corner */

   /* chassis.turnToHeading(70, 500); // rotates to 2nd ring left side
    chassis.moveToPoint(-11, -5, 2000, {.forwards = false}); //moves to 2nd ring left side
    chassis.turnToHeading(-31, 500); //rotates to 1st stake
    chassis.moveToPoint(-2, -17, 2000, {.forwards = false}); //moves to 1st stake on the red side field
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

*/

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
