/* Rocio Berzal Cabetas
Q103
Ejercicio 10 vectores: producto escalar*/

#include<stdio.h>

int main()
{
	int n, res, i;
	
	printf("Tamaño vector :");
	scanf("%i", &n);
	
	int v1[n], v2[n];
	
	printf("Vector 1:");
	for (i=0; i<n; i++)
	{
		scanf("%i", &v1[i]);
	}
	
	printf("Vector 2:");
	for(i=0; i<n; i++)
	{
		scanf("%i", &v2[i]);
	}
	
	for (i=0;i<n; i++)
	{
		res+=v1[i]*v2[i];
	}
	printf("Resultado %i\n", res);
	
}
