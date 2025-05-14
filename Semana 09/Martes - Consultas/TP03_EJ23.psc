Algoritmo TP03_EJ23
	cduplas = 0
	cimpar = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		Si (num%2 != 0) Entonces
			cimpar = cimpar+1
		SiNo
			cimpar = 0
		FinSi
		Si (cimpar == 2) Entonces
			cduplas = cduplas + 1
			cimpar = 1
		FinSi
	FinPara
	Escribir "Total de duplas: ", cduplas
FinAlgoritmo
