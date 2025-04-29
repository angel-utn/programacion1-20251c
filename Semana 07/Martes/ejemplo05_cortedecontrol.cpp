/**
Un torneo de pesca registra la información de sus competidores. Por cada
competidor se registran una cantidad indeterminada de capturas en el torneo.

Por cada captura se ingresa:
Código de competidor (entero)
Peso de la captura (float)
Horario (0 a 23)

La información se encuentra agrupada por código de competidor.
Para indicar el fin de la carga de datos de un competidor se ingresa un código
de competidor distinto al anterior.
Para indicar el fin de la carga de datos se ingresa un código de competidor igual
a cero.

Se pide calcular e informar:
A) Por cada competidor, el total kilogramos de peces capturados.
B) La cantidad de capturas realizadas en el torneo que hayan sucedido por
la tarde (entre las 13 y las 18 ambas inclusive)
*/

#include <iostream>
using namespace std;

int main(){

   int codCompetidor, codCompetidorAnterior, horario;
   float peso;

   // A
   float totalKilos;

   // B
   int cantCapturasHorarioTarde = 0;

   cout << "Código de competidor: ";
   cin >> codCompetidor;


   while (codCompetidor != 0){

      codCompetidorAnterior = codCompetidor;
      totalKilos = 0;

      while (codCompetidor == codCompetidorAnterior){

         cout << "Peso: ";
         cin >> peso;

         cout << "Horario: ";
         cin >> horario;

         /// A
         totalKilos += peso;

         /// B
         if (horario >= 13 && horario <= 18){
            cantCapturasHorarioTarde++;
         }

         cout << "Código de competidor: ";
         cin >> codCompetidor;

      }

      cout << endl << "A) Código de competidor #" << codCompetidorAnterior;
      cout << " - Total kilos: " << totalKilos << endl;

   }

   cout << endl << "B) Cantidad de capturas entre 13 y 18hs: " << cantCapturasHorarioTarde << endl;

	return 0;
}
