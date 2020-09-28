//pranitelearnings
//scrolling display
// include the library code:
#include <LiquidCrystal_I2C.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {

lcd.init();
lcd.backlight();
// Print a message to the LCD.
lcd.print("scroll Text"); //enter your custom text //
delay(1000);
}
void loop() {
// scroll 12 positions (string length) to the left
// to move it offscreen left:
for (int positionCounter = 0; positionCounter < 12; positionCounter++) {
// scroll one position left:
lcd.scrollDisplayLeft();
// wait a bit:
delay(100);
}
// scroll 28 positions (string length + display length) to the right
// to move it offscreen right: 12+16 = 28
for (int positionCounter = 0; positionCounter < 28; positionCounter++) {
// scroll one position right:
lcd.scrollDisplayRight();
// wait a bit:
delay(100);
}
// scroll 16 positions (display length + string length) to the left
// to move it back to center:
for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
// scroll one position left:
lcd.scrollDisplayLeft();
// wait a bit:
delay(100);
}
// delay at the end of the full loop:
delay(1000);
}
