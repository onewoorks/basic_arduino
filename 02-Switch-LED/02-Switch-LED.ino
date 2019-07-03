void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(3) == HIGH){
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
}
