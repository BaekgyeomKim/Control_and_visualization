#include <Servo.h>

Servo servo;

const int pinservo = 4;
const int Switch = 5;

int motor_angle = 0;

int Switchstate = 1;

void setup() {
  pinMode(Switch, INPUT);
  Serial.begin(9600);
  servo.attach(pinservo);
  servo.write(motor_angle);
}

void loop() {
  Switchstate = 
  Serial.print(digitalRead(Switch));

  if (Switchstate == 0) {
    if (motor_angle < 180){
      motor_angle = motor_angle+10;  
    }
  }
  servo.write(motor_angle);
  delay(100);
}
