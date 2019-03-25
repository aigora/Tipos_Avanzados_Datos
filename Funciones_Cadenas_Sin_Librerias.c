/*Nombre: Marcos Calderon Jimeno Q103
Descripcion: programa que realiza algunas de las funciones de la libreria string.h sin necesidad de ella.
Tema: Cadenas de caracteres*/

#include <stdio.h>
#define N 50
void main()
{
	//Strlen
	printf("STRLEN SIN LIBRERIA\n");
	printf("\n\n");
	int i=0,j=0;
	char copia[N],destino[N];
	char nombre[N];
	char nom[N];
	char apellido[N];
	
	printf("Escriba su nombre:\n");
	scanf("%s",nombre);
	while (nombre[i] != '\0')
	{
		i++;
	}
	printf("Su nombre tiene %i caracteres\n",i);
	
	//strcpy
	printf("\n\n");
	printf("STRCPY SIN LIBRERIA\n");
	printf("\n\n");

	printf("Escribe la frase que desee copiar:\n");
	fflush(stdin);
	gets(copia);
	i=0,j=0;
	while(copia[i]!='\0' || destino[j]!='\0')
	{
		destino[j]=copia[i];
		j++;
		i++;
	}
	printf("Su copia es %s\n",destino);
	
	//strcat
	printf("\n\n");
	printf("STRCAT SIN LIBRERIA\n");	
	printf("\n\n");
	printf("Introduzca su nombre:\n");
	gets(nom);
	printf("Introduzca su apellido:\n");
	gets(apellido);
	printf("Su nombre completo es %s %s \n",nom,apellido);
	
	//strcmp
	//seguro que hay alguna manera de hacerlo mas facil
	printf("\n\n");
	printf("STRCMP SIN LIBRERIA\n");
	char frase1[N],frase2[N];
	int a,b,cont;
	printf("\n\n");
	printf("Escribe la frase 1:\n");
	gets(frase1);
	printf("Escribe la frase 2:\n");
	gets(frase2);
	i=0;j=0;
	while (frase1[i]!='\0')
	{
		i++;
	}
	while (frase2[j]!='\0')
	{
		j++;
	}
	if(i==j)
	{
		i=0;
		j=0;
		while(frase2[j]!='\0' || frase1[i]!='\0')
		{
			if(frase1[i]==frase2[j])
			{
				cont=0;
			}
			else if(frase1[i]!=frase2[j])
			{
				cont=1;
				break;
			}
			
			i++;
			j++;
		}
		if(cont==0)
		{
			printf("Las frases son iguales\n");
		}
		else if(cont==1)
		{
			printf("Las frases son desiguales\n");
		}
	}
	else
	{
		printf("Las frases son desiguales\n");
	}
	
	
}
