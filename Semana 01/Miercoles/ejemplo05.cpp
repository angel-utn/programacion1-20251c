#include <iostream>
using namespace std;

/**
  Problema: Hacer un programa para ingresar por teclado la 
  cantidad de asientos totales en un avi¢n y la cantidad de 
  pasajes ocupados y luego calcular e informar el porcentaje 
  de ocupaci¢n y el porcentaje de no ocupaci¢n del mismo.


            
  Identificar: pedir la cantidad harina y mostrar cuantos 
               panes se pueden realizar
  
  Analisis: 
    DE:
      cantidadHarina
    DS:
      cantidadPanes
    OP:
      cantidadPanes = cantidadHarina / 200

  Estrategia: Que?
    Pedir cantidad de harina en gramos
    Calcular cantidad de panes (cociente entero)
    Mostrar cantidad de panes

  Algoritmo: Como?
  
  Codificar: 
*/

/***
  si hacen una division entre enteros, el resultado siempre es un entero
  por lo tanto vamos a tener el cociente entero
*/
int main(){
  /// declaracion de variables
  int cantidadAsientosTotales, cantidadAsientosOcupados;
  float porcentajeOcupados, porcentajeDesocupado;
  
  // Pedir cantidad de harina en gramos
  cout << "Ingrese cantidad de asientos totales: ";
  cin >> cantidadAsientosTotales;
  
  cout << "Ingrese cantidad de asientos ocupados: ";
  cin >> cantidadAsientosOcupados;
  
  porcentajeOcupados = 100.0 / cantidadAsientosTotales * cantidadAsientosOcupados;
  
  // Mostrar cantidad de panes
  cout << "Porcentaje Ocupados: " << porcentajeOcupados<< endl;

  return 0;
}
