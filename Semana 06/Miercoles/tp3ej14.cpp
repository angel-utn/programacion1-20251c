#include <iostream>
using namespace std;

/***
Dada una lista de 7 numeros enteros informar 
 - cual es el primer
 - el segundo, 
 - el anteultimo 
 - ultimo numero impar ingresado.
   Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteultimo impar: 9 y Ultimo impar: 5.
*/

/**
8
4
-5
7
9
18
5 
*/

int main() {
   int numero, cantImpar, primero, segundo, anteultimo, ultimo;
   
   
   cantImpar = 0;
   /// ingreso 7 numeros
   for(int i=1; i<=7; i++){
      cout << "Ingrese numero:";
      cin >> numero;
      
      /// verifico si el numero es impar
      if(numero % 2 != 0){
         cantImpar++;
         
         if(cantImpar == 1){
            primero = numero;
         }
         
         if(cantImpar == 2){
            segundo = numero;
         }
         
         anteultimo = ultimo;
         ultimo = numero;
      }
   }
   
   if(cantImpar > 0){
      cout << "El primero es: " << primero << endl;   
   }
   
   if(cantImpar > 1){
      cout << "El segundo es: " << segundo << endl;
      cout << "El anteultimo es: " << anteultimo << endl;
   }
   
   if(cantImpar > 0){
      cout << "El ultmo es: " << ultimo << endl;
   }
      
	
	return 0;
}

