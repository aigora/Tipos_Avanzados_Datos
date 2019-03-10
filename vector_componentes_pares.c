/* Maria Cruz Batista Gil
Grupo: Q103
Descripción: Este programa imprime en un nuevo vector los números de los componentes pares.*/

#include <stdio.h>
#define elementos 10

int main (){
	
	int i, a[elementos]={1,2,3,4,5,6,7,8,9,10}, vectorpares[elementos/2], suma=0;
	
	for (i=0;i<10;i=i+2){ //i=i+2 el programa va de dos en dos.
		
		vectorpares[i]=a[i];
		printf("%d \n",vectorpares[i]);
		suma+=vectorpares[i];
	}
	printf("La suma de sus componentes es:%d",suma);
	
	
	return 0;
}
