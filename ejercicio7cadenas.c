//Miguel Angel Rodrigo Garcia
//Q103
//ejercicio  7 de cadenas

#include<stdio.h>
#include<math.h>

void main()
{
	int i,contador=0;
	char palabra[50];
	
	
	printf("introduce una palabra :\n");
	gets(palabra);
	printf("palabra introducida %s",palabra);
	
		i=0;
		while(palabra[i]!='\0'){
		contador++;
		i++;
	
	    }
	     i=0;
		for(i=0;i<contador;i++){
		if(i%2 == 0){
			palabra[i]=palabra[i]-32;
			
		}
		
	}

printf("la palabra transformada es %s",palabra);




}

