import processing.serial.*;

Serial serial;
int x, y, s, x_high_byte, x_low_byte, y_high_byte, y_low_byte;

int shootx, shooty;
int gen;
int clicked;

int destroyed;

void setup()
{
  size(1024, 1024);
  frameRate(60);
  
  serial = new Serial(this, "COM9", 9600);
  
  s = 1;
  
  shootx = 0;
  shooty = 800;
  
  gen = 0;
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

  background(0, 0, 0);
  stroke(0, 0, 0);
  fill(255, 255, 255);
  ellipse(x, 800, 50, 50);

  if (clicked == 1)
  {
    shootx = x;
    gen = 1;
    clicked = 0;
  }
  
  if (gen == 1)
  {
    stroke(255, 255, 255);
    fill(255, 255, 255);
    ellipse(shootx, shooty, 20, 20);
    shooty -= 10;
  }
  
  if (shooty <= 10 || destroyed == 1)
  {
    gen = 0;
    shooty = 800;
  }

  if (destroyed != 1)
  {
    rect(400, 200, 100, 50);
  }
  
  if (shootx >= 350 && shootx <= 450 && shooty <= 225)
  {
    destroyed = 1;
  }
}

void mousePressed()
{
  serial.write(s);
  clicked = 1;
}
