/**
  Ingresar un nro y determinar si el número es positivo y par. --> "Positivo y par"
  Diga si es positivo incluso si no es par. --> "Positivo"
  Diga si es par incluso si no es positivo. --> "Par"
*/

#include <iostream>
using namespace std;

int main(){

  int numero;
  cout << "Ingresar número: ";
  cin >> numero;

  cout << endl;

  if (numero > 0 && numero % 2 == 0){
   cout << "El número es positivo y par" << endl;
  }
  else{
      if (numero > 0){
         cout << "Positivo" << endl;
      }
      if (numero % 2 == 0){
         cout << "Par" << endl;
      }
  }

	return 0;
}
