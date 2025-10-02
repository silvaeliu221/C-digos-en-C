#include<stdio.h>

 main()
{
int numero;
float residuo;

	printf("Por favor ingrese un numero: ");
	scanf("%f", &numero);
	residuo = numero % 2;
	if(residuo==0){
		printf("Su numero es par");
	}else {
		printf("Su numero es impar");
	}
	return 0;
}