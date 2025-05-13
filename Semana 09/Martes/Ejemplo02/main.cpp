#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
   int zonasxProvincia[10];

   cargarDatos(zonasxProvincia, 10);
   mostrarProvinciasxZona(zonasxProvincia, 10);
   mostrarZonasConTresoMasProvincias(zonasxProvincia, 10);

   return 0;
}
