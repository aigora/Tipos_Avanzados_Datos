//Autora: Laura �beda Mu�oz
//Grupo: Q103
//Descripci�n: Este programa lee una palabra y la escribe al rev�s

#include <stdio.h>

void main () {
	char palabra [20];
	int i=0;
	
	printf("Escriba una palabra:\n");
	scanf("%s", palabra);

while (palabra[i++]!='\0');
printf("%s escrita al reves es:", palabra);

while(i>1)
printf("%c", palabra[--i]);
}
