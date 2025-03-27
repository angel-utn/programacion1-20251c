#include <iostream>
using namespace std;

/***
Hacer un programa que solicite por teclado que se ingresen dos números y luego 
guardarlos en dos variables distintas. A continuación se deben 
intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.

Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la 
variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

*/

int main(){
   int a,b,c;
   
   a = 10;
   b = 15;
   
   cout <<"A: " <<a << endl;   cout <<"B: " <<b << endl;
   
   a = b;   b = a;
   
   /*
   c = a;   a = b;   b = c;
   */   cout <<"A: " <<a << endl;   cout <<"B: " <<b << endl;   
	return 0;
}

