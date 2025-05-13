#include <iostream>
using namespace std;

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

void cargarDatos(int zonasxProvincia[], int tamanio){

   int i, codProvincia, codZona;

   for(i=0; i<tamanio; i++){

      cout << "Provincia: ";
      cin >> codProvincia;

      cout << "Zona: ";
      cin >> codZona;

      zonasxProvincia[codProvincia - 1] = codZona;
   }

}

void mostrarProvinciasxZona(int v[], int tam){
  int zona, i;

  cout << endl << "PUNTO A" << endl;
  for(zona=1; zona<=5; zona++)
  {
   cout << "Zona " << zona << endl;

   for(i=0; i<tam; i++){
      if (v[i] == zona){
         cout << i+1 << " ";
      }
   }
   cout << endl;
  }
}

void mostrarZonasConTresoMasProvincias(int v[], int tam){
   int zona, cantProvincias;

   cout << endl << "PUNTO B" << endl;
   for (zona=1; zona<=5; zona++){
      cantProvincias = contarAparicionesEnVector(v, tam, zona);

      if (cantProvincias >= 3){
         cout << "Zona " << zona << endl;
      }

   }


}
