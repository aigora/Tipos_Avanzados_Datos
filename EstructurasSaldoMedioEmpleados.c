/*
Autora: María Fermosel Álvarez
Curso: Q103
Descripción: Programa que calcula el saldo medio de unos empleados
*/

#include<stdio.h>

typedef struct
{
	int horas;
	float sueldo;
	char categoria;
}empleados;

int main()
{

	int i, N;
	float sueldomedio;

	printf("de cuantos empleados quieres calcular el saldo?\n");
	scanf("%d", &N);

	empleados empleado[N];
	
	for(i=0;i<N;i++)
	{
		printf("empleado %d:", i+1);
		printf(" Cual es la categoria y las horas trabajadas\n");
		scanf("%s %d", &empleado[i].categoria, &empleado[i].horas);
	}
	for(i=0;i<N;i++)
		printf(" horas trabajadas: %d\n", empleado[i].horas);

	i=0;
	
	for(i=0; empleado[i].categoria != '\0';i++)
	{
		if(empleado[i].categoria=='a')
			empleado[i].sueldo=27.5*(empleado[i].horas);
		else if(empleado[i].categoria=='b')
			empleado[i].sueldo=20*(empleado[i].horas);
		else if(empleado[i].categoria=='c')
			empleado[i].sueldo=18.2*(empleado[i].horas);
	}
	i=0;
	for(i=0;i<N;i++)
	{
		printf("empleado %d:", i+1);
		printf("sueldo: %f\n", empleado[i].sueldo);
	}

	for(i=0;i<N;i++)
	{
		sueldomedio +=empleado[i].sueldo;
	}
	printf("el suelo medio es: %f\n", sueldomedio/N);

	return 0;
}
