#include "funciones.h"

int contarAparicionesEnVector(int vec[], int tamanio, int valorBuscado){

   int i, contApariciones = 0;
   for(i=0; i<tamanio; i++){
      if (vec[i] == valorBuscado){
         contApariciones++;
      }
   }
   return contApariciones;

}
