/*
While - É uma estrutura de repetição que só executa a repetição quando a condição for verdadeira.
*/

void setup()
{
  Serial.begin(9600);
  int contadorWhile = 1;
  
  while(contadorWhile <= 5){
    Serial.println(contadorWhile);
    contadorWhile++;
  }
  
  
}

void loop()
{
  
}