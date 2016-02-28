/*
** fill_map2.c for next in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Tue Feb  2 18:12:51 2016 Pablo Berenguel
** Last update Wed Feb  3 14:36:34 2016 Pablo Berenguel
*/

#include "./include/my.h"

int             fill_three(char **map, infos_boat ib, int limit, int i)
{
  while (limit != ib.size)
    {
      limit++;
      if (map[ib.y][ib.x] != '.')
	return (84);
      map[ib.y][ib.x] = ib.size + 48;
      i = i + 2;
      ib.y++;
    }
}

int             fill_fourth(char **map, infos_boat ib, int limit, int i)
{
  while (limit != ib.size)
    {
      limit++;
      if (map[ib.y2][ib.x] != '.')
	return (84);
      map[ib.y2][ib.x] = ib.size + 48;
      i = i + 2;
      ib.y2++;
    }

}
