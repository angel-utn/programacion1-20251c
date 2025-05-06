#include <iostream>
using namespace std;

#include "calculadora.h"

int main()
{
   int a, b, resultadoSuma, resultadoMultiplicacion, resultadoDuplicacion;

   cout << "Ingresar dos números: " << endl;
   cin >> a;
   cin >> b;

   resultadoSuma = sumar(a, b);
   cout << endl << "Resultado de la suma: " << resultadoSuma << endl;

   resultadoMultiplicacion = multiplicar(a, b);
   cout << endl << "Resultado de la multiplicación: " << resultadoMultiplicacion << endl;

   resultadoDuplicacion = duplicar(a);
   cout << endl << "Resultado de la duplicación: " << resultadoDuplicacion << endl;

   return 0;
}
