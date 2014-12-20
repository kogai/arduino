const int LED = 13;
int X = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);
  X++;
  if(X>3){
    digitalWrite(LED,LOW);
    delay(10000);
  }
}
