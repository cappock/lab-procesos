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
    int id = fork();
    if (id == 0)
    {
        // Codigo hijo
        printf("Hello \n" );
    }
    else
    {
        // Codigo padre
        sleep(1);
        printf("Good Bye\n");
        
    }
    // Codijo ejecutado por ambos (para el caso)
    printf("Finalizando proceso %d\n", getpid());
    return 0;
}