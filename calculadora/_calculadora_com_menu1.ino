int choiceOfOperation;
float number1;
float number2;

void setup()
{
  Serial.begin(9600);
  
  int counter = 0; //initialized variable of 'do while'
  
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
      	break;
      
      case 2:
      	break;
      
      case 3:
      	break;
      
      case 4:
      	break;
      
      default:
      	Serial.println("Invalid option:( Please choose an option from 1 to 4!\n");
    }
    
    
    Serial.println("Do you want to return to the menu? Type yes or no (in lowercase, please)");
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