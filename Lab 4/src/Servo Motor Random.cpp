/* #include <ESP32Servo.h>
// Don't forget to include the library!!
// From PlatfromIO library, search for ESP32 servo and add it to the project

//EAG168 Define the servo pin as A0
Servo myServo;
const int servoPin = A0;

// variable for random angle
int randomAngle;

// Variable for pulse width
int pulseWidth;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500; // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

void setup() {
  // Attach the servo to the specified pin and set its pulse width range
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // Set the PWM frequency for the servo
  myServo.setPeriodHertz(50); // Standard 50Hz servo
}

void loop() {
    //  --- SECTION 1: Make a Random Angle Between 0 to 180 ---
    //EAG168 generate a random angle between 0 and 180
    randomAngle = random(0,180); 

    // ---SECTION 2: Map Pulse Width with Angle
    //EAG168 Map the random angle to a servo pulse width and write to the servo
    pulseWidth = map(randomAngle, 0, 180, minPulseWidth, maxPulseWidth);
    myServo.writeMicroseconds(pulseWidth); // writing pulse width to servo

    //EAG168 delay for 5 seconds
    delay(2000); 
} */