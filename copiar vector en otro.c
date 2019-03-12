/* 
Autor: SERGIO TORRES MADRAZO
Grupo: Q103
Descripcion: Copiar el contenido de un vector1 de 5 elementos hacia 
otro vector2 en forma descendente
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	
	int vector1[5];
	int vector2[5];
	int i;
	
	printf("Teclee los elementos de su vector\n: ");
	for(i=0; i<5; i++){
	scanf("%d",&vector1[i]);
	
	}
	
	
	for(i=0;i<5;i++){
		
		vector2[i]=vector1[4-i]; 
	}
		printf("Su vector en orden inverso es:");
	for(i=0;i<5;i++){
		printf("\n %i",vector2[i]);
	}	
	
	getch();
	return 0;
}



