/*
** check_numbers.c for checks of numbers in /home/pab/Documents/PSU_2015_navy_bootstrap/ex_2
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb  3 09:15:36 2016 Pablo Berenguel
** Last update Wed Feb  3 09:29:21 2016 Pablo Berenguel
*/

#include <stdlib.h>
#include "./include/my.h"

int             check_numbers(char *str)
{
  int           i;

  i = 0;
  if (str == NULL)
    return (84);
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
        return (84);
      i++;
    }
  return (0);
}
