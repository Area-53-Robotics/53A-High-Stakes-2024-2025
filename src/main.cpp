#include "main.h"
#include "devices.h"
#include "auton.h"
#include "lemlib/api.hpp"
#include "ladyBrown.hpp"
#include "pros/motors.h"

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	pros::lcd::initialize();
	lbleft_motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
	lbright_motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
	// lb.set_position(0);
	//pros::lcd::register_btn1_cb(on_center_button);
    chassis.calibrate(); // calibrate sensors

    // print position to brain screen
    pros::Task screen_task([&]() {
        while (true) {
            // print robot location to the brain screen
            pros::lcd::print(0, "X: %f", chassis.getPose().x); // x
            pros::lcd::print(1, "Y: %f", chassis.getPose().y); // y
            pros::lcd::print(2, "Theta: %f", chassis.getPose().theta); // heading
            // delay to save resources
            pros::delay(20);
        }
    });

}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Man agement System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */


ASSET(test_txt);

void autonomous() {
	blue_solo();

}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	//Basic Power Variables
	int max_power = 127;
	int min_power = -127;
	int no_power = 0;

	//Piston Variables
	bool clampValue = false;
	bool intakePistonValue = false;

	//Lady Brown
	int lbState = 1;
	
	/*
    ladyBrown(127, 500);
    ladyBrown(-127, 600);
	*/

	while (true) {
    	// Drivetrain
    	// Arcade Drive
    	int left =
        	master.get_analog(ANALOG_LEFT_Y) + master.get_analog(ANALOG_RIGHT_X);
    	int right =
        	master.get_analog(ANALOG_LEFT_Y) - master.get_analog(ANALOG_RIGHT_X);

    	left_motors.move(left);
    	right_motors.move(right);

		// Controls Intake
    	if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
      		intake_motor.move(min_power);
    	} else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
      		intake_motor.move(max_power);
    	} else {
      		intake_motor.move(no_power);
    	}

		//Clamp Button
		if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_Y)) {
      		clampValue = !clampValue;
      		clamp.set_value(clampValue);
    	}

		//descore state
		if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_RIGHT)) {
      		if (lbState != 4) {
				lbState = 4;
			} else if (lbState == 4) {
				lbState = 1;
			}
    	}
		// goal flip
		if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_DOWN)) {
      		if (lbState != 5) {
				lbState = 5;
			} else if (lbState == 5) {
				lbState = 1;
			}
    	}

		if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1) || master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2)) {
			if (lbState == 0) {
				lbState = 1;
			} else if (lbState == 1) {
				lbState = 2;
			} else if (lbState == 2) {
				lbState = 3;
			} else if (lbState == 3) {
				lbState = 1;
			} else if (lbState == 4) {
				lbState = 1;
			} else if (lbState == 5) {
				lbState = 1;
			}
	    }

		if (lbState == 1) {
                lbleft_motor.move(((100*100)-lb.get_angle()) * 0.05); //0.05
                lbright_motor.move(((100*100)-lb.get_angle()) * 0.05);
        }
        if (lbState == 2) {
                lbleft_motor.move(((128*100)-lb.get_angle()) * 0.0357);
                lbright_motor.move(((128*100)-lb.get_angle()) * 0.0357);
        }
        if (lbState == 3) {
                lbleft_motor.move(((230*100)-lb.get_angle()) * 0.01);
                lbright_motor.move(((230*100)-lb.get_angle()) * 0.01);
        }
		if (lbState == 4) {
                lbleft_motor.move(((253*100)-lb.get_angle()) * 0.0435);
                lbright_motor.move(((253*100)-lb.get_angle()) * 0.0435);
        }
		if (lbState == 5) {
                lbleft_motor.move(((300*100)-lb.get_angle()) * 0.02);
                lbright_motor.move(((300*100)-lb.get_angle()) * 0.02);
        } 

		printf("%d", lb.get_angle());
		//printf("%i", left);

		//Intake Piston
		if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)) {
      		intakePistonValue = !intakePistonValue;
      		intakePiston.set_value(intakePistonValue);
    	}
	}

}
