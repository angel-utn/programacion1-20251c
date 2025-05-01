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

8
8 % 1 => 0 - 1
8 % 2 => 0 - 2

2 => el 5 es primo

4 % 1 => 0 - 1
4 % 2 => 0 - 2
4 % 3 => 1 - 2
4 % 4 => 0 - 3

3 entoncs 4 no es primo

*/

int main() {
   int numero, cantidadDiv, i;
   
   cout << "Che senior usuario, me pasa un numero! ";
   cin >> numero;
   i=2;
   while(numero%i != 0 && numero > 1 ){
      i++;
   }
   
   if(i == numero){
      cout << "Es un numero primo!" << endl;
   }
   else{
      cout << "No es un numero primo" << endl;
   }
   
   return 0;
}

