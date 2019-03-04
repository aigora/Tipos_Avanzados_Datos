/* 
AUTORA : ROSA SILVERIO GUZMAN
GRUPO: Q103
DESCRIPCION: Calcular la temperatura máxima del año y mes correspondiente
*/

#include<stdio.h>

int main()
{
	
	float tempan[12],tempmax[1];
	int mes[12]={1,2,3,4,5,6,7,8,9,10,11,12},mesf[1];
	int i=0,z=1,p=0;
	
	for(i; i<12; i++){
	
		printf("Introduce la temperatura en grados centigrados del mes %d\n",mes[i]);
		scanf("%f", &tempan[i]);
		
	}
	
	//printf("%d\n",tempan[1]);
	
	while(p<12)
	{
		
		if ( tempan[p]>tempan[z] )
		{
			tempmax[0]=tempan[p];
			mesf[0]=mes[p];
		}
		
		else if (tempan[z]>tempan[p])
		{
			tempmax[0]=tempan[z];
			mesf[0]=mes[z];
			
		}
		
		p++;
		
		while(z<11)
		{
		z++;
		}
	}
	
	printf("la temperatura maxima es %f grados centigrados del mes %d ",tempmax[0], mesf[0]);
		
return 0;	

}
