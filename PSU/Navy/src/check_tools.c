/*
** check_numbers.c for checks of numbers in /home/pab/Documents/PSU_2015_navy_bootstrap/ex_2
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb  3 09:15:36 2016 Pablo Berenguel
** Last update Wed Feb  3 14:33:18 2016 Pablo Berenguel
*/

#include <stdlib.h>
#include "./include/my.h"

int		check_inside(char *str)
{
  if (str[0] < '2' || str[0] > '5')
    return (84);
  if (str[1] != ':' || str[4] != ':')
    return (84);
  if (str[2] < 'A' || str[2] > 'H')
    return (84);
  if (str[3] < '1' || str[3] > '8')
    return (84);
  if (str[5] < 'A' || str[5] > 'H')
    return (84);
  if (str[6] < '1' || str[6] > '8')
    return (84);
  if (str[7] != '\n')
    return (84);
  return (0);
}

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
