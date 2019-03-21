/*Raquel Robledo Sedano
 Q-103
 Descripción: Se introducen palabras hasta que se repita la primera palabra introducida, mostrando dicha palabra.
 Al final del programa se mostrara el numeor de palabras introducidas antes de introducir la primera.
 Tema CADENA DE CARACTERES.*/
#include <stdio.h>

void main(){
	
	int i,j,contador;
	char palabra[50],repetida[50];
	
		printf("Intruzca una palabra:\n");
		gets(repetida);	
		fflush(stdin);
	
	do{
		contador++;
		j=0;
		printf("Intruzca una palabra:\n");
		gets(palabra);
		for(i=0;palabra[i]!='\0' || repetida[i]!='\0';i++){
			if(palabra[i]==repetida[i]){
				j=1;
			}
			else{
				j=0;
			}
		}
		fflush(stdin);
		
	}while(j==0);
	
	printf("Se han introducido %i palabras antes de repetir la palabra %s.\n",contador,repetida);

}

