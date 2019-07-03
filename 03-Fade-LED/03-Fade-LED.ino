int brightness = 60;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
}

void loop() {
  analogWrite(5, brightness);
  delay(200);

  if(brightness == 0){
    delay(1000);
    brightness = 60;
  } else {
    brightness -= 5;
  }
}
