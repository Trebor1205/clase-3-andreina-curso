#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy libreria de cadanas
#include <conio.h> // getche() o getch

int main(int argc, char *argv[]) {
	int edad, hombres_empresa, mujeres_empresa, casadas, diferente, hombres_casados;
	char nombre[15], nombre_mayor_ingreso [15];
	char sexo, estado_civil;
	float ingreso, mayor, acum_ingreso_casados, acum_ingreso, porcen_mujeres_casadas, prom_ingreso_casado;
		
	diferente=1;
	hombres_empresa=0;
	casadas=0;
	acum_ingreso_casados=0;
	
	while (diferente!=0){
		printf("Ingrese el nombre del empleado \n");
		scanf ("%s",&nombre);
		
		printf ("Ingrese la edad del empleado: \n");
		scanf ("%i",&edad);
		
		printf ("Ingrese el sexo del empleado: \n");
		printf ("M -> Masculino \n");
		printf ("F -> Femenino \n");
		sexo=getche();
		
		printf ("\n Estado civil del empleado \n");
		printf ("C -> Casado \n");
		printf ("S -> Soltero \n");
		estado_civil=getche();
		
		printf ("\nIngrese el ingreso obtenido del empleado: \n");
		scanf ("%f",&ingreso);
		
		if (sexo== 'm'){
			hombres_empresa++;
		}
		
		if (sexo=='f'){
			mujeres_empresa++;
		}
		
		if (sexo=='f' && estado_civil=='c'){
			casadas++;
		}
		
		if (ingreso>mayor){
		mayor=ingreso;
		strcpy (nombre,nombre_mayor_ingreso); 
		}
		if (sexo=='m' && estado_civil== 'c'){
			acum_ingreso_casados= acum_ingreso_casados+ingreso;
			hombres_casados++;
			
		}
		
		printf ("\nIngrese el numero 0 si ya no desea ingresar mas empleados \n");
		scanf ("%i",&diferente);
	}
	
	porcen_mujeres_casadas= (float)casadas/mujeres_empresa*100;
	prom_ingreso_casado= acum_ingreso_casados/hombres_casados;
	printf ("\n La cantidad de hombres que trabajan en la empresa es de: %i", hombres_empresa);
	printf ("\n El porcentaje de mujeres casadas es de: %f", porcen_mujeres_casadas);
	printf ("\n El empleado que tiene un mayor ingreso es: %s", nombre_mayor_ingreso);
	printf ("\n El promedio de ingresos de los hombres casados es de: %f", prom_ingreso_casado);
	return 0;
}
	
	