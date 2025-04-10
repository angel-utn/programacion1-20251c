#include <iostream>
using namespace std;

/**
   Hacer un programa donde se ingresen 5 numeros y 
   muestre cuantos de ellos son positivos
*/

int main() {
   int numero, cantidadPositivo;
   
   cantidadPositivo = 0;
   /// pido 5 numeros
   for(int i=1; i<=5; i++){
      cout << "Ingrese numero: ";
      cin >> numero;
      
      /// verifico si es positivo
      if(numero > 0){
         /// cuento
         cantidadPositivo++;
      }
   }
   
   cout << "La cantidad de positivos son: " << cantidadPositivo << endl;
	
	return 0;
}

