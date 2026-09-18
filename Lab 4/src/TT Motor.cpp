/* #include <Arduino.h>

//EAG168 Add in pin numbers
const int MOTOR_B_1A = A1; 
const int MOTOR_B_1B = A0; 


void setup() {
  //EAG168 Setup the motor pins
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT); 

  //EAG168 make the motor start spinning
  analogWrite(MOTOR_B_1A, 255);
  analogWrite(MOTOR_B_1B, 0);

  //EAG168 wait 5 seconds
  delay(5000);

  //EAG168 Turn the motor off
  analogWrite(MOTOR_B_1A, 0);  
  analogWrite(MOTOR_B_1B, 0);
}

void loop() {

}

// Note:
// - Please modify the `analogWrite()`, swap the `analogWrite()`, and modify the `delay()`.
// - You don't have to put anything in the loop.
//      - If you would like to run the code again, please press the `RESET BUTTON` on your ESP32. */