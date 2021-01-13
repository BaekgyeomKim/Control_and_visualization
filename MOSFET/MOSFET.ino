#include <SoftwareSerial.h>

int gate1 = 3;
int gate2 = 4;
int gate3 = 5;
int gate4 = 6;
int gate5 = 7;
int gate6 = 8;
int gate7 = 9;
int gate8 = 10;



void setup() {
  Serial.begin(9600);
  pinMode(gate1, OUTPUT);
  pinMode(gate2, OUTPUT);
  pinMode(gate3, OUTPUT);
  pinMode(gate4, OUTPUT);
  pinMode(gate5, OUTPUT);
  pinMode(gate6, OUTPUT);
  pinMode(gate7, OUTPUT);
  pinMode(gate8, OUTPUT);  
}

void loop() {
  if (Serial.available() > 0) {
    char inChar = Serial.read();

    if (inChar == 'a') {
      analogWrite(gate1, 255);
      delay(1000);
      analogWrite(gate1, 0);
      delay(100);
      analogWrite(gate2, 255);
      delay(1000);
      analogWrite(gate2, 0);
      delay(100);
      analogWrite(gate3, 255);
      delay(1000);
      analogWrite(gate3, 0);
      delay(100);
      analogWrite(gate4, 255);
      delay(1000);
      analogWrite(gate4, 0);
      delay(100);
      //analogWrite(gate5, 255);
      //delay(1000);
      //analogWrite(gate5, 0);
      //delay(100);
      analogWrite(gate6, 255);
      delay(1000);
      analogWrite(gate6, 0);
      delay(100);
      analogWrite(gate7, 255);
      delay(1000);
      analogWrite(gate7, 0);
      delay(100);
      analogWrite(gate8, 255);
      delay(1000);
      analogWrite(gate8, 0);
      delay(100);
      Serial.println(digitalRead(gate1));
    }
    if (inChar == '1') {
      analogWrite(gate1, 255);
      delay(50);
      analogWrite(gate1, 0);
      Serial.println(digitalRead(gate1));
    }
    if (inChar == '2') {
      analogWrite(gate2, 255);
      delay(50);
      analogWrite(gate2, 0);
      Serial.println(digitalRead(gate2));
    }
    if (inChar == '3') {
      analogWrite(gate3, 255);
      delay(50);
      analogWrite(gate3, 0);
      Serial.println(digitalRead(gate3));
    }
    if (inChar == '4') {
      analogWrite(gate4, 255);
      delay(50);
      analogWrite(gate4, 0);
      Serial.println(digitalRead(gate4));
    }
    if (inChar == '5') {
      analogWrite(gate5, 255);
      delay(50);
      analogWrite(gate5, 0);
      Serial.println(digitalRead(gate5));
    }
    if (inChar == '6') {
      analogWrite(gate6, 255);
      delay(50);
      analogWrite(gate6, 0);
      Serial.println(digitalRead(gate6));
    }
    if (inChar == '7') {
      analogWrite(gate7, 255);
      delay(50);
      analogWrite(gate7, 0);
      Serial.println(digitalRead(gate7));
    }
    if (inChar == '8') {
      analogWrite(gate8, 255);
      delay(50);
      analogWrite(gate8, 0);
      Serial.println(digitalRead(gate8));
    }
  }
}
