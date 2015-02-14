#include "helpers.h"

int check_argc(int argc)
{
  if (argc < 5)
    {
      error_message();
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}

int check_ip_arg(char *ip)
{
  if (my_strcmp(ip, "--ip") == 0)
    return (EXIT_SUCCESS);
  error_message();
  return (EXIT_FAILURE);
}

int check_port_arg(char *port)
{
  if (my_strcmp(port, "--port") == 0)
    return (EXIT_SUCCESS);
  error_message();
  return (EXIT_FAILURE);
}

int check_port_value(char *port)
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

void error_message()
{
  my_putstr("USAGE: ./fondation --ip <ip> --port <port>\n");
}













