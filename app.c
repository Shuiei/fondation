/*
** app.c for app.c in /home/bene_t/Semaine2/Jour03/bene_t/my_strlen
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Jan 26 11:50:18 2014 BENE Thibaut
** Last update Wed Jan 26 12:33:49 2014 BENE Thibaut
*/
#include "app.h"

int	app(char *ip, char *port)
{
	int sock;
       	SOCKADDR_IN sin = { 0 };
	char ret;

	sock = socket(AF_INET, SOCK_STREAM, 0);
	if(sock == INVALID_SOCKET)
	  {
	    perror("socket()");
	    return (EXIT_FAILURE);
	  }
	sin.sin_addr.s_addr = inet_addr(ip);
	sin.sin_family = AF_INET;
	sin.sin_port = htons(my_getnbr(port));
	if(connect(sock, (SOCKADDR*)&sin, sizeof(SOCKADDR)) != SOCKET_ERROR)
	  {
	    message_connection1();
	    message_connection2();
	    while((ret = check_my_send(sock)) == EXIT_SUCCESS)
	      my_recv(sock);
	  }
	else
	  {
	    failed_connection();
	    return (EXIT_FAILURE);
	  }
	close(sock);
	return (EXIT_SUCCESS);
}

void	message_connection1()
{
  my_putstr(BLUE);
  my_putstr("Connection Pending...\n\n");
  my_putstr(WHITE);
}

void	message_connection2()
{
  my_putstr(BLUE);
  my_putstr("Connection Accepted...\n\n");
  my_putstr(WHITE);
}

void	failed_connection()
{
  my_putstr(RED);
  my_putstr("Connection Failed ! \n\n\n");
  my_putstr(" ");
  my_putstr(WHITE);
}
