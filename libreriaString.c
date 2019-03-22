#include<stdio.h>
#include<string.h>
/* Autora: Dalila Martinez Baez Q103
El programa consiste en mostrar en pantalla las dos frases pedidas al usuario y contar los caracteres de dichas frases*/
int main()
{
	char frase1[100];
	char frase2[100];
	char texto[200];
	int longitudTotal,long1,long2;
	printf("Escribe la primera frase \n");
	gets(frase1);
	printf("Escribe la segunda frase \n");
	gets(frase2);
	//long1=strlen(frase1);
	//long2=strlen(frase2);
	//longitudTotal=long1+long2;
	strcpy(texto,frase1);
	strcat(texto," ");
	strcat(texto,frase2);
	printf("%s \n",texto);
	longitudTotal=strlen(texto);
	printf("El texto con espacios tiene %i caracteres",longitudTotal);
		
	return 0;
}
