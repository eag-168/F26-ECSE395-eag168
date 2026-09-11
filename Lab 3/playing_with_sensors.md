This is a lab to work with sensors and the ESP32, I am using Visual Studio Code and PlatformIO IDE to upload the code from my mac to my ESP32. The code from the potentiometer can be found in file **potentiometer.cpp** or **voltage.cpp**, and the code from the touch sensor can be found in file **touch.cpp***

- I built the circuit with the potentiometer on my breadboard, then edited the skeleton code to read the analog pin A1, where the potentiometer was connected to
- The code ran on the first try, with the serial monitor printing values between 0 and 4095 as I rotated it
- I then edited the voltage.cpp file, which follows the same base as potentiometer.cpp, but then converts the reading to the voltage by multiplying by the VCC voltage and dividing by the maximum reading
- Now rotating the potentiometer causes the serial monitor to print values between 0 and 3.3, which is what it should
- Created a file called touch.cpp for the touch sensor, and used the code from the potentiometer and the LED lab last week to make the serial monitor print out "Touch detected!" or "No touch detected..." every tenth of a second, and turn on the built in LED if a touch is detected

This lab took me slightly longer than the class period, but I was able to get the entire lab done. I would say the lab had a low difficulty, the provided resources were generally able to help solve all issues except for faulty equipment. The only feedback I have is that the code in the instruction video does not do the same thing as the instructions in the pdf.