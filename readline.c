#include "readline.h"

char        *readLine()
{
  ssize_t   ret;
  char      *buff;

  if ((buff = malloc(sizeof(*buff) * (255 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 255)) > 1)
  {

    buff[ret - 1] = '\0';
    return (buff);
  }
  buff[0] = '\n';
  return (buff);
}
