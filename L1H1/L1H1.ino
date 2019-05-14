void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void loop()
{
  //off
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
  light();  
  //blue
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  light();
  //red
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  light();
  //magenda
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  light();
  //green
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
  light();
  //cyan
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  light();
  //yellow
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  light();
  //white
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  light();
}

void light()
{
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  delay(100);
  digitalWrite(10, 1);
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  delay(100);
  digitalWrite(10, 1);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  delay(100);
  digitalWrite(10, 1);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  delay(100);
  digitalWrite(10, 0);
  digitalWrite(9, 1);
  digitalWrite(8, 1);
  delay(100);
  digitalWrite(10, 1);
  digitalWrite(9, 1);
  digitalWrite(8, 1);
  delay(100);
}
