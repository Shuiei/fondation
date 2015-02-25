#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define RED     "\033[1;31m"
#define WHITE   "\033[0;m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"

void	error();
void	okay();
int 	check_ko(char tab[]);
int	check_ok(char tab[]);
void	my_putstr(char *str);
