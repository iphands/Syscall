#include <time.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
  for (unsigned short int i = 0; i < 10; i++) {
    printf("%d\n", (int) time(NULL));
    sleep(1);
  }
  return(0);
}
