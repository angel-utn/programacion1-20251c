#include <iostream>
using namespace std;


/***
   Vactores o Array
   
   indice es un numero Natural que incluye el cero
   literal [2]
   variable [n]
   operacion [n+1]

*/

int main() {
   
   int codigo, cantidad;
   float precios[5], precio;
   
   precios[0] = 3000; // manzana
   precios[1] = 3500; // peras
   precios[2] = 2000; // bananas
   precios[3] = 6000; // Kiwi
   precios[4] = 1000; // Palta
   
   cout << "Ingrese codigo de producto (1-5): ";
   cin >> codigo;
   
   cout << "Ingrese cantidad: ";
   cin >> cantidad;
   
   precio = precios[codigo - 1];

   cout << "Monto: " << precio * cantidad << endl;
   
	
	return 0;
}




