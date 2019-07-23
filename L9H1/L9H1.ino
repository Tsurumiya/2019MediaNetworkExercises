//int r;

int x;
int y;
int buttonSta=0;

void setup()
{
  //pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  
  Serial.begin(9600);
  
  //r = 1;
}

void loop()
{
  /*
  if (Serial.available() >= 1)
  {
    r = Serial.read();
    
    if (r == 0)
    {
      digitalWrite(13, 1);
    }
    else
    {
      digitalWrite(13, 0);
    }
  }
  
  delay(20);
  */

  x = digitalRead(2);
  delay(20);
  y = digitalRead(2);
  if (y != x) 
  {
    if (x == 1) 
    {     
      buttonSta = 1 - buttonSta;

      //digitalWrite(13, led);
      Serial.write(buttonSta);
      y = x;
    }
  }
  
}
