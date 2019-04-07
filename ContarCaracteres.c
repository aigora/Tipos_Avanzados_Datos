/*
Autor: Diego Medina
Grupo:Q103
Descripción: Este programa cuenta los caracteres de una frase introducida
*/

#include<stdio.h>
int main ()

{
	char frase[100];
	int i=0;
	printf("Introduce una frase sin espacios\n");
		gets(frase);
	
	while(frase[i]!= '\0')
	{
		i++;
	}
	printf("La frase tiene %d caracteres",i);
}
