// Adjusting actuation time of EP magnetint gate = 3;void setup() {  pinMode(gate, OUTPUT);  }/*void loop() {  digitalWrite(gate, HIGH);  delay(2000);  digitalWrite(gate, LOW);  delay(4000);}*/void loop() {  analogWrite(gate, 255);  delayMicroseconds(500);  analogWrite(gate, 0);  delay(500);}