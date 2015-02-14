/*
** my_getnbr.c for my_getnbr in /home/bene_t/Semaine2/Jour03/bene_t/my_getnbr
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Oct 22 13:19:18 2014 BENE Thibaut
** Last update Tue Oct 28 10:58:58 2014 BENE Thibaut
*/
int	positive_or_not(char *str);
int	my_strlen(char *str);

int	is_num(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	positive_or_not(char *str)
{
  int	countmoins;
  int	i;

  countmoins = 0;
  i = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
          countmoins = countmoins + 1;
      i = i + 1;
    }
  if (countmoins % 2 == 0)
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	j;
  int	count;

  i = 0;
  j = 0;
  count = 0;
  if (my_strlen(str) == 0)
    return (0);
  while (str[i] != '\0' && is_num(str[i]) != 1)
    {
      if (str[i] != '-' && str[i] != '+')
	return (0);
      i = i + 1;
    }
  while (is_num(str[j]) == 0)
      j++;
  while (is_num(str[j]) == 1)
    {
      count = ((count * 10) + (str[j] - '0'));
      j++;
    }
  if (positive_or_not(str) == 0)
      count = count * -1;
  return (count);
}
