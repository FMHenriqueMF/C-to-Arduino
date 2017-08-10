#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
pinMode(A3, INPUT);
pinMode(1, OUTPUT);
pinMode(0, OUTPUT);
pinMode(A2, INPUT);
pinMode(A1, INPUT);
pinMode(A0, INPUT);
lcd.begin(16, 2);
lcd.print("Inicio operacao!");
}

void loop() {
lcd.home();
digitalWrite(1, HIGH);
digitalWrite(0, LOW);
  
if ((digitalRead(A3) == LOW) && (digitalRead(A2) == LOW) && (digitalRead(A1) == LOW) && (digitalRead(A0) == LOW)) {
	lcd.print("Em operacao! ");
	delay(1000);
}  else if ((digitalRead(A3) == HIGH) && (digitalRead(A2) == LOW) && (digitalRead(A1) == LOW) && (digitalRead(A0) == LOW)) {	
	lcd.print("Em operacao! ");
	delay(750);
} else if ((digitalRead(A3) == HIGH) && (digitalRead(A2) == HIGH) && (digitalRead(A1) == LOW) && (digitalRead(A0) == LOW)) {
	lcd.print("Em operacao! ");
	delay(500);
} else if ((digitalRead(A3) == HIGH) && (digitalRead(A2) == HIGH) && (digitalRead(A1) == HIGH) && (digitalRead(A0) == LOW)) {	
	lcd.print("Em operacao! ");
	delay(250);
} else if ((digitalRead(A3) == HIGH) && (digitalRead(A2) == HIGH) && (digitalRead(A1) == HIGH) && (digitalRead(A0) == HIGH)) {
	lcd.print("Em operacao! ");
	delay(125);
} else {
	lcd.print("ERRO! ");
	delay(50);
}
  
// muda os LEDs
digitalWrite(1, LOW);
digitalWrite(0, HIGH);
  
if ((digitalRead(A3) == LOW) && (digitalRead(A2) == LOW) && (digitalRead(A1) == LOW) && (digitalRead(A0) == LOW)) {
	lcd.print("Em operacao! ");
	delay(1000);
}  else if ((digitalRead(A3) == HIGH) && (digitalRead(A2) == LOW) && (digitalRead(A1) == LOW) && (digitalRead(A0) == LOW)) {	
	lcd.print("Em operacao! ");
	delay(750);
} else if ((digitalRead(A3) == HIGH) && (digitalRead(A2) == HIGH) && (digitalRead(A1) == LOW) && (digitalRead(A0) == LOW)) {
	lcd.print("Em operacao! ");
	delay(500);
} else if ((digitalRead(A3) == HIGH) && (digitalRead(A2) == HIGH) && (digitalRead(A1) == HIGH) && (digitalRead(A0) == LOW)) {	
	lcd.print("Em operacao! ");
	delay(250);
} else if ((digitalRead(A3) == HIGH) && (digitalRead(A2) == HIGH) && (digitalRead(A1) == HIGH) && (digitalRead(A0) == HIGH)) {
	lcd.print("Em operacao! ");
	delay(125);
} else {
	lcd.print("ERRO! ");
	delay(50);
}
}
