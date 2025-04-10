/**
Modificado para la clase en vivo.
Hacer un programa para ingresar cinco números enteros distintos entre sí y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main(){

   int n1, n2, n3, n4, n5;

   cout << "Ingresar cinco números: " << endl;
   cin >> n1;
   cin >> n2;
   cin >> n3;
   cin >> n4;
   cin >> n5;

   cout << endl << "El máximo número es: ";

   if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5)){
      cout << n1;
   }
   else{
      if((n2 > n3) && (n2 > n4) && (n2 > n5)){
         cout << n2;
      }
      else{
         if ((n3 > n4) && (n3 > n5)){
            cout << n3;
         }
         else{
            if (n4 > n5){
               cout << n4;
            }
            else{
               cout << n5;
            }
         }
      }
   }




	return 0;
}
