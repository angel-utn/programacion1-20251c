/**
Hacer un programa que solicite números enteros hasta que se ingrese una terna
de números ceros que haya sido ingresada de manera consecutiva. Luego, el
programa debe emitir:

A) El máximo de los números divisibles por 10 pero no por 3
*/

#include <iostream>
using namespace std;

int main(){

   int n;
   int cantCeros = 0;
   bool continuar = true;

   /// A
   int maximo;
   bool bandera = true;


   while (continuar == true){

      cout << "Número: ";
      cin >> n;

      // A
      if ((n % 10 == 0) && (n % 3 != 0)){
         if (bandera == true){
            bandera = false;
            maximo = n;
         }
         else{
            if (n > maximo){
               maximo = n;
            }
         }
      }

      if (n == 0){
         cantCeros++;

         if (cantCeros == 3){
            continuar = false;
         }
      }
      else{
         cantCeros = 0;
      }
   }

   cout << endl << "Punto A" << endl;
   if (bandera == false){
      cout << "El número divisible por 10 pero no por 3 más grande fue: " << maximo << endl;
   }
   else{
      cout << "No hubo números con la condición requerida" << endl;
   }

	return 0;
}
