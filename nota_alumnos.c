// Pedro Muñoz Redondo 54121 Q103
// te pide el numero de alumnos que vas a introducir y te muestra por pantalla la nota maxima y minima entre todos los alumnos y su nombre
#include<stdio.h>
struct ficha
{
	char nombre[50];
	float nota;
};
	void main()
{
		struct ficha alumnos[30];
		int num_alumnos;
		int i;
		struct ficha mejor;//el mejor alumno
		struct ficha peor;
		printf("¿cuantos alumnos hay? ");
	scanf("%d",&num_alumnos);
	for(i=0;i<num_alumnos;i++)
	{
		printf("Nombre: ");
		scanf("%s",alumnos[i].nombre);
		printf("Nota: ");
		scanf("%f",&alumnos[i].nota);
	}
	mejor.nota=0; // doy el valor minima a mejor.nota porque seguro que el mejor va a tener mas de un 0
	peor.nota=10;// doy el valor maximo a peor.nota porque seguro que el peor va a tener menos de un 10
	for(i=0;i<num_alumnos;i++)
	{
		if(alumnos[i].nota>=mejor.nota) // comparo el valor anterior con la nota del alumno i
			mejor=alumnos[i];

	}
	i=0;
	for(i=0;i<num_alumnos;i++)
	{
		if(alumnos[i].nota<=peor.nota)
			peor=alumnos[i];

	}
	
	printf("Mejor alumno: Nombre: %s\t Nota: %f\n",mejor.nombre,mejor.nota);
	printf("peor alumno: Nombre: %s\t Nota: %f\n",peor.nombre,peor.nota);
	// falta la operacion de ordenar los contactos por orden alfabetico.
	
}
