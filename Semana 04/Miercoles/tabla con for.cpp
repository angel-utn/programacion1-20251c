#include <iostream>
using namespace std;
/***

hacer un programa que solicite un numero 
y muestre su tabla de multiplicacion


5
5x1=5
5x2=10
...
5x10=50
*/


int main() {
   int n;
   
   cout << "Ingrese numero: ";
   cin >> n;
   
   /// arma la tabla
   for(int i=1; i<=10;i++){
      cout << n << " x " << i << " = " << n * i << endl;   
   }
   
   return 0;
}

