#include<stdio.h>
main()
{
	float monto_pago;
	float monto_descuento;
	float pago_final;
	
	printf("Ingrese el monto del pago: ");
	scanf("%f", &monto_pago);
	
	if(monto_pago<500)	{
		pago_final=monto_pago;
		printf("El pago es menor a 500, no se aplica descuento.\n");}
	else if(monto_pago>=500 && monto_pago<1000){
	 monto_descuento=monto_pago*0.10;
	 pago_final=monto_pago-monto_descuento;
	 printf("Se aplica su 10% de descuento.\n");}
	else if(monto_pago>=1000 && monto_pago<2000){
	 monto_descuento=monto_pago*0.20;
	 pago_final=monto_pago-monto_descuento;
	 printf("Se aplica su 20% de descuento.\n");}
	else{
	 monto_descuento=monto_pago*0.30;
	 pago_final=monto_pago-monto_descuento;
	 printf("Se aplica su 30% de descuento.\n");}
	
	printf("El monto a pagar es: %f\n", pago_final);
	
	return 0;
	
}