// Marta Esparcia López
//Q-103
#include <stdio.h>
int main(){
	
	int i,j;
	float vectortemp[12]={7,6,8.5,12.5,17.5,22.5,25.5,28,24.5,16,10.5,8.5};//28,25.5,24.5,22.5,16,
	//Medias de temperaturas de Madrid en 2018
	float max=vectortemp[0], min=vectortemp[0], mayor=vectortemp[i];
	
	for(i=1;i<12;i++)
	{
		if(vectortemp[i]>max)
		{
			max=vectortemp[i];
		}
	
	}

	printf("Su valor maximo es: %.2f\n", max);
	
	switch (i){
			
		case 0:
				printf("Enero\n");
				break;
		case 1:
				printf("Febrero\n");
				break;
		case 2  :
				printf("Marzo\n");
				break;
		case 3:
				printf("Abril\n");
				break;
		case 4:
				printf("Mayo\n");
				break;
		case 5 :
				printf("Junio\n");	
				break;
		case 6:
				printf("Julio\n");	
				break;
		case 7 :
				printf("Agosto\n");
				break;
		case 8:
				printf("Septiembre\n");
				break;
		case 9 :
				printf("Octubre\n");
				break;
		case 10:
				printf("Noviembre\n");
				break;
		case 11:
				printf("Diciembre\n");
				break;
		default :
				printf("No se ha encontrado el mes\n");
		}
				
	for(i=1;i<12;i++)
	{
		if(vectortemp[i]<min)
		{
			min=vectortemp[i];
		}
	}
	printf("Su valor minimo es: %.2f\n", min);
	
	switch (i){
			
			case 0:
				printf("Enero\n");
				break;
			case 1:
				printf("Febrero\n");
				break;
			case 2  :
				printf("Marzo\n");
				break;
			case 3:
				printf("Abril\n");
				break;
			case 4:
				printf("Mayo\n");
				break;
			case 5 :
				printf("Junio\n");	
				break;
			case 6:
				printf("Julio\n");	
				break;
			case 7 :
				printf("Agosto\n");
				break;
			case 8:
				printf("Septiembre\n");
				break;
			case 9 :
				printf("Octubre\n");
				break;
			case 10:
				printf("Noviembre\n");
				break;
			case 11:
				printf("Diciembre\n");
				break;
			default :
				printf("No se ha encontrado el mes\n");
			}
	
	for(i=0;i<12;i++)
	{
		for(j=i+1;j<12;j++)
		{
			if(vectortemp[i]<vectortemp[j])
			{
				mayor=vectortemp[i];
				vectortemp[i]=vectortemp[j];
				vectortemp[j]=mayor;
			}
		}	
		printf("%.2f ", vectortemp[i]); 

	}
	

	return 0;
	
}
