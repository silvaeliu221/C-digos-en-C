#include<stdio.h>
int main()
{
	int num;
	printf("Escriba un numero\n");
	scanf("%i", &num);
	if (num == 0){
		printf("El numero es nulo");
	}else{
		if (num>0){
			printf("El numero es postivo\n");
		}
		else{
			printf("El número es negativo\n");
		}
	}
	return 0;
}