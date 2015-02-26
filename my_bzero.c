/*
** my_bzero.c for my_bzero.c in /home/bene_t/Semaine2/Jour03/bene_t/my_strlen
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Jan 26 11:50:18 2014 BENE Thibaut
** Last update Wed Jan 26 12:33:49 2014 BENE Thibaut
*/
#include "my_bzero.h"

void	my_bzero(char *s, int len)
{
  int i;
  for (i = 0; i <= len; i++)
    {
      s[i] = '\0';
    }
}
