
#include<stdio.h>
#include<math.h>
void main(){
	int v1[4],i;
	for(i=0;i<4;i++){
		printf("coordenada %i: ",i+1);
		scanf("%d",&v1[i]);
	}
	printf("v1: ");
	for(i=0;i<4;i++){
		printf("%d ",v1[i]);
	}
	printf("\nel vector ordenado inversamente sera: ");
	for(i=3;i>=0;i--){
		printf("%d ",v1[i]);		
	}

}
