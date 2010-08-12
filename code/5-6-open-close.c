#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{  
  int fd = open("/tmp/testfile-123456", O_CREAT|O_RDWR);

  if (fd == -1) {
    write(1, "Cannot open, permission denied!\n", 32);
    return(1);
  }

  write(fd, "Hello World\n", 12);
  close(fd);
  return(0);
}
