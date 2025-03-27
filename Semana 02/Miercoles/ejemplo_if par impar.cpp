#include <iostream>
using namespace std;

/***
   un numero par es aquel que es divisible por 2
   un numero es divisible por otro cuando el resto de dicha division
   es cero
*/

int main() {
   
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero % 2){
      cout << "Numero Par" << endl;
   }
   else{
      cout << "Numero Impar" << endl;
   }
   
	
	return 0;
}

