#include<stdio.h>


main()
{
	float saldo, deposito, retiro;
	saldo = 300;
	printf("Cuanto deposita: ");
	scanf("%f", &deposito);
	saldo = saldo+deposito;
	printf("Cuanto retira: ");
	scanf("%f", &retiro);
	if (retiro<=saldo){
		saldo=saldo-retiro;
		printf("Su nuevo saldo es: %.2f", saldo);
	}else {
		printf("No hay suficiente saldo");
	}
}