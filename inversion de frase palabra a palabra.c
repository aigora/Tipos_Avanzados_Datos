/*
NOMBRE: Carlos Rubio Santamaria
Q-103
DEFINICION: este ejercicio solicita una frase al usuario (sin acentos)
 y realiza la inversion de la frase palabra a palabra

EJEMPLO DE EJECUCION:
        introduzca una cadena: Escuela Tecnica de Ingenieros
        La cadena inversita es: Ingenieros de Tecnica Escuela
*/      
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
  char cadenaInicial [MAX], cadenaFinal[MAX];
  int i,f,pi,pf=0,j;
  printf ("Introduzca una frase:\n");
  gets(cadenaInicial);
  fflush(stdin);
  for ( j=0; cadenaInicial[j] != '\0'; ++j);
  f = j-1;
  for ( i=0, pi = 0; i <= j; ++i)
  {
      if ((cadenaInicial[i] == ' ')||(i==j))
      {
                      for(pf = i-1;pi <= pf;pf--,f--)
                      cadenaFinal[f] = cadenaInicial[pf];
                      cadenaFinal[f] = ' ';
                      f--;
                      pi = i+1;
                      }
                      }
                      cadenaFinal[j+1] = '\0';
                      
      printf("\nLa frase invertida es: %s\n", cadenaFinal);
  
    system("PAUSE");//Mantener pantalla	
}
