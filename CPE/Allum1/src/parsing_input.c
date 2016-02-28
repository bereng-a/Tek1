/*
** parsing_input.c for parsing input in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb 10 15:14:10 2016 Pablo Berenguel
** Last update Thu Feb 18 15:47:41 2016 Pablo Berenguel
*/

#include "include/my.h"

int	pars_match3(int nb, int line, char **tab)
{
  int	i;
  int	nb2;

  i = 0;
  nb2 = 0;
  while (tab[line][i] != '\0')
    {
      if (tab[line][i] == '|')
	nb2++;
      i++;
    }
  if (nb > nb2)
    return (84);
  return (0);
}

int	pars_match2(int nb, int line, char **tab)
{
  if (nb > 7)
    return (84);
  if (nb == 0)
    return (83);
  if (nb > 7)
    return (84);
  if (line == 1 && nb != 1)
    return (84);
  if (line == 2)
    if (nb < 1 || nb > 3)
      return (84);
  if (line == 3)
    if (nb < 1 || nb > 5)
      return (84);
  if (line == 4)
    if (nb < 1 || nb > 7)
      return (84);
  return (pars_match3(nb, line - 1, tab));
}

int     pars_match(char *str, int line, char **tab)
{
  int   i;
  int   nb;

  i = 0;
  if (str == NULL)
    return (84);
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
        return (85);
      i++;
    }
  if (str[0] == '\0')
    return (85);
  nb = char_to_int(str);
  return (pars_match2(nb, line, tab));
}

int     pars_line(char *str, char **map)
{
  int   i;

  if (str == NULL)
    return (0);
  if (str[0] == '0' && str[1] == '\0')
    return (out_line1());
  if (str[0] == '\0')
    return (out_line2());
  if (check_numbers(str) == 84)
    return (out_line2());
  i = char_to_int(str);
  if (i < 0 || i > 4)
    return (out_line1());
  if (get_nb_match1(map, i - 1) == 0)
    return (out_line3());
  my_putstr("Matches: ");
  return (0);
}
