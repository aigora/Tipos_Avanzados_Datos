//Hugo Rivera Rodríguez
//Q-103
//Ejercicio 1, Tema 4
#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	float vector1[5]={1,2,3,4,5},vector2[5],vectorsuma[5],suma=0,media;
	printf("Introduzca 5 elementos:\n");
	for(i=0;i<5;i++)//Le pido 5 números al usuario y los guardo en un vector
	{
		printf("Introduzca el elemento %d:\n",i+1);
		scanf("%f",&vector2[i]);
	}
	printf("La suma de los dos vectores son:\n");
	for(i=0;i<5;i++)
	{
		vectorsuma[i]=vector1[i]+vector2[i];//Sumo elemento a elemento y los guardo en vectorsuma
		printf("%.2f\t",vectorsuma[i]);//Imprimo por pantalla vector suma
	}
	printf("\n");//Hueco para separar los datos de la media
	for(i=0;i<=5;i++)
	{
		suma+=vectorsuma[i];//Calculo la media de vector suma
	}
	media=suma/5;
	printf("La media es %.2f\n",media);
}
