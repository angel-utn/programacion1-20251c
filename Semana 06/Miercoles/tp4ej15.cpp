#include <iostream>
using namespace std;

/***

Hacer un programa para ingresar una lista de numeros 
que finaliza cuando se ingresa un cero, informar los 
2 mayores valores ingresados, aclarando cual es el
maximo y cual el que le sigue.
Ejemplo: 
   10, 8, 12, 14, 3, 0 
   el resultado sera 14 y 12.Ejemplo: 
   14, 8, 12, 14, 3, 0 
   el resultado sera 14 y 14.Ejemplo: 
   -4, -8, -12, -20, -2, 0 
   el resultado sera -2 y -4

*/

int main() {
   int numero, primerMaximo, segundoMaximo;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   primerMaximo = 0; /// valor absurdo
   segundoMaximo = 0;
   
   /// primer = 11
   /// segundo = 10
   while(numero != 0){
      
      if(primerMaximo == 0 || numero > primerMaximo){
         segundoMaximo = primerMaximo;
         primerMaximo = numero;
      }
      else{
         if(segundoMaximo == 0 || numero > segundoMaximo){
            segundoMaximo = numero;
         }
      }
      
      cout << "Ingrese numero: ";
      cin >> numero;   
   }
      
	
	return 0;
}

