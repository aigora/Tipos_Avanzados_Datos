/*
AUTORA: Maria Canga
GRUPO: Q-103
DESCRIPCIÓN: Cambiar un texto o una letra especifica a mayusculas o minusculas.
*/
#include <stdio.h>

int main() {
	int opcion, i, j, k, l;
	char texto[50], letra;
	
	printf("Introducir texto:\n");
	gets(texto);
	
	printf("1-Cambiar texto a mayusculas\n");
	printf("2-Cambiar texto a minusculas\n");
	printf("3-Cambiar letra a mayuscula\n");
	printf("4-Cambiar letra a minuscula\n");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1:
			i=0;
			while(texto[i]!='\0') {
				if(texto[i]>='a'&&texto[i]<='z'){
					texto[i]-=32;
				}
				i++;
			}
			printf("%s\n", texto);
			break;
		case 2:
			j=0;
			while(texto[j]!='\0') {
				if(texto[j]>='A'&&texto[j]<='Z'){
					texto[j]+=32;
				}
				j++;
			}
			printf("%s\n", texto);
			break;
		case 3:
			printf("Introduce la letra:\n");
			fflush(stdin);
			scanf("%c", &letra);
			
			k=0;
			while(texto[k]!='\0') {
				if(texto[k]==letra){
					texto[k]-=32;
				}
				k++;
			}
			printf("%s\n", texto);
			break;
		case 4:
			printf("Introduce la letra:\n");
			fflush(stdin);
			scanf("%c", &letra);
			
			l=0;
			while(texto[l]!='\0') {
				if(texto[l]==letra){
					texto[l]+=32;
				}
				l++;
			}
			printf("%s\n", texto);
			break;
		default:
			printf("Opcion incorrecta");
		}
}
