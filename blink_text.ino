//pranitelearnings
// Program Blinking text
// include the library code:
#include <LiquidCrystal_I2C.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
// set up the LCD's number of rows and columns:
lcd.init();
lcd.backlight();
lcd.clear(); // start with a blank screen
lcd.setCursor(0,1); // set cursor to column 0, row 1
lcd.print("Blinking Text");
}
void loop() {
// Turn off the blinking cursor:
lcd.noDisplay();
delay(500);
// Turn on the display:
lcd.display();
delay(500);
}
