void initButtons(){
  for (int i = 0; i < 4; i++) {
    buttons[i].attach(buttonPins[i], INPUT);
    buttons[i].interval(25);
  }
}

void updateButtons() {
  for (int i = 0; i < 4; i++)  {
    buttons[i].update();
    if (buttons[i].rose()){
      mode = i;
    }
  }
}

void whatIsTheTime(){
  buttons[0].update();
  if (buttons[0].rose()){
    strip.clear();
    mode = 0;
  }
}
