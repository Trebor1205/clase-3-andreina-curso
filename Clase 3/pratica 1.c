#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float costo, inicial, mensual, ingreso;
	printf ("Ingrese el costo: \n");
	scanf ("%f",& costo);
	
	printf ("Ingrese el ingreso del comprador: \n");
	scanf ("%f", & ingreso);
	
	if (ingreso<8000){
		inicial=costo*0.15;
		mensual= (costo-inicial)/180;
	}
	else{
		inicial=costo*0.25;
		mensual= (costo-inicial)/96;	
	}
	
	printf ("\n La cuota inicial es de: %f", inicial);
	printf ("\n La cuota mensual es de: %f", mensual);
return 0;
	
	
