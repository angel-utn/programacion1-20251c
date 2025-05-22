#include <iostream>
#include "dados.h"
using namespace std;

/// desarrollamos / implementamos las funciones (referencias)
int tirarDado6Caras(){
  return rand() % 6 + 1;
}


int tirarDado12Caras(){
  return rand() % 12 + 1;
}


void tirarTirada(int v[], int cant){
  for(int i=0; i<cant; i++){
    v[i] = tirarDado12Caras();   
  }
}

int maximo(int v[], int cant){
  
  int maximoValor = v[0];
  
  for(int i=1; i<cant;i++){
    if(v[i] > maximoValor){
      maximoValor = v[i];    
    }  
  }

  return maximoValor;
}

int contarApariones(int v[], int cant, int valorBuscado){
  int cantidad = 0;
  
  for(int i=0; i<cant; i++){
    if(v[i] == valorBuscado){
      cantidad++;    
    }  
  }
  
  return cantidad;
}

int calcularPuntos(int v[], int cant){
  int puntos;
  puntos = maximo(v, cant);
  
  if(contarApariones(v, cant, puntos) > 1){
    puntos *= 2;  
  }
  
  
  
  return puntos;
}
