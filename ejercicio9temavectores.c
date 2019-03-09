//Andrea Blas Murillo
//Q-103
//Descripcion: Ejercicio 9 Tema 4


#include <stdio.h>

void main(){
	
	float vector[10],numeroMax,numeroMin;
	int i;
	
	
	//PARA INTRODUCIR LOS 10 ELEMENTOS DEL VECTOR
	for(i=0;i<10;i++){
		
		printf("Introduzca el elemento %i del vector:\n",i+1);
		scanf("%f",&vector[i]);
	}
	
	//ELEMENTO MAXIMO Y MINIMO DEL VECTOR
	numeroMax=vector[0];
	numeroMin=vector[0];
	for(i=0;i<10;i++){
		if(vector[i]>numeroMax){
			numeroMax=vector[i];
		}
		
		if(vector[i]<numeroMin){
			numeroMin=vector[i];
		}
	}

	printf("El elemento mayor del vector introducido por el usuario es %f.\n",numeroMax);
	printf("El elemento menor del vector introducido por el usuario es %f.\n",numeroMin);



}

