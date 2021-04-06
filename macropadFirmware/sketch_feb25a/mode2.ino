/*  default - without bindings
   layout:

   (unused) (1) (2) (3)
   (4) (5) (6) (7)
   (8) (9) (10) (11)
   (12) (13) (14) (-1)
   (16) (-1) (18) (19)

*/
//quick launch mode

void mode2(byte keyNum, bool numlok, bool * pointNumLok) {

  if (numlok) {
    switch (keyNum) {
      case 0:
        *pointNumLok = !numlok; //if numlok is pressed, flip numlok.
        break;
      case 1:// '/' key

        break;
      case 2:// '*' key

        break;
      case 3:// '-' key

        break;
      case 4:// '7' key
        Keyboard.press('`');
        delay(500);
        Keyboard.releaseAll();
        break;
      case 5:// '8' key

        break;
      case 6:// '9' key

        break;
      case 7:// 'ENCODER' key

        break;
      case 8:// '4' key
        Keyboard.press('d');
        break;
      case 9:// '5' key
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        delay(1000);
        Keyboard.println("Osu_Lazer");
        break;
      case 10:// '6' key
        Keyboard.press('k');
        break;
      case 11://'+' key

        break;
      case 12:// '1' key
        Keyboard.press('f');
        break;
      case 13://'2' key
        
        break;
      case 14:// '3' key
        Keyboard.press('j');
        break;
      case 16:// '0' key

        break;
      case 18://'.' key

        break;
      case 19://'ENTER' key
        Keyboard.write(176);
        break;
    }
  } else {
    switch (keyNum) {
      case 0:
        *pointNumLok = !numlok; //if numlok is pressed, flip numlok.
        break;
      case 1:// '/' key

        break;
      case 2:// '*' key

        break;
      case 3:// '-' key

        break;
      case 4:// '7' key

        break;
      case 5:// '8' key

        break;
      case 6:// '9' key

        break;
      case 7:// 'ENCODER' key
        
        break;
      case 8:// '4' key

        break;
      case 9:// '5' key

        break;
      case 10:// '6' key

        break;
      case 11://'+' key

        break;
      case 12:// '1' key
        Keyboard.press('z');
        break;
      case 13://'2' key
        Keyboard.press('x');
        break;
      case 14:// '3' key

        break;
      case 16:// '0' key

        break;
      case 18://'.' key

        break;
      case 19://'ENTER' key

        break;
    }
  }
}

void releaseMode2(byte keyNum, bool numLok){
   if (numlok) {
    switch (keyNum) {
      
      case 1:// '/' key

        break;
      case 2:// '*' key

        break;
      case 3:// '-' key

        break;
      case 4:// '7' key
        
        break;
      case 5:// '8' key

        break;
      case 6:// '9' key

        break;
      case 7:// 'ENCODER' key

        break;
      case 8:// '4' key
        Keyboard.release('d');
        break;
      case 9:// '5' key
        
        break;
      case 10:// '6' key
        Keyboard.release('k');
        break;
      case 11://'+' key

        break;
      case 12:// '1' key
        Keyboard.release('f');
        break;
      case 13://'2' key
        
        break;
      case 14:// '3' key
        Keyboard.release('j');
        break;
      case 16:// '0' key

        break;
      case 18://'.' key

        break;
      case 19://'ENTER' key
        Keyboard.write(176);
        break;
    }
  } else {
    switch (keyNum) {
      
      case 1:// '/' key

        break;
      case 2:// '*' key

        break;
      case 3:// '-' key

        break;
      case 4:// '7' key

        break;
      case 5:// '8' key

        break;
      case 6:// '9' key

        break;
      case 7:// 'ENCODER' key
        
        break;
      case 8:// '4' key

        break;
      case 9:// '5' key

        break;
      case 10:// '6' key

        break;
      case 11://'+' key

        break;
      case 12:// '1' key
        Keyboard.release('z');
        break;
      case 13://'2' key
        Keyboard.release('x');
        break;
      case 14:// '3' key

        break;
      case 16:// '0' key

        break;
      case 18://'.' key

        break;
      case 19://'ENTER' key

        break;
    }
  }
}
