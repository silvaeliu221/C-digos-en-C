#include<stdio.h>
#define EURO 20.14
int main ()
{
	int pesos;
	float euros;
	printf("\nIntroduce la cantidad en pesos: ");
	scanf("%i", &pesos);
	euros=pesos*EURO;
	printf("\nEquivale a %f", euros);
	getchar();
	return 0;
}