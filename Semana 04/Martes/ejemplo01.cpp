/**
Hacer un programa para ingresar un número e informar:
   "Positivo" si el número es número es positivo.
   "Cero" si el número es cero.
   "Negativo" si el número es negativo.
*/

#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingresar un número: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "El nro es positivo" << endl;
    }
    else
    {
        if (numero < 0)
        {
            cout << "El nro es negativo" << endl;
        }
        else
        {
            cout << "El nro es cero" << endl;
        }
    }



    return 0;
}
