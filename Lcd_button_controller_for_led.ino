#include <LiquidCrystal_I2C.h>
#define buttonA 2
#define buttonB 3
#define buttonC 4
#define ledRed  7
#define ledGreen 8
int ledflag = 0;
int readValue;
LiquidCrystal_I2C lcd (0x20,16,2);
void setup() {
  // put your setup code here, to run once:
lcd.backlight();
lcd.init();
pinMode(buttonA,INPUT);
pinMode(buttonB,INPUT);
pinMode(buttonC,INPUT);
pinMode(ledRed,OUTPUT);
pinMode(ledGreen,OUTPUT);
buttonLine();
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("SELECT ANY");
lcd.setCursor(0,1);
lcd.print("BUTTON");
buttonLine();
buttonLineB();
buttonLineC();
}
void buttonLine(){
if(digitalRead(buttonA) == HIGH){
  if(ledflag == 0){
    ledflag = 1;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Welcome Emmanuel");
  delay(1000);
  lcd.clear();
  lcd.print("HOW MAY I");
  lcd.setCursor(0,1);
  lcd.print("BE OF HELP");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SELECT BUTTON A");
  lcd.setCursor(0,1);
  lcd.print(" OR B");
  delay(1000);
  lcd.clear();
 }
else {
  ledflag = 0;
}
  lcd.clear();
}
}
void buttonLineB(){
  if(digitalRead(buttonB) == HIGH){
  if(ledflag == 0){
    ledflag = 1;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RED LED IS ON");
  lcd.setCursor(0,1);
  lcd.print("FOR 1.5secs");
  digitalWrite(ledRed,HIGH);
  delay(1500);
  digitalWrite(ledRed,LOW);
  lcd.clear();
 }
else {
  ledflag = 0;
  lcd.clear();
}
}
}
void buttonLineC(){
  if(digitalRead(buttonC) == HIGH){
  if(ledflag == 0){
    ledflag = 1;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("GREEN LED IS ON");
  lcd.setCursor(0,1);
  lcd.print("FOR 1.5secs");
  digitalWrite(ledGreen,HIGH);
  delay(1500);
  digitalWrite(ledGreen,LOW);
  lcd.clear();
 }
else {
  ledflag = 0;
  lcd.clear();
}
}
}
