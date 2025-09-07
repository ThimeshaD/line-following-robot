#define m1 4  // IN1
#define m2 5  // IN2
#define m3 2  // IN3
#define m4 3  // IN4
#define e1 9  // ENA
#define e2 10 // ENB

#define ir1 A0 // Far left
#define ir2 A1 // Left
#define ir3 A2 // Right
#define ir4 A3 // Far Right
#define ir5 A4 // Center

int var1 = 255;
int var2 = 255;

void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(e1, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
}

void loop() { // Reading Sensor Values
  int s1 = digitalRead(ir1);  // Far Left Sensor
  int s2 = digitalRead(ir2);  // Left Sensor
  int s3 = digitalRead(ir3);  // Right Sensor
  int s4 = digitalRead(ir4);  // Far Right Sensor
  int s5 = digitalRead(ir5);  // Center

  // Center sensor
  if((s5 == 0)) { // Stop
    analogWrite(e1, var1);
    analogWrite(e2, var2);
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }

  // Far left sensor
  if((s1 == 1) && (s2 == 0) && (s3 == 0) && (s4 == 0)) { // Move forward
    analogWrite(e1, var1);
    analogWrite(e2, var2);
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  // Right sensor
  if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 0)) { // Move Right
    analogWrite(e1, var1);
    analogWrite(e2, var2);
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  // Left sensor
  if((s1 == 0) && (s2 == 1) && (s3 == 0) && (s4 == 0)) { // Move Left
    analogWrite(e1, var1);
    analogWrite(e2, var2);
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }

  // Far right
  if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 1)) { // Move Right
    analogWrite(e1, var1);
    analogWrite(e2, var2);
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  // Right two sensors
  if((s1 == 0) && (s2 == 0) && (s3 == 1) && (s4 == 1)) { // Move Right
    analogWrite(e1, 255);
    analogWrite(e2, 255);
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  // Left two sensors
  if((s1 == 1) && (s2 == 1) && (s3 == 0) && (s4 == 0)) { // Move Forward
    analogWrite(e1, var1);
    analogWrite(e2, var2);
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }

  if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1)) { // Stop
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }

  if((s1 == 0) && (s2 == 0) && (s3 == 0) && (s4 == 0)) { // move forward
    analogWrite(e1, var1);
    analogWrite(e2, var2);
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }
}
