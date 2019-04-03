/*
Autor: Manuel Dégano
Grupo: Q103
Descripción: Este programa imprime el numero de veces que se repite a e la frase
*/

#include <stdio.h>

void main() 
{
char frase[]="Si los hechos	no encajan en la teoría, cambie	los	hechos. Albert Eisntein"; 
int i, cont=0, longitudfrase=0;
	printf("la frase es:%s\n", frase);
	
	while(frase[i]!='\0')
	{
		longitudfrase++;
		i++;
	}
	printf("longitud(con espacios)= %i\n", longitudfrase);
	
	for (i=0;i<longitudfrase;i++)
	{
		if (frase[i]=='a' || frase[i]=='A')
		{
			cont=cont+1;
		}
	}
	printf("la a se repite %i veces", cont);
}
