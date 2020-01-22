#include <LiquidCrystal.h>
 LiquidCrystal lcd(0,1,2,3,4,5);

 
void setup(){
  lcd.begin(16,2);  
    pinMode(A0, INPUT);
    
}


int i;
void loop(){
    
  
lcd.setCursor(0,0);
    lcd.print("awoakwoakwoak");
    lcd.setCursor(0,1);
    lcd.print("muheheheh");
  delay(1000);
  
  //untuk membersihkan lcd dari text
  lcd.clear();
  delay(100);
  
  //untuk running text
  lcd.setCursor(0,0);
    lcd.print("Hiya hiya hiya");
    for(i=0; i<16; i++)
    {
      lcd.scrollDisplayLeft();
      delay(500);
    }
  
  lcd.clear();
  delay(1000);
  
  
  
}
