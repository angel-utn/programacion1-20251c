#include <iostream>
using namespace std;

// Recibe el parámetro por valor (una copia del valor de la variable a)
void porValor(int numero){
   cout << numero << endl;

   numero = 100;

   cout << numero << endl;
}

// Recibe el parámetro por referencia (recibe la variable a)
void porReferencia(int &numero){
   cout << numero << endl;

   numero = 100;

   cout << numero << endl;
}


int main(){
   int a = 1, b = 2;
   cout << a << endl;

   porReferencia(a);

   cout << a << endl;

	return 0;
}
