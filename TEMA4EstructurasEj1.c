// Dalila Martínes Báez
//Pide las coordenadas x e y y te dice en el cuadrante que estas y la distancia entre los dos puntos
#include<stdio.h>
#include<math.h>
typedef struct
{
	float x;
	float y;
}punto;
int main()
 {
 	punto p;
 	float dist;
 	int primCuad,segCuad,terCuad,cuarCuad;
 	printf("Escribe el valor de la coordenada x \n");
 	scanf("%f",&p.x);
 	printf("Escribe el valor de la coordenada y \n");
 	scanf("%f",&p.y);
 		if(p.x>=0 && p.y>=0)
 		{
 			primCuad=1;
 			printf("Esta en el cuadrante %i \n",primCuad);
		 }

 		else if(p.x<0 && p.y>=0)
 		{
 			segCuad=2;
 			printf("Esta en el cuadrante %i \n",segCuad);
		 }
 		
 		else if(p.x>=0 && p.y<0)
 		{
 			terCuad=3;
 			printf("Esta en el cuadrante %i \n",terCuad);
		 }
 		
 		else if(p.x<0 && p.y<0)
 		{
 			cuarCuad=4;
 			printf("Esta en el cuadrante %i \n",terCuad);
		 }
 	dist=fabs(p.x-p.y); //fabs es para poner el valor absoluto
 	printf("Distancia entre los dos puntos es %.3f \n",dist);
 	return 0;
 }
