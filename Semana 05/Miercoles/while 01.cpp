#include <iostream>
using namespace std;

/****
   hacer un programa donde se cargue una lista de 5
   numeros positivos enteros
   muestre el promedio de los numeros pares.

   como se cacula un promedio?

      sumaTodos/cantida

      numero%2 == 0 => par
      
   for con el cin

   /// acumulador
   operacion:
      acumulador = acumulador + numero
      acumulador += numeros

   inicializacion
      acumulador = 0

   generalmente dependen de una condicion
   if(condicion){
      acumule
   }

   /// contador
   operacion:
      contador = contador + 1
      contador += 1
      contador ++
      ++ contador

   inicializar:
      contador = 0 /// evitamos la basura

   generalmente dependen de una condicion
      if(condicion){
         contando
      }


*/

int main() {
   int numero, suma, cantidad;
   float promedio;
   
   suma = cantidad = 0;
   /// cargar los 5 numeros
   for(int i=1; i<=5; i++){
      cout << "Ingrese numero: ";
      cin >> numero;
      
      /// por cada numero que tengo que hacer primero?
      /// averiguo si es par
      if(numero % 2 == 0){
         /// por cada numero par
         /// sumar y contar
         suma += numero;
         cantidad++;
      }
   }
   
   if(cantidad != 0){
      promedio = (float)suma / cantidad;
   }
   else{
      promedio = 0;
   }
   
   cout << "El Promedio de los pares es: " << promedio;
	
	return 0;
}

