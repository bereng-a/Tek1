/*
** my_strlen.c for my str len in /home/bereng_a/Piscine_C_J07/lyb/my
** 
** Made by pablo berenguel
** Login   <bereng_a@epitech.net>
** 
** Started on  Wed Oct  7 10:48:58 2015 pablo berenguel
** Last update Fri Feb  5 20:10:35 2016 Pablo Berenguel
*/

#include <stdlib.h>

int     my_strlen(char *str)
{
  int   i;

  if (str == NULL)
    return (0);
  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
