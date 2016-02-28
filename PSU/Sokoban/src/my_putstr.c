/*
** my_putstr.c for my put str in /home/bereng_a/Piscine_C_J07/lyb/my
** 
** Made by pablo berenguel
** Login   <bereng_a@epitech.net>
** 
** Started on  Wed Oct  7 08:49:41 2015 pablo berenguel
** Last update Sat Nov 14 19:46:31 2015 Pablo
*/

#include <stdlib.h>
#include "include/my.h"

int	my_putstr(char *str)
{
  int	i;
  int	p;

  if (str == NULL)
    return (0);
  i = 0;
  p = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
      p++;
    }
  return (p);
}
