#include <unistd.h>

int main()
{

  write(1, "Gimmie a string >= 10 chars\n", 28);
  char char_buffer[11] = "foo";
  char_buffer[10] = '\0';
  read(0, char_buffer, 10);
  write(1, "You gave me: ", 13);
  write(1, char_buffer, 10);
  
  return(0);
}
