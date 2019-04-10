/*
Alumno: Adrian Triner Anton Q103
Este programa calcula la nota media entre el numero de alumnos 
*/

#include <stdio.h>

struct alumno
{
	char nombre[20];
	char apellido[20];
	float nota_acceso;
};
int main ()
{
	int i,num_alumnos;
	float media=0;
	struct alumno datos[30];
	printf("Introduzca el numero de alumnos: ");
	scanf("%d",&num_alumnos);
	for(i=0;i<num_alumnos;i++)
	{
		printf("Alumno %d\n",i+1);
		printf("Introduzca el nombre: ");
		scanf("%s",&datos[i].nombre);
		printf("Introduzca el apellido: ");
		scanf("%s",&datos[i].apellido);
		printf("Introduzca la nota de acceso: ");
		scanf("%f",&datos[i].nota_acceso);
	}
	for(i=0;i<num_alumnos;i++)
	{
		media+=datos[i].nota_acceso/num_alumnos;
	}
	printf("La nota media es %f\n",media);
}
