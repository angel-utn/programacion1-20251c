/**
Un torneo de pesca registra la información de sus 5 competidores. Por cada
competidor se registran 5 capturas en el torneo. Por cada captura se ingresa:
Código de competidor (entero)
Peso de la captura (float)
Horario (0 a 23)

La información se encuentra agrupada por código de competidor.
Se pide calcular e informar:
A) Por cada competidor, el total kilogramos de peces capturados.
B) La cantidad de capturas realizadas en el torneo que hayan sucedido por
la tarde (entre las 13 y las 18 ambas inclusive)

*/

#include <iostream>
using namespace std;

int main(){

   int i, j;
   int codCompetidor, horario;
   float peso;

   // A
   float totalKilos;

   // B
   int cantCapturasHorarioTarde = 0;

   // Grupos: Competidores
   for (i = 1; i <= 5; i++){

      totalKilos = 0;

      // Registros del grupo: Capturas de peces
      for(j = 1; j <= 5; j++){
         cout << "Código del competidor: ";
         cin >> codCompetidor;

         cout << "Peso: ";
         cin >> peso;

         cout << "Horario: ";
         cin >> horario;

         // A
         totalKilos += peso;

         // B
         if (horario >= 13 && horario <= 18){
            cantCapturasHorarioTarde++;
         }

      }

      cout << endl;
      cout << "A) Total kilos: " << totalKilos << endl << endl;

   }

   cout << endl;
   cout << "B) Cantidad de capturas entre 13 y 18hs: " << cantCapturasHorarioTarde << endl;

	return 0;
}
