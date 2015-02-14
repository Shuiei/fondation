#include "my_recv.h"

int my_recv(int sock)
{
 char buf[1024];
 int   r;
 int ret;

 bzero(buf, 1024);
 while ((r = read(sock, buf, 1024)) > 0)
   {
     ret = 0;
     ret = display(buf);
     if (ret == 1)
       return(EXIT_SUCCESS);
     bzero(buf, 1024);
   }
   return (EXIT_SUCCESS);
}

int display(char tab[])
{
  int i;
  i = 0;

  for(i = 0; i < my_strlen(tab); i++)
    {
      if (tab[i] == '\n')
	{
	  my_putchar(tab[i]);
	  return (1);
	}
      if (tab[i] == '#')
	{
	  my_putchar('\n');
	}

      my_putchar(tab[i]);
    }
  return (0);
}
