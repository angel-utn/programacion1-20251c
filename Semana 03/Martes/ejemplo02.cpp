#include <iostream>

using namespace std;

/**
ACTIVIDAD:
Un estudiante de Programación debe dar una defensa oral de un Trabajo Practico,
pero no se siente bien de salud.
Tiene que decidir si está en condiciones de dar la defensa basándose en varios
factores:
- su estado de salud,
- el tiempo (estado del clima en ese momento)
- y su estado de ánimo.
Se considera que:
A. si tiene dolor de garganta (estado de salud false), no puede hablar, por lo
tanto, no puede hacer la defensa.
B. si el estado de ánimo es bajo (estado de ánimo false), es mejor que no
de la defensa.
C. si el tiempo está lluvioso (el tiempo es false), prefiere descansar en vez
de dar la defensa.
Se requiere un programa que pueda ingresar la información de un estudiante y
muestre por pantalla si puede hacer la defensa o no puede realizarla.

*/

int main()
{

    /// DECLARACION DE VARIABLES
    bool salud, animo, tiempo;
    string mensaje;

    /// DE
    cout << "Ingrese salud (1- buena, 0- mala): ";
    cin >> salud;

    cout << "Ingrese animo (1- bueno, 0- malo): ";
    cin >> animo;

    cout << "Ingrese tiempo (1- bueno, 0- malo): ";
    cin >> tiempo;

    /// PROCESOS / DECISIONES
	
	// IF ANIDADOS
    if (salud==false){
        mensaje = "NO RINDE";
    }
    else{
        if(animo==false){
            mensaje = "NO RINDE";
        }
        else{
            if(tiempo==false){
                mensaje = "NO RINDE";
            }
            else{
                mensaje = "RINDE";
            }
        }

    }

    /// DS
    cout << mensaje << endl;


    return 0;
}
