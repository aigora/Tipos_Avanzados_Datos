/*
Autor Marcos Calderon Jimeno
descripcion: Escribe el vector desde el ultimo valor al primero
*/
#include <stdio.h>
#define N 4
void main()
{
	int i;
	float v1[N],v2[N];
	printf("Primer vector:\n");
	for (i=0;i<N;i++)
	{
		printf("Posicion %i:\n",i+1);
		scanf("%f",&v1[i]);
	}
	int j=3;
	for (i=0;i<N;i++)
	{
		v2[i] = v1[j];
		j--;
		printf("%f\t",v2[i]);
	}

}
