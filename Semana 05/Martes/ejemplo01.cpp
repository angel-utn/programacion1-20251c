/**
1 Hacer un programa para ingresar cinco números distintos entre sí y listar el
máximo de ellos.
Variante: Mostrar también la posición en la que se encontró el máximo.

*/

#include <iostream>
using namespace std;

int main(){
   int i, numero, maximo, posicionMaximo;

   for(i=1; i<=5; i++){

      cout << "Número #" << i << ": ";
      cin >> numero;

      if (i == 1 || numero > maximo){
         maximo = numero;
         posicionMaximo = i;
      }

   }

   cout << endl << "El número máximo es: " << maximo << endl;
   cout << "En la posición: " << posicionMaximo << endl;

	return 0;
}
