
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

const int analogInPin = 10;  
int sensorValue = 0;   
int brightness = 0;

#define PIN            6

#define NUMPIXELS      25 // # of neopixels


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; 

void setup() {

  pixels.begin(); 
  Serial.begin(9600);
}

void loop() {

sensorValue = analogRead(analogInPin);
brightness = map(sensorValue, 600, 800, 0, 250);

Serial.print("sensor = ");
Serial.println(sensorValue);
    
for(int i=0;i<NUMPIXELS;i++){
  if(sensorValue > 700) {
    pixels.setPixelColor(0,0,0,brightness); 
    pixels.setPixelColor(1,0,0,brightness); 
    pixels.setPixelColor(2,0,0,brightness); 
    pixels.setPixelColor(3,0,0,brightness); 
    pixels.setPixelColor(4,0,0,brightness); 
    pixels.setPixelColor(5,0,0,brightness); 
    pixels.setPixelColor(6,0,0,brightness); 
    pixels.setPixelColor(7,0,0,brightness); 
    pixels.setPixelColor(8,0,0,brightness); 
    pixels.setPixelColor(9,0,0,brightness); 
    pixels.setPixelColor(10,0,0,brightness); 
    pixels.setPixelColor(11,0,0,brightness); 
    pixels.setPixelColor(12,0,0,brightness); 
    pixels.setPixelColor(13,0,0,brightness);
    pixels.setPixelColor(14,0,0,brightness);
    pixels.setPixelColor(15,0,0,brightness); 
    pixels.setPixelColor(16,0,0,brightness); 
    pixels.setPixelColor(17,0,0,brightness); 
    pixels.setPixelColor(18,0,0,brightness); 
    pixels.setPixelColor(19,0,0,brightness); 
    pixels.setPixelColor(20,0,0,brightness); 
    pixels.setPixelColor(21,0,0,brightness); 
    pixels.setPixelColor(22,0,0,brightness); 
    pixels.setPixelColor(23,0,0,brightness); 
    pixels.setPixelColor(24,0,0,brightness); 

    pixels.show(); 
    
 }else{
    pixels.setPixelColor(i,0); 
    pixels.show(); 
        }
  
  }
  }

  
