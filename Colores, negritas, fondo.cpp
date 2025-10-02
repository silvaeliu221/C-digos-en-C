#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    printf("\033[0;31mPrograma elaborado por ASV\033[0m\n");
    printf("\033[0;31mTexto en rojo\033[0m\n");
    printf("\033[0;32mTexto en verde\033[0m\n");
    printf("\033[0;33mTexto en amarillo\033[0m\n");
    printf("\033[0;34mTexto en azul\033[0m\n");
    printf("\033[0;35mTexto en magenta\033[0m\n");
    printf("\033[0;36mTexto en cyan\033[0m\n");
    printf("\033[0;37mTexto en blanco\033[0m\n");

    printf("\033[1;31mRojo en negritas\033[0m\n");
    
    printf("\033[1;37mTexto negro con fondo blanco\033[0m\n");

    printf("Programa terminado. Presiona Enter para salir...");
    getchar(); 
}
