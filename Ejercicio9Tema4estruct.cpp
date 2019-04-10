/* Alumno: Adrian Triner Anton Q103
Este programa calcula el area de dos triangulos y luego muestra en pantalla la mayor
*/

#include <stdio.h>

struct triangulo
{
	float base,altura;
};
int main ()
{
	int i;
	struct triangulo campos[2];
	float area[i],maxarea=0;
	for(i=0;i<2;i++)
	{
		printf("Triangulo %d: \n",i+1);
		printf("Base: ");
		scanf("%f",&campos[i].base);
		printf("Altura: ");
		scanf("%f",&campos[i].altura);	
	}
	for(i=0;i<2;i++)
	{
		area[i]=campos[i].base*campos[i].altura/2;
		printf("Area %d: %f\n",i+1,area[i]);
    }
    for(i=0;i<2;i++)
    {
	    if(area[i]>maxarea)
	    {
	    	maxarea=area[i];
	    }
	}
	printf("El area mayor es: %f",maxarea);		
}
