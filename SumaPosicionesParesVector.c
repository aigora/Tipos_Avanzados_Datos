/* ROCÍO BERZAL CABETAS  Q203*/

#include <stdio.h>
#define N 10

int main()
{
	int v[N], v1[5], suma=0, i;
	
	for (i=0; i<N; i++)
	{
		printf("Introduzca los valores del vector\n");
		scanf("%i", &v[i]);
	}
	
	printf("Vector posiciones pares: ");
	for (i=0; i<N; i++)
	{
		if (i%2==0)//de esta manera se incluye la posicion 0 como par
		{
			printf("%i\t", v[i]);
			suma+=v[i];
		}
	}
	
	printf("\nSuma: %i", suma);
}
