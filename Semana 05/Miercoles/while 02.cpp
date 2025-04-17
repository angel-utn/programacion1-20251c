#include <iostream>
using namespace std;

/***
   hacer un programa que pida una lista de numeros positivos
   y muestre la suma de ellos
   la lista de nuemros termina cuando se ingresa un 
   numero negativo

   para hacer la suma vamos a usar un acumulador
   suma += numero

   while (numero > 0)
     valor centinela - es un valor que indica algo, en este caso
                       el fin de la carga de datos
   2 5 9 -5 -> 16
   -5 -> -5
   

   // estructua de carga de datos donde queremos que el ultimo
   se ingnore

   pedir
   while(expresion){
      ... hacer cosas
      pedir
   }

*/

int main() {
   int numero, suma;
   
   suma = 0;
   cout << "Ingrese numero: ";
   cin >> numero;
   
   while(numero > 0){ /// siempre se espesifica que se debe cumplir
                      /// para seguir repitiendo
      suma+=numero;
      
      cout << "Ingrese numero: ";
      cin >> numero;
   }
   
   cout << "La suma es: " << suma << endl;
	
	return 0;
}

