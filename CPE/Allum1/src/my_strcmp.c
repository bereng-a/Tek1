/*
** my_strcmp.c for my_strcemp in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb  3 15:52:28 2016 Pablo Berenguel
** Last update Mon Feb  8 16:36:58 2016 Pablo Berenguel
*/

#include <stdlib.h>

int	my_strcmp(char *str, char *str2)
{
  int	i;

  i = 0;
  if (str == NULL && str2 == NULL)
    return (84);
  if (str == NULL || str2 == NULL)
    return (84);
  while (str[i] == str2[i] && str[i] != '\0' && str2[i] != '\0')
    i++;
  if (str[i] != str2[i])
    return (84);
  return (0);
}
