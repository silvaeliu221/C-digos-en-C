#include<stdio.h>
#include<stdlib.h>
#define PI 3.141592
int main ()
{
	float perimetro, radio;
	printf("Programa elaborado por Silva Miranda Eliu Daniel\n");
	system ("clear");
	printf("Introduzca el radio\n");
	scanf("%f", &radio);
	perimetro=2*PI*radio;
	printf("El perimetro de es %f\n", perimetro);
	return 0;
}