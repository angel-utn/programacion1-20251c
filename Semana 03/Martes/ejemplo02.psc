Algoritmo ejmplo02
	Escribir "INGRESE SALUD (1-BUENA 0-MALA)"
	Leer salud
	Escribir "INGRESE ANIMO (1-BUENA 0-MALA)"
	Leer animo
	Escribir "INGRESE TIEMPO (1-BUENA 0-MALA)"
	Leer tiempo
	Si salud==0 Entonces
		Escribir "NO RINDE"
	SiNo
		Si ANIMO==0 Entonces
			Escribir "NO RINDE"
		SiNo
			Si TIEMPO==0 Entonces
				Escribir "NO RINDE"
			SiNo
				Escribir "RINDE"
			FinSi
		FinSi
	FinSi
FinAlgoritmo
