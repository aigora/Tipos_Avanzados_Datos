#include <stdio.h>
#include <string.h>

void main()
{
	char nombre_completo[100];
	char nombre[20];
	char apellido1[40];
	char apellido2[40];
	
	printf("Intrduzca su nombre:");
	scanf("%s",nombre);
	printf("Introduzca su primer apellido:");
	scanf("%s",apellido1);
	printf("Introduzca su segundo apellido:");
	scanf("%s",apellido2);
	
	strcpy(nombre_completo,nombre);
	strcat(nombre_completo," ");
	strcat(nombre_completo,apellido1);
	strcat(nombre_completo," ");
	strcat(nombre_completo,apellido2);
	printf("\n");
	printf("El nombre completo introducido es: %s",nombre_completo);	
}
