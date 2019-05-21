int x1;
int x2;
int x3;
int x4;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
}
 
void loop()
{
  x1 = digitalRead(2);
  x2 = digitalRead(3);
  x3 = digitalRead(4);
  x4 = digitalRead(5);
  if (x1 == 0)
  {
    digitalWrite(13, 1);
  }
  else
  {
    digitalWrite(13, 0);
  }
  if (x2 == 0)
  {
    digitalWrite(12, 1);
  }
  else
  {
    digitalWrite(12, 0);
  }
  if (x3 == 0)
  {
    digitalWrite(11, 1);
  }
  else
  {
    digitalWrite(11, 0);
  }
  if (x4 == 0)
  {
    digitalWrite(10, 1);
  }
  else
  {
    digitalWrite(10, 0);
  }
}
