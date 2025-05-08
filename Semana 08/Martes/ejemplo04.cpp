#include <iostream>
using namespace std;

int calcularEdad(int diaNac, int mesNac, int anioNac, int diaActual, int mesActual, int anioActual){
   int edad;
   edad = anioActual - anioNac;

   if ( (mesActual < mesNac) || (mesActual == mesNac && diaActual < diaNac) ){
      edad--;
   }

   return edad;
}

int main(){

   /// Calcular la edad de una persona
   int diaNac, mesNac, anioNac;
   int edad;


   diaNac = 10;
   mesNac = 5;
   anioNac = 2000;

   edad = calcularEdad(diaNac, mesNac, anioNac, 6, 5, 2025);

   cout << "La edad es: " << edad << endl;


	return 0;
}
