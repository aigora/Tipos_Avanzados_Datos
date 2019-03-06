/* 
AUTORA : ROSA SILVERIO GUZMAN
GRUPO: Q103
DESCRIPCION: Calcular la temperatura máxima del año y mes correspondiente
*/

#include<stdio.h>

int main()
{
	
	float tempanual[12],tempmaxima;
	// Se podria hacer con :int mes[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	//Para almacenar el valor de los meses (ENERO,...)
	int mesfinal;
	int i,p;
	
	for(i=0; i<12; i++){
		
		//En caso de que uses mes[12] se realiza:
		//printf("Introduce la temperatura en grados centigrados del mes %d\n",mes[i]);
		printf("Introduce la temperatura en grados centigrados del mes %d ",i+1);
		scanf("%f", &tempanual[i]);
		
	}
	
	//Almacena la temperatura maxima como  la 1º temperatura
	tempmaxima=tempanual[0];
	//Almacena el mes de la temperatura maxima
	mesfinal=1;
	
	for(p=1 ; p<12 ; p++)
	{
		if(tempanual[p]>tempmaxima)
		{
			tempmaxima=tempanual[p];
			// Si usas mes[12]:
			//mesfinal=mes[p];
			mesfinal=p+1;
		}
		
	}
	
	
	
	printf("la temperatura maxima es %f grados centigrados del mes %d ",tempmaxima, mesfinal);
		
return 0;	

}
