#include<stdio.h>
main()
{
	float kilos, conver;
	char opc;
	printf("Por favor ingrese el valor que desea converetir (Ingresa en kilogramos)");
	scanf("%f", &kilos);
	printf("A que medida desea convertirlo?\n\na)Hectogramos\nb)Decagramos\nc)Gramos\nd)Decigramos\ne)Centigramos\nf)Miligramos\n");
	scanf(" %c", &opc);
	getchar();
	switch(opc){
		case 'a':
			conver = kilos*10;
			printf("\n%.2f kilogramos equivalen a %.2f hectogramos\n", kilos, conver);
			break;
		case 'b':
			conver = kilos*100;
			printf("\n%.2f kilogramos equivalen a %.2f decagramos\n", kilos, conver);
			break;
		case 'c':
			conver = kilos*1000;
			printf("\n%.2f kilogramos equivalen a %.2f gramos\n", kilos, conver);
			break;
		case 'd':
			conver = kilos*10000;
			printf("\n%.2f kilogramos equivalen a %.2f decigramos\n", kilos, conver);
			break;
		case 'e':
			conver = kilos*100000;
			printf("\n%.2f kilogramos equivalen a %.2f centigramos\n", kilos, conver);
			break;
		case 'f':
			conver = kilos*1000000;
			printf("\n%.2f kilogramos equivalen a %.2f miligramos\n", kilos, conver);
			break;
		default:
			printf("Opcion no valida");			
	}
	return 0;
}