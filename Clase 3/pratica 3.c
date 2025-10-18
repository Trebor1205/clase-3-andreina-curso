#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, contador_mayor;
	float acum_suma, promedio, venta;
	acum_suma= 0.00;
	contador_mayor=0;
	for (i=1; i<=15; i++){
		
		printf ("\n Ingrese el ingreso de la venta %i:  \n", i);
		scanf ("%f", &venta);
		
		acum_suma= acum_suma+venta;
		
		if (venta > 50000){
			contador_mayor++;
		}
	}
	
	promedio= acum_suma/15;
	printf ("\n La suma total de ventas es de: %.2f", acum_suma);
	printf ("\n La cantidad de ventas mayores a 50000 es de : %i", contador_mayor);
	printf ("\n El promedio de ventas es de: %.2f", promedio);
	 
	return 0;
}