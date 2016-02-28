/*
** check.c for checking in /home/bereng_a/CPE/sudoki-bi
** 
** Made by pablo
** Login   <bereng_a@epitech.net>
** 
** Started on  Sat Feb 27 09:59:52 2016 pablo
** Last update Sat Feb 27 19:09:46 2016 pablo
*/

#include "include/my.h"

int		check_map_spaces(char **map)
{
  int		y;
  int		x;

  y = 1;
  while (y != 10)
    {
      x = 1;
      while (x != 19)
	{
	  if (map[y][x] != ' ')
	    return (1);
	  x += 2;
	}
      y++;
    }
  return (0);
}

int		check_inside_map(char **map)
{
  int		y;
  int		x;

  y = 1;
  if (strcmp("|------------------|", map[0]) != 0)
    return (1);
  if (strcmp("|------------------|", map[10]) != 0)
    return (1);
  if (check_map_spaces(map) == 1)
    return (1);
  while (y != 10)
    {
      if (map[y][0] != '|' || map[y][19] != '|')
	return (1);
      x = 1;
      while (x != 19)
	{
	  if (map[y][x] < '1' || map[y][x] > '9')
	    if (map[y][x] != ' ')
	      return (1);
	  x++;
	}
      y++;
    }
  return (0);
}

int		fill_map(char **map, int retu)
{
  char		buffer[232];
  int		tab[4];

  tab[0] = 0;
  tab[2] = 0;
  tab[3] = read(0, &buffer, 231);
  if (tab[3] == 0)
    return (2);
  else if (tab[3] != 231)
    return (1);
  while (buffer[tab[2]] != '\0' && tab[0] != 11)
    {
      tab[1] = 0;
      while (tab[1] != 20)
	map[tab[0]][tab[1]++] = buffer[tab[2]++];
      if (buffer[tab[2]] != '\n')
	return (1);
      tab[2]++;
      tab[0]++;
    }
  if (retu != 0)
    printf("####################\n");
  return (0);
}

char		**malloc_map(char **map)
{
  int		y;

  y = 0;
  map = malloc(sizeof(char *) * 11);
  if (map == NULL)
    return (NULL);
  while (y != 11)
    {
      map[y] = malloc(sizeof(char) * 21);
      if (map[y] == NULL)
	return (NULL);
      y++;
    }
  return (map);
}

int		main_check(char **map, int retu)
{
  int		i;

  i = fill_map(map, retu);
  if (i == 1)
    return (2);
  if (i == 2)
    {
      free_map(map);
      if (retu == 0)
	return (2);
      else
	return (1);
    }
  if (check_inside_map(map) == 1)
    {
      free_map(map);
      return (2);
    }
  if (check_double_number(map) == 1)
    return (3);
  return (4);
}
