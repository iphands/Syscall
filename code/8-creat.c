#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{  
  int fd = creat("/tmp/testfile-123456", S_IRWXU|S_IRWXG|S_IRWXO);

  if (fd == -1) {
    write(1, "Cannot open, permission denied!\n", 32);
    return(1);
  }

  write(fd, "Hello World\n", 12);
  close(fd);
  return(0);
}
