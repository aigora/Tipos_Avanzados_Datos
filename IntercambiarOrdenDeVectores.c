/*
Autora: María Fermosel Álvarez
Grupo Q103
Descripción: Pide que introduzcas un vector y te lo devuelve al revés
*/

#include<stdio.h>
#define N 4
int main()
{
	int v[N], i, j;
	printf("introduce un vector\n");
	for(i=0;i<N;i++)
	{
		printf("dato %d     ", i+1);
		scanf("%d", &v[i]);
	}
	printf("el vector que acabas de introducir con el orden intercambiado es: ");
	for(j=N-1;j>=0;j--)
		printf("%d", v[j]);
		
	return 0;
}
