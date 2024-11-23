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

/*
void intakeState (bool state) {

	intakePiston.set_value(state);
	
}
*/