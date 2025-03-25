/**
 Un kiosco desea registrar la información de una venta. Los datos
 que la componen son los siguientes:
 -Nombre del producto
 -Precio unitario del producto
 -Cantidad de unidades vendidas
 -Descuento (en porcentaje entre 0 y 100)

 Requiere un programa que pueda ingresar la información de una
 venta y crear un ticket por pantalla con el siguiente formato:

 KIOSCO UTN
 --------------------------
 PRODUCTO        : Alfajor
 PRECIO UNITARIO : $ 900.5
 UNIDADES        : 2
 --------------------------
 SUBTOTAL        : $ 1801
 DESCUENTO       : $- 180.1
 --------------------------
 TOTAL A PAGAR   : $ 1620.9

*/

#include <iostream>
using namespace std;
#include <cstdlib>

int main(){
   string nombreProducto;
   int cantidad;
   float precioUnitario, porcentajeDescuento, subtotal, descuentoEnPesos, total;

   cout << "Nombre del producto: ";
   cin >> nombreProducto; // NOTA: No admitirá espacios en el texto ingresado

   cout << "Precio unitario: $ ";
   cin >> precioUnitario;

   cout << "Cantidad unidades: ";
   cin >> cantidad;

   cout << "Porcentaje descuento: ";
   cin >> porcentajeDescuento;

   subtotal = cantidad * precioUnitario;
   descuentoEnPesos = subtotal * porcentajeDescuento / 100;
   total = subtotal - descuentoEnPesos;

   /// Limpia la consola
   system("cls");  // Linux o Mac --> system("clear");

   /// Mostramos el ticket
   cout << "KIOSCO UTN                " << endl;
   cout << "--------------------------" << endl;
   cout << "PRODUCTO        : " << nombreProducto << endl;
   cout << "PRECIO UNITARIO : $ " << precioUnitario << endl;
   cout << "UNIDADES        :  " << cantidad << endl;
   cout << "--------------------------" << endl;
   cout << "SUBTOTAL        : $ " << subtotal << endl;
   cout << "DESCUENTO       : $ " << (descuentoEnPesos * -1) << endl;
   cout << "--------------------------" << endl;
   cout << "TOTAL A PAGAR   : $ " << total << endl << endl;

   system("pause");

	return 0;
}
