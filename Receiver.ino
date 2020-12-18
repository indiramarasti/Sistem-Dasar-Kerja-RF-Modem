#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
void setup()
{
lcd.begin(20,4);
Serial.begin(9600);
lcd.setCursor(0,0);
lcd.print("Wireless Serial");
lcd.setCursor(0,1);
lcd.print("communication via 2.4 Ghz");
lcd.setCursor(0,2);
lcd.print("modem at PNJ.....");
}
// the loop routine runs over and over again forever:
void loop()
{
int TEMP_VALUE=Serial.read();
lcd.setCursor(0,3);
lcd.print("Temp. in 0C:");
lcd.setCursor(13,3);
lcd.print("TEMP_VALUE");
delay(100);
Serial.print("TEMP_VAL:");
Serial.println(TEMP_VALUE);
delay(100);
}
