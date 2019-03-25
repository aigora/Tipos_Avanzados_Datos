/*Raquel Robledo Sedano
 Q-103
 Descripción: Se introducen palabras hasta que se repita la primera palabra introducida, mostrando dicha palabra.
 Al final del programa se mostrara el numero de palabras introducidas antes de introducir la primera.
 Tema CADENA DE CARACTERES.*/
#include <stdio.h>

void main(){
	
	int i,esIgual,contador=0;
	char palabra[50],repetida[50];
	
		printf("Introduzca una palabra:\n");
		gets(repetida);	
		//fflush(stdin);
	
	do{
		contador++;
		esIgual=1;
		printf("Introduzca una palabra:\n");
		gets(palabra);
		for(i=0;palabra[i]!='\0' || repetida[i]!='\0';i++){
			if(palabra[i]==repetida[i]){
		
				esIgual=1;  //FALSO
			}
			else{
				esIgual=0;
				break;
			}
		}
		//fflush(stdin);
		
	}while(esIgual==0);
	
	printf("Se han introducido %i palabras antes de repetir la palabra %s.\n",contador,repetida);

}

