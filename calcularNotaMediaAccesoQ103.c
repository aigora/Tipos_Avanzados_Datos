#include <stdio.h>

#define NALUMNOS_Q103 3 // 150

struct Alumno {
	char nombre[100];
	char apellidos[100];
	int nMatricula;
	float notaAcceso;
};

int main() {

	// struct Alumno alumno1, alumno2, alumno3={"Juan", "Perez", 50002, 9.75}; // dos variables de tipo struct Alumno 
	struct Alumno q103[NALUMNOS_Q103];
	struct Alumno a109[75];
	int i;
	float suma=0.0;
	
	for (i=0; i<NALUMNOS_Q103; i++) {
		printf("Nombre alumno %d\n", i+1);
		gets(q103[i].nombre);
		printf("Apellidos alumno %d\n", i+1);
		gets(q103[i].apellidos);
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
	
	return 0;
}
