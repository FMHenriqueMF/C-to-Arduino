#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup () {
  pinMode (A3, INPUT);
  pinMode (1, OUTPUT);
  pinMode (0, OUTPUT);
  
  pinMode (A2, INPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  
  pinMode (A1, INPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  
  pinMode (A0, INPUT);
  pinMode (10, OUTPUT);
  pinMode (13, OUTPUT);
  
  lcd.begin(16, 2);
}
void loop () {
  lcd.home();
  
  digitalWrite (1, digitalRead(A3));
  digitalWrite (0, !digitalRead(A3));
  
  digitalWrite (6, digitalRead(A2));
  digitalWrite (7, !digitalRead(A2));
  
  digitalWrite (8, digitalRead(A1));
  digitalWrite (9, !digitalRead(A1));
  
  digitalWrite (10, digitalRead(A0));
  digitalWrite (13, !digitalRead(A0));

  
  if (digitalRead(A3) || digitalRead(A2)) {
    lcd.print(digitalRead(A3) + digitalRead(A2));
  } else {
    lcd.print("0");
  }
  
  lcd.print(" <- Vagas -> ");
  
   if (digitalRead(A1) || digitalRead(A0)) {
    lcd.print(digitalRead(A1) + digitalRead(A0));
  } else {
    lcd.print("0");
   }
}
