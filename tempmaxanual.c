/* 
AUTORA : ROSA SILVERIO GUZMAN
GRUPO: Q103
DESCRIPCION: Calcular la temperatura máxima del año y mes correspondiente
*/

#include<stdio.h>

int main()
{
	
	float tempanual[12],tempmaxima;
	int mes[12]={1,2,3,4,5,6,7,8,9,10,11,12},mesfinal;
	int i,p;
	
	for(i=0; i<12; i++){
	
		printf("Introduce la temperatura en grados centigrados del mes %d\n",mes[i]);
		scanf("%f", &tempanual[i]);
		
	}
	
	//Almacena la tempmax la 1º temp
	tempmaxima=tempanual[0];
	//Almacena el mes de la temperatura maxima
	mesfinal=1
	
	for(p=1 ; p<12 ; p++)
	{
		if(tempanual[p]>tempmaxima)
		{
			tempmaxima=tempanua[p];
			mesfinal=mes[p];
		}
		
	}
	
	
	
	printf("la temperatura maxima es %f grados centigrados del mes %d ",tempmax, mesfinal);
		
return 0;	

}
