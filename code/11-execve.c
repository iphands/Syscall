#include <unistd.h>

int main()
{
  
  char * argv[4];
  argv[0] = "/bin/ls";
  argv[1] = "-l";
  argv[2] = "/tmp/";
  argv[3] = NULL;
  
  execve(argv[0], argv, NULL);

  return(0);
}
