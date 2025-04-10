#include <iostream>

using namespace std;

/**
    HACER UN PROGRAMA QUE PERMITA INGRESAR UNA VENTA, LA CUAL RECIBE UN 15%
    DE DESCUENTO SI EL MONTO A PAGAR SUPERA LOS 10.000 PESOS.

    POR CADA VENTA SE REGISTRA:
        NOMBRE PRODUCTO
        PRECIO UNITARIO DEL PRODUCTO
        CANTIDAD DE UNIDADES VENDIDAS

    SE PIDE UN PROGRAMA QUE PERMITA INGRESAR UNA VENTA Y LUEGO DETERMINAR Y MOSTRAR EL MONTO FINAL A PAGAR.

    1.IDENTIFICAR EL PROBLEMA
        CALCULAR EL MONTO FINAL

    2.ANALISIS
        DE -> NOMBRE, PRECIO, CANTIDAD
        DO -> DESCUENTO (15%) SI MONTO SUPERA 10000 PESOS
        DS -> MOSTRAR EL MONTO FINAL

    3.ESTRATEGIA
        -PEDIR EL NOMBRE, EL PRECIO Y LA CANTIDAD
        -CALCULAR MONTO FINAL
            -CALCULAR MONTO
            -VERIFICAR SI APLICO O NO EL DESCUENTO
        -MOSTRAR MONTO FINAL

    4.DISEÑO ALGORITMO
	
	5.CODIFICACIÓN
	
	6.TESTEO/PRUEBA/DEPURACIÓN
	
	7.DOCUMENTACIÓN
*/

int main(){

    /// DECLARACION DE VARIABLES
    string nombre;
    float precio, monto, descuento, montoFinal;
    int cantidad;

    /// ENTRADA DE DATOS
    cout << "Ingrese nombre producto: ";
    cin >> nombre;

    cout << "Ingrese precio producto: ";
    cin >> precio;

    cout << "Ingrese cantidad producto: ";
    cin >> cantidad;

    /// OPERACIONES / DECISIONES
    monto = precio*cantidad;

	descuento = 0;
	
    if(monto > 10000){
        descuento = (monto*15)/100;
    }

    montoFinal = monto - descuento;

    /// SALIDA DE INFORMACION
    cout << "Monto final $: " << montoFinal << endl;

	return 0;
}
