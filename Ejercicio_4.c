/*
Diego Gomez
Q103
Descripcion: pedir de nuevo el email si no lleva . o @
*/
#include<stdio.h>
#include<string.h>

struct contacto
	{
		char nombre[50];
		int anio, mes;
		char email[50];		
		
	}contacto1, contacto2;
	
int main()
{
	int i=0;
	int validacion1, validacion1_2, validacion1_3;
	
	printf("Introduzca su nombre\n");
	gets(contacto1.nombre);
	printf("Introduzca el anio de nacimiento\n");
	scanf("%i", &contacto1.anio);
	printf("Introduzca el mes de nacimiento\n");
	scanf("%i", &contacto1.mes);
	do
	{
		printf("Introduzca el email\n");
		fflush(stdin);
		gets(contacto1.email);
		
		while(contacto1.email[i]!='\0')
		{
			if(contacto1.email[i]=='@')
			{
				validacion1=1;
			}
			
			else if(contacto1.email[i]=='.')
			{
				validacion1_2=1;
			}
			i++;
		}
		
		validacion1_3=validacion1+validacion1_2;
	}while(validacion1_3!=2);
	
	
	
	printf("Introduzca su nombre\n");
	gets(contacto2.nombre);
	printf("Introduzca el anio de nacimiento\n");
	scanf("%i", &contacto2.anio);
	printf("Introduzca el mes de nacimiento\n");
	scanf("%i", &contacto2.mes);
	validacion1=0;
	validacion1_2=0;
	i=0;
	do
	{
		printf("Introduzca el email\n");
		fflush(stdin);
		gets(contacto2.email);
		
		while(contacto2.email[i]!='\0')
		{
			if(contacto2.email[i]=='@')
			{
				validacion1=1;
			}
			else if(contacto2.email[i]=='.')
			{
				validacion1_2=1;
			}
			i++;
		}
		
		validacion1_3=validacion1+validacion1_2;
	}while(validacion1_3!=2);
	

	
}
	
	

