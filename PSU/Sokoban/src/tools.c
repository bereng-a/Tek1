/*
** tools.c for some tools. in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb 10 14:37:48 2016 Pablo Berenguel
** Last update Sun Feb 28 11:35:44 2016 pablo
*/

#include "include/my.h"

char	**cp_map(char **map, int size)
{
  char	**map_return;
  int	i;
  int	p;

  i = 0;
  if ((map_return = malloc(sizeof(char *) * size)) == NULL)
    return (NULL);
  while (i != size)
    {
      p = 0;
      if ((map_return[i] = malloc(sizeof(char) * my_strlen(map[i]))) == NULL)
	return (NULL);
      while (p <= my_strlen(map[i]))
	map_return[i][p] = map[i][p++];
      i++;
    }
  display_thing(map, size, map, &i);
  return (map_return);
}

int	free_map(char **map, int size)
{
  int	i;

  i = 0;
  while (i != size)
    {
      free(map[i]);
      i++;
    }
  return (0);
}

void	just_print(char **map, int size, int *i2)
{
  int	i;

  noecho();
  *i2 = 0;
  i = 0;
  clear();
  while (i != size)
    {
      printw(map[i]);
      i++;
      if (i != size)
	addch('\n');
    }
  refresh();
}

int     get_x_p(char **map, int size)
{
  int   y;
  int   x;

  y = 0;
  while (y != size)
    {
      x = 0;
      while (map[y][x] != '\0' && map[y][x] != 'P')
	x++;
      if (map[y][x] == 'P')
	return (x);
      y++;
    }
}

int     get_y_p(char **map, int size)
{
  int   y;
  int   x;

  y = 0;
  while (y != size)
    {
      x = 0;
      while (map[y][x] != '\0' && map[y][x] != 'P')
	x++;
      if (map[y][x] == 'P')
	return (y);
      y++;
    }
}
