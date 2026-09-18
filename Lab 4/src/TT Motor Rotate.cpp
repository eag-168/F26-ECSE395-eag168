/* #include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0; 

void setup() {
  //EAG168 added the baud rate, using the same as prior labs
  Serial.begin(115200);

  //EAG168 set your motor pins A0 and A1 as OUTPUTs
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT); 

  //EAG168 set the println to print a message when the motors are set up 
  Serial.println("Motors set up");
}

void loop() {
  // --- SECTION 1: Clokwise (5s) ---
  //EAG168 Print a message that says the setup about to happen
  Serial.println("One pin High, one pin Low");
  
  //EAG168 write pin A0 high and A1 low
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  
  //EAG168 Delay for a second
  delay(1000);

  // --- SECTION 2: Stop (2s) ---
  //EAG168 print a message that motor is stopping
  Serial.println("Motor stop");
  
  // TODO: Turn off the motor
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);

  //EAG168 Delay for a second
  delay(1000);

  // --- SECTION 3: Counterclockwise (5s) ---
  Serial.println("Reverse direction");
  
  // TODO: Write HIGH to one pin and LOW to the other
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);

  delay(1000);

  // --- SECTION 4: Stop (2s) ---
  //EAG168 Print a motor stop message
  Serial.println("Stop Motors");
  
  //EAG168 Turn off Motor
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);

  //EAG168 Delay one second
  delay(1000);
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment. */