int x;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  
  Serial.begin(9600);
  
  x = 0;
}

void loop()
{
  if (Serial.available() >= 1)
  {
    x = Serial.read();

    if (x == 0)
    {
      digitalWrite(13, 0);
      digitalWrite(12, 1);
      digitalWrite(11, 0);
    }
    else if (x == 1)
    {
      digitalWrite(13, 1);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
    }
    else
    {
      digitalWrite(13, 0);
      digitalWrite(12, 0);
      digitalWrite(11, 1);
    }
  }
 
  delay(20);
}
