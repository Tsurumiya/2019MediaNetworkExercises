float x;
float y;
int z;

int i;

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
  if(y<=80)
  {
    z = y/80*2093+2093;
    i = (80-y)/80*255; 
    }
    else{
      z=0;
      i=0;
    }
  Serial.println(z);
  analogWrite(10, i);
  tone(11, z, 50);


  delay(50);
}
