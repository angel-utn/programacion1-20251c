Algoritmo sin_titulo
	Escribir 'Ingrese cantidad de harina (gramos): '
	Leer cantidadHarina
	sobrante = cantidadHarina%200
	cantidadPanes = (cantidadHarina-sobrante)/200
	Escribir 'La cantidad de panes son: ',cantidadPanes
FinAlgoritmo
