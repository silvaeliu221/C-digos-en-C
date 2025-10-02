#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;
    printf("Ingresa los valores de a, b y c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("Raices reales: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2*a);
        printf("Raiz doble: x = %.2f\n", x1);
    } else {
        float real = -b / (2*a);
        float imag = sqrt(-d) / (2*a);
        printf("Raices imaginarias: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", real, imag, real, imag);
    }
    return 0;
}
