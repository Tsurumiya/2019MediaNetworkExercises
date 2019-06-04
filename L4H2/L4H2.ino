int i;

void setup()
{

}

void loop()
{
  for (i = 0; i <= 255; i++)
  {
    analogWrite(11, i);
    delay(100);
  }
  for (i = 255; i >= 0; i--)
  {
    analogWrite(11, i);
    delay(100);
  }
}
