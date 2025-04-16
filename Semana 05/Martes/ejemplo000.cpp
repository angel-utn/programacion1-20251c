#include <iostream>
using namespace std;

int main(){

   int i, numero, cantPositivos = 0;

   for(i=1; i<=5; i++){
      cout << "Numero: ";
      cin >> numero;

      if (numero > 0){
         cantPositivos++;
      }
   }

   cout << endl << "La cantidad de positivos ingresados es: " << cantPositivos << endl;

	return 0;
}
