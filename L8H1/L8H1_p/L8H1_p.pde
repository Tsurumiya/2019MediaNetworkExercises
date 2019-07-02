import processing.serial.*;

Serial serial;
int x, s, high_byte, low_byte;

void setup()
{
  size(200, 150);
  frameRate(30);
  
  serial = new Serial(this, "COM1", 9600);
  
  s = 1;
}

void draw()
{
  background(255, 255, 255);
  
  if (serial.available() >= 2)
  {
    high_byte = serial.read();
    low_byte = serial.read();
    x = (high_byte << 8) + low_byte;
    
    serial.write(s);
  }
  
  fill(0, 0, 255);
  textSize(28);
  textAlign(CENTER);
  text(x, 100, 75);
}

void mousePressed()
{
  serial.write(s);
}
