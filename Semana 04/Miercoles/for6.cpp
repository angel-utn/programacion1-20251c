#include <iostream>
using namespace std;

/***
   Hacer un programa que pida un numero por teclado
   Y muestre los numeros pares entre el 2 y el numero ingresado
*/

int main() {
   int n;
   
   cout << "Ingrese numero: ";
   cin >> n;
   
   for(int i=2; i<=n; i+=2){
      cout << i << endl;
   }
	
	return 0;
}

