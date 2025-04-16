/**
3 Hacer un programa para ingresar 5 números enteros e indicar si los números
se encuentran en orden creciente. El programa debe mostrar "Los números
fueron ingresados en orden creciente" o "Los números no fueron ingresados en
orden creciente"
*/
#include <iostream>
using namespace std;

int main(){

   int i, actual, anterior, cantCrecientes = 1;
   const int NUMEROS = 5;

   for(i=1; i<=NUMEROS; i++){
      cout << "Número: ";
      cin >> actual;

      /// Si actual es menor a anterior no está ordenado. Salvo en la primer vuelta del for.
      if (i > 1){
         if (actual > anterior){
            cantCrecientes++;
         }
      }

      anterior = actual;
   }

   if (cantCrecientes == NUMEROS){
      cout << "Los números fueron ingresados en orden creciente" << endl;
   }
   else{
      cout << "Los números fueron NO ingresados en orden creciente" << endl;
   }

	return 0;
}
