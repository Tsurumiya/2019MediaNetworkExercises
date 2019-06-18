int x;
int y;

int w;
int vw;

int gen;

void setup()
{
  size(1000, 1000);
  frameRate(60);
  
  x = (int)random(100,900);
  y = (int)random(100,900);

  w = 0;
  vw = 25;

  gen = 1;
}

void draw()
{  
  
  if (gen==0)
  {
    background(255, 255, 255);
    stroke(0, 0, 0);
    fill(0, 0, 0);
    ellipse(x, y, w, w);
    w+=vw;
    if (w>=2500)
    {
      x = (int)random(100,900);
      y = (int)random(100,900);
      w=0;
      gen=1;
    }
  }
  
  if (gen==1)
  {
    background(0, 0, 0);
    stroke(0, 0, 0);
    fill(255, 255, 255);
    ellipse(x, y, w, w);
    w+=vw;
    if (w>=2500)
    {
      x = (int)random(100,900);
      y = (int)random(100,900);
      w=0;
      gen=0;
    }
  }
}

