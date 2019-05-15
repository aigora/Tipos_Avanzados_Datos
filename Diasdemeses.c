//Autor: Kevin Vejarano Montesinos
//Grupo: Q103
//Descripcion: Es un programa que pide al usuario el numero de dias que tiene cada mes, y lo imprime por pantalla.


#include<stdio.h>

int main()
{
	int mes[12], i;
	for(i=0;i<12;i++){
		printf("Introduce los dias que tiene el mes %d:\n", i+1);
		scanf("%d", &mes[i]);
	}
	
	for(i=0;i<12;i++)
	{
		printf("El mes %d tiene %d dias.\n", i+1, mes[i]);
	}
	
	return 0;
}
