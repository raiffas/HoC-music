# Hour of Code--Electronic Music
Hour of Code workshop teaching students about the basics of hardware and embedded programming using an arduino. This workshop uses a piezo buzzer to play music.
This workshop was originally created to suit a high school audience however it can be adapted to suit middle school students as well. 

Materials Needed:
- Computer with Arudino IDE
- Arduino 
- Breadbord
- Piezo Buzzer
- Wires
- Template programs (easyBuzer and speakerMusic)
- Song file for speakerMusic program (songs.txt)
- Workshop cheatsheet
- Presentation slides optional

Outline:
- INTRODUCTION 
	- Briefly introduce students to what programming is and how it is used to interact with hardware. Talk about general technology they may
	be familiar with (cars, robots, etc) and then segue into talking about it in the scope of an Arduino
	- Talk specifically about the hardware components they will be using (breadboard, wires, piezo buzzer)

- HANDS ON ACTIVITY
	- Show the students the spritzing diagram of how the piezo buzzer needs to be connected. Allow them to work in groups to 
	connect the components correctly
	- Once all students have the circuit completed explain the functions needed to communicate with the buzzer
	- Allow them to use the easyBuzzer program as a template to program in groups. Optionally give them specific tasks/challenges
	to complete after they've had time to play around. 
	- Show them the second program and briefly explain how it uses different programming concepts like loops and arrays to 
	efficiently program the buzzer to play a song. Depending on the age of the students and the time alloted the workshop leaders
	can go into more detail about how the program was written. 
	- Allow them to copy/paste the arrays from the songs.txt file to play different songs or help them create the arrays themselves. 

- CONCLUSION
	- Ask the students questions that will allow them to reflect on the experience and the challenges they faced 
		- What did you find frustrating/difficult?
		- How did you program the buzzer to play a series of different tones? Did you think the process used in the speakerMusic
		program was easier?
		

Troubleshooting:

- If there is an error uploading the sketch to the board check the following things first: 
	- Port. The Arduino IDE will not always default the port to the USB the board is connected to.
	- If the wires are connected to the correct pins. 
	- Syntax errors 
