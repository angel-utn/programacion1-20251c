#include <iostream>
using namespace std;
/**
   El ciclo for lo vamos a utilizar cunado:
      Queremos que un conjunto de instrucciones se repita
      una cantidad exacta de veces
      Esa cantidad la conocemos (constante) 
      o la podemos calcular (variable)


   for(inicial;limite;incremento){
      instrucciones que quiero que se repita
   }

   i>j>k

   Mas Chico Al Mas Grande
   (i=MC; i<=MG; i++)

   Mas Grande Al Mas Chico
   (i=MG; i>=MC; i--)

   La variable de control se puede mostrar o utilizar
   pero nunca modificar

*/

int main() {
   
   for(int i=1;i<=3;i++){
      cout << "Repeticion #" << i << endl;
      cout << "Hola mundito lindo y tierno :)" << endl;
   }
   
   // cout << "Valor de I: " << i << endl; --No funciona
	return 0;
}

