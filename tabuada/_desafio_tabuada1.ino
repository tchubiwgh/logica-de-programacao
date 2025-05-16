int chosenMultiplicationTable; //certo
int result;

void setup()
{ 
  Serial.begin(9600);
  
  Serial.println("Hey! Welcome to the multiplication table generator!!");
  Serial.println("From 1 to 10, type the one you want: :p\n");
  while(!Serial.available()){}
  chosenMultiplicationTable = Serial.parseInt();
  
  for(int counter = 1; counter <= 10; counter++){
  //2 X 1 = 2
    result = chosenMultiplicationTable * counter;
    Serial.println(String(chosenMultiplicationTable) + " X " + String(counter) + " = " + String(result));
  }

}

void loop(){
//sem instrussões
}