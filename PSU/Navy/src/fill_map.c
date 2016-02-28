/*
** fill_map.c for filling the map in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Tue Feb  2 16:04:20 2016 Pablo Berenguel
** Last update Wed Feb  3 14:36:14 2016 Pablo Berenguel
*/

#include "./include/my.h"

infos_boat	fill_ib_tab(infos_boat ib, int *limit, int *i)
{
  *limit = 0;
  *i = 0;
  ib.x = get_x_tab(ib.x);
  ib.x2 = get_x_tab(ib.x2);
  ib.y--;
  ib.y2--;
  return (ib);
}

int		fill_one(char **map, infos_boat ib, int limit, int i)
{
  while (limit != ib.size)
    {
      limit++;
      if (map[ib.y][i] != '.')
	return (84);
      map[ib.y][i] = ib.size + 48;
      i = i + 2;
      ib.x++;
    }
}

int		fill_two(char **map, infos_boat ib, int limit, int i)
{
  while (limit != ib.size)
    {
      limit++;
      if (map[ib.y][i] != '.')
	return (84);
      map[ib.y][i] = ib.size + 48;
      i = i + 2;
      ib.x2++;
    }
}

int             fill_map_ib_cut(char **map, infos_boat ib, int limit, int i)
{
  if (ib.x == ib.x2)
    {
      if (ib.y < ib.y2)
        {
          i = ib.y;
          if (fill_three(map, ib, limit, i) == 84)
            return (84);
        }
      if (ib.y > ib.y2)
        {
          i = ib.y2;
          if (fill_fourth(map, ib, limit, i) == 84)
            return (84);
        }
    }
  return (0);
}

int             fill_map_ib(char **map, infos_boat ib)
{
  int           i;
  int           limit;

  ib = fill_ib_tab(ib, &limit, &i);
  if (ib.y == ib.y2)
    {
      if (ib.x < ib.x2)
        {
          i = ib.x;
	  if (fill_one(map, ib, limit, i) == 84)
	    return (84);
        }
      if (ib.x > ib.x2)
        {
          i = ib.x2;
	  if (fill_two(map, ib, limit, i) == 84)
	    return (84);
        }
      return (0);
    }
  else
    return (fill_map_ib_cut(map, ib, i, limit));
}
