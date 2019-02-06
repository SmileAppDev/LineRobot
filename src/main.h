// void test;
#ifndef MAIN_H
#define MAIN_H

// #include "lib/SparkFun_Line_Follower_Array/src/sensorbar.h"
#include "Wire.h"
#include "sensorbar.h"
#include "Ardumoto.h"
#include <Servo.h>

//States
extern boolean hasBall;

//Drive.cpp ~ Setup & Control Motors
     // extern SensorBar LineSensor;
     extern Ardumoto Moto;
     enum Directions { LEFT, RIGHT, FORWARD, BACK, STOP};
     extern Directions current_direction;
     extern Directions last_direction;
     void init_motors();
     void startManeuver();
     void printDirection();

//LineArray.cpp ~ Line Following Array Sensor
     extern SensorBar LineSensor;
     enum LineStates { DISABLED, IDLE, READ_LINE, SEARCHING_FOR_LINE, GO_FORWARD, GO_LEFT, GO_RIGHT, GO_STOP };
     void init_line_following();
     void printData();
     void getState();
     void checkState();
     void completedMotorManeuver();
     void setLineState(LineStates new_state);

//Arm.cpp ~ Controlling the ping pong ball arm
     extern Servo armServo;
     void init_arm();
     void dropBall();
     void update_arm();
     void update_servo_position();

#endif
