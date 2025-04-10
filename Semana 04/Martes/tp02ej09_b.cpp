/**
Hacer un programa para ingresar cinco números enteros
distintos entre sí y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main(){

   int numero, maximo;

   // 1
   cout << "Ingresar número: ";
   cin >> numero;
   maximo = numero;

   // 2
   cout << "Ingresar número: ";
   cin >> numero;

   if (numero > maximo){
      maximo = numero;
   }

   // 3
   cout << "Ingresar número: ";
   cin >> numero;

   if (numero > maximo){
      maximo = numero;
   }

   // 4
   cout << "Ingresar número: ";
   cin >> numero;

   if (numero > maximo){
      maximo = numero;
   }

   // 5
   cout << "Ingresar número: ";
   cin >> numero;

   if (numero > maximo){
      maximo = numero;
   }

   cout << endl << "El número máximo es " << maximo << endl;


	return 0;
}
