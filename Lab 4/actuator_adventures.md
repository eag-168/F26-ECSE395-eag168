This is my third lab using the ESP32s, focusing this time on controlling actuators using the ESP32. I am using Visual Studio Code and PlatformIO IDE to upload to the ESP32 from my Mac. The main code for the motor can be found in ***TT Motor Rotate.cpp***, the main code for the servo can be found in ***Servo Motor Random.cpp***

- I built my circuit on my breadboard, as seen here: ![[IMG_6957.heic]]
- I first ran TT motor.cpp to verify that my motor worked, then modified TT Motor Rotate.cpp to make the motor turn on for a second, off for a second, then change directions for a second, then off for a second and loop. 
- I then wrote TT Motor EC.cpp to continuously increase and decrease the speed of the motor. 
- I then built the servo circuit, as seen here:![[IMG_6959.heic]]
- I uploaded Servo Motor.cpp to verify the servo worked, then changed the following
	- minPulseWidth: I dropped it from 500 to 50, which made the first spin go past 180, and from 500 to 2000, which made the first spin not go close to 180 at all.
	- maxPulseWidth: I changed it from 2500 to 5000, which made the spinning go from a slow turn followed by a quick reset to a quick turn followed by a slow reset.
	- setPeriodHertz: I changed it from 50 to 500, which made the "step size" of each smaller turn smaller and the whole turn appear more smooth.
	- Rotation Range: I changed it from 180 to 270, which made it spin for longer to achieve a larger range of rotation.
	- delay: I changed it from 15 to 50, which made the servo continue to spin for longer in its "slow spin" half of the rotation.
- I then edited the Servo Motor Random.cpp to cause the servo to rotate to a random angle, then wait for 2 seconds, then repeat

This lab took me the longest to complete, with about twice as long as the lab. I would associate a medium level of difficulty with the lab; it was definitely the most difficult lab so far but definitely doable. The hardest part was figuring out what was supposed to be happening with the servo movement and what was changing. I currently feel pretty comfortable with the course content. The lab instructions were pretty unclear at times, and could probably use an edit.