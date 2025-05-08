#include <iostream>
using namespace std;

/***
   Hacer un programa donde tengan 4 productos con codigos 0, 1, 2, 3
   Se debe porcesar 5 ventas donde cada venta esta compuesta por:
      - codigo producto
      - precio final

   Mostrar la cantidad de productos vendidos para cada producto.

   4 producto 
   5 ventas
      

*/

int main() {
   int codigo;
   float precio;
   int cantidades[4];
   
   cantidades[0] = 0;
   cantidades[1] = 0;
   cantidades[2] = 0;
   cantidades[3] = 0;
   
   for(int i=1; i<=5; i++){
      cout << "Ingrese codigo de producto: ";
      cin >> codigo;
      
      cout << "Ingrese precio final: ";
      cin >> precio;
      
      cantidades[codigo]++;
      
   }
   
   cout << "La cantidad de producto 0 es: " << cantidades[0] << endl;
   cout << "La cantidad de producto 1 es: " << cantidades[1] << endl;
   cout << "La cantidad de producto 2 es: " << cantidades[2] << endl;
   cout << "La cantidad de producto 3 es: " << cantidades[3] << endl;
   
	
	return 0;
}




