// C++ code
//
int tempo = 0;

int t_amarelo = 0;

int t_verde = 0;

int t_vermelho = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  t_vermelho = 3000;
  t_verde = 2000;
  t_amarelo = 1000;
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(t_vermelho); // Wait for t_vermelho millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(t_verde); // Wait for t_verde millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(t_amarelo); // Wait for t_amarelo millisecond(s)
  digitalWrite(12, LOW);
}