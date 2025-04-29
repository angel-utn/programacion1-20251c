#include <iostream>
using namespace std;

int main(){

   int cantPositivos, grupos, i, n, maximo;

   cantPositivos = 0;

   for (grupos = 1; grupos <= 3; grupos++){

      for(i = 1; i <= 5; i++){
         cout << "Ingresar un número: ";
         cin >> n;

         /// A
         if (i == 1 || n > maximo){
            maximo = n;
         }

         /// B
         if (n > 0){
            cantPositivos++;
         }
      }

      cout << endl;
      cout << "Grupo # " << grupos << endl;
      cout << "Valor máximo: " << maximo << endl << endl;

   }

   cout << "La cantidad de positivos de la lista fue: " << cantPositivos << endl;



	return 0;
}
