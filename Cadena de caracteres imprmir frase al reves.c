/*Marta Esparcia
Grupo:Q103*/

/*Ejercicio	2: Introduzca una	frase	cualquiera	por	teclado	e	imprímala	al	revés.	(ejemplo:	casa	à asac).*/
#include<stdio.h>
int main (){
	char frase[50], letra;
	int i,j,longitudfrase=0, aux=0;
	
	printf("Introduce una frase\n");
	gets(frase);
	printf("La frase introducida es:%s\n",frase);
	i=0; 

	while(frase[i]!='\0'){
		longitudfrase++;
		i++;
		}
	printf("Long es %i\n",longitudfrase);
	
	i=0;
	j=0;
	for(i=0;i<longitudfrase/2;i++){
				aux=frase[i];
				frase[i]=frase[longitudfrase-i-1];
				frase[longitudfrase-i-1]=aux;
		
		}
		
		printf("\n la frase es %s\t",frase);
	
	return 0;
	}
