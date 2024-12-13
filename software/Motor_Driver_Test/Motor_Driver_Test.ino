// Basic sketch for trying out the Adafruit DRV8871 Breakout

#define MOTOR1_IN1 27
#define MOTOR1_IN2 26
#define MOTOR2_IN1 28
#define MOTOR2_IN2 29

void setup() {
  Serial.begin(9600);

  Serial.println("DRV8833 test");
  
  pinMode(MOTOR1_IN1, OUTPUT);
  pinMode(MOTOR1_IN2, OUTPUT);
  pinMode(MOTOR2_IN1, OUTPUT);
  pinMode(MOTOR2_IN2, OUTPUT);
}

void loop() {

  // ramp up forward
  digitalWrite(MOTOR1_IN1, LOW);
  digitalWrite(MOTOR2_IN1, LOW);
  for (int i=0; i<255; i++) {
    analogWrite(MOTOR1_IN2, i);
    analogWrite(MOTOR2_IN2, i);
    delay(10);
  }

  // forward full speed for one second
  delay(1000);
  
  // ramp down forward
  for (int i=255; i>=0; i--) {
    analogWrite(MOTOR1_IN2, i);
    analogWrite(MOTOR2_IN2, i);
    delay(10);
  }

  // ramp up backward
  digitalWrite(MOTOR1_IN2, LOW);
  digitalWrite(MOTOR2_IN2, LOW);
  for (int i=0; i<255; i++) {
    analogWrite(MOTOR1_IN1, i);
    analogWrite(MOTOR2_IN1, i);
    delay(10);
  }

  // backward full speed for one second
  delay(1000);

  // ramp down backward
  for (int i=255; i>=0; i--) {
    analogWrite(MOTOR1_IN1, i);
    analogWrite(MOTOR2_IN1, i);
    delay(10);
  }
}