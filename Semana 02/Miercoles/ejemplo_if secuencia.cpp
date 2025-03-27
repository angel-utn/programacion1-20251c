#include <iostream>
using namespace std;

/**
   Hacer un programa que pida un numero y muestre si dicho numero
   es positivo, negativo o cero
*/
/// esta estrategia se utiliza cuando los valores 
/// no son excluyentes
/// IF EN SECUENCIA
int main() {
   float numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero > 0){
      cout << "Es positivo" << endl;   
   }
   
   if(numero < 0){
      cout << "Es Negativo" << endl;   
   }
   
   if(numero == 0){
      cout << "Es cero" << endl;   
   }
     
	
	return 0;
}

