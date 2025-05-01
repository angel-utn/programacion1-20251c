#include <iostream>
using namespace std;

/***
   Dado un numero entero mostrar si dicho numero 
   es un numero primo

   Analisis
      DE: 
         Numero
      DS: 
         Primo o No
      ... 
   
   N ... 1

   20 1 -> 20
      2 -> 10
      5 -> 4
   20 20 -> 1
   20 30 -> 0.algo

   5 -> N < 5

   5 % 1 => 0 - 1
   5 % 2 => 1 - 1
   5 % 3 => 2 - 1
   5 % 4 => 1 - 1
   5 % 5 => 0 - 2

   2 => el 5 es primo

   4 % 1 => 0 - 1
   4 % 2 => 0 - 2
   4 % 3 => 1 - 2
   4 % 4 => 0 - 3

   3 entoncs 4 no es primo

*/

int main() {
   int numero, cantidadDiv;
   
   cout << "Che senior usuario, me pasa un numero! ";
   cin >> numero;
   
   cantidadDiv = 0;
   for(int i=2; i<=numero; i++){
      if(numero%i == 0){ 
         cantidadDiv++; 
      }
   }
   
   if(cantidadDiv == 1){
      cout << "Es un numero primo!" << endl;
   }
   else{
      cout << "No es un numero primo" << endl;
   }
	
	return 0;
}

