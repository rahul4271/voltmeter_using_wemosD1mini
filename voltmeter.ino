#include "LiquidCrystal.h"

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float input_voltage = 0.0;
float temp=0.0;
float r1=75.0;           //according to voltage divider 
float r2=225.0;

int k=0,l=0;         //for smart display 
void setup()
{
   lcd.begin(16, 2);       // set up the LCD's number of columns and rows: 
   lcd.setCursor(0, 0);
   lcd.print("     DIGITAL    ");
   lcd.setCursor(0, 1);
   lcd.print("    VOLTMETER    ");
   delay(2000);
   
}
void loop(){
//Conversion formula
   lcd.clear();
   int analog_value = analogRead(A0);
   temp = (analog_value * 5.0) / 1024.0; 
   input_voltage = temp / (r2/(r1+r2));
   
   if (input_voltage < 0.1) 
   {
     input_voltage=0.0;
   } 
   
   if (k<20){
   lcd.setCursor(0, 0);
   lcd.print("     DIGITAL    ");
   k=k+1;
   lcd.setCursor(0, 1);
   lcd.print(" Voltage = ");
   lcd.print(input_voltage);
   delay(100);
   //lcd.clear();
   }
   
   if (k>=20 && l<20){
   lcd.setCursor(0, 0);
   lcd.print("    VOLTMETER    ");
   l=l+1;
   lcd.setCursor(0, 1);
   lcd.print(" Voltage = ");
   lcd.print(input_voltage);
   if(l==19){
    l=0;
    k=0;}
    delay(100);
   }

   
   
}
