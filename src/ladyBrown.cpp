/*
#include "devices.h"
#include "ladyBrown.hpp"


first stage : 0, resting state
second stage : load into first level
third stage : load into second level
And then to score use the toggle button left


LadyBrownStates ladyBrownState = StartingState;

void currentTask(void * param) {
    while (true){
        if (ladyBrownState == StartingState) {
                lbleft_motor.move(((91*10)-lb.get_angle()) * 0.01);
                lbleft_motor.move(((91*10)-lb.get_angle()) * 0.01);
        }
        if (ladyBrownState == SecondState) {
                lbleft_motor.move(((126*10)-lb.get_angle()) * 0.01);
                lbright_motor.move(((126*10)-lb.get_angle()) * 0.81);
        }
        if (ladyBrownState == ForwardState) {
                lbleft_motor.move(((270*10)-lb.get_angle()) * 0.004);
                lbright_motor.move(((270*10)-lb.get_angle()) * 0.004);
        }
        
    }
    printf("%i", lb.get_angle());

}
*/