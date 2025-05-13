#include <iostream>
using namespace std;

void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);


int main(){
  const int TAM = 5;
  int vec[TAM];
  cargarVector(vec, TAM);
  cout << endl;
  mostrarVector(vec, TAM);
  return 0;
 }

void cargarVector(int v[], int tam){
  int i;
  for(i=0; i<tam; i++){
    cin >> v[i];
  }
 }

void mostrarVector(int v[], int tam){
  int i;
  for(i=0; i<tam; i++){
    cout << i << ": " << v[i] << endl;
  }
 }
