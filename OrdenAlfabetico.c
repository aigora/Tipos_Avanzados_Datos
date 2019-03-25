/*
Diego Gómez
Grupo Q103
Programa que compara 2 frases o palabras e imprime si estan ordenadas o no alfabeticamente.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char caracteres_1[80],caracteres_2[80];
	int orden;
	
	printf ("Introduzca una palabra o frase: ");
	gets(caracteres_1);
	printf ("Introduzca otra palabra o frase: ");
	gets(caracteres_2);
	
	orden=strcmp(caracteres_1,caracteres_2);
	if(orden==0)
	{
		printf("Iguales\n");
	}
	
	else if(orden==-1)
	{
		printf("Estan ordenadas alfabeticamente\n");
	}
	
	else if(orden==1)
	{
		printf("No ordenadas alfabeticamente\n");
	}

}
