int x;

void setup()
{
  size(500, 500);
  frameRate(60);
  
  x = 0;
}

void draw()
{
  background(255, 255, 255);
  
  if (x == 0)
  {
    stroke(0, 0, 0);
    fill(255, 255, 255);
    ellipse(250, 250, 180, 180);
    ellipse(250, 250, 150, 150);
    fill(0, 0, 0);
    triangle(225, 225, 275, 250, 225, 275);
  }
  else
  {
    stroke(0, 0, 0);
    fill(255, 255, 255);
    ellipse(250, 250, 180, 180);
    ellipse(250, 250, 150, 150);
    fill(0, 0, 0);
    //triangle(225, 225, 275, 250, 225, 275);
    rect(220, 225, 20, 50);
    rect(260, 225, 20, 50);
  }
}

void mousePressed()
{
  x = 1 - x;
}
