#include<stdio.h>

int main()
{
	int mes;
	printf("Programa qu muestra los días de un mes\n");
	printf("Ingresa el mes (1-12)");
	scanf("%d", &mes);
	switch(mes){
		case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("El mes %d tiene 31 dias.\n", mes);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("El mes %d tiene 30 días.\n", mes);
		break;
	case 2:
		printf("El mes %d tiene 28 dias.\n", mes);
	}
	return 0;
}