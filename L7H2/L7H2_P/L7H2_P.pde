import processing.serial.*;

Serial serial;
int p;

void setup()
{
  size(1000, 1000);
  frameRate(30);
  
  serial = new Serial(this, "COM8", 9600);
  
  p = 0;
}

void draw()
{
  if (serial.available() >= 1)
  {
    p = serial.read();
  }
  if (p == 1)
  {
    background(255, 0, 0);
  }
  else if (p == 2)
  {
    background(0, 255, 0);
  }
  else if (p == 3)
  {
    background(0, 0, 255);
  }
  else 
  {
    background(255, 255, 255);
  }
}

