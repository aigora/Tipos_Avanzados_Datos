/*Raquel Robledo Sedano
 Q-103
 Descripción: Ejercicio 3 , Tema 4.VECTORES.*/

#include <stdio.h>

void main(){

	float vector1[5], vector2[5],vectorsuma[5];
	int i,n;
	
	
	for(i=0;i<5;i++){
		
		printf("Introduce numero %i de ambos vectores:\n",i+1);
		scanf("%f", &vector1[i]);
		scanf("%f",&vector2[i]);
		
	}
	
	//Sumamos el primer elemnto del vector uno con el ultimo del vector dos;
	//el segundo del primer vector con el penultimo elemento del segundo vector y asi sucesivamente... y cada elemento sumado lo guardamos en el vector suma.
	
	n=4;
	
	for(i=0;i<5;i++){
		vectorsuma[i]=vector1[i]+vector2[n];
		n--;
	}
	//Mostramos el vector:
		for(i=0;i<5;i++){
	printf(" %f ",vectorsuma[i]);

	}

}

