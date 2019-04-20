/* MARIO GARRIDO MONTERO
   Q103
   PROGRAMA QUE PIDE EL NOMBRE,EMAIL,MES Y YEAR DE NACIMIENTO A DOS USUARIOS. IMPRIME LOS DATOS DEL USUARIO QUE SEA MAYOR
*/
#include <stdio.h>

struct contacto{
	char nombre[20],email[20];
	int year,mes;
	
}persona[50];

int main(){
	
	int n=2,i;
	
	for(i=0;i<n;i++){
		printf("Introduce tu nombre usuario %i: ",i+1);
		scanf("%s",&persona[i].nombre);
		printf("Introduce tu email usuario %i: ",i+1);
		scanf("%s",&persona[i].email);
		printf("Introduce tu mes de nacimiento en numero usuario %i: ",i+1);
		scanf("%i",&persona[i].mes);
		printf("Introduce tu year de nacimiento usuario %i: ",i+1);
		scanf("%i",&persona[i].year);
	}
	
	if(persona[0].year==persona[1].year){
		
		if(persona[0].mes==persona[1].mes){
		printf("los dos han nacido en el mismo mes y year");
		}
 	
		else if(persona[0].mes<persona[1].mes){
			i=0;
			printf("persona 1 es mayor\n");
			printf("Sus datos son: nombre %s, email %s, mes de nacimiento %i, year de nacimiento %i",persona[i].nombre,persona[i].email,persona[i].mes,persona[i].year);
		}
		
		else if(persona[0].mes>persona[1].mes){
			i=1;
			printf("persona 2 es mayor\n");
			printf("Sus datos son: nombre %s, email %s, mes de nacimiento %i, year de nacimiento %i",persona[i].nombre,persona[i].email,persona[i].mes,persona[i].year);
		}
		
	return 0;
	}
	
	if(persona[0].year<persona[1].year){
		i=0;
		printf("persona 1 es mayor\n");
		printf("Sus datos son: nombre %s, email %s, mes de nacimiento %i, year de nacimiento %i",persona[i].nombre,persona[i].email,persona[i].mes,persona[i].year);
	}
	else{
		i=1;
		printf("persona 2 es mayor\n");
		printf("Sus datos son: nombre %s, email %s, mes de nacimiento %i, year de nacimiento %i",persona[i].nombre,persona[i].email,persona[i].mes,persona[i].year);

	}

}
