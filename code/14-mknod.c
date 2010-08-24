#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{

  mknod("/tmp/tmpnod", S_IFCHR|S_IRWXU|S_IRWXG|S_IRWXO, 5);

  return(0);
}
