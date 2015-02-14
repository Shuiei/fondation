/*
** my_putstr.c for my_purstr.c in /home/bene_t/Semaine2/libmy_01
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Fri Oct 24 12:58:46 2014 BENE Thibaut
** Last update Fri Oct 24 13:10:02 2014 BENE Thibaut
*/
void my_putchar(char c);

void my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
