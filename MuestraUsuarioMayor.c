/*Raquel Robledo Sedano
 Q-103
 Descripción: El usuario introduce su nombre,correo y fecha de nacimiento y el programa solo muestra los datos del usuario 
 que haya nacido antes, y en el caso de que hayan nacido a la vez,el programa lo muestra.*/
#include <stdio.h>
#define Ncontactos 2

 struct contacto{
	char correo[50];
	char nombre[50];
	int mes;
	int anno;
	
 };
 
void main(){
	
	 struct contacto datos[Ncontactos];
	 int i;
	
	for(i=0;i<Ncontactos;i++){
		
	printf("Introduzca el nombre del usuario%i:\n",i+1);
	gets(datos[i].nombre);	
	
	printf("Introduzca su correo:\n");
	gets(datos[i].correo);
	
	
	do{
		printf("Introduzca el anno en el que ha nacido:\n");
		scanf("%i",&datos[i].anno);
		
		if(datos[i].anno<0){
			printf("Anno incorrecto.\n");
		}
	}while(datos[i].anno<0);
	
	
	do {
		printf("Introduzca el numero del mes en el que ha nacido:\n");
		scanf("%i",&datos[i].mes);
		
		if(datos[i].mes<1 || datos[i].mes>13){
			printf("Mes incorrecto.\n");
		}
	}while(datos[i].mes<1 || datos[i].mes>13);
	fflush(stdin);
	
	}
		
	i=0;
	
	if(datos[i].anno<datos[i+1].anno){
		printf("El usuario mayor es %s con correo %s ha nacido en el mes %i del anno %i",datos[i].nombre,datos[i].correo,datos[i].mes,datos[i].anno);
	}
	
	if(datos[i].anno>datos[i+1].anno){
		printf("El usuario mayor es %s con correo %s ha nacido en el mes %i del anno %i",datos[i+1].nombre,datos[i+1].correo,datos[i+1].mes,datos[i+1].anno);
	}
	
	if(datos[i].anno==datos[i+1].anno && datos[i].mes<datos[i+1].mes){
		printf("El usuario mayor es %s con correo %s ha nacido en el mes %i del anno %i",datos[i].nombre,datos[i].correo,datos[i].mes,datos[i].anno);
	}
	
	if(datos[i].anno==datos[i+1].anno && datos[i].mes>datos[i+1].mes){
		printf("El usuario mayor es %s con correo %s ha nacido en el mes %i del anno %i",datos[i+1].nombre,datos[i+1].correo,datos[i+1].mes,datos[i+1].anno);
	}

	if(datos[i].anno==datos[i+1].anno && datos[i].mes==datos[i+1].mes){
		printf("Ambos usuarios nacieron el mismo mes y el mismo anno");
	}





}

