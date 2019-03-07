/*Raquel Robledo Sedano
 Q-103
 Descripción: Ejercicio 10 , Tema 4.VECTORES.*/
#include <stdio.h>

void main(){
	int x,i;

  //como el ejercicio no nos dice cunatos elementos tienen que tener los vectores, tambien los elije el usuario: 
	printf("Introducir el numero de elementos para los vectores:\n");
	scanf("%i",&x);
	
	float solucion,vector1[x], vector2[x];
	
	for(i=0;i<x;i++){
		printf("Introducir el elemento %i del primer y del segundo vector:\n",i+1);
		scanf("%f", &vector1[i]);
		scanf("%f", &vector2[i]);
	}
	
	for(i=0;i<x;i++){
		
		solucion+=vector1[i]*vector2[i];
	}

printf("El producto escalar de ambos vectores es %f .\n",solucion);

}

