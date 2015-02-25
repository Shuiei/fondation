#include "my_bzero.h"

void my_bzero(char *s, int len)
{
  int i;
  for (i = 0; i <= len; i++)
    {
      s[i] = '\0';
    }
}
