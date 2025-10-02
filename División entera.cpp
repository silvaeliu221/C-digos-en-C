#include<stdio.h>
int main ()
{
int dividendo, divisor, cociente, resto;
printf("Programa elaborado por Silva Miranda Eliu Daniel\n");
printf("Introduzca el dividendo:\n");
scanf("%i", &dividendo);
printf("Introduzca el divisor:\n");
scanf("%i", &divisor);
cociente=dividendo/divisor;
resto=dividendo%divisor;
printf("%i div %i = %i (resto = %i\n)", dividendo, divisor, cociente, resto);
return 0;
}