/*  default - without bindings
   layout:

   (unused) (1) (2) (3)
   (4) (5) (6) (7)
   (8) (9) (10) (11)
   (12) (13) (14) (-1) // maybe make the unused nums into the encoder's l/r inputs?
   (16) (-1) (18) (19)

  this organization allows for easy macro making.
*/


void mode0(byte keyNum, bool numlok, bool * pointNumLok) {
//hello there
  if (numlok) {
    switch (keyNum) {
      case 0:
       *pointNumLok = !numlok; //if numlok is pressed, flip numlok. alternatively, you can get an extra button. but then you'd cut the total # of buttons in the mode in half.
        break;
      case 1:// '/' key
        Keyboard.press('/');
        break;
      case 2:// '*' key
        Keyboard.press('*');
        break;
      case 3:// '-' key
        Keyboard.press('-');
        break;
      case 4:// '7' key
        Keyboard.press('7');
        break;
      case 5:// '8' key
        Keyboard.press('8');
        break;
      case 6:// '9' key
        Keyboard.press('9');
        break;
      case 7:// 'ENCODER' key
        Keyboard.press(153);
        break;
      case 8:// '4' key
        Keyboard.press('4');
        break;
      case 9:// '5' key
        Keyboard.press('5');
        break;
      case 10:// '6' key
        Keyboard.press('6');
        break;
      case 11://'+' key
        Keyboard.press('+');
        break;
      case 12:// '1' key
        Keyboard.press('1');
        break;
      case 13://'2' key
        Keyboard.press('2');
        break;
      case 14:// '3' key
        Keyboard.press('3');
        break;
      case 16:// '0' key
        Keyboard.press('0');
        break;
      case 18://'.' key
        Keyboard.press('.');
        break;
      case 19://'ENTER' key
        Keyboard.press(176);
        break;
    }
  } else {
    switch (keyNum) {
     case 0:
        *pointNumLok = !numlok; //if numlok is pressed, flip numlok. alternatively, you can get an extra button. but then you'd cut the total # of buttons in the mode in half.
        break;
     case 1:// '/' key
        Keyboard.press('/');
        break;
      case 2:// '*' key
        Keyboard.press('*');
        break;
      case 3:// '-' key
        Keyboard.press('-');
        break;
      case 4:// '7' key
        Keyboard.press('7');
        break;
      case 5:// '8' key
        Keyboard.press(218);
        break;
      case 6:// '9' key
        Keyboard.press('9');
        break;
      case 7:// 'ENCODER' key
        Keyboard.press(153);
        break;
      case 8:// '4' key
        Keyboard.press(216);
        break;
      case 9:// '5' key
        Keyboard.press('5');
        break;
      case 10:// '6' key
        Keyboard.press(215);
        break;
      case 11://'+' key
        Keyboard.press('+');
        break;
      case 12:// '1' key
        Keyboard.press('1');
        break;
      case 13://'2' key
        Keyboard.press(217);
        break;
      case 14:// '3' key
        Keyboard.press('3');
        break;
      case 16:// '0' key
        Keyboard.press('0');
        break;
      case 18://'.' key
        Keyboard.press('.');
        break;
      case 19://'ENTER' key
        Keyboard.press(176);
        break;
    }
  }
}



void releaseMode0(byte keyNum, bool numLok){
  if (numlok) {
    switch (keyNum) {
      case 1:// '/' key
        Keyboard.release('/');
        break;
      case 2:// '*' key
        Keyboard.release('*');
        break;
      case 3:// '-' key
        Keyboard.release('-');
        break;
      case 4:// '7' key
        Keyboard.release('7');
        break;
      case 5:// '8' key
        Keyboard.release('8');
        break;
      case 6:// '9' key
        Keyboard.release('9');
        break;
      case 7:// 'ENCODER' key
        Keyboard.release(153);
      case 8:// '4' key
        Keyboard.release('4');
        break;
      case 9:// '5' key
        Keyboard.release('5');
        break;
      case 10:// '6' key
        Keyboard.release('6');
        break;
      case 11://'+' key
        Keyboard.release('+');
        break;
      case 12:// '1' key
        Keyboard.release('1');
        break;
      case 13://'2' key
        Keyboard.release('2');
        break;
      case 14:// '3' key
        Keyboard.release('3');
        break;
      case 16:// '0' key
        Keyboard.release('0');
        break;
      case 18://'.' key
        Keyboard.release('.');
        break;
      case 19://'ENTER' key
        Keyboard.release(176);
        break;
    }
  } else {
    switch (keyNum) {
     
     case 1:// '/' key
        Keyboard.release('/');
        break;
      case 2:// '*' key
        Keyboard.release('*');
        break;
      case 3:// '-' key
        Keyboard.release('-');
        break;
      case 4:// '7' key
        Keyboard.release('7');
        break;
      case 5:// '8' key
        Keyboard.release(218);
        break;
      case 6:// '9' key
        Keyboard.release('9');
        break;
      case 7:// 'ENCODER' key
        Keyboard.release(153);
        break;
      case 8:// '4' key
        Keyboard.release(216);
        break;
      case 9:// '5' key
        Keyboard.release('5');
        break;
      case 10:// '6' key
        Keyboard.release(215);
        break;
      case 11://'+' key
        Keyboard.release('+');
        break;
      case 12:// '1' key
        Keyboard.release('1');
        break;
      case 13://'2' key
        Keyboard.release(217);
        break;
      case 14:// '3' key
        Keyboard.release('3');
        break;
      case 16:// '0' key
        Keyboard.release('0');
        break;
      case 18://'.' key
        Keyboard.release('.');
        break;
      case 19://'ENTER' key
        Keyboard.release(176);
        break;
    }
  }
}
