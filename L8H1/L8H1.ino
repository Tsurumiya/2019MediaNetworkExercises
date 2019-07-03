int x, y, r, x_high_byte, x_low_byte, y_high_byte, y_low_byte;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  x = analogRead(0);
  y = analogRead(1);
  
  if (Serial.available() >= 1)
  {
    r = Serial.read();
    
    x_high_byte = (x & 0xFF00) >> 8;
    x_low_byte = x & 0x00FF;
    Serial.write(x_high_byte);
    Serial.write(x_low_byte);

    y_high_byte = (y & 0xFF00) >> 8;
    y_low_byte = y & 0x00FF;
    Serial.write(y_high_byte);
    Serial.write(y_low_byte);
  }
  
  delay(20);
}
