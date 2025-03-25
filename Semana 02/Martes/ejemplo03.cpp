/**
   Un automóvil debe realizar un viaje en el que prevé hacer tres
paradas en estaciones de servicio para cargar combustible.
 Se desea un programa que solicite al usuario la cantidad de litros
cargados y el importe del litro de combustible de cada parada y
muestre:
-A) El importe a pagar en cada estación de servicio.
-B) El importe a pagar total en el viaje y la cantidad de litros
cargados.

Variante 1:
 -El programa debe mostrar la información de cada estación de
servicio (A) y el total del viaje (B) al final

*/

#include <iostream>
using namespace std;

int main(){
   /// Ingresos
   float litros1, litros2, litros3, pu1, pu2, pu3;
   /// A
   float subtotal1, subtotal2, subtotal3;
   /// B
   float totalViajePesos, totalViajeLitros;

   cout << "Parada 1" << endl;
   cout << "Litros:  ";
   cin >> litros1;
   cout << "PU    :$ ";
   cin >> pu1;

   cout << "Parada 2" << endl;
   cout << "Litros:  ";
   cin >> litros2;
   cout << "PU    :$ ";
   cin >> pu2;

   cout << "Parada 3" << endl;
   cout << "Litros:  ";
   cin >> litros3;
   cout << "PU    :$ ";
   cin >> pu3;

   /// Proceso de la info
   subtotal1 = litros1 * pu1;
   subtotal2 = litros2 * pu2;
   subtotal3 = litros3 * pu3;
   totalViajePesos = subtotal1 + subtotal2 + subtotal3;
   totalViajeLitros = litros1 + litros2 + litros3;

   cout << endl << "----------------------------------" << endl;
   cout << "A)" << endl;
   cout << "Parada 1: $ " << subtotal1 << endl;
   cout << "Parada 2: $ " << subtotal2 << endl;
   cout << "Parada 3: $ " << subtotal3 << endl << endl;

   cout << "B)" << endl;
   cout << "Gasto total   : $ " << totalViajePesos << endl;
   cout << "Litros totales: " << totalViajeLitros << " lts." << endl;


	return 0;
}
