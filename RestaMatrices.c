//Autor: Kevin Vejarano Montesinos
//Grupo: Q103
//Descripcion: Resta de dos matrices sabidas e imprime la matrices que se restan y la resultante.

#include<stdio.h>

int main(){
	int i,j;
	int matriz1[3][3]={2,4,6,8,10,12,14,16,18,20};
	int matriz2[3][3]={1,3,5,7,9,11,13,15,17,19};
	int matriz3[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz3[i][j]=matriz1[i][j]-matriz2[i][j];
		}
	}
	printf("Matriz 1:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", matriz1[i][j]);
		}
	printf("\n");
	}
	
	printf("\n");
	printf("Matriz 2:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", matriz2[i][j]);
		}
	printf("\n");
	}
	
	printf("\n");
	printf("La matriz resultante de la resta de matriz 1 y matriz 2 es:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", matriz3[i][j]);
		}
	printf("\n");
	}
	
	return 0;
}
