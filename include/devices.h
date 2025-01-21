#pragma once
#include "main.h"
#include "lemlib/api.hpp"

//Controller
inline pros::Controller master(pros::E_CONTROLLER_MASTER);

//Drive Train Motors (front, middle, back)
inline pros::MotorGroup left_motors ({-10, -9, -7}, pros::MotorGearset::blue);
inline pros::MotorGroup right_motors ({2, 4, 3}, pros::MotorGearset::blue);

//Intake Motor
inline pros::Motor intake_motor (11);

//Lady Brown
inline pros::Motor lbleft_motor (5);
inline pros::Motor lbright_motor (-20);

//Pneumatics
inline pros::adi::Pneumatics clamp('H', false);
inline pros::adi::Pneumatics intakePiston('G', false);

//Inertial Sensor
inline pros::Imu imu(7);

//Rotational Sensors

inline pros::Rotation lb(14);
inline pros::Rotation verticalTracking(6);

inline lemlib::Drivetrain drivetrain(&left_motors, // left motor group
                              &right_motors, // right motor group
                              14, // 14 inch track width
                              lemlib::Omniwheel::NEW_325, // using new 3.25" omnis
                              450, // drivetrain rpm is 450
                              2 // horizontal drift is 2 (for now)
);

//inline lemlib::TrackingWheel horizontal_tracking_wheel(&horizontalTracking, lemlib::Omniwheel::NEW_2, -2.5);
// vertical tracking wheel
inline lemlib::TrackingWheel vertical_tracking_wheel(&verticalTracking, lemlib::Omniwheel::NEW_2, -2.5);

inline lemlib::OdomSensors sensors(&vertical_tracking_wheel, // vertical tracking wheel 1
                            nullptr, // vertical tracking wheel 2, set to nullptr as we don't have a second one
                            nullptr, // horizontal tracking wheel 1
                            nullptr, // horizontal tracking wheel 2, set to nullptr as we don't have a second one
                            &imu // inertial sensor
);

// lateral PID controller
inline lemlib::ControllerSettings lateral_controller(6, // proportional gain (kP) 15
                                              0, // integral gain (kI)
                                              5, // derivative gain (kD) 20
                                              3, // anti windup
                                              1, // small error range, in inches
                                              100, // small error range timeout, in milliseconds
                                              2, // large error range, in inches
                                              500, // large error range timeout, in milliseconds
                                              20 // maximum acceleration (slew)
);

inline lemlib::ControllerSettings angular_controller(3, // proportional gain (kP) 2
                                              0, // integral gain (kI)
                                              20, // derivative gain (kD)
                                              3, // anti windup
                                              1, // small error range, in inches
                                              100, // small error range timeout, in milliseconds
                                              2, // large error range, in inches
                                              500, // large error range timeout, in milliseconds
                                              20 // maximum acceleration (slew)
);

// create the chassis
inline lemlib::Chassis chassis(drivetrain, // drivetrain settings
                        lateral_controller, // lateral PID settings
                        angular_controller, // angular PID settings
                        sensors // odometry sensors
);
