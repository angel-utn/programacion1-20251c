#include <iostream>
using namespace std;
/// calcular la suma de todo los numeros ingresados
/// calcular la suma de cada grupo
/// el grupo con mayor suma de sus pares

/**
1
2
3
6
5
4
8
9
10
11
10
20
320
85
8
41
1

*/

int main() {
   int numero, sumaNumeros, sumaGrupos;
   /// inicializo
   sumaNumeros = 0;
   for(int i=1; i<=5; i++){
      cout << "--- Lista #"<< i << endl;
      sumaGrupos=0;
      /// inicializ
      for(int j=1; j<=5; j++){
         cout << "Ingrese numero: " ;
         cin >> numero;
         
         sumaNumeros+= numero;
         sumaGrupos += numero;
         /// por cada registro
      }
      cout << "La suma del grupo es: "<< sumaGrupos << endl;
      /// por cada grupo
   }
	
   /// de todos los registros
   cout << "La suma es: " << sumaNumeros << endl;
	return 0;
}

