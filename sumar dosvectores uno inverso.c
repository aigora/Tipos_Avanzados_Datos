/*
Autor: SERGIO TORRES MADRAZO
Grupo: Q103

Descripcion: sumar dos vectores uno en sentido inverso
*/

#include<stdio.h>
#include<conio.h>

int main(){
	int vector1[]={1,2,3,4,5};
	int vector2[]={6,3,2,5,1};
	int vector_suma[5];
	
	int i, n;
	n=4;
	for(i=0;i<5;i++){
		vector_suma[i]=vector1[i]+vector2[n];
		n--;
	
	}
	
	printf("El vector suma es:\n");
	for(i=0;i<5;i++){
	
	printf("%i\n", vector_suma[i]);
		
	}	
			
	
	getch();
	return 0;
}
