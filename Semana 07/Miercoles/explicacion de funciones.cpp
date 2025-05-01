#include <iostream>
using namespace std;
/***
   Una funcion es un fragmento de codigo que hace algo espesifico
   y puede ser invocada en cualquier parte del codigo

   O sea es un conjunto de instrucciones que tiene un nombre 
   (identificador), puede tener parametros, y puede devolver un valor

   creacion de la funcion

   tipo_retorno identificador (tipo param1, tipo param2){
      conjunto de instrucciones
      
      return valor_retorno
   }

   // llamado a la funcion

   variable = identificador(arg1, arg2)


*/

/// no devolver y no recibir parametros
/// hacer una funcion que lo unico que haga sea
/// mostrar un cartel de bienvenida!
void bienvenida(){
   cout << "Bienvidos a nuestra aplicacion!" << endl;
}

/// no devolvernada y recibir parametros
void saludar(string persona, string profesion){
   cout << "Hola soy " << persona << ", y soy un "<<profesion<<" exitoso!" << endl;
}

/// devolver algo y no recibir parametros
int pedirNumero(){
   int n;
   cout << "Ingrese numero: ";
   cin >> n;
   return n;
}

/// devolver algo y recibir parametros
int pedirNumeroEntre(int min, int max){
   int n;
   cout << "Ingrese un valor entre "<< min << " y " << max << endl;
   cin >> n;
   
   while(n<min || n>max){
      cout << "Valor ingresado incorrecto!"<< endl;
      cout << "Ingrese un valor entre "<< min << " y " << max << endl;
      cin >> n;
   }
   
   return n;
}   

int maximo(int n1, int n2){
   if(n1 > n2){
      return n1;
   }
   else{
      return n2;
   }
}

int main() {
   string nombre, profesion;
   int numero;
   /// llama a la funcion y cuando termina continua la ejecucion
   
   bienvenida(); 
   bienvenida(); 
   
   saludar("Josue Solis", "Programador");
   saludar("Ivan Totilo", "Diseniador Grafico");
   /**
   cout << "Ingrese nombre: ";
   cin >>nombre;
   
   cout << "Ingrese profesion: ";
   cin >> profesion;
   
   saludar(nombre, profesion);
   */
   
   /// saludar("Brian Lara"); // falta el segundo argumento
   /*
   numero = pedirNumero();
   cout << "El numero es: " << numero << endl;
   numero = pedirNumeroEntre(10,20);
   cout << "El numero es: " << numero << endl;
   numero = pedirNumeroEntre(0,100);
   cout << "El numero es: " << numero << endl;
	     */   
   ///                  10                       15
   ///                  10                 15               7
   /**
   int max = maximo(pedirNumero(),maximo(pedirNumero(), maximo(pedirNumero(), pedirNumero())));
   cout << "El mayor es: " << max << endl;
   */
   
   cout << "El maximo es: " << maximo(5,maximo(10,22)) << endl;
	return 0;
}


