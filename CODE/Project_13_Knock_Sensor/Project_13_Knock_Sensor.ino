const int interruptA = 1;// Interrupter 1 is at digital 3
int LED = 13; // define digital 13
void setup()
{
  attachInterrupt(interruptA, StateChanged, FALLING);
  // when high level becomes low level at digital 3, trigger interrupt
  pinMode(LED, OUTPUT);//set LED to output
}
void loop()
{
  digitalWrite(LED, LOW);//LED gets dim
  delay(1000);//delay in 1s
}
void StateChanged() //When high level becomes low level at digital 3
{
  digitalWrite(LED, HIGH);//LED is on
  delay(2000);//Delay in 2s
}
