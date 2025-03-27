#include <iostream>
using namespace std;

/**
Hacer un programa que pida un numero y muestre si dicho numero
es positivo, negativo o cero
*/
/// esta estrategia se utiliza cuando los valores 
/// son excluyentes
/// IF ANIDADOS
int main() {
   float numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   
   if(numero > 0){
      cout << "Es positivo" << endl;   
   }
   else {
      if(numero < 0){
         cout << "Es Negativo" << endl;   
      }
      else{
         cout << "Es cero" << endl;   
      }   
   }
   
   
   
   return 0;
}

