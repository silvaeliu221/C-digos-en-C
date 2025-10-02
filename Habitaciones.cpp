#include<stdio.h>
int main()
{
	int numero;
	printf("Estado de habitaciones");
	printf("\n\n1.Azul\n\n2.Roja\n\n3.Verde\n\n4.Rosa\n\n5.Gris\n\n");
	printf("Introduzca el numero de habitacion\n");
	scanf("%d", &numero);
	switch(numero){
	
		case 1: printf("\nLa Azul tiene 2 camas y esta en la primera planta");
		break;
		case 2: printf("\nLa Roja tiene 1 cama y esta en la primera planta");
		break;
		case 3: printf("\nLa Verde tiene 3 camas y esta en la segunda planta");
		break;
		case 4: printf("\nLa Rosa tiene 2 camas y esta en la segunda planta");
		break;
		case 5: printf("\nLa Gris tiene 1 cama y esta en la tercera planta");
		break;
		default: printf("\nEROR:%d no esta asociada a ninguna habitacion", numero);
	}
	return 0;
}
