//miguel Angel Rodrigo Garcia
//Q103
//ejercicio 5 de cadenas de carcteres


#include<stdio.h>
#include<math.h>
void main (){
	int i,longitudtexto=0;
	char texto[]="Seria posible describir todo cientificamente,pero no tendria ningun sentido;careceria de significado el que usted describiera a la sinfonia de Beethoven como una variacion de la presion de la onda auditiva";
        i=0;
		while(texto[i]!='\0'){
		longitudtexto++;
		i++;
	
	    }
	    printf("la longitud de la frase es :%d \n",longitudtexto);
	    
	for(i=0;i<longitudtexto;i++){
	if(texto[i]==' '){
		texto[i]='_';
		
	}

}
printf(" nombre cifrado es : %s",texto);


}
