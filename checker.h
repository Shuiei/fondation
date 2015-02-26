/*
** checker.h for checker.h in /home/bene_t/Semaine2/Jour03/bene_t/my_strlen
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

#define RED     "\033[1;31m"
#define WHITE   "\033[0;m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"

void	error();
void	okay();
int 	check_ko(char tab[]);
int	check_ok(char tab[]);
void	my_putstr(char *str);
