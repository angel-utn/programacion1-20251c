#include <iostream>
using namespace std;

/***
Hacer un programa donde tengan 4 productos con codigos 0, 1, 2, 3
Se debe porcesar 5 ventas donde cada venta esta compuesta por:
- codigo producto
- precio final

Mostrar la cantidad de productos vendidos para cada producto.

4 producto 
5 ventas


*/

/***
   Los vectores son identificadores que puden almancenar mas de una variable
   para acceder a cada elemento, se utiliza los [ indice ]
   el indice es un numero que comienza en cero y termina en cantidad - 1
   para declarar un vector es ingual a una varibale solo que se utilza [ cantidad ]
   para inicializar un vector en cero se utiliza al momento de declarar = {}
   para establecer valores iniciles a cada el emento se utiliza al declarar = {valor1, valo2...}
   para recorrecorer un vecto se utiliza un ciclo for
   Al pasar un vecto a una funcion se debe declarar como un parametro normal solo que con los []
   Los vectores son modificables dentro de las funciones

*/

void mostrarCantidades(int vec[], string productos[]);
void cargarNombres(string productos[], int cantiadad);

int main() {
   int codigo;
   float precio;
   int cantidades[4]={}; // incializa en cero el vector
   //string nombres[4]={"Manzana", "Pera", "Banana", "Kiwi"};
   string nombres[4]={};
   
   
   /// una manera de inicializar
   /*
   for(int i=0; i<=3; i++){
      cantidades[i] = 0;   
   }
   */
   cargarNombres(nombres, 4);
   
   for(int i=1; i<=5; i++){
      cout << "Ingrese codigo de producto: ";
      cin >> codigo;
      
      cout << "Ingrese precio final: ";
      cin >> precio;
      
      cantidades[codigo]++;
      
   }
   
   /// recorrer el vector
   mostrarCantidades(cantidades, nombres); 
   
   return 0;
}

void mostrarCantidades(int vec[], string productos[]){
   for(int i=0; i<=3; i++){
      cout << "La cantidad de producto de "<< productos[i]<<" es: " << vec[i] << endl;   
   }
}

   
void cargarNombres(string productos[], int cantiadad){
   
   for(int i=0; i<cantiadad; i++){
      cout << "Ingrese nombre del producto #" << i << ": ";
      cin>> productos[i];
   }
}


