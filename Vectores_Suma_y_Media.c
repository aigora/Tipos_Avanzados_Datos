/*
Autora: Paula de Antonio Grondona
Grupo: Q103
Descripcion: Escribir un vector. Suma y media de vectores.
*/

#include<stdio.h>
#define N 5

int main(){
	int i;
	float v1[N]={1.0, 2.0, 3.0, 4.0, 5.0};
	float v2[N], v3[N];
	float suma, media;
		
	for(i=0; i<5; i++){
		printf("Introduce los valores del vector 2. Posicion %d: ", i+1);
		scanf("%f", &v2[i]);
	}
	
	printf("Vector 1: ");
	for(i=0; i<5; i++){
		printf("%.2f\t", v1[i]);
	} 
	printf("\n");
		
	printf("Vector 2: ");
	for(i=0; i<5; i++){
		printf("%.2f\t", v2[i]);
	}
	printf("\n\n");
	
	printf("Suma de los vectores: ");
	for(i=0; i<5; i++){
		v3[i]=v1[i] + v2[i];
		printf("%.2f\t", v3[i]);
	}
	printf("\n\n");
	
	printf("Media del vector suma: ");
	for(i=0; i<5; i++){
		suma += v3[i];
	}
	media = suma/5.0;
	printf("%.2f", media);
	
	return 0;
}
