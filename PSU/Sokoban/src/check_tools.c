/*
** check_numbers.c for checks of numbers in /home/pab/Documents/PSU_2015_navy_bootstrap/ex_2
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb  3 09:15:36 2016 Pablo Berenguel
** Last update Sun Feb 28 18:42:18 2016 pablo
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

int     get_nb_n(char *path, int *retu)
{
  int   fd;
  int   n;
  char  buffer[10506];
  int   retu_size;

  n = 0;
  fd = open(path, O_RDONLY);
  if (fd <= 0)
    return (1);
  retu_size = read(fd, &buffer, 10505);
  if (retu_size >= 10505)
    {
      close(fd);
      return (1);
    }
  n = my_strn(buffer);
  if (n < 2)
    return (1);
  if (check_buffer(buffer) == 1)
    return (1);
  *retu = n + 1;
  close(fd);
  if (n > 55)
    return (1);
  return (0);
}

char    **check_map(int ac, char **av, int *n)
{
  char  **map;
  char  *str;
  int   fd;
  int	size;

  if (ac != 2)
    return (NULL);
  if (av[1] == NULL)
    return (NULL);
  if (get_nb_n(av[1], n) == 1)
    return (NULL);
  fd = open(av[1], O_RDONLY);
  if (fd <= 0)
    return (NULL);
  map = check_map_cut(fd, map, n);
  close(fd);
  if (check_close_map(map, (size = *n)) == 84)
    {
      free_map(map, (size = *n));
      return (NULL);
    }
  return (map);
}

int     check_game(char **map, int size_y, char **bmap)
{
  int   i;
  int   y;
  int   x;

  x = 0;
  y = 0;
  while (y != size_y)
    {
      x = 0;
      while (bmap[y][x] != '\0')
	{
	  if (bmap[y][x] == 'O')
	    if (map[y][x] != 'X')
	      return (84);
	  x++;
	}
      y++;
    }
  return (0);
}

int             check_numbers(char *str)
{
  int           i;

  i = 0;
  if (str == NULL)
    return (84);
  if (str[i] == '-')
    i++;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (84);
      i++;
    }
  return (0);
}

int             check_only_numbers(char *str)
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
