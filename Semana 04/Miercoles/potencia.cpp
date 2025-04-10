#include <iostream>
using namespace std;

/***
   Hacer un programa que se ingrese la base y el exponente
   y muestre el resultado de la potencia.

   2^1 => 2
   2^2 => 2 * 2 => 4
   2^3 => 2 * 2 * 2 => 8
   2^4 => 2 * 2 * 2 * 2 => 16

   2^1 = 
   resultado = 2

   N *= C    =>     N = N * C
   
   2^2
   resultado = 2
   resultado *= 2

   2^3 => 8
   resultado = 2
   resultado *= 2
   resultado *= 2

   2^4
   resultado = 2
   resultado *= 2
   resultado *= 2
   resultado *= 2

   3^4
   resultado = 1
   resultado *= 3
   resultado *= 3
   resultado *= 3
   resultado *= 3

   resultado = 1
   repetir exponente veces
      resultado *= base


*/

int main() {
   int base, exponente, resultado;
   
   cout << "Ingrese base: ";
   cin >> base;
   
   cout << "Ingrese exponente: ";
   cin >> exponente;
   
   resultado = 1;
   
   /// calcula la potencia
   for(int i=1; i<=exponente; i++){
      resultado *= base;
   }
     
   
   cout << "El resultado es: " << resultado << endl;
	
	return 0;
}

