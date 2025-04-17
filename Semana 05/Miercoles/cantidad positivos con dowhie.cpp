#include <iostream>
using namespace std;

/***
   hacer un programa que solicite una lista de numeros
   que finaliza con cero
   mostrar cuantos de ellos son positivos.
*/

int main() {
   int numero, cantidad;
   cantidad = 0;
   do{
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero > 0){
         cantidad++;
      }
   }while(numero != 0);
   
   cout << "La cantidad es: " << cantidad << endl;
   
	
	return 0;
}

