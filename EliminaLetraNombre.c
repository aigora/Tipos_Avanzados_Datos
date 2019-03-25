//Elimina un caracter del nombre y desplaza la posicion al del resto
#include<stdio.h>
int main(){
	char nombre[50];
	int i=0,j=0;
	char x;
	char nombreModificado[50];
	
	printf("Introduzca su nombre\n");
	gets(nombre);
	fflush(stdin);
	printf("Introduce el caracter que desea remplazar\n");
	scanf("%c",&x);
	
	while(nombre[i]!='\0'){
		if(nombre[i]!=x){
			nombreModificado[j]=nombre[i];
			j++;
		}
		i++;
	}
	nombreModificado[j]='\0';
	printf("El nombre cifrado: %s\n",nombreModificado);
	
}
