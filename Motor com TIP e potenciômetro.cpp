#define TIP 3
#define POT A5

void setup()
{
  pinMode(TIP, OUTPUT);
  pinMode(TIP,INPUT);
}
void loop()
{
  int valor = analogRead(POT);
  int velocidade = map(valor,0,1023,0,255);
  analogWrite(TIP, velocidade);
  delay(10);
}