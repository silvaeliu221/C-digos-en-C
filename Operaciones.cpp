#include <stdio.h>
#include <conio.h>

int main() {
    int valor1, valor2;
    char operacion;
    int resultado;
    printf("Ingrese primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &valor2);
    printf("Ingrese la operacion que quiere hacer (+, -, *, /): ");
    scanf(" %c", &operacion);
    switch(operacion) {
        case '+': 
            resultado = valor1 + valor2;
            printf("La suma es %i\n", resultado);
            break;
        case '-': 
            resultado = valor1 - valor2;
            printf("La resta es %i\n", resultado);
            break;
        case '*': 
            resultado = valor1 * valor2;
            printf("La multiplicacion es %i\n", resultado);
            break;
        case '/': 
            if (valor2 != 0) {
                resultado = valor1 / valor2;
                printf("La division es %i\n", resultado);
            } else {
                printf("No se puede dividir entre 0\n");
            }
            break;
        default:
            printf("Operacion no valida\n");
    }

    return 0;
}
