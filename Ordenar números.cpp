#include<stdio.h>
#include<locale.h>

int main() {
    int a, b, c, temp;
    printf("Ingresa tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordenamiento simple
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Numeros ordenados: %d %d %d\n", a, b, c);
    return 0;
}
