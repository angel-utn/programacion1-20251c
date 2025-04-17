#include <iostream>
using namespace std;

/**
   hacer un programa que pida una lista de numeros 
   que finaliza cuando se ingrese el tercer numero positivo
   mostrar cuantos de ellos son pares
*/

int main() {
   int numero, cantidaPostivos, cantidaPares;
	
   cantidaPostivos = cantidaPares = 0;
   
   do{
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero%2 == 0){
         cantidaPares ++;
      }
      
      if(numero > 0){
         cantidaPostivos++;
      }
   }while(cantidaPostivos < 3);
   
   cout << "Cantidad de pares: " << cantidaPares << endl;
   
	return 0;
}

