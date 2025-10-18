Proceso ciclos_repetitivos1
	Definir monto_ventas, promedio, monto_mayor, acumu, mayor Como Real;
	Definir respuesta Como Caracter;;
	Definir contador Como Entero;
	
	Escribir "Desea procesar un vendedor s/n";
	Leer respuesta;
	acumu<-0;
	contador<-0;
	monto_mayor<--1;
	
	mientras (respuesta="s") Hacer
		contador<-contador+1;
		Escribir "Ingrese monto de ventas del vendedor ", contador;
		Leer monto_ventas;
		
		acumu<- acumu+ monto_ventas;
		
		si monto_ventas> monto_mayor Entonces
			monto_mayor<-monto_ventas;
		FinSi
		
		Escribir "El monto del vendedor: ", monto_ventas;
		Escribir "Desea ingresar otro vendedor s/n";
		Leer respuesta;
	FinMientras
	
	promedio<-acumu/contador;
	
	Escribir "El promedio de ventas es de:", promedio;
	Escribir "El monto mayor es de:", monto_mayor;
	
FinProceso
