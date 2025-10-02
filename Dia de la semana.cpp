#include<stdio.h>

int main()
{
	int dia;
	printf("Por favor ingrese un dia\n");
	scanf("%i", &dia);
	switch(dia)
	{
		case 1:
			printf("Lunes\n");
			break;
		case 2:
			printf("Martes\n");
			break;
		case 3:
			printf("Miercoles\n");
			break;
		case 4:
			printf("Jueves\n");
			break;
		case 5:
			printf("Vienres\n");
			break;
		case 6:
			printf("Sabado\n");
			break;
		case 7:
			printf("Domingo\n");
			break;
	}	
	return 0;
}