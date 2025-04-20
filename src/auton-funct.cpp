#include "main.h"
#include "devices.h"
#include "auton.h"

void runIntake (bool running, int power) {
    if (running) {

		intake_motor.move(power);

	} else {

		intake_motor.brake();
	}

}

void clampState (bool state) {

	clamp.set_value(state);

}

void ladyBrown (int power, int timeout) {

	lbleft_motor.move(power);
    lbright_motor.move(power);
    pros::delay(timeout);
    lbleft_motor.brake();
    lbright_motor.brake();  

}

void intakeState (bool state) {

	intakePiston.set_value(state);
	
}

void intakeRun (int power, int timeout) {
	intake_motor.move(power);
}
