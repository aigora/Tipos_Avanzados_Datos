#include<stdio.h>
int main()
{
char cadena[50];
char letra;
int i,cont=0;
printf("Introduzca una letra:\n");
scanf("%c",&letra);
printf ("Escriba una palabra:\n");
scanf("%s",cadena);
i=0;
while(cadena[i]!='\0'){
if(cadena[i]==letra)
cont++;
i++;
}
printf("Numero de repeticiones de la letra %c : %d\n", letra,cont);

}
