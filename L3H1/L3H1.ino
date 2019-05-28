void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  tone(13, 2093, 500);
  delay(50);
  tone(13, 2637, 500);
  delay(50);
}
