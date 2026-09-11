#include <Arduino.h>

//EAG168 Assigned my touch sensor to pin A1, matching my esp32
const int sensorPin = A1;
//EAG168 assigned my built in LED to be a writeable pin
#define LED_PIN 13

void setup() {
    //EAG168 set up the LED as an output pin
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(115200);
}

void loop() {
  
    //EAG168 created a variable to read and store the sensor reading from the touch
    int touchValue = analogRead(sensorPin);

    //EAG168 added an if statement to print out and turn the builtin LED on if a touch was detected
    if (touchValue == 4095)
    {
        Serial.println("Touch detected!");
        //EAG168 turn on the LED if a touch is detected
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        Serial.println("No touch detected...");
        //EAG168 turn off the LED if a touch is not detected
        digitalWrite(LED_PIN, LOW);
    }
    
    //EAG168 changed the delay to 100, so it checks for a touch every tenth of a second
    delay(100); 
}