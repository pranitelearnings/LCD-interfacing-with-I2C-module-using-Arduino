
//pranitElearnings
  //LCD interfacing with I2C module
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
 
  lcd.backlight();
  
  lcd.setCursor(0,0); //0 column 0 row 
  lcd.print("Hello ");
  
  lcd.setCursor(0,1);  //0 column 1 row
  lcd.print("World !!!!");
}


void loop()
{
 
}
