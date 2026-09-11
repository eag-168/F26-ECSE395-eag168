/* #include <Arduino.h>

// function prototype
int voltage(float analogvalue);

//EAG168 assign the potentiometer to pin A1
const int sensorPin = A1;

void setup() {
    Serial.begin(115200);
}

void loop() {
    //EAG168 Read the potentiometer value into the variable sensorValue
    int sensorValue = analogRead(sensorPin);

    //EAG168 convert the potentiometer reading to a voltage by multiplying by
    // the VCC value and dividing by the maxium reading
    float sensorVoltage = (sensorValue * 3.3)/4095;

    //EAG168 Changed the println to print out the new sensorVoltage variable
    Serial.println(sensorVoltage);
    //EAG168 added the delay so each reading happens every quarter second
    delay(250); 
}

// function to calculate output voltage
int voltage(float analogvalue){
    int voltage;
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    return voltage;
} */