void setup()
{
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
  delay(1000);
  //blue
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  delay(1000);
  //red
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  delay(1000);
  //magenda
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  delay(1000);
  //green
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
  delay(1000);
  //cyan
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
  delay(1000);
  //yellow
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
  delay(1000);
  //white
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
  delay(1000);
}
