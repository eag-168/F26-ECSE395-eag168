#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // TODO: Define your baud rates
  Serial.begin(115200); // Start the Serial connection
  // EAG168 I set the baud rate as 115200, the recommended rate. I have used similar boards 
  // in the past and had 115200 work well, so I am sticking with it
}

void loop() {
  // TODO: Define your text output
  Serial.println("Blink faster faster faster"); // Print the words to the Serial Monitor.
  // EAG 168 I added the text as "Blink" so that every time the LED blinks it will print Blink
  
  // TODO: Set up your delay in milliseconds
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(500); // Speed in milliseconds
  // EAG168 I set this delay as 500 milliseconds so that the LED will stay on for half a second
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(1000); // Speed in milliseconds
  // EAG168 I changed this delay to be 1000 milliseconds, so that the LED will stay off for a second
  // EAG168 I added the following few lines to make the blinking more varied and interesting by changing on and off speeds
  digitalWrite(LED_PIN,HIGH);
  delay(400);
  digitalWrite(LED_PIN, LOW);
  delay(900);
  digitalWrite(LED_PIN,HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(800);
  digitalWrite(LED_PIN,HIGH);
  delay(200);
  digitalWrite(LED_PIN, LOW);
  delay(700);
  digitalWrite(LED_PIN,HIGH);
  delay(100);
  digitalWrite(LED_PIN, LOW);
  delay(600);
  digitalWrite(LED_PIN,HIGH);
  delay(50);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
