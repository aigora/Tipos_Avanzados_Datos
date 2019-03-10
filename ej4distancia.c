/*
Autor: Manuel Dégano
Grupo: Q103
Descripción: Este programa imprime la distancia entre dos puntos en el espacio
*/

#include <stdio.h>
#include <math.h>

void main() 
{
float  v1[2], v2[2], v3[2];
float dist;
int i;
	
	for(i=0;i<2;i++)
	{
		printf("Introduzca el elemento %i del primer vector\n", i+1);
		scanf("%f", &v1[i]);
		printf("Introduzca el elemento %i del segundo vector\n", i+1);
		scanf("%f", &v2[i]);
	}
	
	
	v3[0]=v2[0]-v1[0];
	v3[1]=v2[1]-v1[1];

	dist=sqrt((v3[0]*v3[0])+(v3[1]*v3[1]));
	printf("la distancia es  %f\n", dist);
	
	
	

}
