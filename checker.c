#include "checker.h"

void error()
{
  my_putstr(RED);
  my_putstr("Failed !\n\n");
  my_putstr(WHITE);
}

void okay()
{
  my_putstr(BLUE);
  my_putstr("Success !\n\n");
  my_putstr(WHITE);
}

int check_ko(char tab[])
{
  if (tab[0] ==  '/' && tab[1] == 'k' && tab[2] == 'o')
    {
      error();
      return (EXIT_SUCCESS);
    }
  else
    return (EXIT_FAILURE);
  return (EXIT_FAILURE);
}

int check_ok(char tab[])
{
  if (tab[0] ==  '/' && tab[1] == 'o' && tab[2] == 'k')
    {
      okay();
      return (EXIT_SUCCESS);
    }
  else
    return (EXIT_FAILURE);
  return (EXIT_FAILURE);
}
