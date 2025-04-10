#include <iostream>
using namespace std;

/***
   hacer un programa donde se cargen 5 numero y 
   muestre la suma de ellos
*/

int main() {
	int numero, suma;
   
   suma = 0;
   /// lo usamos para pedir los numeros
   for(int i=1; i<=5; i++){
      cout << "Ingrese numero: ";   
      cin >> numero;
      
      /// un acumulador
      suma += numero; 
   }
   
   cout << "La suma de todos es: " << suma << endl;
   
	return 0;
}

