
/**
  titulo_libro_mas_caro --> snake_case
  tituloLibroMasCaro --> camelCase
  TituloLibroMasCaro --> PascalCase
  titulolibromascaro --> alllowercase
  TITULOLIBROMASCARO --> ALLUPPERCASE
*/

#include <cstring>
#include <iostream>
using namespace std;

int main(){
   int i;
   string titulo;
   float precio;

   /// A
   float totalRecaudado = 0;

   /// B - Resuelto por Josue Solis (alumno)
   int cont = 0;

   /// C - Resuelto por Lautaro Gimenez (alumno)
   float precioMayor = 0;
   string tituloLibroMasCaro;

   for(i=1; i<=5; i++){

      cout << "Título del libro: ";
      cin >> titulo;

      cout << "Precio del libro: $ ";
      cin >> precio;

      /// B
      if (precio > 10000){
         cont++;
      }

      /// A
      totalRecaudado += precio;

      /// C
      if (precio > precioMayor){
         precioMayor = precio;
         tituloLibroMasCaro = titulo;
      }
   }

   cout << endl;
   cout << "Punto A" << endl;
   cout << "----------------" << endl;
   cout << "Total recaudado: $ " << totalRecaudado << endl;

   cout << endl;
   cout << "Punto B" << endl;
   cout << "----------------" << endl;
   cout << "Cantidad de libros mayores a $10000: " << cont << endl;   cout << endl;

   cout << "Punto C" << endl;
   cout << "----------------" << endl;
   cout << "Título del libro más caro: " << tituloLibroMasCaro << endl;

	return 0;
}
