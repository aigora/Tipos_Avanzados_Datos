/* MARIO GARRIDO MONTERO
   Q103
   PROGRAMA QUE PIDE DATOS DE UN CONTACTO Y VERIFICA QUE EL EMAIL TIENE '@' Y '.',SINO LOS INCLUYE LO VUELVE A PEDIR HASTA QUE LOS TENGA.

*/

#include <stdio.h>

struct persona{
	char nombre[20],email[20];
	int edad;
} persona1;

int main(){
	int i,longitudfrase=0,cont=0;
	
	do{
		printf("introduce email\n ");
		scanf("%s",&persona1.email);
	
	
    	i=0;
		while(persona1.email[i]!='\0'){
		longitudfrase++;
		i++;
		
		}
	
		for(i=0;i<longitudfrase;i++){
		if(persona1.email[i]=='@' || persona1.email[i]=='.' ){
			cont++;
		}
	
		}
		
		
	}while(cont<2);
	
	printf("introduzca su nombre\n");
	fflush(stdin);
	gets(persona1.nombre);

	printf("introduzca su edad\n");
	scanf("%i",&persona1.edad);
	
	printf("sus datos de contacto son\n nombre: %s, edad: %i, email: %s",persona1.nombre,persona1.edad,persona1.email);

	
}



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


