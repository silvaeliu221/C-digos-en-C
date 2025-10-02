#include<stdio.h>

int main(){
	int edad;
	printf("Por favor ingrese su edad\n");
	scanf("%i", &edad);
	if (edad>=18)
	{
		printf("ya puedes votar\n");
	}
	else
	{
		printf("Eres un adolescente");
	}
	return 0;
}