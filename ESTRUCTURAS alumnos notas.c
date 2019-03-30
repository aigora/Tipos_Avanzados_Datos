/*
Autor: María Fermosel Álvarez
Grupo Q103
Descripción: programa que pide datos de alumnos y calcula la nota máxima y mínima y quien las tiene.
*/
#include <stdio.h>
#include<string.h>
//#define NALUMNOS_Q103 3 // 150

struct Alumno {
	char nombre[100];
	char apellidos[100];
	int nMatricula;
	float notaAcceso;
};

int main() {

	struct Alumno q103[100];
	struct Alumno a109[75];
	struct Alumno aux;
	int i,j;
	float mejor,peor;
	float suma=0.0;
	int NALUMNOS_Q103;
	char alumnomejornota[100];
	char alumnopeornota[100];

	
	printf("¿cuantos alumnos hay en la clase?\n");
	scanf("%d", &NALUMNOS_Q103);


	for (i=0; i<NALUMNOS_Q103; i++) {
		printf("Nombre alumno %d\n", i+1);
		scanf("%s", q103[i].nombre);
		printf("Apellidos alumno %d\n", i+1);
		scanf("%s", q103[i].apellidos);
		printf("Matricula alumno %d\n", i+1);	
		scanf("%d", &q103[i].nMatricula);
		printf("Nota acceso alumno %d\n", i+1);
		scanf("%f", &q103[i].notaAcceso);
		fflush(stdin);
	}
	
	
	// HAY QUE CALCULAR LA NOTA MEDIA DE ACCESO DEL Q103
	for (i=0; i<NALUMNOS_Q103; i++) {
		suma += q103[i].notaAcceso;
	}
	printf("Nota media: %f\n", suma/NALUMNOS_Q103);


	//calculo la mejor y la peor nota
	mejor=0; //supongo que la mejor nota es un 0 y si encuentro a alguien con mayor nota lo cambio.
	for (i=0; i<NALUMNOS_Q103; i++)
	{
		if (mejor<q103[i].notaAcceso)
		{
			mejor=q103[i].notaAcceso;
			strcpy(alumnomejornota,q103[i].nombre);
			strcat(alumnomejornota," ");
			strcat(alumnomejornota,q103[i].apellidos);
		}
	}
	
	
	peor=10; //supongo que la peor nota es un 10 y si encuentro a alguien con peor nota lo cambio.
	for (i=0; i<NALUMNOS_Q103; i++)
	{
		if (peor>q103[i].notaAcceso)
		{
			peor=q103[i].notaAcceso;
			strcpy(alumnopeornota,q103[i].nombre);  
			strcat(alumnopeornota," ");
			strcat(alumnopeornota,q103[i].apellidos);
		}
	}
	
	printf("La mejor nota es %f y la tiene %s\n", mejor, alumnomejornota);
	printf("La nota más baja es %f y la tiene %s\n", peor, alumnopeornota);


	return 0;
}
