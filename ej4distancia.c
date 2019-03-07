/*
Autor: Manuel Dégano
Grupo: Q103
Descripción: Este programa imprime la distancia entre dos puntos en el espacio
*/

#include <stdio.h>

void main() 
{
int  v1[2], v2[2], v3[2];
float dist;
	
	printf("introduce las coordenadas del vector 1 y 2\n");
	scanf("%i", &v1[0]);
	scanf("%i", &v1[1]);
	scanf("%i", &v2[0]);
	scanf("%i", &v2[1]);
	
	if (v1[0]>v2[0] && v1[1]>v2[1])
	{	
	v3[0]=v1[0]-v2[0];
	v3[1]=v1[1]-v2[1];
	dist=sqrt((v3[0]*v3[0])+(v3[1]*v3[1]));
	printf("la distancia es  %f\n", dist);
	printf("el vector distancia es v3={ %i , %i }", v3[0], v3[1]);
	}
	
	else if (v1[0]<v2[0] && v1[1]>v2[1])
	{
	v3[0]=v2[0]-v1[0];
	v3[1]=v1[1]-v2[1];
	dist=sqrt((v3[0]*v3[0])+(v3[1]*v3[1]));
	printf("la distancia es  %f\n", dist);
	printf("el vector distancia es v3={ %i , %i }", v3[0], v3[1]);
	}
	
	else if (v1[0]>v2[0] && v1[1]<v2[1])
	{
	v3[0]=v1[0]-v2[0];
	v3[1]=v2[1]-v1[1];
	dist=sqrt((v3[0]*v3[0])+(v3[1]*v3[1]));
	printf("la distancia es  %f\n", dist);
	printf("el vector distancia es v3={ %i , %i }", v3[0], v3[1]);
	}
	
	else if (v1[0]<v2[0] && v1[1]<v2[1])
	{
	v3[0]=v2[0]-v1[0];
	v3[1]=v2[1]-v1[1];
	dist=sqrt((v3[0]*v3[0])+(v3[1]*v3[1]));
	printf("la distancia es  %f\n", dist);
	printf("el vector distancia es v3={ %i , %i }", v3[0], v3[1]);
	}
}
