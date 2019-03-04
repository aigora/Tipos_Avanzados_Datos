#include <stdio.h>

int main() {
	
	int i;
	// float valorMensual;
	float mediaAnual=0.0;
	float vectorTemp[12]; // Declaro un vector de 12 numeros reales
	
	/*
	SOLUCION SIN VECTOR
	for (i=1; i<=12; i++) {
		printf("Introduce la temp del mes %d\n", i);
		scanf("%f", &valorMensual);
		mediaAnual += valorMensual;	
	}*/
	
	for (i=0; i<=11; i++) {
		printf("Introduce la temp del mes %d\n", i+1);
		scanf("%f", &vectorTemp[i]); // El vector empieza en el indice 0
		mediaAnual += vectorTemp[i];
	}
	
	mediaAnual = mediaAnual / 12;
	
	printf("Temperatura media anual: %f\n", mediaAnual); 
	
	return 0;
}
