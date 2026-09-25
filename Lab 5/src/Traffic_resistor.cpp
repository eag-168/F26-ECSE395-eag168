#include <Arduino.h>

//EAG168 Define all pins for my sensor and actuators
const int photoResistPin = A2;
const int trafficRPin = 14;
const int trafficYPin = 32;
const int trafficGPin = 15;
const int buzzerPin = A1;

//EAG168 Variables for note pitches
#define NOTE_C3  131
#define NOTE_C4  262
#define NOTE_C5  523

void setup() {
    //EAG168 set up my pins as inputs and outputs
    pinMode(photoResistPin, INPUT);
    pinMode(trafficRPin, OUTPUT);
    pinMode(trafficYPin, OUTPUT);
    pinMode(trafficGPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);

    //EAG168 set up my baud rate
    Serial.begin(115200);
}

void loop() {

    //EAG168 read the light level and invert so 4095 is the brightest light
    int lightLevel = 4095 - analogRead(photoResistPin);
    Serial.println(lightLevel);
    
    if ((lightLevel > 2730) || (lightLevel == 2730)){ 
        //EAG168 if the light is high, turn on green light and play a high pitch note
        digitalWrite(trafficGPin,HIGH);
        tone(buzzerPin,NOTE_C5, 250);
        //EAG168 delay a quarter second before resetting
        delay(250);
        digitalWrite(trafficGPin,LOW);

    } else if((lightLevel < 2730)&&(lightLevel > 1365)){
        //EAG168 if the light is medium, turn on yellow light and play medium pitch note
        digitalWrite(trafficYPin,HIGH);
        tone(buzzerPin,NOTE_C4, 250);
        //EAG168 delay a quarter second before resetting
        delay(250);
        digitalWrite(trafficYPin,LOW);

    } else {
        //EAG168 if the light is low, turn on red light and play low pitch note
        digitalWrite(trafficRPin, HIGH);
        tone(buzzerPin,NOTE_C3, 250);
        //EAG168 delay a quarter second before resetting
        delay(250);
        digitalWrite(trafficRPin,LOW);
    }

}