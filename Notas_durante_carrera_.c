/*
Autora: Paula de antonio Grondona
Grupo: Q103
Descripcion: Programa que calcule la nota media de las asignaturas que se van aprobando a lo largo de la carrera.
*/

#include<stdio.h>
#define NUMEROMAXIMONOTAS 60

int main(){
	int opcion, i;
	int contador=0; //Contador de Asignaturas
	float nota=0, suma, media=0;
	float vectornotas[NUMEROMAXIMONOTAS];
	

	
	do{
		printf("MENU:\n");
		printf("A. Agregar nota.\n");
		printf("B. Ver todas la notas.\n");
		printf("C. Calcular la nota media.\n");
		printf("D. Salir del programa.\n\n");
		
		printf("Selecciona una opcion.\t");
		fflush(stdin);
		scanf("%c", &opcion);
		fflush(stdin);
		printf("\n");		
			
		switch(opcion){
			case 'A':
			case 'a':{
				printf("Tiene %d notas guardadas.\n", contador);
				
				printf("Nueva nota: ");
				scanf("%f", &nota);
				vectornotas[contador]=nota;
				
				contador++;
				printf("\n");
				break;
				}	
			case 'B':
			case 'b':{
				if(contador==0){
					printf("No hay notas guardadas.\n");
				}else{
					printf("Notas: ");
					
					for(i=0; i<contador; i++){
						printf("%.2f ", vectornotas[i]);
					}
				}
				printf("\n");
				break;
			}
			case 'C':
			case 'c':{
				if(contador==0){
					printf("No hay notas guardadas.\n");
				}else{
					for(i=0; i<contador; i++){
						suma += vectornotas[i];
					}
					media = suma/contador;
				
					printf("Media de las notas: %f", media);
				}
				printf("\n");
				break;
			}
			case 'D':
			case 'd':
				printf("Saliendo del programa.\n");
				break;
		
			default:
				printf("Opcion incorrecta.\n");
			
		}		
			
	}while(opcion!='D' && opcion!='d');

	
	
	
	
	return 0;
}
