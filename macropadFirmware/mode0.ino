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

  if (numlok) {
    switch (keyNum) {
      case 0:
        *pointNumLok = !numlok; //if numlok is pressed, flip numlok. alternatively, you can get an extra button. but then you'd cut the total # of buttons in the mode in half.
        break;
      case 1:// '/' key
        Keyboard.write('/');
        break;
      case 2:// '*' key
        Keyboard.write('*');
        break;
      case 3:// '-' key
        Keyboard.write('-');
        break;
      case 4:// '7' key
        Keyboard.write('7');
        break;
      case 5:// '8' key
        Keyboard.write('8');
        break;
      case 6:// '9' key
        Keyboard.write('9');
        break;
      case 7:// 'ENCODER' key
        Keyboard.write(153);
        break;
      case 8:// '4' key
        Keyboard.write('4');
        break;
      case 9:// '5' key
        Keyboard.write('5');
        break;
      case 10:// '6' key
        Keyboard.write('6');
        break;
      case 11://'+' key
        Keyboard.write('+');
        break;
      case 12:// '1' key
        Keyboard.write('1');
        break;
      case 13://'2' key
        Keyboard.write('2');
        break;
      case 14:// '3' key
        Keyboard.write('3');
        break;
      case 16:// '0' key
        Keyboard.write('0');
        break;
      case 18://'.' key
        Keyboard.write('.');
        break;
      case 19://'ENTER' key
        Keyboard.write(015);
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

        break;
      case 13://'2' key

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
