// Carmen Mourelle
#include <stdio.h>
struct punto
{
	float x;
	float y;
};
int main(){
	int n,i,c1,c2,c3,c4;
	struct punto coordenada[50];
	printf("Introduce el numero de puntos que desea introducir: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Introduce el punto x del punto %d: ",i+1);
		scanf("%f",&coordenada[i].x);
		printf("Introduce el punto y del punto %d: ",i+1);
		scanf("%f",&coordenada[i].y);
	}
	c1=0;
	c2=0;
	c3=0;
	c4=0;
	for(i=0;i<n;i++){
		if(coordenada[i].x>=0 && coordenada[i].y>=0){
			c1++;
		}
		else if(coordenada[i].x>=0 && coordenada[i].y<=0){
			c2++;
		}
		else if(coordenada[i].x<=0 && coordenada[i].y>=0){
			c3++;
		}
		else if(coordenada[i].x<=0 && coordenada[i].y<=0){
			c4++;
		}
	}
		nprintf("Total primer cuadrante = %d",c1);
		printf("\n");
		printf("Total segundo cuadrante = %d",c2);
		printf("\n");
		printf("Total tercer cuadrante = %d",c3);
		printf("\n");
		printf("Total cuarto cuadrante = %d",c4);
	return 0;	
}
