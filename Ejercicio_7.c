//Diego Gómez Garrido
//Q103
//Ing.Quimica



#include <stdio.h>

int main()
{
	int x, i, rep=0;
	printf("Introduzca cuantos elementos tiene el vector: \n");
	scanf("%i", &x);
	
	float v1[x];
	for(i=0;i<x;i++)
	{
		printf("Introduzca el elemento %i del vector: \n", i+1);
		scanf("%f", &v1[i]);	
	}
	
	for(i=0;i<x;i++)
	{
		if(v1[0]==v1[i])
		{
			rep=rep+1; //rep+=1
			}	
	}
	
	printf("Se repite el elemento %i veces", rep);
	return 0;
}
