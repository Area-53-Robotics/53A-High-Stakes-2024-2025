#include "main.h"
#include "devices.h"
#include "auton.h"
#include <cmath>

void runIntake (bool running, int power) {
    if (running) {

		intake_motor.move(power);

	} else {

		intake_motor.brake();
	}

}

void clampOn (bool state) {

	clamp.set_value(state);

}