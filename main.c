/*
** main.c for main.c in /home/bene_t/Semaine2/Jour03/bene_t/my_strlen
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Jan 26 11:50:18 2014 BENE Thibaut
** Last update Wed Jan 26 12:33:49 2014 BENE Thibaut
*/
#include "main.h"
#include "app.h"

int	main(int argc, char *argv[])
{
  if (check_argc(argc) == EXIT_SUCCESS)
    {
      char *ip = argv[2];
      char *port = argv[4];
      if (check_ip_arg(argv[1]) == EXIT_SUCCESS && check_port_arg(argv[3]) == EXIT_SUCCESS)
	{
	  if (check_port_value(port) == EXIT_SUCCESS)
	    app(ip, port);
	}
    }
  return (EXIT_SUCCESS);
}
