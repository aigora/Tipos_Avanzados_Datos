/*
Autora: María Fermosel Álvarez
Grupo Q103
Descripción: Pide que introduzcas una frase y te imprime una palabra en cada linea
*/

#include<stdio.h>
#include<string.h>
#define N 4
int main()
{
	char texto[100];
 	int i;
 	printf("introduce una frase\n");
 	
 	fgets(texto, 100, stdin); //forma de pedir una frase, ya que con scanf solo te permite pedir una palabra
	
	for(i=0;texto[i] != '\0';i++)
		{
			if(texto[i]==' ')
				texto[i]=('\n');
		}
	printf("%s", texto);
	return 0;
}
