/*Marta Esparcia
Grupo:Q103*/
/*Ejercicio	2: Introduzca una	frase	cualquiera	por	teclado	e	imprímala	al	revés.	(ejemplo:	casa	à asac).*/
#include<stdio.h>
int main (){
	char frase[50], letra;
	int i,longitudfrase=0;
	
	printf("Introduce una frase\n");
	gets(frase);
	printf("La frase introducida es:%s\n",frase);
	while(frase[i]!='0'){
		longitudfrase++;
		i++;
		}
	
	for(i=longitudfrase-1;i>=0;i--){
		
		printf("\n la frase es %c\t",frase[i]);
	}
	
	return 0;
	}
