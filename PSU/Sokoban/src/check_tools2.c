/*
** check_tools2.c for suite in /home/bereng_a/PSU/PSU_2015_my_sokoban
** 
** Made by pablo
** Login   <bereng_a@epitech.net>
** 
** Started on  Wed Feb 24 20:48:38 2016 pablo
** Last update Sun Feb 28 18:44:23 2016 pablo
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

int	check_rec_or_square(char **map, int size)
{
  int	size_x;
  int	y;

  size_x = my_strlen(map[0]);
  y = 0;
  while (y != size)
    {
      if (my_strlen(map[y]) != size_x)
	return (84);
      y++;
    }
  return (0);
}

int	check_close_map(char **map, int size)
{
  int	y;
  int	x;

  set_yx_zero(&y, &x);
  if (my_strlen(map[0]) != my_strlen(map[size - 1]))
    return (84);
  while (map[0][x] != '\0')
    if (map[0][x++] != '#')
      return (84);
  x = 0;
  while (map[size - 1][x] != '\0')
    if (map[size - 1][x++] != '#')
      return (84);
  x = 0;
  if (check_rec_or_square(map, size) == 84)
    return (84);
  while (y != size)
    {
      if (map[y][0] != '#')
	return (84);
      if (map[y][my_strlen(map[y]) - 1] != '#')
	return (84);
      y++;
    }
  return (0);
}

char    **check_map_cut(int fd, char **map, int *n)
{
  int   i;
  char  *str;

  i = 0;
  if ((map = malloc(sizeof(char *) * (*n))) == NULL)
    return (NULL);
  if ((str = malloc(2)) == NULL)
    return (NULL);
  while (i  != *n)
    {
      str = get_next_line(fd);
      if (str != NULL)
	{
	  if ((map[i] = malloc(sizeof(char) * (my_strlen(str)))) == NULL)
	    return (NULL);
	  map[i] = str;
	}
      i++;
    }
  return (map);
}

int	retu_check_buffer(int tab[5])
{
  if (tab[4] == 0)
    return (1);
  if (tab[4] != tab[3])
    return (1);
  if (tab[1] < 8)
    return (1);
  if (tab[2] != 1)
    return (1);
  return (0);
}

int     check_buffer(char *str)
{
  int	tab[5];

  tab[1] = 0;
  tab[0] = 0;
  tab[2] = 0;
  tab[3] = 0;
  tab[4] = 0;
  if (str[0] == '\n')
    return (1);
  while (str[tab[0]] != '\0')
    {
      if (str[tab[0]] != 'O' && str[tab[0]] != 'X' && str[tab[0]] != 'P'
	  && str[tab[0]] != ' ' && str[tab[0]] != '#' && str[tab[0]] != '\n')
	return (1);
      if (str[tab[0]] == 'O')
	tab[4]++;
      if (str[tab[0]] == 'X')
	tab[3]++;
      if (str[tab[0]] == 'P')
	tab[2]++;
      if (str[tab[0]] == '#')
	tab[1]++;
      tab[0]++;
    }
  return (retu_check_buffer(tab));
}
