#include "my_send.h"

int my_send(int sock)
{
  char *reader;;

  my_putstr("Prompt-> ");
  reader = readLine();
  if (write(sock, reader, strlen(reader)) != my_strlen(reader))
      return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}

void check_my_send(int sock)
{
  int ret_send;

  ret_send = my_send(sock);
  if (ret_send == EXIT_FAILURE)
    my_putstr("Error while writing on the server\n");
}
