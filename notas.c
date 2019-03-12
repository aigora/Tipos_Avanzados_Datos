/* 
autor:Pedro Muñoz
matricula:54121
grupo:Q203
*/
#include <stdio.h>
int main()
{
	int opcion,contador=0,i,k;
	float notas[60],media,suma;
	do{
	printf("MENU DE OPCIONES\n 1-introduce una nota nueva\n 2-ver todas la notas\n 3-calcular la media\n 4-salir del programa\n");
	scanf("%d",&opcion);

	
switch(opcion)
{
	case 1:
	//contador
		printf("introduce tu nota:\n");
		scanf("%f",&notas[contador]);
		contador+=1;
	break;
	
	case 2:
		if(contador==0)
			printf("no has introducido notas\n");
		else{
			printf("tus notas son:\n");
		for (i=0; i<contador; i++)
			printf("%f\n",notas[i]);
		}
	break;
	case 3:
		if(contador==0)
			printf("no has introducido notas\n");
		else{
		
		for(k=0; k<contador; k++)
		{
			suma+=notas[k];
		}
		media=suma/contador;
		printf("tu nota media es: %f\n",media);
		media=0;
		suma=0;
	}
	break;
}
}while(opcion!=4);
return 0;
}
