#include <iostream>
#include <ctime>
#include "dados.h"

using namespace std;

int main()
{
    // se debe ejcutar una sola vez por programa.
    srand(time(nullptr));
    int tirada[6];
    string nombre;
    int numero;
    
    /// dados tinen caras, 6 o 12
    /*for(int i=1; i<100; i++){
      cout << tirarDado12Caras() << endl;
    }
    */
    cin >> numero;
    cout << "Ingrese nombre del jugador: ";
    
    cin.ignore(); /// va unicamente si antes hay un cin >>
    getline(cin, nombre);
    
    getline(cin, nombre);
    
    
    tirarTirada(tirada, 6);
    
    int puntosObjtenidos = calcularPuntos(tirada, 6);
    cout << nombre <<  " obtuvo " << puntosObjtenidos << " puntos" << endl;
    
    for(int i=0; i<6; i++){
      cout << tirada[i] << endl;
    }
    
    return 0;
}
