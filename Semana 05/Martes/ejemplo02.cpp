/**
  2 Hacer un programa para ingresar cinco números distintos entre sí y listar:
   A) La cantidad de números pares de la lista
   B) La suma de números negativos de la lista
*/
#include <iostream>
using namespace std;

int main(){

   int x, numero;
   /// A
   int cantPares = 0, resto;

   /// B
   int sumaNegativos = 0;

   for(x=1; x<=5; x++){
      cout << "Número: ";
      cin >> numero;

      /// A
      resto = numero % 2;
      if (resto == 0){
         cantPares++;
      }

      /// Alternativa de resolución Punto A
      //      if ((numero%2) == 0){
      //         cantPares++;
      //      }

      /// B

      if (numero < 0){
         sumaNegativos += numero;
      }
   }

   cout << endl;
   cout << "PUNTO A" << endl;
   cout << "--------"<< endl;
   cout << "Cantidad de pares: " << cantPares << endl << endl;

   cout << "PUNTO B" << endl;
   cout << "--------"<< endl;

   if (sumaNegativos < 0){
      cout << "Suma de negativos: " << sumaNegativos << endl << endl;
   }
   else{
      cout << "No hubo negativos en la lista" << endl;
   }

	return 0;
}
