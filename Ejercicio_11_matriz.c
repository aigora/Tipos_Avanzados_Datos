/*Diego Gomez Garrido
Q103
Ing.quimica
*/
#include <stdio.h>

int main()
{
	int m, n, f, c, i, j, k;
	int A[70][70], B[70][70], C[70][70];
	
	printf("A es la primera matriz, B es la segunda matriz y\nC es la matriz resultado del producto\n\n");
	
	printf("Introduzca cuantas filas tiene A\n");
	scanf("%i", &m);
	printf("Introduzca cuantas columnas tiene A\n");
	scanf("%i", &n);
	
	printf("Introduzca cuantas filas tiene B\n");
	scanf("%i", &f);
	printf("Introduzca cuantas columnas tiene B\n");
	scanf("%i", &c);
	
	//NO SE PUEDEN MULTIPLICAR LAS MATRICES
	if(n!=f) 
	{
		printf("\n----------------------------------------------\n");
		printf("Las matrices no se pueden multiplicar entre si ya que\nel numero de columnas de A no es igual al numero de filas de B\n");
	}
	
	//SE PUEDEN MULTIPLICAR LAS MATRICES
	else
	{
		printf("\n----------------------------------------------\n");
		printf("Ingrese\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("A(%i,%i) = ", i+1, j+1);
				scanf("%i", &A[i][j]);
			}
		}
		
		printf("\nIngrese\n");
		for(i=0;i<f;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("B(%i,%i) = ", i+1, j+1);
				scanf("%i", &B[i][j]);
			}
		}	
		
		//MULTIPLICACION
		for (i=0;i<m;i++) 
		{
			for(j=0;j<c;j++)
			{
				C[i][j]=0;
				for (k=0;k<n;k++) 
				{
					C[i][j]=C[i][j]+A[i][k]*B[k][j];
				}
			}
		}
		
		printf("\n----------------------------------------------\n");
		printf("MATRIZ C\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%i\t", C[i][j]);
			}
			printf("\n");
		}		
	}
	printf("\n----------------------------------------------\n");
	printf("FIN DEL PROGRAMA\n");
}
