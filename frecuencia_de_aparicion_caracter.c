/*

Rosa Silverio Guzman
Q103
Definicion:  Frecuencia con la que  aparece un caracter, de un texto introducido por teclado ,y su valor en la tabla ASCII
*/

#include <stdio.h>

int main ()
{
	char texto[1000], caracter;
	int i,frecuencia;
	
	printf("Introduce el texto\n");
	gets(texto);
	
	printf("Escoge el caracter sobre el cual quieres saber cuantas veces aparece en el texto\n");
	scanf("%c",&caracter);
	
	frecuencia= 0;
	
	for ( i=0 ; texto[i] != '\0' ; i++)
	{
		if ( texto[i] == caracter)
		{
			frecuencia++;
		}
	}
	
	printf("El numero de veces que aparece %c es %d\n ",caracter,frecuencia);
	
	printf(" El valor de %c en la tabla ASCII es %i\n",caracter,caracter);
	
	
	
	return 0;
	
	
}
