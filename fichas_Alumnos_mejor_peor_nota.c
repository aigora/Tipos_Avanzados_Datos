#include <stdio.h>

	struct ficha
	{
		char nombre[50];
		float notas;
	};
	
int main(){
	struct ficha alumnos[50];
	struct ficha mejor;
	struct ficha peor;
	int numero_alumnos,i;
	printf("¿Cuantos alumnos hay?\n");
	scanf("%d",&numero_alumnos);
	for(i=0;i<numero_alumnos;i++){
		printf("El nombre: ");
		scanf("%s",alumnos[i].nombre);
		printf("La nota: ");
		scanf("%f",&alumnos[i].notas);
	}
	mejor.notas=0;
	peor.notas=10;
	for(i=0;i<numero_alumnos;i++){
		if(alumnos[i].notas>=mejor.notas)
		mejor=alumnos[i];
		if(alumnos[i].notas<=peor.notas)
		peor=alumnos[i];
	}
	printf("El alumno %s tiene la mejor nota %f\n", mejor.nombre,mejor.notas);
	printf("El alumno %s tiene la peor nota %f\n",peor.nombre,peor.notas);
	return 0;
}
