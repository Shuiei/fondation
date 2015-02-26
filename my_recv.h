/*
** my_recv.h for my_recv.h in /home/bene_t/Semaine2/Jour03/bene_t/my_strlen
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Jan 26 11:50:18 2014 BENE Thibaut
** Last update Wed Jan 26 12:33:49 2014 BENE Thibaut
*/
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

