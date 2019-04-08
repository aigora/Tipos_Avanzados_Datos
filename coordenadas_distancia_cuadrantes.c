//MARIO GARRIDO MONTERO
//Q103
//PROGRAMA QUE PIDE COORDENADAS DE DOS PUNTOS,CALCULA LA DISTANCIA ENTRE ELLOS,INDICA EL CUADRANTE DE CADA UNO Y MUESTRA EL NUMERO DE PUNTOS QUE HAY EN CADA CUADRANTE
#include <stdio.h>
#include<math.h>

struct punto{
	float x,y;
} punto1, punto2;

int main(){
	float distancia;
	int cont1=0,cont2=0,cont3=0,cont4=0;//contadores de los cuadrantes en los que se encuentran los puntos
	
	printf("\n1- coordenadas x ");
	scanf("%f",&punto1.x);
	printf("\n1- coordenadas y ");
	scanf("%f",&punto1.y);
	
	fflush(stdin);
	
	printf("\n2- coordenadas x ");
	scanf("%f",&punto2.x);
	printf("\n2- coordenadas y ");
	scanf("%f",&punto2.y);
	
	distancia=((punto2.x-punto1.x)*(punto2.x-punto1.x))+((punto2.y-punto1.y)*(punto2.y-punto1.y));
	distancia=sqrt(distancia);
	printf("\nla distancia es: %.2f\n",distancia);
	
	//cuadrantes punto 1
	if(punto1.x>0 ){
		if(punto1.y>0){
			printf("punto 1 en el primer cuadrante\n");
			cont1++;
		}
		else{
			printf("punto 1 en el cuarto cuadrante\n");
			cont4++;
		}
	}
	
	if(punto1.x<0 ){
		if(punto1.y>0){
			printf("punto 1 en el segundo cuadrante\n");
			cont2++;
		}
		else{
			printf("punto 1 en el tercer cuadrante\n");
			cont3++;
		}
	}
	
	//cuadrantes punto 2
	if(punto2.x>0 ){
		if(punto2.y>0){
			printf("punto 2 en el primer cuadrante\n");
			cont1++;
		}
		else{
			printf("punto 2 en el cuarto cuadrante\n");
			cont4++;
		}
	}
	
	if(punto2.x<0 ){
		if(punto2.y>0){
			printf("punto 2 en el segundo cuadrante\n");
			cont2++;
		}
		else{
			printf("punto 2 en el tercer cuadrante\n");
			cont3++;
		}
	}
	
	printf(" primer cuadrante: %i puntos\n segundo cuadrante: %i puntos\n tercer cuadrante: %i puntos\n cuarto cuadrante: %i puntos\n",cont1,cont2,cont3,cont4);
	
	
	
	
	
	
	
	
	
}
