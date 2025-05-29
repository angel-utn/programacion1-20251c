#include <iostream>
#include <ctime>

#include "funciones.h"
#include "dados.h"

using namespace std;

int main()
{
  srand(time(0));
  int numeros[11] = {};
  int cantidadDados = 6;


  for(int i=1; i<=3; i++)
  {
    cantidadDados = rand() % 11;

    tiradaDeDados(numeros, cantidadDados);

    mostrarDados(numeros, cantidadDados);
  }



  // int impares = contarImpares(numeros, 5);
  // cout << "Cantidad de impares: " << impares << endl;

  return 0;
}
