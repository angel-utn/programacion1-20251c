Algoritmo sin_titulo
	Escribir 'Ingrese el importe: '
	Leer importe
	Si importe>10000 Entonces
		descuento = importe*0.1
	SiNo
		descuento = 0
	FinSi
	monto = importe-descuento
	Escribir 'Monto: ',monto
FinAlgoritmo
