int do0, re, mi, fa, so, ra, si, do1;
bool isRinging = false;

void setup()
{
  pinMode(13, OUTPUT);

  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
}

void loop()
{
  do0 = digitalRead(2);
  re = digitalRead(3);
  mi = digitalRead(4);
  fa = digitalRead(5);
  so = digitalRead(6);
  ra = digitalRead(7);
  si = digitalRead(8);
  do1 = digitalRead(9);

  if (!isRinging)
  {
    if (do0 == 0)
    {
      isRinging = true;
      tone(13, 2093, 50);
      digitalWrite(12, 1);
      digitalWrite(11, 1);
      digitalWrite(10, 1);
      delay(50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      isRinging = false;
    }
    if (re == 0)
    {
      isRinging = true;
      tone(13, 2349, 50);
      digitalWrite(12, 1);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      delay(50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      isRinging = false;
    }
    if (mi == 0)
    {
      isRinging = true;
      tone(13, 2637, 50);
      digitalWrite(12, 0);
      digitalWrite(11, 1);
      digitalWrite(10, 0);
      delay(50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      isRinging = false;
    }
    if (fa == 0)
    {
      isRinging = true;
      tone(13, 2794, 50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 1);
      delay(50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      isRinging = false;
    }
    if (so == 0)
    {
      isRinging = true;
      tone(13, 3136, 50);
      digitalWrite(12, 1);
      digitalWrite(11, 1);
      digitalWrite(10, 0);
      delay(50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      isRinging = false;
    }
    if (ra == 0)
    {
      isRinging = true;
      tone(13, 3520, 50);
      digitalWrite(12, 1);
      digitalWrite(11, 0);
      digitalWrite(10, 1);
      delay(50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      isRinging = false;
    }
    if (si == 0)
    {
      isRinging = true;
      tone(13, 3951, 50);
      digitalWrite(12, 0);
      digitalWrite(11, 1);
      digitalWrite(10, 1);
      delay(50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      isRinging = false;
    }
    if (do1 == 0)
    {
      isRinging = true;
      tone(13, 4186, 50);
      digitalWrite(12, 1);
      digitalWrite(11, 1);
      digitalWrite(10, 1);
      delay(50);
      digitalWrite(12, 0);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      isRinging = false;
    }

  }
}
