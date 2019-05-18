/*
Autora: María Fermosel ÁLvarez
Curso 103
Descripción: programa que te calcula que persona es la de mayor edad, hecho con estucturas
*/

#include<stdio.h>
#define N 2
typedef struct
{
	int dia, mes, anho;
}fecha;

typedef struct
{
	char nombre[50], apellido1[50], apellido2[50];
	fecha fechanacimiento;
}contacto;

void printContacto(contacto persona); 
int compFecha(fecha f1, fecha f2);

int main()
{
	int i, icomp;
	contacto contactos[N]; //vector que almacena los contactos
	for(i=0; i<N; i++) //para que te lo pida dos veces
	{	
		printf("datos del contacto %d\n", i+1);
		printf("indique su nombre, su primer apellido y segundo apellido\n");
		scanf("%s %s %s", &contactos[i].nombre, &contactos[i].apellido1, &contactos[i].apellido2);
		printf("indique su fecha de nacimiento (dia, mes, año)\n");
		scanf("%d, %d, %d", &contactos[i].fechanacimiento.dia, &contactos[i].fechanacimiento.mes, &contactos[i].fechanacimiento.anho);
	}

	//vector para almacenar lo que hemos sacado en la funcion de saber quien es mayor
	icomp=compFecha(contactos[0].fechanacimiento, contactos[1].fechanacimiento);
	
	switch(icomp) //para imprimir los resultados
	{
		case 1:
			printContacto(contactos[0]);
			break;
		case -1:
			printContacto(contactos[1]);
			break;
		case 0:
			printContacto(contactos[0]);
			printContacto(contactos[1]);
	}
}

void printContacto(contacto persona)
{
	printf("%s %s %s\n", persona.nombre, persona.apellido1, persona.apellido2);
	printf("%d / %d / %d\n", persona.fechanacimiento.dia, persona.fechanacimiento.mes, persona.fechanacimiento.anho);	
}
int compFecha(fecha f1, fecha f2)
{
	if(f1.anho>f2.anho)
		return -1;
	else if(f1.anho<f2.anho)
		return 1;
	else
	{
		if(f1.mes>f2.mes)
			return -1;
		else if(f1.mes<f2.mes)
			return 1;
		else
		{
			if(f1.dia<f2.dia)
				return 1;
			else if(f1.dia>f2.dia)
				return -1;
			else
				return 0;
		}
	}
}


