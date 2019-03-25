/* MARIA CRUZ BATISTA GIL
Q103
Descripción: Este programa cuenta las vocales de la palabra introducida. */



#include <stdio.h>

void main (){
	
	char palabra[50], l_vocales[]={'a','e','i','o','u'};
	int i,j, vocales[5]={};
	
	printf("Introduzca una palabra: \n");
	gets(palabra);
	
	i=0;
	while (palabra[i]!='\0'){
	
	  for(j=0; j<5; j++){
	  	
		if(palabra[i]==l_vocales[j])
		vocales[j]++;
      }
		
	i++;
	  
    }
    
    for(i=0;i<5;i++){
    
	printf("La %c aparece en %s: %d veces \n",l_vocales[i],palabra,vocales[i]);

	}
}
