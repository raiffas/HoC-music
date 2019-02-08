// INITIALIZE THE NOTES************
const int C4 = 261.63;  //middle c
const int D4 = 293.66;
const int E4 = 329.63;
const int F4 = 349.23;
const int Fsharp4 = 369.99;
const int G4 = 392.00;
const int a4 = 440.00; //open a
const int B4 = 493.88;
const int Bflat4 = 466.16;
const int C5 = 523.25;
const int Csharp5 = 554.37;
const int D5 = 587.33;
const int E5 = 659.25; //open e
const int F5 = 698.46 ;
const int Fsharp5 = 739.99;
const int G5 = 783.99;
const int a5 = 880;
const int B5 = 987.609;
const int C6 = 1046.342;
const int R = 0;       //rest

//*********************************

// INITALIZE THE PINS WE USED TO HOOK UP THE HARDWARE
int piezoPin = 9;     //pin connected to piezo speaker

//******CHANGE THIS CODE TO MAKE MUSIC!****************************
//*****************************************************************

//Mary Had a Little Lamb
const int NumOfNotes = 26;
int notes[] = {E4, D4, C4, D4, E4, E4, E4, D4, D4,
                D4, E4, G4, G4, E4, D4, C4, D4, E4,
                E4, E4, E4, D4, D4, E4, D4, C4};
int beats[] = {2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 2,
                3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 2, 4};




// The tempo is how fast to play the song.
// To make the song play faster, decrease this value.
int tempo = 150;
//*****************************************************************
//*****************************************************************

//=======================================================================================================================

//******DON'T CHANGE THIS CODE**************************************
//******************************************************************

//this loop will begin communication
//between our program and the arduino
void setup() {
  // put your setup code here, to run once:
  pinMode(piezoPin, OUTPUT);    //let the program know that piezoPin (9) is used as OUTPUT
}

//this loop is where we write what we want to happen
//it will run forever (until we unplug the board)
void loop() {

        // loop through all the notes in our song
        for (int index = 0; index < NumOfNotes; index++) {
          
            //calculate the duration of the note using the 
            //note type and the tempo
            int duration;
            duration = beats[index] * tempo;
            
            //check if the note is a rest
            //if it is not a rest play the note
            //we want for duration
            if (notes[index] != R) {
              tone(piezoPin, notes[index], duration);
              delay(duration);
            } 
            
            // if the note is R wait for duration
            else {
              delay(duration);
            }
            
        } //end of the for loop
        
        delay(1000); //wait 1 second before playing the song again
        
} // end of loop()

