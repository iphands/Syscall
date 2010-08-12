#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main()
{

  char * old_path = "/tmp/testfile-123456";
  char * new_path = "/tmp/testfile2-123456";

  int fd = open(new_path, O_CREAT|O_RDWR, S_IRWXU|S_IRWXG|S_IRWXO);

  if (fd == -1) {
    write(1, "Cannot open, permission denied!\n", 32);
    return(1);
  }

  write(fd, "Hello World\n", 12);
  close(fd);

  //link(old_path, new_path);
  //unlink(new

  return(0);
}
