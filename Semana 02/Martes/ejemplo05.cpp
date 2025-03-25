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
   float cantLitros, precioLitro;
   /// A
   float subtotal;
   /// B
   float totalViajePesos = 0;
   float totalViajeLitros = 0;

   cout << "Parada 1" << endl;
   cout << "Litros:  ";
   cin >> cantLitros;
   cout << "PU    :$ ";
   cin >> precioLitro;
   subtotal = cantLitros * precioLitro;

   totalViajeLitros += cantLitros; //   totalViajeLitros = totalViajeLitros + cantLitros;
   totalViajePesos += subtotal; //   totalViajePesos = totalViajePesos + subtotal;

   cout << endl<< "A)" << endl;
   cout << "Parada 1: $ " << subtotal << endl << endl;

   cout << "Parada 2" << endl;
   cout << "Litros:  ";
   cin >> cantLitros;
   cout << "PU    :$ ";
   cin >> precioLitro;
   subtotal = cantLitros * precioLitro;

   totalViajeLitros = totalViajeLitros + cantLitros;
   totalViajePesos = totalViajePesos + subtotal;

   cout << endl<< "A)" << endl;
   cout << "Parada 2: $ " << subtotal << endl << endl;

   cout << "Parada 3" << endl;
   cout << "Litros:  ";
   cin >> cantLitros;
   cout << "PU    :$ ";
   cin >> precioLitro;
   subtotal = cantLitros * precioLitro;

   totalViajeLitros = totalViajeLitros + cantLitros;
   totalViajePesos = totalViajePesos + subtotal;

   cout << endl<< "A)" << endl;
   cout << "Parada 3: $ " << subtotal << endl << endl;

   cout << endl << "----------------------------------" << endl;
   cout << "B)" << endl;
   cout << "Gasto total   : $ " << totalViajePesos << endl;
   cout << "Litros totales: " << totalViajeLitros << " lts." << endl << endl;


   system("pause");
	return 0;
}
