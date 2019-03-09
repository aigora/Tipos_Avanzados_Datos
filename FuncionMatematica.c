/*      Autora: ROCIO BERZAL CABETAS
	Q103
	TEMA 4 Ejercicio 8 vectores: realizar una funcion matematica
*/

#include <stdio.h>
#include<math.h>

int main()
{
	int i, n;
	float x, r;
	
	printf("Elige el tamano del vector:");
	scanf("%i", &n);
	
	int v[n];
	
	printf("Introduce el vector:");
	for (i=0; i<n; i++)
	{
		scanf("%i", &v[i]);
	}
	
	for (i=0; i<n; i++)
	{
		x+=pow (v[i], 2.0);
		r=sqrt (x);
	}
	
	printf("Resultado %f", r);
	
	
}
