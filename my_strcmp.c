/*
** my_strcmp.c for my_strcmp.c in /home/bene_t/Semaine2/Jour04/bene_t/my_strcmp
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Thu Oct 23 16:37:56 2014 BENE Thibaut
** Last update Thu Oct 23 16:47:16 2014 BENE Thibaut
*/
int my_strcmp(char *s1, char *s2);

int my_strcmp(char *s1, char *s2)
{
  while (*s1 == *s2)
    {
      if (*s1 == 0)
	return (0);
      s1++;
      s2++;
    }
  return (*s1 < *s2 ? -1 : 1);
}
