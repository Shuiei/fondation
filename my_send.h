#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define RED     "\033[1;31m"
#define WHITE   "\033[0;m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"

int	my_send(int sock);
char	*readLine();
void	my_putstr(char *str);
int	check_my_send(int sock);
int	my_strlen(char *str);
int	my_strcmp(char *s1, char *s2);
