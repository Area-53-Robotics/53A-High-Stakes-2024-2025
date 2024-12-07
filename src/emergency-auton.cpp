#include "main.h"
#include "devices.h"
#include "auton.h"

void emergency_blue_pos(){ //start on 2nd tile closest to the alliance stake (aims to get 1 ring)
    move(-80, 400); //moves towards stake
    turn(60, 200); //rotates towards stake
    move(-60, 300); //moves into stake
    pros::delay(500);
    clampState(true);
    pros::delay(250);
    runIntake(true, -127);
   turn(70, 300); //turns right with front facing rings
    move(100, 500); //moves towards rings
    pros::delay(500);
    move(-50, 300); //moves to touch the ladder?
    pros::delay(2000);
    runIntake(false, 0); 
}

void emergency_blue_neg(){ //make a movement from the stake back to the line (aims to get 3 rings)
    move(-150, 350); //moves to the stake - 135, 300
    pros::delay(550);
    clampState(true); 
    pros::delay(500);
    runIntake(true, -127);
    turn(-50, 330); //rotates with front facing the rings
    move(130, 250); //moves forwards to the rings
   pros::delay(1000);
    turn(-80, 300); //turns towards farthest right ring
    move(60, 300); //moves towards right ring
    pros::delay(1000);
    move(-50, 500); // moves away from right ring
    turn(-51, 200); //turns towards left ring
    move(48, 600);  // moves towards left ring
    pros::delay(1000);
  /* move(-100, 500);
    turn(-40, 300);
    move(80, 600); */
}

void emergency_red_pos(){ //start on 2nd tile closest to the alliance stake (aims to get 1 ring)
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


void emergency_red_neg(){ //make a movement from the stake back to the line (aims to get 3 rings)
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


void emergency_skills(){ //get as close to the stake as possible
    move(-57, 300); //moves to closest stake
    pros::delay(400);
    clampState(true);
    pros::delay(350);
    runIntake(true, -127);
    pros::delay(350);
    runIntake(true, -127);
    turn(-50, 400); //turns towards the 2 rings in the middle row
    move(80, 800); //moves towards the rings 
    pros::delay(300);
    runIntake(true, -127);
    pros::delay(700);
    turn(60,700); //turns towards farthest ring, close to the other stake
    pros::delay(300);
    move(60, 400); //moves towards the ring
    runIntake(true, -127);
}