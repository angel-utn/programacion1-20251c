#include <iostream>
using namespace std;

/***
   Hacer un programa que muestre los numeros pares
   entre el 1 y 100
*/

int main() {
   
   for(int i=1; i<=100; i++){
      if(i%2 == 0){
         cout << i << endl;
      }
   }
	
	return 0;
}

