#define VERMELHO 13
#define LARANJA 12
#define AMARELO 11
#define VERDE 10
#define AZUL 9
#define BRANCO 8
#define delay_maior 400



int buttonState = 0;
int i;

void setup()
{
  pinMode(2, INPUT);
  pinMode(VERMELHO, OUTPUT);
  pinMode(LARANJA, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(BRANCO, OUTPUT);
}

void loop()
{
  // LE O ESTADO DO BOTAO
  buttonState = digitalRead(2);
  
  // CHECA SE A ENTRADA 2 ESTÁ EM 5V)
  if (buttonState == HIGH) {
    
    //"CARREGA" OS LEDS
    digitalWrite(VERMELHO, HIGH);
    delay(delay_maior);
    digitalWrite(LARANJA, HIGH);
    delay(delay_maior);
    digitalWrite(AMARELO, HIGH);
    delay(delay_maior);
    digitalWrite(VERDE, HIGH);
    delay(delay_maior);
    digitalWrite(AZUL, HIGH);
    delay(delay_maior);
    digitalWrite(BRANCO, HIGH);
    
    
    //PISCA-PISCA COM FREQUENCIA CRESCENTE
    for(i=11; i>1; i--){
    delay(100*i);
    digitalWrite(BRANCO, LOW);
    digitalWrite(AZUL, LOW);
    digitalWrite(VERDE, LOW);
    digitalWrite(AMARELO, LOW);
    digitalWrite(LARANJA, LOW);
    digitalWrite(VERMELHO, LOW);
    delay(100*i);
    digitalWrite(BRANCO, HIGH);
    digitalWrite(AZUL, HIGH);
    digitalWrite(VERDE, HIGH);
    digitalWrite(AMARELO, HIGH);
    digitalWrite(LARANJA, HIGH);
    digitalWrite(VERMELHO, HIGH);
    }
    
    //PISCA-PISCA COM FREQUENCIA ALTA
    while(i < 20)
    {
    delay(200);
    digitalWrite(BRANCO, LOW);
    digitalWrite(AZUL, LOW);
    digitalWrite(VERDE, LOW);
    digitalWrite(AMARELO, LOW);
    digitalWrite(LARANJA, LOW);
    digitalWrite(VERMELHO, LOW);
    delay(200);
    digitalWrite(BRANCO, HIGH);
    digitalWrite(AZUL, HIGH);
    digitalWrite(VERDE, HIGH);
    digitalWrite(AMARELO, HIGH);
    digitalWrite(LARANJA, HIGH);
    digitalWrite(VERMELHO, HIGH);
    i++;
    }
    
    
    //"DESCARREGA" DOS LEDS
    delay(1000);
    digitalWrite(BRANCO, LOW);
    delay(delay_maior);
    digitalWrite(AZUL, LOW);
    delay(delay_maior);
    digitalWrite(VERDE, LOW);
    delay(delay_maior);
    digitalWrite(AMARELO, LOW);
    delay(delay_maior);
    digitalWrite(LARANJA, LOW);
    delay(delay_maior);
    digitalWrite(VERMELHO, LOW);
  }
}