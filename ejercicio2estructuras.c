#include<stdio.h>
#include<math.h>
//Miguel Ángel Rodrigo Garcia q103

struct punto{
	float x;
	float y;
	
};
void main(){
	int n,i;
	struct punto puntos[100] ;
	int cuadrante1=0,cuadrante2=0,cuadrante3=0,cuadrante4=0;
	
	printf("indique la cantidad de puntos que de sea introducir:\n");
	scanf("%d",&n);
	 for(i=0;i<n;i++){
	 	
	 	 
	printf("introduzca la coord x del punto %d:\n",i+1);
	scanf("%f",&puntos[i].x);
	printf("introduzca la coord y del punto %d:\n",i+1);
	scanf("%f",&puntos[i].y);
          }
           for(i=0;i<n;i++){
    	if(puntos[i].x >0&&puntos[i].y>0)
	{
	
			cuadrante1++;
		
	}
		else if(puntos[i].x >0&&puntos[i].y<0)
	{
	     cuadrante2++;
			
	}
		else if(puntos[i].x <0&&puntos[i].y<0)
	{
	        cuadrante3++;
	}
		else if(puntos[i].x <0&&puntos[i].y>0){
	
			cuadrante4++;
		
	
         }
     }
	printf("en el primer cuadrante hay %d puntos \n",cuadrante1);
	printf("en el segundo cuadrante hay %d puntos \n",cuadrante2);
	printf("en el tercer cuadrante hay %d puntos \n",cuadrante3);
	printf("en el cuarto cuadrante hay %d puntos \n",cuadrante4);


}
