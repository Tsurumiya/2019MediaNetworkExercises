//import processing.serial.*;
import processing.net.*;

//Serial serial;
Server server;
Client client;
int s, r;

void setup()
{
  size(200, 150);
  frameRate(30);
  
  //serial = new Serial(this, "COM10", 9600);
  server = new Server(this, 10000);
  
  r = 1;
}

void draw()
{
  background(255, 255, 255);
  
  client = server.available();
  if (client != null)
  {
    r = client.read();
    
    //s = r;
    //serial.write(s);
  }
  
  /*
  if (serial.available() >= 1)
  {
    r = serial.read();
  }
  */  
  
  if (r == 0)
  {
    stroke(0, 0, 0);
    fill(255, 255, 255);
    rect(90, 65, 20, 20);
    fill(0, 0, 0);
    ellipse(100, 75, 18, 18);
  }
  else
  {
    stroke(0, 0, 0);
    fill(255, 255, 255);
    rect(90, 65, 20, 20);
    fill(255, 255, 255);
    ellipse(100, 75, 18, 18);
  }
}



