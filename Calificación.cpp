#include <stdio.h>

int main() {
    int cal;

    printf("Ingresa tu calificacion (0 a 10): ");
    scanf("%i", &cal);

    if (cal >= 0 && cal <= 6) {
        printf("Reprobado\n");
    }
    else if (cal == 7) {
        printf("Suficiente, Aprobado\n");
    }
    else if (cal == 8) {
        printf("Bien, Aprobado\n");
    }
    else if (cal == 9) {
        printf("Notable, Aprobado\n");
    }
    else if (cal == 10) {
        printf("Sobresaliente, Aprobado\n");
    }
    else {
        printf("Calificacion invalida\n");
    }

    return 0;
}
