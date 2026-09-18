/* #include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0; 

void setup() {
  //EAG168 added the baud rate, using the same as prior labs
  Serial.begin(115200);

  //EAG168 set your motor pins A0 and A1 as OUTPUTs
  pinMode(MOTOR_B_1B, OUTPUT);
  pinMode(MOTOR_B_1A, OUTPUT); 

  //EAG168 set the println to print a message when the motors are set up 
  Serial.println("Motors set up");
}

void loop() {
  //EAG168 Continuous increase and decrease
  Serial.println("continuous increase and decrease");
  
  for (int i = 0; i < 256; i++) {
  analogWrite(MOTOR_B_1B,i);
  analogWrite(MOTOR_B_1A,0);
  delay(10);
  }
  for (int i = 255; i > -1; i--) {
  analogWrite(MOTOR_B_1B,i);
  analogWrite(MOTOR_B_1A,0);
  delay(10);
  }
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment. */