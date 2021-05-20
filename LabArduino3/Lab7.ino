#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  introduce();
}

void introduce() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("W");
  delay(500);
  lcd.print("e");
  delay(500);
  lcd.print("l");
  delay(500);
  lcd.print("c");
  delay(500);
  lcd.print("o");
  delay(500);
  lcd.print("m");
  delay(500);
  lcd.print("e");
  delay(500);
  lcd.print("T");
  delay(500);
  lcd.print("o");
  delay(500);
  lcd.print("V");
  delay(500);
  lcd.print("K");
  delay(500);
  lcd.print("U");
  delay(500);
  for(int i = 0; i < 3; i++) {
    lcd.noDisplay();
    delay(300);
    lcd.display();
    delay(300);
  }
  for(int i = 0; i < 16; i++){
     lcd.scrollDisplayRight();
     delay(250);
  }
}
