#include <iostream>
using namespace std;

bool esDivisible(int dividendo, int divisor){
   return dividendo % divisor == 0;
}
   
bool esPar(int numero){
   return esDivisible(numero, 2);
}
   
bool mayorQue(int numero, int valor){
   return numero > valor;
}

bool esPrimo(int numero){
   int cantidadDiv, i;

   i=2;
   while(!esDivisible(numero, i) && mayorQue(numero, 1) ){
      i++;
   }
   
   if(i == numero){
      return true;
   }
   else{
      return false;
   }
   
   /// esto no se ejecuta por que hicimos un return 
   cout << "JAJA Soy la funcion";
}
   
int pedirNumero(){
   int n;
   cout << "Ingrese numero: ";
   cin >> n;
   return n;
}

int main() {
   
   if(esPrimo(pedirNumero())){
      cout << "Es primo"<<endl;
   }
   else{
      cout << "No es primo" << endl;
   }
   
   if(esPar(pedirNumero())){
      cout << "el numero es par" << endl;
   }
   else{
      cout << "el numero es impar" << endl;
   }

	return 0;
}

