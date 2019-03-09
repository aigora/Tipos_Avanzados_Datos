#include <stdio.h>
int main(){
	int i,j,mesmax=1,mesmin=1;
	float valorMensual,mediaAnual=0,max,min;
	float vectorTemperatura[12]; // declaracion de un vector de 12 numeros reales no estas inicializados

		for(i=0;i<=11;i++){
		printf("Introduce la temperatura del mes %d: \n",i+1);
		scanf("%f",&vectorTemperatura[i]);//aqui se rellena el vector con los valores por pantalla
		mediaAnual += vectorTemperatura[i];
		}
		max=vectorTemperatura[0];// los inicializamos con el primer vector para comparar
		
		for(i=1;i<12;i++){
			if(vectorTemperatura[i]>max)
			{
				max=vectorTemperatura[i];
				mesmax=i;
			}
			}
			min=vectorTemperatura[0];
		for(i=1;i<12;i++){
			if(vectorTemperatura[i]<min)
			{
				min=vectorTemperatura[i];
				mesmin=i;
			}
			
		}
		for(i=0;i<12;i++){
				for(j=i+1;j<12;j++){
				if(vectorTemperatura[i]>vectorTemperatura[j]){
				int aux=vectorTemperatura[i];
				vectorTemperatura[i]=vectorTemperatura[j];
				vectorTemperatura[j]=aux;
			}
		}
		}
	
		printf("Vector temperatura: ");
		for(i=0;i<12;i++)
		{
			printf("%f\n",vectorTemperatura[i]);
			
		}
	
	printf("el maximo es: %f del mes %d y el minimo: %f del mes %d\n",max,mesmax,min,mesmin);
	mediaAnual=(mediaAnual/12);
	printf("La media Anual es %f",mediaAnual);
	return 0;
}
