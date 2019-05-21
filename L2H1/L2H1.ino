int x;
int y;
int led=0;

void setup()
{
  pinMode(13, OUTPUT);
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
      digitalWrite(13, led);
      y = x;
    }
  }
}
