//Vera Valentin Avellon, Q103
//contador de mayusculas y minusculas


#include<stdio.h>
int main(){
	
	char palabra[50];
	int longi=0,i=0,may=0,min=0;
	
	printf("Introduzca una nueva contrasena con un minimo de 10 letras:\n");
	gets(palabra);
	
	i=0; 
	while(palabra[i]!='\0'){
		longi++;
		i++;
		
	}

	
	if(longi<10){
	printf("Introduzca una nueva contrasena con un minimo de 10 letras:\n");
	gets(palabra);
	}
	
	printf("Long es %i\n",longi);
	
	for(i=0;i<=longi+1;i++){
	if(palabra[i]>='a'&&palabra[i]<='z'){
		min++;
		
	}	
	}
	i=0;
	
	printf("Su contrasena contiene %i minusculas\n",min);
	
	for(i=0;i<=longi+1;i++){
	if(palabra[i]>='A'&&palabra[i]<='Z'){
		may++;
		
	}	
		
	}
	
	
	printf("Su contrasena contiene %i mayusculas",may);
	
	
	
		
	
}
 
 
