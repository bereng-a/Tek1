/*
** check2.c for following check in /home/bereng_a/CPE/sudoki-bi
** 
** Made by pablo
** Login   <bereng_a@epitech.net>
** 
** Started on  Sat Feb 27 12:46:18 2016 pablo
** Last update Sat Feb 27 19:05:33 2016 pablo
*/

#include "include/my.h"

void		empty_tab(int *tab)
{
  int	i;

  i = 0;
  while (i < 9)
    {
      tab[i] = 0;
      i++;
    }
}

void		add_the_number(int *tab, char c)
{
  if (c == '1')
    tab[0]++;
  if (c == '2')
    tab[1]++;
  if (c == '3')
    tab[2]++;
  if (c == '4')
    tab[3]++;
  if (c == '5')
    tab[4]++;
  if (c == '6')
    tab[5]++;
  if (c == '7')
    tab[6]++;
  if (c == '8')
    tab[7]++;
  if (c == '9')
    tab[8]++;
}

int		check_double_number_cut(char **map, int *tab)
{
  int           y;
  int           x;

  x = 1;
  while (map[y][x] != '|')
    {
      y = 1;
      empty_tab(tab);
      while (map[y][x] != '-')
	{
	  if (map[y][x] != ' ')
	    add_the_number(tab, map[y][x]);
	  y++;
	}
      if (tab[0] > 1 || tab[1] > 1 || tab[2] > 1 || tab[3] > 1
	  ||  tab[4] > 1 || tab[5] > 1 || tab[6] > 1 || tab[7] > 1 || tab[8] > 1)
	return (free_tab_1(tab));
	x++;
    }
  return (check_double_number_square(map, tab));
}

int             check_double_number(char **map)
{
  int		y;
  int		x;
  int		*tab;

  y = 1;
  tab = malloc(sizeof(int) * 9);
  if (tab == NULL)
    return (1);
  while (y != 10)
    {
      x = 1;
      empty_tab(tab);
      while (map[y][x] != '|')
	{
	  if (map[y][x] != ' ')
	    add_the_number(tab, map[y][x]);
	  x++;
	}
      if (tab[0] > 1 || tab[1] > 1 || tab[2] > 1 || tab[3] > 1
	  ||  tab[4] > 1 || tab[5] > 1 || tab[6] > 1 || tab[7] > 1 || tab[8] > 1)
	return (free_tab_1(tab));
      y++;
    }
  return (check_double_number_cut(map, tab));
}
