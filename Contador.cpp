#include<stdio.h>
int main()
{
	int num;
	int cont = 0;
	printf("Dame un numero");
	scanf("%i", &num);
	while(cont<num)
	{
		cont=cont+1;
		printf("%i\n", cont);
	}
	return 0;
}