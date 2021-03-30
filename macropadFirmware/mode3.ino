/*
   layout:

   (0) (1) (2) (3)
   (4) (5) (6) (7)
   (8) (9) (10) (11)
   (12) (13) (14) (-1)
   (16) (-1) (18) (19)

*/


void mode3(byte keyNum, bool numlok, bool * pointNumLok) {

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
