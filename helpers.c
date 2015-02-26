/*
** helper.c for helper.c in /home/bene_t/Semaine2/Jour03/bene_t/my_strlen
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Jan 26 11:50:18 2014 BENE Thibaut
** Last update Wed Jan 26 12:33:49 2014 BENE Thibaut
*/
#include "helpers.h"

int	check_argc(int argc)
{
  if (argc < 5)
    {
      error_message();
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}

int	check_ip_arg(char *ip)
{
  if (my_strcmp(ip, "--ip") == 0)
    return (EXIT_SUCCESS);
  error_message();
  return (EXIT_FAILURE);
}

int	check_port_arg(char *port)
{
  if (my_strcmp(port, "--port") == 0)
    return (EXIT_SUCCESS);
  error_message();
  return (EXIT_FAILURE);
}

int	check_port_value(char *port)
{
  int i;
  i = 0;

  for (i = 0; i < my_strlen(port); i++)
    {
      if(is_num(port[i]))
	continue;
      else
	{
	  my_putstr("You should enter a valid port (1 to 65535)\n");
	  return (EXIT_FAILURE);
	}
    }
  return (EXIT_SUCCESS);
}

void	error_message()
{
  my_putstr("USAGE: ./fondation --ip <ip> --port <port>\n");
}













