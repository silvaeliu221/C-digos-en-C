#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char usuario[20], contrasena[20];
    int intentos = 0;
    float saldo = 500.0;
    int opcion, servicio, subservicio;
    float monto;

    printf("PROGRAMA REALIZADO POR SILVA MIRANDA ELIU DANIEL\n\n");

    // Acceso al cajero
    do {
        printf("Ingrese su usuario: ");
        scanf("%s", usuario);
        printf("Ingrese su contrasena: ");
        scanf("%s", contrasena);

        if (strcmp(usuario, "Eliu") == 0 && strcmp(contrasena, "1234") == 0) {
            printf("\nBienvenido al Cajero, %s\n\n", usuario);
            break;
        } else {
            intentos++;
            if (intentos == 3) {
                printf("\nTarjeta bloqueada.\n");
                return 0;
            } else {
                printf("\nUsuario o contrasena incorrecta. Intentos restantes: %d\n\n", 3 - intentos);
            }
        }
    } while (intentos < 3);

    // Menú de operaciones
    do {
        printf("\n----- MENU DEL CAJERO -----\n");
        printf("1. Depositar\n");
        printf("2. Retirar\n");
        printf("3. Pago de servicios\n");
        printf("4. Pago de tarjeta de credito\n");
        printf("5. Consultar saldo\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: // Depositar
                printf("\nIngrese cantidad a depositar: $");
                scanf("%f", &monto);
                saldo += monto;
                printf("\nDeposito exitoso.\nNuevo saldo: $%.2f\n\n", saldo);
                break;

            case 2: // Retirar
                printf("\nIngrese cantidad a retirar: $");
                scanf("%f", &monto);
                if (monto <= saldo) {
                    saldo -= monto;
                    printf("\nRetiro exitoso.\nNuevo saldo: $%.2f\n\n", saldo);
                } else {
                    printf("\nSaldo insuficiente.\n\n");
                }
                break;

            case 3: // Pago de servicios
                printf("\n--- PAGO DE SERVICIOS ---\n");
                printf("1. Tesoreria\n");
                printf("2. Telefonia\n");
                printf("3. Servicios de TV\n");
                printf("4. Tienda Departamental\n");
                printf("Seleccione una opcion: ");
                scanf("%d", &servicio);

                switch (servicio) {
                    case 1: // Tesorería
                        printf("\n1. Luz\n2. Agua\n3. Predial\n4. Licencia de conducir\n5. Multa Automotriz\n6. Tenencia\n");
                        printf("Seleccione servicio: ");
                        scanf("%d", &subservicio);

                        if (subservicio == 4) { // Licencias de conducir
                            printf("\n--- LICENCIAS DE CONDUCIR ---\n");
                            printf("1. Permiso menor de edad ($1,200)\n");
                            printf("2. Licencia A autos particulares ($1,800)\n");
                            printf("3. Licencia A1 motocicletas ($1,500)\n");
                            printf("4. Licencia B taxi ($1,800)\n");
                            printf("5. Licencia C transporte de carga ($2,300)\n");
                            printf("6. Licencia D transporte de pasajeros ($3,200)\n");
                            printf("7. Licencia E servicios especiales ($4,100)\n");
                            printf("Seleccione licencia: ");
                            scanf("%d", &subservicio);

                            switch (subservicio) {
                                case 1: monto = 1200; break;
                                case 2: monto = 1800; break;
                                case 3: monto = 1500; break;
                                case 4: monto = 1800; break;
                                case 5: monto = 2300; break;
                                case 6: monto = 3200; break;
                                case 7: monto = 4100; break;
                                default: monto = 0; printf("\nOpcion invalida.\n\n"); break;
                            }

                            if (monto > 0) {
                                if (monto <= saldo) {
                                    saldo -= monto;
                                    printf("\nPago de licencia realizado.\nNuevo saldo: $%.2f\n\n", saldo);
                                } else {
                                    printf("\nSaldo insuficiente.\n\n");
                                }
                            }
                        } else {
                            printf("\nServicio no disponible por ahora.\n");
                        }
                        break;

                    case 2: // Telefonía
                        printf("\n1. Telmex\n2. AT&T Mexico\n3. Claro\n4. Movistar Mexico\n");
                        printf("Seleccione servicio: ");
                        scanf("%d", &subservicio);
                        printf("\nIngrese monto a pagar: $");
                        scanf("%f", &monto);
                        if (monto <= saldo) {
                            saldo -= monto;
                            printf("\nPago realizado.\nNuevo saldo: $%.2f\n\n", saldo);
                        } else {
                            printf("\nSaldo insuficiente.\n\n");
                        }
                        break;

                    case 3: // Servicios de TV
                        printf("\n1. iZZI\n2. Megacable\n3. Dish\n4. Sky\n5. VeTV\n6. Star TV\n7. Totalplay\n");
                        printf("Seleccione servicio: ");
                        scanf("%d", &subservicio);
                        printf("\nIngrese monto a pagar: $");
                        scanf("%f", &monto);
                        if (monto <= saldo) {
                            saldo -= monto;
                            printf("\nPago realizado.\nNuevo saldo: $%.2f\n\n", saldo);
                        } else {
                            printf("\nSaldo insuficiente.\n\n");
                        }
                        break;

                    case 4: // Tienda Departamental
                        printf("\n1. Liverpool\n2. Sears\n3. Palacio de Hierro\n4. Suburbia\n");
                        printf("Seleccione tienda: ");
                        scanf("%d", &subservicio);
                        printf("\nIngrese monto a pagar: $");
                        scanf("%f", &monto);
                        if (monto <= saldo) {
                            saldo -= monto;
                            printf("\nPago realizado.\nNuevo saldo: $%.2f\n\n", saldo);
                        } else {
                            printf("\nSaldo insuficiente.\n\n");
                        }
                        break;

                    default:
                        printf("\nOpcion invalida.\n\n");
                }
                break;

            case 4: // Pago de tarjeta de crédito
                printf("\n--- TARJETA A PAGAR ---\n");
                printf("1. Banamex\n2. Bancomer\n3. American Express\n4. Banorte\n5. Santander\n6. Banco Azteca\n7. Inbursa\n");
                printf("Seleccione tarjeta: ");
                scanf("%d", &subservicio);
                printf("\nIngrese monto a pagar de tarjeta de credito: $");
                scanf("%f", &monto);
                if (monto <= saldo) {
                    saldo -= monto;
                    printf("\nPago de tarjeta realizado.\nNuevo saldo: $%.2f\n\n", saldo);
                } else {
                    printf("\nSaldo insuficiente.\n\n");
                }
                break;

            case 5: // Consulta de saldo
                printf("\nSu saldo disponible es: $%.2f\n\n", saldo);
                break;

            case 6: // Salir
                printf("\nGracias por usar el Cajero Electronico.\n");
                printf("Saldo final: $%.2f\n\n", saldo);
                break;

            default:
                printf("\nOpcion invalida.\n\n");
        }

    } while (opcion != 6);

    return 0;
}
