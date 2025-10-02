#include <stdio.h>
#include <stdlib.h>
#define MAXIMA_LONGITUD_CADENA 50
int main()
{
	char nombre[MAXIMA_LONGITUD_CADENA];
	system("clear");
	printf("\033[0;31mPrograma elaborado por Silva Miranda Eliu Daniel\033[0m\n\n");
	getchar();
	system("clear");
	printf("\033[0;36mIngresa tu nombre completo\033[0m\n\n");
	fgets(nombre,MAXIMA_LONGITUD_CADENA,stdin);
	printf("\033[1;32mHola, %s Bienvenido al programa!\033[0m\n", nombre);
	return 0;
}