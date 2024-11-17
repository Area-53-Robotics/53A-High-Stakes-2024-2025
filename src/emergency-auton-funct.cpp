#include "main.h"
#include "devices.h"
#include "auton.h"

void move (int power, int timeout) {
    left_motors.move(power);
    right_motors.move(power);
    pros::delay(timeout);
    left_motors.brake();
    right_motors.brake();
}

void turn (int power, int timeout) {
    left_motors.move(power);
    right_motors.move(-power);
    pros::delay(timeout);
    left_motors.brake();
    right_motors.brake();  
}