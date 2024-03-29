const int interruptA = 0; 
const int interruptB = 1;
int CLK = 2; // pin2
int DAT = 3; // PIN3
int BUTTON = 4; // PIN4
int LED1 = 5; // PIN5
int LED2 = 6; // PIN6
int COUNT = 0;
void setup()
{
attachInterrupt(interruptA, RoteStateChanged, FALLING);
 // attachInterrupt(interruptB, buttonState, FALLING);
pinMode(CLK, INPUT);// Pull High Resistance
digitalWrite(2, HIGH); // Pull High Resistance
pinMode(DAT, INPUT); 
digitalWrite(3, HIGH); //Pull High Resistance
pinMode(BUTTON, INPUT); 
digitalWrite(4, HIGH); //Pull High Resistance
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
Serial.begin(9600);
}
void loop()
{
if (digitalRead(BUTTON)==LOW)
{
COUNT = 0; 
Serial.println("STOP COUNT = 0");
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
delay (2000);
}
Serial.println(COUNT);
}
void RoteStateChanged() 
{
if (digitalRead(DAT)==HIGH) 
{
COUNT++;
digitalWrite(LED1, HIGH);
digitalWrite(LED2, LOW);
delay(200);
}
else 
{
COUNT--;
digitalWrite(LED2, HIGH);
digitalWrite(LED1, LOW);
delay(200);
}
}