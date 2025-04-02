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

/** OPERADORES LOGICOS
    AND  &&
    OR   ||
    NOT  !

    TABLA AND
    E1  OP.  E2  RES
    V   &&   V    V
    F   &&   V    F
    V   &&   F    F
    F   &&   F    F

    TABLA OR
    E1  OP.  E2  RES
    V   ||   V    V
    F   ||   V    V
    V   ||   F    V
    F   &&   F    F

    TABLA NOT
    !V  -->  F
    !F  -->  V

    cout << "AND" << endl;
    cout << ( ( 5 > 4) && (5 > 3) ) << endl;
    cout << ( ( 5 > 4) && (5 == 3) ) << endl;
    cout << ( ( 5 < 4) && (5 > 3) ) << endl;
    cout << ( ( 5 < 4) && (5 == 3) ) << endl;

    cout << "OR" << endl;
    cout << ( ( 5 > 4) || (5 > 3) ) << endl;
    cout << ( ( 5 > 4) || (5 == 3) ) << endl;
    cout << ( ( 5 < 4) || (5 > 3) ) << endl;
    cout << ( ( 5 < 4) || (5 == 3) ) << endl;

    cout << "NOT" << endl;
    cout << (!true) << endl;
    cout << (!false) << endl;

VARIANTE A
Igual al enunciado original, pero con esta consideración:
Si está en buena salud y tiene buen estado de ánimo, puedes dar la
defensa, independientemente del tiempo.

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
    /// ALTERNATIVA 1
//    if ( (salud==true) && (animo==true) && ( (tiempo==true) || (tiempo== false) ) ){
//        mensaje = "RINDE";
//    }

    /// ALTERNATIVA 2 --> CON ERRORES
//    if( ( (salud==true) && (animo==true) ) || (tiempo==true)){
//        mensaje = "RINDE";
//    }
    /// ALTERNATIVA 3
    if( (salud==true) && (animo==true) ){
        mensaje = "RINDE";
    }

    else{
        mensaje = "NO RINDE";
    }

    /// DS
    cout << mensaje << endl;

    return 0;
}
