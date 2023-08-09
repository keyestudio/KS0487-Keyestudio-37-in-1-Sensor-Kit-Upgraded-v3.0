#define ZD 3
void setup() {
  // put your setup code here, to run once:
  pinMode(ZD, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ZD, 200);
  delay(5000);
  analogWrite(ZD, 0);
  delay(1000);
  analogWrite(ZD, 100);
  delay(5000);
  analogWrite(ZD, 0);
  delay(1000);
}
