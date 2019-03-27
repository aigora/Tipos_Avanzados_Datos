#include <stdio.h>
#include <string.h>

#define USUARIO "admin"
#define PASSW "12345678"

int main() {
	char usuario[50], passw[50];
	int comparacionUsuario, comparacionPassw;
	
	do {
		printf("Introduce usuario:\n");
		scanf("%s", usuario);
		printf("Introduce password:\n");
		scanf("%s", passw);
		comparacionUsuario = strcmp(USUARIO, usuario);
		comparacionPassw = strcmp(PASSW, passw);
		if (comparacionPassw != 0 || comparacionUsuario != 0)
			printf("Usuario o password incorrecto. Vuelve a introducirlo\n");
	} while(comparacionPassw != 0 || comparacionUsuario != 0);
	
	return 0;
}
