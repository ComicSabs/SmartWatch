// Modes

long sleepTimer = 0;
long sleepInterval = 100000;

void fallAsleep(){
  if(millis() - sleepTimer > sleepInterval){
    strip.clear(); strip.show();  // Clear out NeoPixel Display
    snore(5000);                 // Go to Sleep for 5 Seconds
    sleepTimer = millis();
  }
}

void updateTime(){
  curSeconds = millis() / 1000;
  curMinutes = millis()/60000;
  curHours = millis()/3600000;
}
 void keepTrack(){
  if(curSeconds==60){
    curMinutes=curMinutes+1;
    minIndex=minIndex+1;
    curSeconds=0;
    
  }
  if(curMinutes==60){
    curHours=curHours+1;
    index=index+1;
    curMinutes=0;
  }
  if(curHours>24.99){
    curHours=1;
  }
}
void pixel(){
  strip.setPixelColor(1, 255,0,0);
  strip.show();
}

void coffeeTime(){
  if (curHours == 15){
    for(int i =0; i<strip.numPixels(); i++){
      strip.setPixelColor(i,0,255,0);
    }
  }
}
void bedTime(){
  if (curHours == 21){
    for(int i =0; i<strip.numPixels();i++){
      strip.setPixelColor(i,0,0,255);
    }
  }
}
