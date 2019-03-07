
/*
Autora María Fermosel Álvarez
Grupo Q103
Descripción Programa que calcula la distancia entre dos puntos
*/

#include<stdio.h>
#include<math.h>
int main()
{
	float vect1[2], vect2[2], d;

	printf("introduce el primer punto\n");
	scanf("%f, %f", &vect1[0], &vect1[1]);
	
	printf("introduce el segundo punto\n");
	scanf("%f, %f", &vect2[0], &vect2[1]);
	
	d=sqrt(pow(vect1[0]-vect2[0], 2)+pow(vect1[1]-vect2[1], 2));

	printf("la distancia entre ambos puntos es %f\n", d);
	return 0;
}


