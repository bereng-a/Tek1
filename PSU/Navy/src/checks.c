/*
** checks.c for Parsing in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Mon Feb  1 09:47:53 2016 Pablo Berenguel
** Last update Fri Feb  5 11:00:01 2016 Pablo Berenguel
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

int		read_inside(char **map, int fd, lenght_boat *lb)
{
  char		buffer[8];
  int		size;
  infos_boat	ib;

  size = read(fd, &buffer, 8);
  if (size != 8)
    return (84);
  if (check_inside(buffer) == 84)
    return (84);
  if (add_new_boat(buffer[0], lb) == 84)
    return (84);
  fill_boat_ib(&ib, buffer);
  if (check_ib(ib) == 84)
    return (84);
  if (fill_map_ib(map, ib) == 84)
    return (84);
  return (0);
}

int		check_map(char *path, char **map)
{
  int		fd;
  int		i;
  char		c;
  lenght_boat	lb;

  i = 0;
  fd = open(path, O_RDONLY);
  if (fd <= 0)
    return (84);
  fill_lb(&lb);
  while (i != 4)
    {
      if (read_inside(map, fd, &lb) == 84)
	return (84);
      i++;
    }
  i = read(fd, &c, 1);
  if (i == 1)
    return (84);
  close(fd);
  return (0);
}

int		check_pid()
{
  return (0);
}

int		check(int ac, char **av, char **map)
{
  if (ac != 3 && ac != 2)
    return (84);
  if (ac == 2)
    if (check_map(av[1], map) == 84)
      return (84);
  if (ac == 3)
    {
      if (check_map(av[2], map) == 84)
	return (84);
      if (check_numbers(av[1]) == 84)
	return (84);
      if (check_pid() == 84)
	return (84);
    }
  return (0);
}
