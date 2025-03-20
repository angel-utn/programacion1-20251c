#include <iostream>
using namespace std;

// comentar una linea

/** bloque de comentarios
  comentar
  varias
  lineas
*/

/**
  Problema: Hacer un programa que pida al usuario 2 numeros y muestre por pantalla 
            la suma del primero mas el segundo. 
            ejemplo si ingresan 5 y 2 debe mostrar 7
            
  Identificar: Pedir 2 numeros y mostrar la suma de ellos.
  
  Analisis: 
    DE:
      numero1
      numero2
    DS:
      resultado
    
    OP:
      resultado = numero1 + numero2

  Estrategia: Que?
    Pedir los 2 numeros
    Mostrar la suma

  Algoritmo: Como?
  
  Codificar: 
*/

int main(){
  /// declaracion de variables
  float numero1, numero2;
  
  /// pedir los 2 numeros
  cout << "Ingrese el primer numero: ";
  cin >> numero1;
  
  cout << "Ingrese el segundo numero: ";
  cin >> numero2;
    
  /// mostrar la suma     
  cout << "La suma es: " << (numero1 + numero2) << endl;
    
  return 0;
}
