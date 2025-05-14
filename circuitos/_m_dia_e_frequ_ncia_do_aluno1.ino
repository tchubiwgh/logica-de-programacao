// C++ code
//Variáveis

float nota, frequencia, media;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota");
  while(!Serial.available());
  nota = Serial.parseFloat();
  
  Serial.println("Digite a segunda nota");
  while(!Serial.available());
  nota = Serial.parseFloat();
  
  Serial.println("Digite sua frequencia");
  while(!Serial.available());
  frequencia = Serial.parseFloat();
  
  if(media < 6) {
    Serial.println("Aluno reprovado por nota");
    media = (nota + nota) / 2;
  }else {
    Serial.println("Parabens! Nota maxima!");
  }
  
  if(frequencia > 75) {
    Serial.println("Parabens! Nota maxima!");
}else {
  Serial.println("Aluno reprovado por frequencia");
  }
   
  if(frequencia + media = 100) {
    Serial.println("Parabens! Nota maxima!");
}else {
  	Serial.println("Aluno reprovado por nota e frequencia");
}
  
  delay(1000); 
  
}
  
      
 
