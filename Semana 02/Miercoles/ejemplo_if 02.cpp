#include <iostream>
using namespace std;

/***
   Un local tiene un oferta en sus compras
   Si supera el monto de $10000 se le aplica un descuento
   del 10%

   Hacer un programa que se ingrese el importe y muestre el monto
   a pagar.

Analisis:
   DE:
      importe
      
   DS:
      monto
      
   Operaciones:
      monto = importe - descuento
      // descuento = import * 10 / 100
      descuento = importe * 0.1 => importe > 10000
      descuento = 0  // inicialmente 
Estrategia:
   pedir el importe
   calcular el descuento
   calcular el monto
   mostrar el monto

Diagramarlo



Expresiones:
   Numericas:
      2 + 5 => numero
         5 => numero
      VAR = 10
   VAR => Numero
   VAR + 5 => Numerica

   Logicos: VERDADERO o FALSO => true o false => 1 o 0

Operaciones Logicas
   Operadores Relacionales (necesitan 2 operandos)
      >   mayor que
      <   menor que
      >=  mayor o igual que
      <=  menor o igual que
      !=  no igual que
      ==  igual que

   Operadores Logicos
      && and Y
      || or O
      ! not NO

*/

int main() {
   /// declarar las variables
   float monto, importe, descuento;
   
   /// pedir el importe
   cout << "Ingrese importe: ";
   cin >> importe;
   
   /// calcular el descuento
   descuento = 0;
   
   if(importe>10000){
      descuento = importe * 0.1;
   }
   
   /// calcular el monto
   monto = importe - descuento;
   
   /// mostrar el monto
   cout << "Monto: $" << monto << endl;
   
	
	return 0;
}

