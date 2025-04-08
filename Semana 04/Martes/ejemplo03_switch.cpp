/**
Se ingresa el importe de una venta y la forma de pago. Se deben aplicar recargos
o descuentos dependiendo de la forma de pago. Listar el total a pagar por el cliente.

	'E' - 10% de descuento
	'T' - 20% de recargo
	'Q' - 10% de descuento en importes mayores a $50000
	'C' - 5% de recargo y $ 4500 fijo de recargo

*/

#include <iostream>
using namespace std;

int main(){

   bool formaPagoCorrecta = true;

   /// Datos de entrada
   float importeFinal;
   char formaPago;

   cout << "Importe: $";
   cin >> importeFinal;

   cout << "Forma de pago (E-Efectivo, T-Tarjeta, Q-QR, C-Cheque): ";
   cin >> formaPago;

   /// Procesamiento del programa
   /// Dependiendo de la forma de pago, se aplican dtos o recargos al importeFinal.
   switch(formaPago){

      case 'E':
      case 'e':
      case '1':
         // Efectivo - 10% de descuento
         importeFinal = importeFinal * 0.9;
      break;

      case 'T':
      case 't':
      case '2':
         // Tarjeta - 20% de recargo
         importeFinal = importeFinal * 1.2;
      break;

      case 'Q':
      case 'q':
      case '3':
         // QR - 10% de descuento si el importe es mayor a 50000
         if (importeFinal > 50000){
            importeFinal = importeFinal * 0.9;
         }
      break;

      case 'C':
      case 'c':
      case '4':
         // Cheque - 5% de recargo y fijo de $4500
         importeFinal = (importeFinal * 1.05) + 4500;
      break;

      default:
         cout << endl << "¡¡ FORMA DE PAGO INCORRECTA !!" << endl;
         formaPagoCorrecta = false;
      break;
   }


   /// Datos de salida
   if (formaPagoCorrecta == true){
      cout << endl << "Total a pagar por el cliente $ " << importeFinal << endl;
   }

	return 0;
}
