#include <stdio.h>
#include <unistd.h>

/*
gcc -Wall example2.c -o example2.out

-> sleep
-> getpid
-> fork
*/
int main(void)
{
    char rol;
    int x = 100;
    int id = fork();
    if (id == 0)
    {
        // Codigo hijo
        printf("Yo soy el hijo, Mi valor de X : %d\n", x );
        x = x*2;
        printf("Hijo operacion x = 2x %d\n", x );

    }
    else
    {
        // Codigo padre
        printf("Yo soy el padre, Mi valor de X : %d\n", x );
        x = x/2;
        printf("Padre operacion x = x/2 %d\n", x );

    }
    // Codijo ejecutado por ambos (para el caso)
    printf("Finalizando proceso %d\n", getpid());
    return 0;
}