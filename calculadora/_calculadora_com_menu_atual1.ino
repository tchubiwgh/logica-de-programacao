int choiceOfOperation;
float result;

void sum(float num1, float num2){
  result = num1 + num2;
  Serial.println("nice!! :D the sum result is: \n" + String(result));
}
  
void subtract(float num1, float num2){
  result = num1 - num2;
  Serial.println("nice!! :D the subtraction result is: \n" + String(result));
}
   
void divide(float num1, float num2){
  result = num1 / num2;
  Serial.println("nice!! :D the division result is: \n" + String(result));
}
  
void multiply(float num1, float num2){
  result = num1 * num2;
  Serial.println("nice!! :D the multiplication result is: \n" + String(result));
}

void setup()
{
  Serial.begin(9600);
  
  int counter = 0; //initialized variable of 'do while'
  float number1;
  float number2;
  
  do{
    
    Serial.println("Welcome to the smart calculator !! :p\n");
    Serial.println("Choose one of the operations:");
    Serial.println("1- sum");
    Serial.println("2- subtract");
    Serial.println("3- divide");
    Serial.println("4- multiply");
    while(!Serial.available()){}
    choiceOfOperation = Serial.parseInt();
    
    
    
    Serial.println("To proceed with the math operation, we need you to type two numbers");
    Serial.println("Type the first number");
	while(!Serial.available()){}
    number1 = Serial.parseFloat();
    
    Serial.println("Type the second number");
	while(!Serial.available()){}
    number2 = Serial.parseFloat();
    
    switch(choiceOfOperation){
      case 1:
      sum(number1, number2);
      //sum(number1);
      //float returnSumFunction;
      //returnSumFunction = sum(number1, number2);
      //Serial.println(returnSumFunction);
      	break;
      
      case 2:
      subtract(number1, number2);
      	break;
      
      case 3:
      divide(number1, number2);
      	break;
      
      case 4:
      multiply(number1, number2);
      	break;
      
      default:
      	Serial.println("Invalid option :( Please choose an option from 1 to 4!\n");
    }
    
    
    Serial.println("Would you like to return to the menu? Type yes or no (in lowercase, please)");
    while(!Serial.available()){}
    
    
    if(Serial.readString() == "yes"){
      counter = 1;
    }
    else{
      counter = 0;
      
      Serial.println("Bye bye!");
      Serial.println("If you want to return to the menu, restart the program :D");
    }
    
    
  }
  while(counter != 0); //if the counter is different from 0, it repeats
}

void loop()
{
  //no instructions
}