/**
Se requiere realizar un programa que simule la interfaz de un cajero automático.
Las opciones son:

1 - Consultar saldo
2 - Depositar dinero
3 - Retirar dinero
----------------------
4 - Salir

El menú debe perpetuarse hasta que el usuario elija la opción salir. Al finalizar,
el programa debe mostrar el saldo final del cliente y la cantidad de movimientos
realizados en la sesión.
*/

#include <iostream>
using namespace std;

int main(){

   int opcion;
   float saldo, importe;

   int cantMovimientos;

   cout << "¿Cuál es tu saldo actual?: $ ";
   cin >> saldo;
   cout << endl << endl;

   do{

      cout << "CAJERO AUTOMÁTICO" << endl;
      cout << "-------------------------" << endl;
      cout << "1 - Consultar saldo" << endl;
      cout << "2 - Depositar dinero" << endl;
      cout << "3 - Retirar dinero" << endl;
      cout << "----------------------"  << endl;
      cout << "4 - Salir" << endl;

      cout << "Opción: ";
      cin >> opcion;

      switch (opcion){
         case 1:
            cout << endl << ">> Tu saldo actual es $ " << saldo << endl;
         break;

         case 2:
            cout << endl << ">> Importe a depositar $ ";
            cin >> importe;
            saldo += importe;
            cantMovimientos++;

         break;

         case 3:
            cout << endl << ">> Importe a retirar $ ";
            cin >> importe;
            if ((saldo - importe) < 0){
               cout << ">> Saldo insuficiente.";
            }
            else{
               saldo -= importe;
               cantMovimientos++;
            }

         break;

         default:
            cout << endl << ">> Opción incorrecta" << endl;
         break;

      }
      cout << endl << endl;
   }while(opcion != 4);

   cout << endl << endl << "Gracias por usar el cajero automático" << endl;
   cout << "Saldo: $ " << saldo << endl;
   cout << "Cantidad de movimientos: " << cantMovimientos << endl;

	return 0;
}
