// sudo chmod a+rw /dev/ttyACM0
// ubuntu serial port 

#include <SoftwareSerial.h>

int relay1 = 4;
int relay2 = 5;
int relay3 = 6;
int relay4 = 7;
int relay5 = 8;
int relay6 = 9;
int relay7 = 10;
int relay8 = 11;

void setup() {
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  pinMode(relay5,OUTPUT);
  pinMode(relay6,OUTPUT);
  pinMode(relay7,OUTPUT);
  pinMode(relay8,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char inChar = Serial.read();
    if (inChar == '1') {
     digitalWrite(relay1, HIGH);
     Serial.println(digitalRead(relay1));
     //delay(50);
     //digitalWrite(relay1, LOW);
    }
    if (inChar == '2') {
     digitalWrite(relay2, HIGH);
     Serial.println(digitalRead(relay2)); 
    }
    if (inChar == '3') {
     digitalWrite(relay3, HIGH);
     Serial.println(digitalRead(relay3)); 
    }
    if (inChar == '4') {
     digitalWrite(relay4, HIGH); 
     Serial.println(digitalRead(relay4));
    }
    if (inChar == '5') {
     digitalWrite(relay5, HIGH);
     Serial.println(digitalRead(relay5));
    }
    if (inChar == '6') {
     digitalWrite(relay6, HIGH);
     Serial.println(digitalRead(relay6));
    }
    if (inChar == '7') {
     digitalWrite(relay7, HIGH); 
     Serial.println(digitalRead(relay7));
    }
    if (inChar == '8') {
     digitalWrite(relay8, HIGH); 
     Serial.println(digitalRead(relay8));
    }
    if (inChar == 'a') {
     digitalWrite(relay1, LOW);
     Serial.println(digitalRead(relay1));
    }
    if (inChar == 'b') {
     digitalWrite(relay2, LOW);
     Serial.println(digitalRead(relay2));
    }
    if (inChar == 'c') {
     digitalWrite(relay3, LOW);
     Serial.println(digitalRead(relay3));
    }
    if (inChar == 'd') {
     digitalWrite(relay4, LOW);
     Serial.println(digitalRead(relay4));
    }
    if (inChar == 'e') {
     digitalWrite(relay5, LOW);
     Serial.println(digitalRead(relay5));
    }
    if (inChar == 'f') {
     digitalWrite(relay6, LOW);
     Serial.println(digitalRead(relay6));
    }
    if (inChar == 'g') {
     digitalWrite(relay7, LOW);
     Serial.println(digitalRead(relay7));
    }
    if (inChar == 'h') {
     digitalWrite(relay8, LOW);
     Serial.println(digitalRead(relay8));
    }
  }
}
