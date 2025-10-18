#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	char nombre [15];
	float nota1, nota2, nota3, suma, prome;
	printf("Bienvenidos \n");
	printf ("Ingresa tu nombre \n");
	scanf ("%s", nombre);
	
	printf("Ingrese las nota 1: ");
	scanf ("%f",& nota1);
	printf("Ingrese las nota 2: ");
	scanf ("%f",& nota2);
	printf("Ingrese las nota 3: ");
	scanf ("%f",& nota3);
	
	
	suma= nota1+nota2+nota3;
	prome= suma/3;
	
	printf ("Su nombres es: %s \n", nombre);
	printf ("La suma de las notas es: %.2f \n", suma);
	printf ("El promedio de %s es de: %.2f \n", nombre, prome);
	return 0;
}