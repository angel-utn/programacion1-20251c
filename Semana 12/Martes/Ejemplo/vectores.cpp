#include <iostream>
using namespace std;

#include "vectores.h"

int buscarEnVector(int vec[], int tamanio, int elementoABuscar){
   int i;
   for(i=0; i<tamanio; i++){
      if (vec[i] == elementoABuscar){
         return i;
      }
   }
   return -1;
}

// Orientacion 1 - Horizontal
// Orientacion 2 - Vertical

void mostrarVector(int vec[], int tamanio, int orientacion){
   int i;
   for(i=0; i<tamanio; i++){

      switch(orientacion){
         case 1:
            cout << vec[i] << " ";
         break;

         case 2:
            cout << vec[i] << endl;
         break;

         default:
            cout << vec[i] << " ";
         break;
      }
   }
}

void ejemploBusquedaEnVector(){
   int vec[6] = {50,	20, 56, 45, 99, 12};
   int valorBuscado, pos;

   mostrarVector(vec, 6, 1);

   cout << "Ingresar valor buscado: ";
   cin >> valorBuscado;

   pos = buscarEnVector(vec, 6, valorBuscado);

   if (pos >= 0){
      cout << "El elemento fue encontrado en la posición: " << pos + 1 << endl;
   }
   else{
      cout << "El elemento no existe en el vector" << endl;
   }
}

void ejemploOrdenamientoDeVector(){

   int vec[6] = {50,	20, 56, 45, 99, 12};

   ordenarVectorAscendentemente(vec, 6);

   mostrarVector(vec, 6, 1);
}

void ordenarVectorAscendentemente(int vec[], int tamanio){
   int i, j, posMin, auxiliar;

   for(i = 0; i < tamanio-1; i++){

      posMin = i;

      for(j = i + 1; j < tamanio; j++){
         if (vec[j] < vec[posMin]){
            posMin = j;
         }
      }

      // Intercambiamos valores
      auxiliar = vec[i];
      vec[i] = vec[posMin];
      vec[posMin] = auxiliar;

   }
}


