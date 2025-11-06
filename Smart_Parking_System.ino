#include <LiquidCrystal.h>

int trig1=2;
int echo1=3;
int trig2=4;
int echo2=5;
int trig3=6;
int echo3=7;
int red1=8;
int red2=10;
int red3=12;
int green1=9;
int green2=11;
int green3=13;
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);

int duration1, duration2, duration3, distance1, distance2, distance3;

void setup() 
{
  pinMode(echo1,INPUT);
  pinMode(echo2,INPUT);
  pinMode(echo3,INPUT);
  pinMode(trig1,OUTPUT);
  pinMode(trig2,OUTPUT);
  pinMode(trig3,OUTPUT);
  pinMode(red1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(red3,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(green3,OUTPUT);
  lcd.begin(16,2);
  lcd.print("LCD Starts");
  lcd.clear();
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trig1,LOW);
  delayMicroseconds(2);
  digitalWrite(trig1,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1,LOW);
  duration1=pulseIn(echo1,HIGH); 
  distance1=duration1*0.017;
  Serial.print("Distance1 is ");
  Serial.println(distance1);
  if(distance1<100)
  {
    digitalWrite(red1,HIGH);
    digitalWrite(green1,LOW);
    Serial.println("Parking slot1 Occupied");
  }
  else
  {
    digitalWrite(red1,LOW);
    digitalWrite(green1,HIGH);
    Serial.println("Parking slot1 Free"); 
  }
  Serial.println();

  digitalWrite(trig2,LOW);
  delayMicroseconds(2);
  digitalWrite(trig2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2,LOW);
  duration2=pulseIn(echo2,HIGH); 
  distance2=duration2*0.017;
  Serial.print("Distance2 is ");
  Serial.println(distance2);
  if(distance2<100)
  {
    digitalWrite(red2,HIGH);
    digitalWrite(green2,LOW);
    Serial.println("Parking slot2 Occupied");
  }
  else
  {
    digitalWrite(red2,LOW);
    digitalWrite(green2,HIGH);
    Serial.println("Parking slot2 Free"); 
  }
  Serial.println();

  digitalWrite(trig3,LOW);
  delayMicroseconds(2);
  digitalWrite(trig3,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig3,LOW);
  duration3=pulseIn(echo3,HIGH); 
  distance3=duration3*0.017;
  Serial.print("Distance3 is ");
  Serial.println(distance3);
  if(distance3<100)
  {
    digitalWrite(red3,HIGH);
    digitalWrite(green3,LOW);
    Serial.println("Parking slot3 Occupied");
  }
  else
  {
    digitalWrite(red3,LOW);
    digitalWrite(green3,HIGH);
    Serial.println("Parking slot3 Free"); 
  }
  Serial.println();

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Smart Parking System");
  lcd.setCursor(0,1);
  if(distance1>100)
  {
    lcd.print("Parking1 free ");
  }
  if(distance2>100)
  {
    lcd.print("Parking2 free ");
  }
  if(distance3>100)
  {
    lcd.print("Parking3 free ");
  }
  
  delay(5000);
}
