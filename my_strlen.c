/*
** my_strlen.c for my_strlen.c in /home/bene_t/Semaine2/Jour03/bene_t/my_strlen
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Oct 22 11:50:18 2014 BENE Thibaut
** Last update Wed Oct 22 12:33:49 2014 BENE Thibaut
*/
int	my_strlen(char *str)
{
  int count;
  int i;

  count = 0;
  i = 0;

  while (str[i] != '\0')
    {
      count = count + 1;
      i = i + 1;
    }
  return (count);
}
