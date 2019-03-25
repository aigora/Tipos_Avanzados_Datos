//Autora: Laura Úbeda Muñoz
//Grupo: Q103
//Descripción: Este programa lee una palabra y la escribe al revés.

#include <stdio.h>

void main () {
	char palabra [20];
	int i=0;
	
	printf("Escriba una palabra:\n");
	scanf("%s", palabra);

while (palabra[i++]!='\0');
printf("%s escrita al reves es:", palabra);

while(i>=1)
printf("%c", palabra[--i]);
}
