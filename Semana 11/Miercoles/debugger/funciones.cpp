
#include "funciones.h"

int sumar(int n, int m){
  return n + m;
}

bool esPar(int num){
  return num % 2 == 0;
}

int contarImpares(int vec[], int cant){
  int impares = 0;

  for (int i = 0; i < cant; i++)
  {
    if (!esPar(vec[i]))
    {
      impares++;
    }
  }
  
  return impares;
}
