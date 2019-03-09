#include <stdio.h>
#define N 10
void main()
{
	int i,j;
	float max,min;
	float v[N];
	printf("Escribe el vector de 10 posiciones qu equieras:\n");
	for(i=0;i<N;i++)
	{
		printf("Posicion %i:  ",i+1);
		scanf("%f",&v[i]);
		printf("\n");
	}
	printf("Ahora encontraremos el valor maximo y el minimo del vector:\n");
	max = v[0];
	min = v[0];
	for(i=0;i<N;i++)
	{
		if(v[i] > max )
		{
			max = v[i];
		}
		else if (v[i] < min)
		{
			min = v[i];
		}	
	}
	printf("El maximo es: %.2f\n",max);
	printf("El minimo es: %.2f\n",min);
}
