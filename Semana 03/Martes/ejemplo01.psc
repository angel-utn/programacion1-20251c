Algoritmo ejemplo01
	Leer nombre, precio, cantidad
	monto = precio*cantidad
	descuento = 0
	Si monto > 10000 Entonces
		// aplica 15% descuento
		descuento = (monto*15)/100
	SiNo
		// no aplica descuento
	FinSi
	montoFinal = monto - descuento
	Escribir "Monto final: ", montoFinal
FinAlgoritmo
