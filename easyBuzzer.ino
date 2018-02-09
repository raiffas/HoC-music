//intialize the pin that is hooked up to the buzzer
const int buzzerPin = 9;

//this loop will begin communication
//between our program and the arduino
void setup() {
  pinMode(buzzerPin, OUTPUT);   //let the program know that buzzerPin (9) is used as OUTPUT
}

// put your main code here, to run repeatedly:
void loop() {
  tone(buzzerPin, 500);     //this function will send a frequency to the buzzerPin and the buzzer will play that note
  delay(100);               //wait a certain amount of time (in milliseconds) before going to the next function
  noTone(buzzerPin);        //this function will stop the sound
  delay(1000);              //wait before moving on;

}
