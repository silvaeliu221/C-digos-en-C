#include <stdio.h>

///Programa realizado por Silva Miranda Eliú Daniel

int main() {
    char letra;

    printf("Ingresa una letra: ");
    scanf(" %c", &letra);  // el espacio evita errores

    if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u' ||
        letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') {
        printf("La letra '%c' es vocal\n", letra);
    } else {
        printf("La letra '%c' no es vocal\n", letra);
    }

    return 0;
}
