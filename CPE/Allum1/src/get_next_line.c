/*
** get_next_line.c for omg in /home/pab/CPE/CPE_2015_getnextline
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Sat Jan  9 13:53:46 2016 Pablo
** Last update Tue Feb  9 12:20:08 2016 Pablo Berenguel
*/

#include <stdlib.h>
#include <unistd.h>
#include "./include/my.h"

int		my_strlen_g(char *str, int x)
{
  int		tab[2];

  tab[1] = 0;
  tab[0] = 0;
  if (x == 0)
    {
      while (str[tab[0]] != '\0')
	tab[0]++;
      return (tab[0]);
    }
  if (x == 1)
    {
      while (str[tab[0]] != '\0' && str[tab[0]] != '\n')
	tab[0]++;
      if (str[tab[0]] == '\n')
	return (84);
      return (1);
    }
  while (str[tab[0]] != '\0')
    {
      if (str[tab[0]] == '\n')
	tab[1]++;
      tab[0]++;
    }
  return (tab[1]);
}

char		*re_malloc_gnl(char *str, char *str2, int size, int fd)
{
  int		i;
  int		i2;
  int		tmp;
  char		*newstr;

  i = 0;
  i2 = 0;
  if ((newstr = malloc(sizeof(char) * my_strlen_g(str, 0) + size + 1)) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      newstr[i] = str[i];
      if (str[i] != '\0')
	i++;
    }
  while (i2 != size)
    {
      newstr[i] = str2[i2];
      i++;
      i2++;
    }
  newstr[i] = '\0';
  return (newstr);
}

char		*split_it(char *str, int fd, int size)
{
  int		tab[3];
  char		*retu;

  tab[0] = 0;
  tab[1] = 0;
  while (str[tab[0]] != '\n' && str[tab[0]] != '\0')
    tab[0]++;
  if (str[tab[0]] == '\0')
    return (NULL);
  if ((retu = malloc(sizeof(char) * my_strlen_g(str, 0) + 1)) == NULL)
    return (NULL);
  tab[2] = tab[0];
  tab[0]++;
  while (str[tab[0]] != '\0')
    {
      retu[tab[1]] = str[tab[0]];
      tab[0]++;
      tab[1]++;
    }
  str[tab[2]] = '\0';
  retu[tab[1]] = '\0';
  if (fd == 0)
    return (NULL);
  return (retu);
}

char		*fill_str(char *op, char *str, int *size, int fd)
{
  int		tmp;

  if ((str = malloc(sizeof(char) * READ_SIZE + 1)) == NULL)
    return (NULL);
  *size = read(fd, str, READ_SIZE);
  tmp = *size;
  if (size > 0)
    op = re_malloc_gnl(op, str, tmp, fd);
  return (op);
}

char		*get_next_line(int fd)
{
  char		*str;
  static char	*op = NULL;
  static int	size = READ_SIZE;

  if (size <= 0 && op == NULL || fd < 0)
    return (NULL);
  if (op == NULL && size > 0)
    if ((op = malloc(sizeof(char) * READ_SIZE + 100)) == NULL)
      return (NULL);
  if (op[0] == '\0')
    size = read(fd, op, READ_SIZE);
  while (my_strlen_g(op, 1) != 84 && size > 0)
    op = fill_str(op, str, &size, fd);
  if (size == READ_SIZE && fd != 0)
    op = fill_str(op, str, &size, fd);
  if (fd == 0 && size == 0)
    return (NULL);
  str = op;
  op = split_it(str, fd, size);
  if (op == NULL && size < READ_SIZE && str[0] == '\0' && str[1] != '\0'
      && fd != 0)
    return (NULL);
  if (str[0] == '\0' && size < READ_SIZE && op == NULL && fd != 0)
    return (NULL);
  return (str);
}
