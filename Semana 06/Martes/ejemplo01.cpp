/**
Hacer un programa que solicite números enteros positivos hasta que se ingrese
un número negativo.

El programa debe emitir:

A) El porcentaje de números pares y de números impares.
B) El promedio de números.

En todos los casos se debe excluir al número negativo para el cálculo de los
resultados.

*/
#include <iostream>
using namespace std;

int main(){
   int cantNumeros = 0, cantPares = 0, cantImpares = 0, sumaNumeros = 0;
   int n;

   /// A
   int totalNumeros;
   float porcentajePares, porcentajeImpares;

   /// B
   float promedio;

   cout << "Ingresar número: ";
   cin >> n;

   while (n >= 0) {
      /// A) Cuento impares y pares para calcular porcentajes
      if (n % 2 == 0){
         cantPares++;
      }
      else{
         cantImpares++;
      }

      /// B) Acumulo y cuento para calcular promedio
      sumaNumeros += n;
      cantNumeros++;

      cout << "Ingresar número: ";
      cin >> n;
   }

   // A)
   totalNumeros = cantPares + cantImpares;
   porcentajePares = (cantPares / (float) totalNumeros) * 100;
   porcentajeImpares = (cantImpares / (float) totalNumeros) * 100;

   cout << "Punto A" << endl;
   cout << "Porcentaje de pares  : " << porcentajePares << endl;
   cout << "Porcentaje de impares: " << porcentajeImpares << endl;

   // B)
   promedio = (float) sumaNumeros / (float) cantNumeros;

   cout << endl << "Punto B" << endl;
   cout << "Promedio general: " << promedio << endl;


	return 0;
}
