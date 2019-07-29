#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main (void){
  int *status_code;
  printf("Padre -> \n");
  int id = fork();
  switch(id) {
    case 0:
      // Codigo del proceso hijo
      printf("Soy Hijo");
      execl("/bin/ls", "/bin/ls", "-l", ".", NULL);
    case -1: 
      // Error
      printf("ERROR!!!");
      break;
  }
  wait(status_code); // Ensayarlo sin comentarlo y comentandolo a ver que pasa
  printf("Esto no lo ejecutara el hijo\n");
  return 0;
}
