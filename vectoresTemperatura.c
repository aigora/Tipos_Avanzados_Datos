#include <stdio.h>
#include <conio.h>

int main() {
	int i, mes_M, mes_m, j, aux; //para ordenar vectores con metododo burbuja usar i, j y auxiliar, y bucle anidado.
	float mediaAnual=0;
	float vectorTemp[12]; 
	float maximo=0, minimo=0;
	
	//IMTRODUCCIÓN DE TEMPERATURAS Y MEDIA:
	for (i=0; i<=11; i++) {
		printf("Introduce la temperatura del mes %d\n", i+1);
		scanf("%f", &vectorTemp[i]);
		mediaAnual+=vectorTemp[i];
	}
	mediaAnual=mediaAnual/12;
	printf("Temperatura media anual: %f\n", mediaAnual);
	
	//TEMPERATURA MÍNIMA Y MÁXIMA CON SUS CORRESPONDIENTES MESES:
	minimo=vectorTemp[0];
	maximo=vectorTemp[0];
	mes_m=1;
	mes_M=1;
	for (i=0; i<=11; i++) {
		if (vectorTemp[i]>maximo){
			maximo=vectorTemp[i];
			mes_M=i+1;
		}
		else if (vectorTemp[i]<minimo){
			minimo=vectorTemp[i];
			mes_m=i+1; //no me da el mes en el minimo;
		}
	}
	printf ("La maxima temperatura es: %f, y pertenece al mes: %d\n", maximo, mes_M);
	printf ("La minima temperatura es: %f, y pertenece al mes: %d\n", minimo, mes_m);
	
	//ORDENAR LAS TEMPERATURAS DE MENOR A MAYOR:
	//METODO BURBUJA:
	for (i=0; i<12; i++) {
		for (j=0; j<12; j++) { //bucle anidado
			if (vectorTemp[j]>vectorTemp[i]){
				aux=vectorTemp[i];
				vectorTemp[i]=vectorTemp[j];
				vectorTemp[j]=aux;
			}
		}
	}
	//Imprimir forma ascendente:
	printf ("\n\nTemperaturas ordenadas de menor a mayor:\n");
	for (i=0;i<12;i++){
		printf ("%f\n", vectorTemp[i]);
	}
	//Imprimir forma descendente:
	/*
	for (i=11;i>=0;i--){
		printf ("%f\n", vectorTemp[i]);
	}
	*/
	
	return 0;
}
