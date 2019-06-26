import processing.serial.*;

Serial serial;
int x;

void setup()
{
  size(1000, 1000);
  frameRate(30);
  
  serial = new Serial(this, "COM8", 9600);
  
  x = 0;
}

void draw()
{
  
  if (x == 0)
  {
    background(255, 0, 0);
    serial.write(x);
  }
  else if (x == 1)
  {
    background(0, 255, 0);
    serial.write(x);
  }
  else if (x == 2)
  {
    background(0, 0, 255);
    serial.write(x);
  }
}

void keyPressed()
{
  if (key == 'R' || key == 'r')
  {
    x = 0;
  }
  else if (key == 'G' || key == 'g')
  {
    x = 1;
  }
  else if (key == 'B' || key == 'b')
  {
    x = 2;
  }
}
