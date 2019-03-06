/*Autor: Ivan Herranz
Grupo:Q103
Descripción: a partir de las temperaturas de un mes, muestra la temperatura min de todo el ano y el numero
de mes al que pertenece*/ 
#include<stdio.h>

int main()
{
	
	float tempanual[12],tempmin;
	int mes[12]={1,2,3,4,5,6,7,8,9,10,11,12},mesfinal;
	int i,p;
	
	for(i=0; i<12; i++){
	
		printf("Introduce la temperatura en grados centigrados del mes %d\n",mes[i]);
		scanf("%f", &tempanual[i]);
		
	}
	tempmin=tempanual[0];
	mesfinal=1;
	
	for(p=1 ; p<12 ; p++) //No puedo inicializar tempmin en 0 porque las temperaturas podrian ser 0 y las temperaturas  negativas no las evalua.
	{
		if(tempanual[p]<tempmin)
		{
			tempmin=tempanual[p];
			mesfinal=mes[p];
		}
		
	}
	
	
	
	printf("la temperatura maxima es %f grados centigrados del mes %d ",tempmin, mesfinal);
		
return 0;	

}
