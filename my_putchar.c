/*
** my_putchar.c for my_putchar.c in /home/bene_t/Semaine2/libmy_01
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Fri Oct 24 12:47:00 2014 BENE Thibaut
** Last update Fri Oct 24 14:05:46 2014 BENE Thibaut
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
