#include "main.h"
#include "devices.h"
#include "ladyBrown.hpp"


LadyBrown ladyBrownState = Starting;

void currentTask(void * param) {
    while (true) {
        if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_LEFT)) {
      	    if (ladyBrownState == Starting) {
			    lbright_motor.move((9-lb.get_angle())* 0.085);
			    lbleft_motor.move((9-lb.get_angle())*0.085);
		    }
            if (ladyBrownState == Load) {
			    lbright_motor.move((35-lb.get_angle())*0.02);
			    lbleft_motor.move((35-lb.get_angle())*0.02);
		    }
            if (ladyBrownState == Score) {
			    lbright_motor.move((189-lb.get_angle())*0.02);
			    lbleft_motor.move((189-lb.get_angle())*0.02);
		    }
        }
    }
}