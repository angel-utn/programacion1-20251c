#include <iostream>
using namespace std;

/// DECLARACION DE FUNCIONES
void diasemana(int dia, string &dias); /// A LA FUNCION DARLE UN NOMBRE MAS DESCRIPTIVO
									   /// RESPECTO A LO QUE HACE LA FUNCION
									   /// EL string debería ser &nombre, NO &dias

int main() {
    int dia = 6;
    string dias = "domingo";  /// NO DARLE VALOR INICIAL A DIAS, YA QUE DE ESO
                              /// SE ENCARGA LA FUNCION
    diasemana(dia, dias);

    cout << "El 6 corresponde al dia: " << dias;

    return 0;
}

/// IMPLEMENTACION
void diasemana(int dia, string &dias) {
    if (dia == 0) {
        dias = "domingo";
    } else if (dia == 1) {
        dias = "lunes";
    } else if (dia == 2) {
        dias = "martes";
    } else if (dia == 3) {
        dias = "miercoles";
    } else if (dia == 4) {
        dias = "jueves";
    } else if (dia == 5) {
        dias = "viernes";
    } else {
        dias = "sabado";
    }
}