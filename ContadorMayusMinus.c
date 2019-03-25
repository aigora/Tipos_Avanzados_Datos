//Vera Valentin Avellon, Q103
//pide una contraseña hasta que esta tiene un minimo de 10 caracteres. Despues cuenta el numero de mayusculas y de minusculas que contiene


#include<stdio.h>
int main(){
	
	char palabra[50];
	int longi=0,i=0,may=0,min=0;
	
	do{
	printf("Introduzca una nueva contrasena con un minimo de 10 letras:\n");
	gets(palabra);
	
	i=0;
	longi=0;
	while(palabra[i]!='\0'){
		longi++;
		i++;
		
	}	
	}while(longi<10);
	
	printf("Long es %i\n",longi);
	
	for(i=0;i<=longi+1;i++){
	if(palabra[i]>='a'&&palabra[i]<='z'){
		min++;
		
	}	
	}
	
	
	printf("Su contrasena contiene %i minusculas\n",min);
	
	for(i=0;i<=longi+1;i++){
	if(palabra[i]>='A'&&palabra[i]<='Z'){
		may++;
		
	}	
		
	}
	
	
	printf("Su contrasena contiene %i mayusculas",may);
	
	
	
		
	
}
 
 
