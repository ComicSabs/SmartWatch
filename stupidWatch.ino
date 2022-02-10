//Test Sketch
//SmartWatch aka Stupid Watch

#include <Adafruit_NeoPixel.h>
#include "tinysnore.h"
#include <Bounce2.h>

int buttonPins[4]={1,2,3,4};
Bounce*buttons=new Bounce[4];

int mode=-1;
int index=0;
int minIndex=0;

int numLeds=8;
Adafruit_NeoPixel strip (numLeds,0);

int curHours=15;
int curMinutes=0;
int curSeconds=0;


void setup() {
  // put your setup code here, to run once:
  initButtons();
  initNeopixels();
}

void loop() {
  // put your main code here, to run repeatedly:
  updateTime();
  updateButtons();
  whatIsTheTime();
  keepTrack();

  switch(mode){
  case -1: fallAsleep(); break;
  case 0: addHour(); break;
  case 1: addMinute(); break;
  case 2: coffeeTime(); break;
  case 3: bedTime(); break;
 }
}
