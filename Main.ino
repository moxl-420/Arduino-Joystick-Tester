#include "SSD1306Ascii.h"
#include "SSD1306AsciiAvrI2c.h"

//Screen
// 0X3C+SA0 - 0x3C or 0x3D
#define I2C_ADDRESS 0x3C
// Define proper RST_PIN if required.
#define RST_PIN -1
SSD1306AsciiAvrI2c oled;

#define Xaxis_pin A0 // Arduino pin connected to the VRx Pin
#define Yaxis_pin A1 // Arduino pin connected to the VRy Pin
int Xvalue = 0;
int Yvalue = 0;
int Xmapped = 0;
int Ymapped = 0;

String Xstring;
String Ystring;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // sets the serial port to 9600
//setup display
 
    oled.begin(&Adafruit128x64, I2C_ADDRESS);
    oled.setFont(Adafruit5x7);
    oled.clear();
    oled.println();
    oled.println();
    oled.println();
    oled.set2X();
    oled.println(" - MoxL -");
    oled.set1X();
    oled.println();
    oled.println("   Joystick Tester");
    delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

 oled.clear();

   Xvalue = analogRead(Xaxis_pin);
   Yvalue = analogRead(Yaxis_pin);

   /* map(value, fromLow, fromHigh, toLow, toHigh)*/
       Xmapped = map(Xvalue, 0, 740, 1, 11);
       Ymapped = map(Yvalue, 0, 740, 1, 11);




if (Xmapped == 1) {
Xstring = "[|..........]";
}
else if (Xmapped == 2) {
  Xstring = "[.|.........]";
}
else if (Xmapped == 3) {
  Xstring = "[..|........]";
}
else if (Xmapped == 4) {
  Xstring = "[...|.......]";
}
else if (Xmapped == 5) {
  Xstring = "[....|......]";
}
else if (Xmapped == 6) {
  Xstring = "[.....|.....]";
}
else if (Xmapped == 7) {
  Xstring = "[......|....]";
}
else if (Xmapped == 8) {
  Xstring = "[.......|...]";
}
else if (Xmapped == 9) {
  Xstring = "[........|..]";
}
else if (Xmapped == 10) {
  Xstring = "[.........|.]";
}
else if (Xmapped == 11) {
  Xstring = "[..........|]";
}
else {
  Xstring = "ERROR";
}

if (Ymapped == 1) {
Ystring = "[|..........]";
}
else if (Ymapped == 2) {
  Ystring = "[.|.........]";
}
else if (Ymapped == 3) {
  Ystring = "[..|........]";
}
else if (Ymapped == 4) {
  Ystring = "[...|.......]";
}
else if (Ymapped == 5) {
  Ystring = "[....|......]";
}
else if (Ymapped == 6) {
  Ystring = "[.....|.....]";
}
else if (Ymapped == 7) {
  Ystring = "[......|....]";
}
else if (Ymapped == 8) {
  Ystring = "[.......|...]";
}
else if (Ymapped == 9) {
  Ystring = "[........|..]";
}
else if (Ymapped == 10) {
  Ystring = "[.........|.]";
}
else if (Ymapped == 11) {
  Ystring = "[..........|]";
}
else {
  Ystring = "ERROR";
}
  
   
              oled.set1X();
              oled.println("    - Joystick -");
              oled.println("");
                 
              oled.print("X:   ");
              oled.println(Xvalue);
              oled.print("   ");
              oled.println(Xstring);
              oled.println("");
         
              oled.print("Y:   ");
              oled.println(Yvalue);
              oled.print("   ");
              oled.println(Ystring);
              

delay(200); 

}
