int i, x, y;
int led=0;
int count=0;

void blink(int out)
{
  for (i = 0; i <= 255; i++)
  {
    analogWrite(out, i);
    delay(2);
  }
  for (i = 0; i <= 255; i++)
  {
    analogWrite(out, 255-i);
    delay(2);
  }
}

void setup()
{
  pinMode(2, INPUT_PULLUP);
}

void loop()
{
  x = digitalRead(2);
  delay(20);
  y = digitalRead(2);
  if (y != x) 
  {
    if (x == 1) 
    {     
      if (led == 0) 
      {
        led = 1;
      }
      else
      {
        led = 0;
      }
      blink(9);
blink(10);
blink(11);
      y = x;
    }
  }


}
