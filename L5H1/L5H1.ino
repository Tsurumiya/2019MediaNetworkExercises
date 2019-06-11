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
  if(y<=10)
  {
    z=2093;
  }
  else if(y<=15)
  {
    z=2217;
  }
  else if(y<=20)
  {
    z=2349;
  }
  else if(y<=25)
  {
    z=2489;
  }
  else if(y<=30)
  {
    z=2637;
  }
  else if(y<=35)
  {
    z=2794;
  }
  else if(y<=40)
  {
    z=2960;
  }
  else if(y<=45)
  {
    z=3136;
  }
  else if(y<=50)
  {
    z=3322;
  }
  else if(y<=55)
  {
    z=3520;
  }
  else if(y<=60)
  {
    z=3729;
  }
  else if(y<=65)
  {
    z=3951;
  }
  else
  {
    z=4186;
  }
  Serial.println(z);
  tone(11, z, 250);

  delay(250);
}
