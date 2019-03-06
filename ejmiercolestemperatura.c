/* 
AUTOR: CARLOS RUBIO SANTAMARIA
GRUPO: Q103
DESCRIPCION: Calcular la temperatura máxima Y mínima de un año
*/
#include <stdio.h>
#include <stdlib.h>
#define N 12//para mayor comodidad
float maximo(float vectorTemp[], int n);
float minimo(float vectorTemp[], int n);

void main()//función principal
{
float vectorTemp[N], min, max;
int i;
for (i = 0; i < N; i++)
{
    printf("Introduzca la temperatura del mes %d\n", i+1);
    scanf(" %f", &vectorTemp[i]);
}

min = minimo(vectorTemp, N);//llamada a la función mínimo
max = maximo(vectorTemp, N);//llamada a la función máximo

printf("La temperatura maxima es %f y la temperatura minima %f",max, min);
system("PAUSE");//mantener en pantalla
}

float maximo(float vectorTemp[], int n)//función máximo
{
int i;
float mx = vectorTemp[0]; 
for (i = 1; i < n; i++)
if (vectorTemp[i] > mx) mx = vectorTemp[i]; 
return mx;

}
float minimo(float vectorTemp[], int n)//función mínimo
{
int i;
float mn = vectorTemp[0];
for (i = 1; i < n; i++)
if (vectorTemp[i] < mn) mn = vectorTemp[i];
return mn;
}
