/* Autora: Dalila Martinez Baez Q103
Calcular la nota media de las asignaturas de la carrera*/
#include<stdio.h>
#define N 60
int main()
{
	char letra,A,B,C,D;
	int totalasignatura=0,i;
	float notamedia=0,notas[N];
	do{
		printf("MENU DE OPCIONES \n");
		printf("A- Agregar nota aprobada \n");
		printf("B- Ver todas las notas \n");
		printf("C- Nota media \n");
		printf("D- Salir del programa \n");
		scanf("%c",&letra);
		switch(letra)
		{
			case 'A':
				printf("Dime tu nota \n");
				scanf("%f",&notas[totalasignatura]);
				totalasignatura++;
				break;
			case'B':
				printf("Notas: \n",notas[totalasignatura]);
				break;
			case'C':
				for(i=0;i<totalasignatura;i++)
				{
					notamedia+=notas[i];
				}
				notamedia=notamedia/totalasignatura;
				printf("La nota media  de las asignaturas es %.3f",notamedia);
				break;
			case'D':
				printf("Ha salido del programa \n");
				break;
		}
	}
	while(letra!='D');
	return 0;
}
