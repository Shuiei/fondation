#include "my_recv.h"

int my_recv(int sock)
{
  char	buf[BUF_SIZE];
  int	r;
  int	ret;
  int	start;
  start = -1;

  my_bzero(buf, BUF_SIZE);
  while ((r = read(sock, buf, BUF_SIZE)) > 0)
    {
      ret = display(buf, &start);
      if (ret == 1)
	return(EXIT_SUCCESS);
      my_bzero(buf, BUF_SIZE);
      start = 0;
    }
  return (EXIT_SUCCESS);
}

int display(char tab[], int *start)
{
  int i;
  i = 0;
  int error;
  error = 0;

  if(*start == -1)
    my_putstr("-> ");
  if ((error = check_ko(tab)) == EXIT_SUCCESS)
    return (1);
  if ((error = check_ok(tab)) == EXIT_SUCCESS)
    return (1);
  for (i = 0; i < my_strlen(tab); i++)
    {
      if (tab[i] == '\n')
	{
	  my_putchar(tab[i]);
	  return (1);
	}
      if (tab[i] == '#')
	{
	  my_putchar('\n');
	  my_putstr("-> ");
	  continue;
	}
      my_putchar(tab[i]);
    }
  return (0);
}
