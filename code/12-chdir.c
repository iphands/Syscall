#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
  char path_buf[100];
  getcwd(path_buf, 100);
  printf("I am in %s\n", path_buf);
  chdir("/tmp/");
  getcwd(path_buf, 100);
  printf("Now I am in %s\n", path_buf);
  return(0);
}
