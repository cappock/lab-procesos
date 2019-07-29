#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
int main()
{

    int sz;
    // if file does not have in directory
    // then file foo.txt is created.
    int fd = open("poo.txt", O_RDWR | O_EXCL);

    printf("fd = %d/n", fd);

    int id = fork();
    if (id == 0)
    {
        sz = write(fd, "Que tranza la vida papu\n", strlen("Que tranza la vida papu\n"));
        printf("Hijo escribio que tranza la vida papu\n");
    }
    else 
    {   wait(id);
        sz = write(fd, "Luchandola perro\n", strlen( "Luchandola perro\n"));
        printf("Padre  escribio Luchandola perro\n\n");     
        
        close(fd);   
    }  
    
    // Codijo ejecutado por ambos (para el caso)
    printf("Finalizando proceso \n");
    return 0;
}