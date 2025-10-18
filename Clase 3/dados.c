#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int suma, dado1, dado2, tiradas_dados;
	while (suma!=7){
		
		printf("\n Ingrese el resultado del dado 1: ");
		scanf ("%i",&dado1);
		
		printf ("\n Ingrese el resultado del dado 2: ");
		scanf ("%i",&dado2);
		tiradas_dados++;
		suma=dado1+dado2;
	}
	
	printf ("Los dados fueron tirados un total de: %i", tiradas_dados);
	return 0;
}