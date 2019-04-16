//MIGUEL ANGEL RODRIGO GARCIA
//Q103

#include<stdio.h>
#include<math.h>
#include<string.h>
struct empleado{
	char codigo[100];
	char categoria;
	float sueldo;
	float horas;
};
void main(){
	struct empleado password,tipo,tiempo,dinero;
	int compco;
	char pass[50]="mike";
	
	//nuestro codigo sera una constresaña para cada tipo de categoria de empleado
	//NUESTRA CONTRASEÑA ES mike
	do{
	
	printf("introduzca su codigo para cobrar :\n");
	gets(password.codigo);
	compco=strcmp(password.codigo,pass);
	if(compco==0)
	{
		printf("introduzca su categoria :\n");
		fflush(stdin);
		scanf("%c",&tipo.categoria);
		if(tipo.categoria=='A'){
			printf("introduzca el numero de horas realizadas:\n");
			scanf("%f",&tiempo.horas);
			dinero.sueldo= (tiempo.horas)*27.5;
			printf("le corresponde %f EUROS",dinero.sueldo);
			
			
		}
		else if(tipo.categoria=='B'){
					printf("introduzca el numero de horas realizadas:\n");
			scanf("%f",&tiempo.horas);
			dinero.sueldo= (tiempo.horas)*20;
			printf("le corresponde %f EUROS",dinero.sueldo);
			
		}
		else if(tipo.categoria=='C'){
					printf("introduzca el numero de horas realizadas:\n");
			scanf("%f",&tiempo.horas);
			dinero.sueldo= (tiempo.horas)*18.2;
			printf("le corresponde %f EUROS",dinero.sueldo);
			
		}
	}
}while(compco !=0);
}
