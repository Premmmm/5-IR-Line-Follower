int l1, l2, c, r1, r2;
void forward()
{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}
void reverse()
{
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
void left()
{
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}
void right()
{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
void smallleft()
{
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}
void smallright()
{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}


void setup()
{

  //IR pins

  pinMode(2, INPUT);  //left most IR
  pinMode(3, INPUT);  //left IR
  pinMode(4, INPUT);  //center IR
  pinMode(5, INPUT);  //right IR
  pinMode(6, INPUT);  //right most IR

  //motor pins

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);


}


void readsens()
{
  l2 = digitalRead(2);
  l1 = digitalRead(3);
  c = digitalRead(4);
  r1 = digitalRead(5);
  r2 = digitalRead(6);
}

void loop()
{
  readsens();  // Readin sensor values in a loop

  // Refer the excel sheet "5-IR.xlsx" to understand the conditions coded below

  if (((l2 == 0) && (l1 == 0) && (c == 0) && (r1 == 0) && (r2 == 0)) || ((l2 == 0) && (l1 == 0) && (c == 1) && (r1 == 0) && (r2 == 0)) || ((l2 == 0) && (l1 == 1) && (c == 1) && (r1 == 1) && (r2 == 0)) || ((l2 == 1) && (l1 == 0) && (c == 1) && (r1 == 0) && (r2 == 0)) || ((l2 == 1) && (l1 == 0) && (c == 1) && (r1 == 0) && (r2 == 1)) || ((l2 == 0) && (l1 == 0) && (c == 1) && (r1 == 0) && (r2 == 1)))
  {
    forward();
  }

  if (((l2 == 1) && (l1 == 1) && (c == 1) && (r1 == 1) && (r2 == 1)) || ((l2 == 0) && (l1 == 1) && (c == 0) && (r1 == 1) && (r2 == 0)) || ((l2 == 0) && (l1 == 0) && (c == 1) && (r1 == 1) && (r2 == 1)) || ((l2 == 0) && (l1 == 1) && (c == 1) && (r1 == 1) && (r2 == 1)) || ((l2 == 1) && (l1 == 0) && (c == 1) && (r1 == 1) && (r2 == 1)))
  {

    right();
  }

  if (((l2 == 1) && (l1 == 1) && (c == 1) && (r1 == 0) && (r2 == 0)) || ((l2 == 1) && (l1 == 1) && (c == 1) && (r1 == 1) && (r2 == 0)) || ((l2 == 1) && (l1 == 1) && (c == 1) && (r1 == 0) && (r2 == 1)))
  {

    left();
  }

  if (((l2 == 1) && (l1 == 0) && (c == 0) && (r1 == 0) && (r2 == 1)) || ((l2 == 0) && (l1 == 1) && (c == 0) && (r1 == 1) && (r2 == 1)) || ((l2 == 0) && (l1 == 0) && (c == 0) && (r1 == 0) && (r2 == 1)) || ((l2 == 0) && (l1 == 0) && (c == 0) && (r1 == 1) && (r2 == 0)) || ((l2 == 0) && (l1 == 0) && (c == 0) && (r1 == 1) && (r2 == 1)) || ((l2 == 0) && (l1 == 0) && (c == 1) && (r1 == 1) && (r2 == 0)) || ((l2 == 1) && (l1 == 0) && (c == 0) && (r1 == 1) && (r2 == 0)) || ((l2 == 1) && (l1 == 0) && (c == 0) && (r1 == 1) && (r2 == 1)) || ((l2 == 1) && (l1 == 0) && (c == 1) && (r1 == 1) && (r2 == 0)))
  {
    smallright();
  }

  if (((l2 == 1) && (l1 == 1) && (c == 0) && (r1 == 1) && (r2 == 1)) || ((l2 == 1) && (l1 == 1) && (c == 0) && (r1 == 1) && (r2 == 0)) || ((l2 == 1) && (l1 == 0) && (c == 0) && (r1 == 0) && (r2 == 0)) || ((l2 == 0) && (l1 == 1) && (c == 0) && (r1 == 0) && (r2 == 0)) || ((l2 == 0) && (l1 == 1) && (c == 0) && (r1 == 0) && (r2 == 1)) || ((l2 == 0) && (l1 == 1) && (c == 1) && (r1 == 0) && (r2 == 0)) || ((l2 == 0) && (l1 == 1) && (c == 1) && (r1 == 0) && (r2 == 1)) || ((l2 == 1) && (l1 == 1) && (c == 0) && (r1 == 0) && (r2 == 0)) || ((l2 == 1) && (l1 == 1) && (c == 0) && (r1 == 0) && (r2 == 1)))
  {
    smallleft();
  }
}
