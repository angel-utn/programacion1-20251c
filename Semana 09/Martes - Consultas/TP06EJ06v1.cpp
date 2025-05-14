#include <iostream>
using namespace std;
/*
Hacer una función que reciba un número entero por valor llamado
día y un string llamado nombre por referencia y le asigne el
nombre correspondiente según el número de día. Siendo 0 ?
Domingo y 6 ? Sábado.
*/

/// DECLARACION DE FUNCIONES
void determinarDiaDeLaSemana(int dia, string &nombre);

int main() {
	string nombre;
	determinarDiaDeLaSemana(4, nombre);
	cout << "El 4 corresponde al dia: " << nombre;
	
	return 0;
}

/// IMPLEMENTACION
void determinarDiaDeLaSemana(int dia, string &nombre){
	string semana[7] = {"domingo","lunes","martes","miercoles","jueves", "viernes","sabado"};
	nombre = semana[dia];	
}