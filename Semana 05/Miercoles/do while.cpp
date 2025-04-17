#include <iostream>
using namespace std;

/**
   hacer un programa que pida una lista de numeros 
   y muestre la suma de todos ellos
   
   la lista de nuemros termina cuando se ingresa un 
   numero negativo

   2 3 -5 => 0

   /// el ultimo es includo en el proceso
   do{
      pido
      proceso
   }while();

*/



int main() {
   int numero, suma;
   suma = 0;
   do { 
      cout << "Ingrese numero: ";
      cin >> numero;
      
      suma+=numero;
   }while(numero > 0);
   
   cout << "La suma es: " << suma << endl;
	return 0;
}

