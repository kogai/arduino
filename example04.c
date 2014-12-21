const int speaker = 9;
int i = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(speaker, OUTPUT);
}

// ここからループに入る
void loop()
{
  for (i = 0; i < 1000; i++)
  {
    Serial.println(i);
    analogWrite(speaker, i);
    delay(10);
  }
  // for (i = 255; 0 < i; --i)
  // {
  //   Serial.println(digitalRead(i));
  //     // analogWrite(speaker, i);
  //   delay(10);
  // }
}