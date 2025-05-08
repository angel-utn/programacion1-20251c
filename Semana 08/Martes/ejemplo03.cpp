#include <iostream>
using namespace std;

void intercambiar(string &n1, string &n2){
  string auxiliar;
  auxiliar = n1;
  n1 = n2;
  n2 = auxiliar;
}

int main(){
   string a = "Uno", b = "Cien";

   intercambiar(a, b);

   cout << a << endl;
   cout << b << endl;

    return 0;
}
