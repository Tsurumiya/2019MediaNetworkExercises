int x, r, high_byte, low_byte;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  x = analogRead(0);
  
  if (Serial.available() >= 1)
  {
    r = Serial.read();
    
    high_byte = (x & 0xFF00) >> 8;
    low_byte = x & 0x00FF;
    Serial.write(high_byte);
    Serial.write(low_byte);
  }
  
  delay(20);
}
