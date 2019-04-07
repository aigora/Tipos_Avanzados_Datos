/*
Diego Gómez
Q103
Ing.Quimica
Descripcion:   Introduzca  una  frase.  Imprima  cada  palabra  en  una  nueva  línea.   
*/
#include<stdio.h>

int main()
{
	int i=0;
	char frase[50];
	
	printf("introduzca una frase:\n");
	gets(frase);
	
	while(frase[i]!='\0')
	{
		if(frase[i]!=' ')
		{
			printf("%c", frase[i]);
		}
		else
		{
			printf("\n");
		}
		
		i++;
	}
	
	
	
	
	
	return 0;
}
