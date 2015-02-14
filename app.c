#include "app.h"

int app(char *ip, char *port)
{
	int sock;
       	SOCKADDR_IN sin = { 0 };
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
		while(1)
		{
	    	check_my_send(sock);
	    	my_recv(sock);
		}
	  }
	else
	  {
	    my_putstr("Impossible de se connecter\n");
	    return (EXIT_FAILURE);
	  }
	close(sock);
	return (EXIT_SUCCESS);
}


