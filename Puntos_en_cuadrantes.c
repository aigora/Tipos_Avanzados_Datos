/*Autor: Marcos Calderon Jimeno Q103
Ej 2 estructutas
El programa pide que introduzcas el numero de puntos que quieras introducir y luego teclear las coordenadas
x e y de cada punto. Te colocara cada punto en su cuadrante correspondiente y luego te dira cuantos puntos hay en cada cuadrante*/

#include <stdio.h>
#include <math.h>
#define N 20
struct coordenadas
{
	float x;
	float y;
};
void main()
{
	int i,n;
	int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
	float res;
	struct coordenadas punto[N];
	
	printf("Introduce el numero de puntos que desees introducir:\n");
	scanf("%i",&n);
	for(i=0;i<n;i++)
	{
		printf("Punto numero %i:\n",i+1);
		printf("\n");
		printf("Coordenada x:");
		scanf("%f",&punto[i].x);
		printf("Coordenada y:");
		scanf("%f",&punto[i].y);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("Punto %i\n",i+1);
		if(punto[i].x>0 && punto[i].y>0)
		{
			printf("Esta en el cuadrante 1\n");
			cont1++;
		}
		else if(punto[i].x<0 && punto[i].y>0)
		{
			printf("Esta en el cuadrante 2\n");
			cont2++;
		}
		else if(punto[i].x<0 && punto[i].y<0)
		{
			printf("Esta en el cuadrante 3\n");
			cont3++;
		}
		else if(punto[i].x>0 && punto[i].y<0)
		{
			printf("Esta en el cuadrante 4\n");
			cont4;
		}
		else if(punto[i].x==0 || punto[i].y==0)
		{
		printf("El punto esta en el centro de coordenadas o entre dos cuadrantes\n");
		}
		else
		{
			printf("Punto mal tecleeado\n");
		}
		printf("\n");
	}
	printf("El cuadrante 1 tiene %i puntos\n",cont1);
	printf("El cuadrante 2 tiene %i puntos\n",cont2);
	printf("El cuadrante 3 tiene %i puntos\n",cont3);
	printf("El cuadrante 4 tiene %i puntos\n",cont4);
	printf("Entre dos ejes o en el centro de coordenadas tiene %i puntos\n",cont4);
	
	
}
