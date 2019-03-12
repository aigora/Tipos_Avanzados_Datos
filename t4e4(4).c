#include<stdio.h>
#include<math.h>

void main(){
	
	float v[3];
	float w[3];
	float resta[3];
	int i;
	float dist;
	
	printf("Escriba las coordenadas de dos puntos en el espacio\n");
	for (i=0;i<3;i++){
		scanf("%f ",&v[i]);
	}
	for (i=0;i<3;i++){
		scanf("%f ",&w[i]);
	}
	
    for (i=0;i<3;i++){
    	resta[i]=w[i]-v[i];
		dist=sqrt(pow(resta[0],2)+pow(resta[1],2)+pow(resta[2],2));
		}	
	printf("Distancia entre los puntos:  %f\n",dist);	
		
}

