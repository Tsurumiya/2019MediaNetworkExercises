import processing.serial.*;

Serial serial;
int x, y, s, x_high_byte, x_low_byte, y_high_byte, y_low_byte;

int w;
int vw;

int gen;

int clicked;

void setup()
{
  size(1024, 1024);
  frameRate(60);
  
  serial = new Serial(this, "COM9", 9600);
  
  s = 1;
  
  w = 0;
  vw = 25;

  gen = 1;
}

void draw()
{
  
  if (serial.available() >= 4)
  {
    x_high_byte = serial.read();
    x_low_byte = serial.read();
    x = (x_high_byte << 8) + x_low_byte;
   
    y_high_byte = serial.read();
    y_low_byte = serial.read();
    y = (y_high_byte << 8) + y_low_byte;
    
    serial.write(s);
  }

  if (gen==0)
  {
    background(255, 255, 255);
    stroke(0, 0, 0);
    fill(0, 0, 0);
    ellipse(x, y, w, w);
    if (w<=100 || clicked == 1)
    {
      w+=vw;
    }
    if (w>=2500)
    {
      w=0;
      gen=1;
      clicked = 0;
    }
  }
  
  if (gen==1)
  {
    background(0, 0, 0);
    stroke(0, 0, 0);
    fill(255, 255, 255);
    ellipse(x, y, w, w);
    if (w<=100 || clicked == 1)
    {
      w+=vw;
    }
    if (w>=2500)
    {
      w=0;
      gen=0;
      clicked = 0;
    }
  }

}

void mousePressed()
{
  serial.write(s);
  clicked = 1;
}
