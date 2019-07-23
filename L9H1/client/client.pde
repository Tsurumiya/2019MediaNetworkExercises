import processing.net.*;
import processing.serial.*;

Serial serial;
Client client;
int s;

void setup()
{
  size(200, 150);
  frameRate(30);
  
  serial = new Serial(this, "COM10", 9600);
  client = new Client(this, "127.0.0.1", 10000);
  
  s = 1;
}

void draw()
{
  if (serial.available() >= 1)
  {
    s = serial.read();
    client.write(s);
  }  
}

