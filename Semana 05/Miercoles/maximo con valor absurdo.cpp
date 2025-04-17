#include <iostream>
using namespace std;

/**
hacer un programa que pida una lista de numeros 
que finaliza cuando se ingrese el tercer numero positivo

   + muestre el numero par mas grande ingresado 
      y en que orden fue ingreso
   
   
*/

int main() {
   int numero, cantidaPostivos, cantidaPares;
   int numeroMaximo, posicionMaximo, cantidadNumeros;
   
   cantidaPostivos = cantidaPares = 0;
   cantidadNumeros = 0;
   numeroMaximo = 1;
   do{
      cout << "Ingrese numero: ";
      cin >> numero;
      cantidadNumeros++; /// posicion del ingreso
      
      /// averiguamos que el numero sea par
      if(numero % 2 == 0){
            
         if(numeroMaximo == 1 /// me aseguro que la primerves sea v
            || numero > numeroMaximo){ /// busco el maximo
            numeroMaximo = numero;
            posicionMaximo = cantidadNumeros; /// gauardo la posicion
         }
      }
      
      if(numero > 0){
         cantidaPostivos++;
      }
   }while(cantidaPostivos < 3);
   
   cout << "El numero maximo es: " << numeroMaximo<< endl;
   cout << "Se ingreso en la posicion: " << posicionMaximo<< endl;
   
   return 0;
}

