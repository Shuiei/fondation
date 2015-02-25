#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include "my_send.h"
#include "my_recv.h"

#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define closesocket(s) close(s)

#define RED     "\033[1;31m"
#define WHITE   "\033[0;m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"

typedef int SOCKET;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;

int	app(char *ip, char *port);
void	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_getnbr(char *str);
int	my_strlen(char *str);
void	message_connection1();
void	message_connection2();
void	failed_connection();
