/*
** my_get_nbr.c for my_get nbr in /home/pab/Documents/PSU_2015_filter
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Sat Dec 12 18:18:32 2015 Pablo
** Last update Wed Feb  3 16:02:07 2016 Pablo Berenguel
*/

#include <stdlib.h>
#include "./include/my.h"

char		*inttochar_next(char *erase, int i, int lenght)
{
  char		*str;
  int		z;

  z = lenght;
  lenght--;
  if (i < 0)
    {
      erase[0] = '-';
      i = i * -1;
    }
  while (i >= 10)
    {
      erase[lenght] = (i % 10) + 48;
      i = i / 10;
      lenght--;
    }
  erase[lenght] = i + 48;
  erase[z] = '\0';
  return (erase);
}

char		*int_to_char(int i)
{
  int		lenght;
  char		*erase;
  int		is;

  is = i;
  lenght = 1;
  if (i < 0)
    {
      i = i * -1;
      lenght++;
    }
  while (i >= 10)
    {
      lenght++;
      i = i / 10;
    }
  erase = malloc(sizeof(char) * lenght + 1);
  if (erase == NULL)
    return (NULL);
  erase = inttochar_next(erase, is, lenght);
  return (erase);
}
