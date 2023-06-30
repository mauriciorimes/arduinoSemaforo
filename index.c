void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, 1);
  delay(10000);
  digitalWrite(2, 0);
  delay(500);
  
  digitalWrite(3, 1);
  delay(1800);
  digitalWrite(3, 0);
  delay(500);
  
  digitalWrite(4, 1);
  delay(10000);
  digitalWrite(4, 0);
  delay(500);
}
