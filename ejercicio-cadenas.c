/* 
nombre: Noelia Arencibia Jaramillo
grupo: Q103
descripción: cuenta las vocales de la frase
*/
#include <stdio.h>
int main() {
	char frase[60];
	int i,vocal,longitudNombre; 



	printf("escribe una frase\n");
	gets(frase);
	printf("Tu frase introducida es:%s\n", frase);
	i=0;	
	while(frase[i]!='\0'){
		longitudNombre++;
	    i++;
	}
	vocal=0;
	for(i=0;i<longitudNombre;i++){
		if(frase[i]=='a'){
		    vocal++;
		}
		if(frase[i]=='e'){
		    vocal++;
		}
		if(frase[i]=='i'){
		    vocal++;
		}
		if(frase[i]=='o'){
		    vocal++;
		}
		if(frase[i]=='u'){
		    vocal++;
		}
	}
		printf("La frase tiene %i vocales\n",vocal);
//	}
}
