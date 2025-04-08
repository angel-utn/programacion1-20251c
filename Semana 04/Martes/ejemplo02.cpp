#include <iostream>
using namespace std;

int main(){

   int numero;

   cout << "Ingresar un número: ";
   cin >> numero;

   /// Determinar si el nro está entre [1; 100]
   /**
         Numero: 10
         -----------
         numero >= 1    &&    numero <= 100        Resultado
             true       &&          true           true

         Numero: 1000
         -----------
         numero >= 1    &&    numero <= 100        Resultado
            true        &&         false           false

         Numero: -5
         -----------
         numero >= 1    &&    numero <= 100        Resultado
            false       &&         true            false

   */

   if (numero >= 1 && numero <= 100){
      cout << "El nro ingresado está comprendido entre 1 y 100.";
   }



	return 0;
}
