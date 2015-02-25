#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "my_bzero.h"
#include "checker.h"

#define BUF_SIZE 512

int	my_recv(int sock);
void	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
void	my_putchar(char c);
int	display(char tab[], int *start);
int	my_strlen(char *str);
