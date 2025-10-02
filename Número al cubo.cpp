#include<stdio.h>
#include<stdlib.h>
float res, cubo(int x);
int main()
{
	int num;
	printf("Ingrese un numero para elevar al cubo ");
	scanf("%i", &num);
	res=cubo(num);
	printf("\n%i al cubo es: %0.0f\n", num, res);
	return 0;
}
float cubo(int x)
{
	return x*x*x;
}