#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	my_send(int sock);
char	*readLine();
void	my_putstr(char *str);
void	check_my_send(int sock);
int	my_strlen(char *str);
