//Miguel Angel Rodrigo Garcia
//Q103
//ejercicio 4 de cadenas de carcteres

#include<stdio.h>
#include<math.h>
void main(){
	int i,longitudfrase=0,contadordea=0;
	char texto[100]="Si los hechos cambian la teoria, cambie los hechos,Albert Einstein";
	printf("\n la frase a cambiar es : %s \n ",texto);
	while(texto[i]!='\0'){
		longitudfrase++;
		i++;

	      	}
	      	printf("el tamaño del texto es: %d\n",longitudfrase);
	i=0;
	for(i=0;i<longitudfrase;i++){
		if((texto[i]=='a') || (texto[i]=='A'))
		{
			contadordea++;
			
		}
     }
		
	printf("el numero de a es: %d\n",contadordea);
	

}
