//Autor: Kevin Vejarano Montesinos
//Grupo: Q103
//Descripcion: Es un programa que pide al usuario una letra y una palabra. Primero sustituye la letra seleccionada por un asterisco en la palabra escrita y se imprime.
//             Finalmente elimina los asteriscos y vuelve a imprimir la palbra sin los asteriscos.

#include<stdio.h>

int main(){
	
	char palabra[50];
	char letra;
	int i, j;
	
	printf("Introduzca una letra:\n");
	scanf("%c", &letra);
	
	printf("Introduzca una palabra:\n");
	scanf("%s", palabra);
	
	i=0;
	while(palabra[i]!='\0')
	{
		if(palabra[i]==letra){
			palabra[i]='*';
		}
	i++;
	}
	printf("palabra: %s\n", palabra);
	
	i=0;
	j=0;
	while(palabra[i]!='\0')
	{
		palabra[i]=palabra[j];
		if(palabra[i]!='*'){
			i++;
		}
	j++;
	}
	printf("palabra: %s\n", palabra);
	
	return 0;
	
	
}

