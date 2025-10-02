#include<stdio.h>
#include<string.h>

int main()
{
	char clave [10];
	
	printf("Escriba su calve de acceso\n");
	scanf("%9s", clave);
	if (strcmp(clave, "Hola")==0)
	{
		printf("La clave es la correcta\n");
		printf("Bienvenido\n");		
	}
	else
	{
		printf("La clave es incorrecta\n");
		printf("Intentalo nuevamente");		
	}
return 0;
}