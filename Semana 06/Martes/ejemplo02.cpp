/**
Una fundación necesita recaudar $50000 para una causa benéfica. Se solicita
un programa que permita registrar las donaciones que realiza la gente y que
finalice la recaudación de dinero cuando se cumpla o supere el objetivo de los $50000.

Luego, el programa debe emitir:
A) La cantidad de donaciones recibidas.
B) El monto de la donación más generosa.
C) La cantidad de donaciones que superaron el 1% del objetivo.
*/

#include <iostream>
using namespace std;

int main(){

   const float OBJETIVO = 50000;
   float recaudacion = 0;
   float importeDonacion;
   float unoPorCientoDelObjetivo = OBJETIVO * 1 / 100;

   int cantidadDonaciones = 0;
   float importeDonacionMasGenerosa = 0;
   int cantidadDonacionesMayoresA1PorCiento = 0;

   do{
      cout << "Ingresa el monto que querés donar: $ ";
      cin >> importeDonacion;

      recaudacion += importeDonacion;

      /*cout << "**** Recaudado hasta el momento $ " << recaudacion << endl;
      if (recaudacion <= OBJETIVO){
         cout << "**** Restan para el objetivo: $" << OBJETIVO - recaudacion << endl << endl;
      } */

      // A)
      cantidadDonaciones++;

      // B)
      if (importeDonacion > importeDonacionMasGenerosa){
         importeDonacionMasGenerosa = importeDonacion;
      }

      // C
      if (importeDonacion > unoPorCientoDelObjetivo){
         cantidadDonacionesMayoresA1PorCiento++;
      }

   }while(recaudacion < OBJETIVO);

   cout << endl << "Gracias por aportar dinero a la causa!" << endl;
   cout << endl << "A) Cantidad de donaciones: " << cantidadDonaciones << endl;
   cout << endl << "B) Donación más generosa : $ " << importeDonacionMasGenerosa << endl;
   cout << endl << "C) Cant. donaciones > 1% : " << cantidadDonacionesMayoresA1PorCiento << endl;


	return 0;
}
