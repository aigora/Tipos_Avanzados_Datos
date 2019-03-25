// Pedro Muñoz Redondo 54121
#include <stdio.h>
#include <string.h>
int main ()
{
char palabra[11];
int len, i;
printf("Escribe una palabra de 10 letras:\n");
scanf(" %10s", palabra);
len = strlen(palabra);
for(i = len - 1; i >= 0; i--)
printf(" %c", palabra[i]);
printf("\n");
return 0;
}
