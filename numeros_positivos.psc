Proceso numeros_positivos
	definir numer, acumulador Como Entero;
	
	acumulador<-0;
	Repetir
		Escribir "Ingrese el un numero: ";
		Leer numer;
		si numer>-1 Entonces
			acumulador<- acumulador+numer;
		FinSi
		
		
	Hasta Que numer<0; 
	
	Escribir "La suma de los numeros es de: ",acumulador;
FinProceso
