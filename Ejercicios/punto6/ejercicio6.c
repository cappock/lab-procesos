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
        
        printf("Yo soy el hijo Hola\n");      
    }
    else
    {
        // Codigo padre 
        int w = waitpid(NULL);       
        printf("Yo soy el padre Hola\n");
        sleep(2);

    }
    // Codijo ejecutado por ambos (para el caso)
    printf("Finalizando proceso %d\n", getpid());
    return 0;
}