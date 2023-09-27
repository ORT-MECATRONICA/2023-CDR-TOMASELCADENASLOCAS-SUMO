
void setup()
{
  pinMode(1, OUTPUT);

  
}

void loop()
{
  // Tu código principal aquí
  digitalWrite(1, HIGH);
  delayMicroseconds(11);
  digitalWrite(1, LOW);
  delayMicroseconds(11);
}
