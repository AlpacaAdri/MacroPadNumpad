#include <Keyboard.h>
#include <Encoder.h>


/*
   TODO

   make encoder checking function:

   make matrix scanning function - output ID of pressed switch:
   V
   pass output of scanning function to keybinding function - convert button press to key strokes: DONE
   V
   output keybinding function to computer: DONE
*/

byte rows[] = {15, 14, 16, 10}; //pins for columns
byte cols[] = {9, 8, 7, 6, 5}; //pins for rows

const int colCount = sizeof(cols) / sizeof(cols[0]);
const int rowCount = sizeof(rows) / sizeof(rows[0]);

//overall control vars
byte mode = 0;//what mode am I in?
bool numlok = true; //is the numlock button on?
bool * pointNumLok = &numlok;

int spamSpeed = 15;
int longPressDelay = 350;


//spamSpeed arr helpers
int keyDown[colCount][rowCount]; //how long each key has been pressed down
bool keyLong[colCount][rowCount]; //which keys are pressed down


//key nums
byte layout[5][4] = {               //layout grid for characters
  {0, 1, 2, 3},
  {4, 5, 6, 7},
  {8, 9, 10, 11},
  {12, 13, 14, -1}, //-1s are for indexes where nothing is wired to the arduino
  {16, -1, 18, 19}
};

//encoder setup


void setup() {
  // put your setup code here, to run once:
  Serial.begin(1500);

  //testing, delete later
  pinMode(A3, INPUT);//disable keyboard pin

  pinMode(2, OUTPUT);//numlok LED output
  pinMode(A0, INPUT_PULLUP);//numlok key input
  pinMode(3, OUTPUT);//left mode disp LED
  pinMode(4, OUTPUT);//right mode disp LED
  pinMode(A1, INPUT);//encoder pin
  pinMode(A2, INPUT);//Encoder pin 2

  for (int i = 0; i < rowCount; i++) {
    Serial.print(rows[i]); Serial.println(" as input");
    pinMode(rows[i], INPUT_PULLUP);
  }

  for (int i = 0; i < colCount; i++) {
    Serial.print(cols[i]); Serial.println(" as output");
    pinMode(cols[i], OUTPUT);
  }


  Keyboard.begin();
}


void keyPressed(int row, int col) {
  if (keyDown[row][col] == 0) {     //if the function is called for the first time for this key
    switch (mode) {
      case 0:
        mode0(layout[row][col], numlok, pointNumLok);
        break;

      case 1:
        mode1(layout[row][col], numlok, pointNumLok);
        break;

      case 2:
        mode2(layout[row][col], numlok, pointNumLok);
        break;

      case 3:
        mode3(layout[row][col], numlok, pointNumLok);
        break;
    }
  }
  else if (keyLong[row][col] && keyDown[row][col] > spamSpeed) { //if the key has been held long enough to warrant another keystroke set
    switch (mode) {
      case 0:
        mode0(layout[row][col], numlok, pointNumLok);
        break;

      case 1:
        mode1(layout[row][col], numlok, pointNumLok);
        break;

      case 2:
        mode2(layout[row][col], numlok, pointNumLok);
        break;

      case 3:
        mode3(layout[row][col], numlok, pointNumLok);
        break;
    }

    keyDown[row][col] = 1;
  }
  else if (keyDown[row][col] > longPressDelay) { //if the key has been held for longer that longPressDelay, it switches into spam mode
    keyLong[row][col] = true;
  }

  keyDown[row][col]++;
}

void resetKey(int row, int col) { //resetting the variables after key is released
  keyDown[row][col] = 0;
  keyLong[row][col] = false;
  switch (mode) {
    case 0:
      releaseMode0(layout[row][col], numlok);
      break;

    case 1:
      releaseMode1(layout[row][col], numlok);
      break;

    case 2:
      releaseMode2(layout[row][col], numlok);
      break;

    case 3:
      releaseMode3(layout[row][col], numlok);
      break;
  }
}

void LEDDisplay(byte mode, bool numlok) {
  //display mode
  if ((mode & 1) > 0) {
    digitalWrite(4, HIGH); //get first bit of mode > if the first bit is > 0, then light up right LED
  } else {
    digitalWrite(4, LOW);
  }
  if ((mode & 2) > 0) {
    digitalWrite(3, HIGH); //get second bit of mode > if the second bit is > 0, then light up left LED
  } else {
    digitalWrite(3, LOW);
  }
  if (numlok) {
    digitalWrite(2, HIGH); //display numlok LED
  } else {
    digitalWrite(2, LOW);
  }
}


void loop() {
  // put your main code here, to run repeatedly:

  //scan matrix
  for (int c = 0; c < colCount; c++) {
    digitalWrite(cols[c], LOW); //set a column low
    delayMicroseconds(5); //setttle down little electrons

    for (int r = 0; r < rowCount; r++) { //check rows
      if (digitalRead(rows[r]) == LOW)
      {
        keyPressed(c, r);           //calling keyPressed function if one of the inputs reads low
      }
      else if (keyDown[c][r] != 0)  //resetting the key if it is not pressed any more
      {
        resetKey(c, r);
      }

    }
    digitalWrite(cols[c], HIGH);//reset col
    delayMicroseconds(500);
  }

  //check encoder
 

  //check if modeSwitch is pressed
  while (digitalRead(A0) == LOW) {
    mode++;
    if (mode > 3) {
      mode = 0;
    }
    delay(500);
    LEDDisplay(mode, numlok);//show mode going up in binary on LEDs
  }

  //display to LEDs
  LEDDisplay(mode, numlok);
  //Emergency Testing disable
  if (digitalRead(A3) == HIGH) {
    Keyboard.end();
  }


}
