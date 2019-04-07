// AUTOR: MARIO GARRIDO 
//GRUPO: Q103
// PROGRAMA QUE IMPRIME UNA PALABRA INTRODUCIDA POR EL USUARIO AL REVES.


#include <stdio.h>

int main(){
	char palabra [30];
	int i=0,longitudfrase;
	
	printf("escribe una palabra\n");
	gets(palabra);	
	
	i=0;
	while(palabra[i]!='\0'){
		longitudfrase++;
		i++;
	}
	
	printf("longitud de la palabra es: %i\n",longitudfrase);
	printf("la palabra al reves es: ");

	for(i=longitudfrase;i>=0;i--){
		printf("%c",palabra[i]);
		longitudfrase--;
	}
	
	
}
