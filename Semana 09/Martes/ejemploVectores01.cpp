#include <iostream>
using namespace std;

int contarAparicionesEnVector(int vec[], int tamanio, int valorBuscado);

int main(){

   int vecA[5] = { 1, 2, 3, 4, 5 };
   int vecB[3] = { 1, 1, 1};
   int vecC[8] = { 1, 1, 1, 1, 2, 2, 2, 2};
   int aux;

   aux = contarAparicionesEnVector(vecA, 5, 3);
   cout << "VecA: Valor esperado de aux: 1 - Valor calculado aux: " << aux << endl;

   aux = contarAparicionesEnVector(vecB, 3, 1);
   cout << "VecB: Valor esperado de aux: 3 - Valor calculado aux: " << aux << endl;

   aux = contarAparicionesEnVector(vecC, 8, 10);
   cout << "VecB: Valor esperado de aux: 0 - Valor calculado aux: " << aux << endl;


	return 0;
}

int contarAparicionesEnVector(int vec[], int tamanio, int valorBuscado){

   int i, contApariciones = 0;
   for(i=0; i<tamanio; i++){
      if (vec[i] == valorBuscado){
         contApariciones++;
      }
   }
   return contApariciones;

}
