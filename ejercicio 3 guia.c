#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char nombre_cliente [15];
	float costo_vehiculo, cuota, cuotas_mensuales, restante;

	printf ("Ingrese el nombre del cliente: \n");
	scanf ("%s", nombre_cliente);
	
	printf ("Ingrese el costo del vehiculo: \n");
	scanf ("%f",&costo_vehiculo);
	
	cuota=costo_vehiculo*0.30;
	restante=costo_vehiculo-cuota;
	cuotas_mensuales=restante/24;
	
	printf ("Cliente: %s \n", nombre_cliente);
	printf ("La cuota inicia es de: %.2f \n", cuota);
	printf ("Las cuatas mensuales son de: %.2f \n", cuotas_mensuales);
	return 0;
}