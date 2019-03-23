#include<stdio.h>
#include<math.h>
//Miguel Angel Rodrigo Garcia
//Q103
void main(){
	int i,longitudnombre=0;
	char palabra[50];
	printf("escribe una palabra:\n");
	gets(palabra);
		while(palabra[i]!='\0'){
		longitudnombre++;
		i++;
	
	    }
	for(i=longitudnombre-1;i>=0;i--){
		printf("%c\n",palabra[i]);
		printf("\n");
	}
}
