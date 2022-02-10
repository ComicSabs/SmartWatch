// NeoPixel Functions

void initNeopixels(){
  strip.begin();
  strip.clear();
  strip.show();
  strip.setBrightness(15);
}
void addHour(){
 // for(int i = 0; i < strip.numPixels(); i++){
     // if (buttons[1].rose()){
      index=index+1;
      strip.setPixelColor(index,255,0,0);
   // }
  strip.show();
  mode = -1;
}
void addMinute(){
  minIndex=minIndex+1;
  strip.setPixelColor(minIndex,0,255,0);
  strip.show();
  mode=-1;
}
void subtractHour(){
  index=index-1;
  strip.setPixelColor(index,255,0,0);
  strip.show();
  mode=-1;
}
