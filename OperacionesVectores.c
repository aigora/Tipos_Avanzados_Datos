/*
Autor: Diego Medina
Grupo:103
Descaripción: Este programa  calcula sumas y restas entre dos vectores
*/
#include <stdio.h>

int main()
{

int a,b,opcion;
float vector1[a], vector2[a],resultado;
	
	printf("Introduce la longitud de los vectores:\n");
		scanf("%i",&a);
		
for(b=0;b<a;b++)
	{
		printf("Introducie el elemento %i del primer y del segundo vector:\n",b+1);
			scanf("%f", &vector1[b]);
			scanf("%f", &vector2[b]);
	}
	printf(" Operaciones Con los Vectores Introducidos:\n\n");
	printf("1. Suma de vectores\n");
	printf("2. Resta de vectores\n");
	
do {
	
	printf("\nElige una opcion para continuar:\n");
	
	scanf("%d", &opcion);
	}
	
while (opcion > 2 || opcion <=0);
	
	switch (opcion)
	{
		case 1:
				for(b=0;b<a;b++)
				{
		
				resultado+=vector1[b]+vector2[b];
				}
				printf("El resultado es: %f\n",resultado);
			break;
		
		case 2:
				for(b=0;b<a;b++)
				{
		
				resultado-=vector1[b]-vector2[b];
				}
				printf("El resultado es: %f\n",resultado);
			break;
		
	
	
		
return 0;

}
}
