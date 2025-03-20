#include <iostream>
using namespace std;

/**
  Problema: La panaderia "El mejor pan" hace sus panes utilizando una cantidad
            de harina, por cada pan utiliza 200 gramos
            Se le pide a ustede, futuro programador, que realize un programa
            para que dado la cantidad de gramos de harina muestre cuantos 
            panes puede realizar con dicha cantidad
            
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
  int cantidadHarina, cantidadPanes;
  
  // Pedir cantidad de harina en gramos
  cout << "Ingrese cantidad de harina (gramos): ";
  cin >> cantidadHarina;
  
  // Calcular cantidad de panes (cociente entero)
                     //     2
                    //500 / 200
  //cantidadPanes = cantidadHarina / 200.0;
  //cantidadPanes = 1.0*cantidadHarina / 200;
  // cantidadPanes = (float)cantidadHarina / 200;
  cantidadPanes = cantidadHarina / 200;
  
  // Mostrar cantidad de panes
  cout << "La cantidad de panes son: " << cantidadPanes << endl;

  return 0;
}
