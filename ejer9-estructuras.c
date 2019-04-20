/*
ROSA SILVERIO GUZMAN
Q103 
EJERCICIO 9-T4(ESTRUCTURAS): COMPARACION DEL AREA DE DOS TRIANGULOS
*/

#include<stdio.h>
#include<string.h>
#define N 2

struct triangulo
{
	float base,altura;
};

void main()
{
	struct triangulo triangulo[N];
	int i,j=0;
	float area[2],resultado;
	
	for(i=1 ; i<=2 ; i++)
	{
		printf("Introduce el valor de la base del triangulo%i\n",i);
		scanf("%f",&triangulo[i].base);
		printf("Introduce el valor de la altura del triangulo%i\n",i);
		scanf("%f",&triangulo[i].altura);
		area[j]=(triangulo[i].altura*triangulo[i].base)/2;
		j++;
	}
	
	if(area[0]>area[1])
	{
		printf("El area del primer triangulo es la mayor");
	}
	else if(area[0]==area[1])
	{
		printf("Los dos triangulos tienen la misma superficie");
	}
	
	else
	{
		printf("El area del segundo triangulo es la mayor");
	}
	
}
