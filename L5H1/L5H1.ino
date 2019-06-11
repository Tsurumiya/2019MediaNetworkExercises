int x;
int y;
int z;

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop()
{
  x = analogRead(0);
 
  //Serial.println(x);

  y = (6787 / (x - 3)) - 4;
  Serial.println(y);
  if(y<=20)
  {
    z=2093;
  }
  else if(20<y<=40)
  {
    z=2349;
  }
  else if(40<y<=60)
  {
    z=2637;
  }
  else if(60<y<=80)
  {
    z=2794;
  }
  else if(80<y<=100)
  {
    z=3136;
  }
  else if(100<y<=120)
  {
    z=3520;
  }
  else if(120<y<=140)
  {
    z=3951;
  }
  else
  {
    z=4186;
  }
  Serial.println(z);
  tone(11, z, 100);

  delay(100);
}
