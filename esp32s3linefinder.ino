#define LineFinderOut 5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(200);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(LineFinderOut);
  int obstructed = value<3000;
  if (obstructed){
    Serial.println("Obstructed");
  }
  delay(100);
}
