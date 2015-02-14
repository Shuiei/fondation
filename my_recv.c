#include "my_recv.h"

int my_recv(int sock)
{
  char buf[1024];
  bzero(buf, 1024);
  if(read(sock, buf, strlen(buf)) < 0)
    {
      my_putstr(buf);
    }
    puts(buf);
    return (EXIT_SUCCESS);
}
