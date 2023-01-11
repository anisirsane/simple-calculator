/* 
Titre : realisation d'une calculatrice avec un clavier numerique
Auteur : Anis Irsane 
Date : 08/12/2022
Description: développement d'une calculatrice avec l'arduino et le clavier matricielle. 
Version : 0.0.2
*/
#include <Arduino.h>
//library pour l'utilisation du clavier matricielle.
#include <Keypad.h>
//declaration des variables
long FirstNum = 0;  
long SecondNum = 0;
double res = 0;

char customKey;
const byte ROWS = 4;
const byte COLS = 4;
double result = 0.0;
//declaration de notre matrice pour l'utilisation du clavier
char keys[ROWS][COLS] = {
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'C','0','=','/'}
};
byte rowPins[ROWS] = {10,9,8,7};
byte colPins[COLS] = {5,4,3,2};

Keypad customKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS); 


//fonction pour faire les calculs en utilisant le switch pour retourner les resultats pour chaque operateur
double Operation(char c, double a, double b)
{
    switch (c) {  
    case '+': return a+b;
    case '-': return a-b;
    case '*': return a*b;
    case '/':
      if (b==0)
      {

        Serial.println("erreur");
        res=0,b=0,a=0;
        return true;
      }else{
        return a/b;        
      }
    }
}
//fonction pour recuperer le deuxieme chiffre
long SecondNumber()
{
  while( 1)
  {
    customKey = customKeypad.getKey();
    if(customKey >= '0' && customKey <= '9')
    {
      SecondNum =customKey -48;
      Serial.print(SecondNum);
    }

    if(customKey == '=') break;
  }
 return SecondNum; 
}
//fonction pour faire les calculs finals
double Calc(char choice,long number1, long number2){

  number1= FirstNum;
  Serial.print(choice);
 
  number2 =SecondNumber() ;
  res = Operation(choice,number1, number2);
  return res;
  number1 = 0, number2 = 0;
}

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  //on recupere la premiere valeur
  Serial.println("entrer le premier chiffre, l'operateur et le deuxieme chiffre: ");
  customKey = customKeypad.getKey();
  //on fait le traitement selon le cas
  
  switch(customKey) 
  {
  case '0' ... '9':
    FirstNum =long( customKey)-48;
    Serial.print(FirstNum);
    break;
  case '+':
    result= Calc('+',FirstNum, SecondNum);
    break;
  
  case '=':
    Serial.print(" = " );
    Serial.println("le resultat du calcul est : ");
    Serial.println(result);
    break;

 case '-':
    result= Calc('-',FirstNum, SecondNum);

    break;

  case '*':
    result= Calc('*',FirstNum, SecondNum);

    break;

  case '/':
    result= Calc('/',FirstNum, SecondNum);
    break;
  case 'C':{
    FirstNum=0,SecondNum=0,res = 0;
    
    break;
  }
  }
}
