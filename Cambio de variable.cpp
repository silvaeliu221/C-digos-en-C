#include<stdio.h>
#include<stdlib.h>

int main()
{
	int aux, v1, v2;
	system("cls");
	printf("Programa elaborado por Silva Miranda Eliu Daniel");
	getchar();
	system ("cls");
	printf("Introduzca en valor de v1");
	scanf("%i", &v1);
	printf("Introduzca el valor en v2")	;
	scanf("%i", &v2);
	printf("\n\n Valor de v1 es %i", v1);
	printf("\n\n Valor de v2 es %i", v2);
	aux=v1;
	v1=v2;
	v2=aux;
	printf("\n\nDespues del intecambio\n");
	printf("\nAhora el valor de v1 es %i", v1);
	printf("\nAhora el valor de v2 es %i", v2);
	getchar();
	return 0;
}