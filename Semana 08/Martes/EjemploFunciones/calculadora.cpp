// Definiciones de las funciones de calculadora.h
#include "calculadora.h"

int sumar(int n1, int n2){
   int resultado;
   resultado = n1 + n2;
   return resultado;
}

int multiplicar(int n1, int n2){
   int r;
   r = n1 * n2;
   return r;
}

int duplicar(int numero){
   int doble;
   doble = multiplicar(numero, 2);
   return doble;
}

