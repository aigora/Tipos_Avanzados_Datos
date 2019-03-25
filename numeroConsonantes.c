/*
Rita Villalba
Q103
Contador de consonantes
*/


#include <stdio.h>

int main(){
	
	char palabra[50], vocalmin[6]={'a','e','i','o','u','\0'}, vocalmayus[6]={'A', 'E', 'I', 'O','U'};
	int i, j, contadorvocales=0, longitudPalabra=0, numeroconsonantes=0;
	
	printf("Introdue tu palabra \n");
	scanf("%s", palabra);
	
	i=0;
	while(palabra[i]!='\0'){
		longitudPalabra++;
		i++;
	}
	printf("Longitud = %d\n", longitudPalabra);
	
	j=0;
	i=0;
	while(palabra[i]!='\0'){
		for(i=0; i<longitudPalabra; i++){
			for (j=0; j<=5; j++){
				if(palabra[i]==vocalmin[j] || palabra[i]==vocalmayus[j]){
				contadorvocales++;
				}
			}
		}
	}
	printf("Numero de consonantes= %d\n", longitudPalabra-contadorvocales);

}

