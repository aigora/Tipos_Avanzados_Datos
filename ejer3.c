#include <stdio.h>
struct contacto
{
	char nombre[50];
	char email[50];
	int mes;
	int year;
};
int main(){
	int i;
	struct contacto persona[2];
	for(i=0;i<2;i++){
		printf("Introduce el nombre del contacto %d: ",i+1);
		scanf("%s",persona[i].nombre);
		printf("Introduce el email del contacto %d: ",i+1);
		scanf("%s",persona[i].email);
		printf("Introduce el mes de nacimiento del contacto %d: ", i+1);
		scanf("%d",&persona[i].mes);
		printf("Introduce el año de nacimiento del contacto %d: ", i+1);
		scanf("%d",&persona[i].year);
	}
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0;
	for(i=0;i<2;i++){
		if(persona[0].year>persona[1].year)
		c1++;
		if(persona[1].year>persona[0].year)
		c2++;
		if(persona[0].year==persona[1].year){
			if(persona[0].mes>persona[1].mes)
			c3++;
			if(persona[1].mes>persona[0].mes)
			c4++;
			if(persona[0].mes==persona[1].mes)
			c7++;
		}
	}
		if(c1>0){
			printf("%s es el mayor", persona[1].nombre);
			printf("\n");
		}
		if(c2>0){
			printf("%s es el mayor", persona[0].nombre);
			printf("\n");
		}
		if(c3>0){
			printf("%s es el mayor", persona[1].nombre);
			printf("\n");
		}
		if(c4>0){
			printf("%s es el mayor", persona[0].nombre);
			printf("\n");
		}
		
		if(c7>0){
			printf("han nacido en el mismo mes y en el mismo año");
			printf("\n");
		}
	return 0;
}
