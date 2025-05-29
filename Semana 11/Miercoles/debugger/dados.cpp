#include <iostream>
#include "dados.h"

using namespace std;

int tirarDado12Caras(){
  return rand() % 12 + 1;
}


int tirarDado6Caras(){
  return rand() % 6 + 1;
}

void tiradaDeDados(int dados[], int cant){
  for(int i=0; i<cant; i++){
    dados[i] = tirarDado6Caras();  
  }
}

void mostrarDados(int dados[], int cant){
  cout << "Los dados son: " << endl;
  
  for(int i=0; i<cant; i++){
    cout << dados[i] << " "; 
  }
  cout << endl;
}
