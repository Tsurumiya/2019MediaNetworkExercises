int x, y, z;
int p;
int d0, d1;

void setup()
{
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  
  Serial.begin(9600);

  p = 0;
  d0 = 1;
  d1 = 1;
}

void loop()
{
  x = digitalRead(11);
  y = digitalRead(12);
  z = digitalRead(13);
  //if (Serial.available() >= 1)
  //{
    if (x == 0)
    {
      p = 1;
      d0 = 0;
    }
    else if (y == 0)
    {
      p = 2;
      d0 = 0;
    }
    else if (z == 0)
    {
      p = 3;
      d0 = 0;
    }
    else
    {
      //p = 0;
      d0 = 1;
    }
  //}

  if (d1 == 1 && d0 == 0)
  {
    Serial.write(p);
  }
  d1 = d0;
  delay(20);
}
