#include <iostream>
using namespace std;

/**
  Operador /
  -----------

  int / int --> int (cociente)
  float / int --> float
  int / float --> float
  float / float --> float

*/

int main(){
   int dividendo = 11;
   int divisor = 2;
   float resultado;

   cout << "Cociente: " << 11 / 2 << endl;
   cout << "Resto   : " << 11 % 2 << endl;
   cout << endl;

   cout << "Division: " << (float) 11 / 2 << endl;
   cout << "Division: " << 11.0f / 2 << endl;
   cout << "Division: " << 11 * 1.0 / 2 << endl;

   cout << "----------------------------------------" << endl << endl;

   cout << "Cociente: " << dividendo / divisor << endl;
   cout << "Resto   : " << dividendo % divisor << endl;

   cout << "Division: " << (float) dividendo / divisor << endl;
   cout << "Division: " << dividendo * 1.0 / divisor << endl;

   cout << "----------------------------------------" << endl << endl;

   resultado = (1.0 * dividendo) / divisor;

   cout << "Division: " << resultado;

   cout << endl << endl;



	return 0;
}
