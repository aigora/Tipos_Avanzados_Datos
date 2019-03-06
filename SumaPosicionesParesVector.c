/* ROCÍO BERZAL CABETAS  Q203*/

#include <stdio.h>
#define N 10

int main()
{
	int v[N], v1[5], suma, i;
	
	for (i=0; i<N; i++)
	{
		printf("Introduzca los valores del vector\n");
		scanf("%i", &v[i]);
	}
	
	for (i=0; i<N; i++)
	{
		if (i%2==0)
		{
			printf("Vector posiciones pares: %i\n", v[i]);
			suma+=v[i];
		}
	}
	
	printf("Suma: %i", suma);
}
