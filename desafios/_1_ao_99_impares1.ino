// C++ code
void setup()
{
  Serial.begin(9600);
    int contadorWhile = 1;
  
  while(contadorWhile <= 99){
  Serial.println(contadorWhile);
    contadorWhile += 2;
  }
}

void loop()
{
  
}