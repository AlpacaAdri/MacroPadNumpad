/*  default - without bindings
   layout:

   (unused) (1) (2) (3)
   (4) (5) (6) (7)
   (8) (9) (10) (11)
   (12) (13) (14) (-1)
   (16) (-1) (18) (19)

*/
//gaming mode

void mode1(byte keyNum, bool numlok, bool * pointNumLok) {

  if (numlok) {
    switch (keyNum) {
      case 0:
        *pointNumLok = !numlok; //if numlok is pressed, flip numlok.
        break;
      case 1:// '/' key
        //open terminal
        Keyboard.press(0x83);
        Keyboard.press(0xB0);
        Keyboard.releaseAll();
        break;
      case 2:// '*' key

        break;
      case 3:// '-' key

        break;
      case 4:// '7' key
        //switch to desktop 7
        Keyboard.press(0x83);
        Keyboard.press('7');
        Keyboard.releaseAll();
        delay(50);
        break;
      case 5:// '8' key
        //switch to desktop 8
        Keyboard.press(0x83);
        Keyboard.press('8');
        Keyboard.releaseAll();
        break;
      case 6:// '9' key
        //switch to desktop 9
        Keyboard.press(0x83);
        Keyboard.press('9');
        Keyboard.releaseAll();
        delay(50);
        break;
      case 7:// 'ENCODER' key

        break;
      case 8:// '4' key
        //switch to desktop 4
        Keyboard.press(0x83);
        Keyboard.press('4');
        Keyboard.releaseAll();
        delay(50);
        break;
      case 9:// '5' key
        //switch to desktop 5
        Keyboard.press(0x83);
        Keyboard.press('5');
        Keyboard.releaseAll();
        delay(50);
        break;
      case 10:// '6' key
        //switch to desktop 6
        Keyboard.press(0x83);
        Keyboard.press('6');
        Keyboard.releaseAll();
        delay(50);
        break;
      case 11://'+' key
        //open drun
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();

        break;
      case 12:// '1' key
        //switch to desktop 1
        Keyboard.press(0x83);
        Keyboard.press('1');
        Keyboard.releaseAll();
        break;
      case 13://'2' key
        //switch to desktop 2
        Keyboard.press(0x83);
        Keyboard.press('2');
        Keyboard.releaseAll();
        break;
      case 14:// '3' key
        //switch to desktop 3
        Keyboard.press(0x83);
        Keyboard.press('3');
        Keyboard.releaseAll(); 
        delay(50);
        break;
      case 16:// '0' key
        //open browser window
        Keyboard.press(0x83);
        Keyboard.press(0x81);
        Keyboard.press(0xB0);
        Keyboard.releaseAll();
        delay(50);
        break;
      case 18://'.' key
        //close current window
        Keyboard.press(0x83);
        Keyboard.press(0x81);
        Keyboard.press('q');
        Keyboard.releaseAll();
        delay(50);
        break;
      case 19://'ENTER' key
        Keyboard.press(176);
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
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        delay(1000);
        Keyboard.print("arduino");
        delay(500);
        Keyboard.write(0xB0);
        break;
      case 5:// '8' key

        break;
      case 6:// '9' key

        break;
      case 7:// 'ENCODER' key

        break;
      case 8:// '4' key
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        delay(1000);
        Keyboard.print("thunderbird");
        delay(500);//add delay so user can see what they have launched
        Keyboard.write(0xB0);
        break;
      case 9:// '5' key
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        delay(1000);
        Keyboard.print("htop");
        delay(500);
        Keyboard.write(0xB0);
        break;
      case 10:// '6' key
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        delay(1000);
        Keyboard.print("PrusaSlicer");
        delay(500);
        Keyboard.write(0xB0);
        break;
      case 11://'+' key
        //open drun
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        break;
      case 12:// '1' key
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        delay(1000);
        Keyboard.print("nautilus");
        delay(500);//add delay so user can see what they have launched
        Keyboard.write(0xB0);
        break;
      case 13://'2' key
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        delay(1000);
        Keyboard.print("Discord");
        delay(500);
        Keyboard.write(0xB0);
        break;
      case 14:// '3' key
        Keyboard.press(0x83);
        Keyboard.press(0x20);
        Keyboard.releaseAll();
        delay(1000);
        Keyboard.print("System monitor");
        delay(500);
        Keyboard.write(0xB0);
        break;
      case 16:// '0' key

        break;
      case 18://'.' key
        //close current window
        Keyboard.press(0x83);
        Keyboard.press(0x81);
        Keyboard.press('q');
        Keyboard.releaseAll();
        break;
      case 19://'ENTER' key
        Keyboard.write(176);
        break;
    }
  }
}
void releaseMode1(byte keyNum, bool numLok){
  if (numlok) {
    switch (keyNum) {
      
      case 1:// '/' key
        //Keyboard.release('/');
        break;
      case 2:// '*' key
        //Keyboard.release('*');
        break;
      case 3:// '-' key
        //Keyboard.release('-');
        break;
      case 4:// '7' key
        //Keyboard.release('7');
        break;
      case 5:// '8' key
        //Keyboard.release('8');
        break;
      case 6:// '9' key
        //Keyboard.release('9');
        break;
      case 7:// 'ENCODER' key
        //Keyboard.release(153);
        break;
      case 8:// '4' key
        //Keyboard.release('4');
        break;
      case 9:// '5' key
        //Keyboard.release('5');
        break;
      case 10:// '6' key
        //Keyboard.release('6');
        break;
      case 11://'+' key
        //Keyboard.release('+');
        break;
      case 12:// '1' key
        //Keyboard.release('1');
        break;
      case 13://'2' key
        //Keyboard.release('2');
        break;
      case 14:// '3' key
        //Keyboard.release('3');
        break;
      case 16:// '0' key
        //Keyboard.release('0');
        break;
      case 18://'.' key
        //Keyboard.release('.');
        break;
      case 19://'ENTER' key
        //Keyboard.release(176);
        break;
    }
  } else {
    switch (keyNum) {
     
     case 1:// '/' key
        //Keyboard.release('/');
        break;
      case 2:// '*' key
        //Keyboard.release('*');
        break;
      case 3:// '-' key
        //Keyboard.release('-');
        break;
      case 4:// '7' key
        //Keyboard.release('7');
        break;
      case 5:// '8' key
        //Keyboard.release(218);
        break;
      case 6:// '9' key
        //Keyboard.release('9');
        break;
      case 7:// 'ENCODER' key
        //Keyboard.release(153);
        break;
      case 8:// '4' key
        //Keyboard.release(216);
        break;
      case 9:// '5' key
        //Keyboard.release('5');
        break;
      case 10:// '6' key
        //Keyboard.release(215);
        break;
      case 11://'+' key
        //Keyboard.release('+');
        break;
      case 12:// '1' key
        //Keyboard.release('1');
        break;
      case 13://'2' key
        //Keyboard.release(217);
        break;
      case 14:// '3' key
        //Keyboard.release('3');
        break;
      case 16:// '0' key
        //Keyboard.release('0');
        break;
      case 18://'.' key
        //Keyboard.release('.');
        break;
      case 19://'ENTER' key
        Keyboard.release(176);
        break;
    }
  }
}
