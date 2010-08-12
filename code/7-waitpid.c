#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
  int status = 0;

  pid_t child_pid = fork();
  if (child_pid == 0) {
    printf("I am the child\n");
    fflush(stdout);
    sleep(1);
    exit(1);
  } else {
    printf("I am the parent\n");
    fflush(stdout);
    waitpid(-1, &status, 0);
  }  

  printf("We got back: %d\n", status);

  return(0);
}
