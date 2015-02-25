#include "my_send.h"

int my_send(int sock)
{
  char *reader;

  my_putstr("Prompt-> ");
  if ((reader = readLine()) == NULL)
    return (EXIT_FAILURE);
  if (my_strcmp(reader, "/bye") == 0)
    {
      free(reader);
      return (EXIT_FAILURE);
    }
  write(sock, reader, strlen(reader));
  free(reader);
  return (EXIT_SUCCESS);
}

int check_my_send(int sock)
{
  int ret_send;

  if ((ret_send = my_send(sock)) == EXIT_FAILURE)
    {
      my_putstr(RED);
      my_putstr("Connection Terminated\n");
      my_putstr(WHITE);
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
