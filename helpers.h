/*
** helper.h for helper.h in /home/bene_t/Semaine2/Jour03/bene_t/my_strlen
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Jan 26 11:50:18 2014 BENE Thibaut
** Last update Wed Jan 26 12:33:49 2014 BENE Thibaut
*/
#include <stdio.h>
#include <stdlib.h>

int	is_num(char c);
void	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
int	check_argc(int argc);
int	check_ip_arg(char *ip);
int	check_port_arg(char *port);
int	check_port_value(char *port);
void	my_putchar(char c);
int	is_num(char c);
void	error_message();
int	my_strlen(char *str);
