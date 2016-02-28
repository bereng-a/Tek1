/*
** tools_boat.c for tolls pabaz in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Tue Feb  2 15:58:46 2016 Pablo Berenguel
** Last update Wed Feb  3 14:35:50 2016 Pablo Berenguel
*/

#include "./include/my.h"

int             add_new_boat(char c, lenght_boat *lb)
{
  if (c == '2')
    {
      if (lb->two > 0)
        return (84);
      lb->two++;
    }
  if (c == '3')
    {
      if (lb->three > 0)
        return (84);
      lb->three++;
    }
  if (c == '4')
    {
      if (lb->fourth > 0)
        return (84);
      lb->fourth++;
    }
  if (c == '5')
    {
      if (lb->five > 0)
        return (84);
      lb->five++;
    }
  return (0);
}

int             get_x_tab(int c)
{
  if (c == 1)
    return (2);
  if (c == 2)
    return (4);
  if (c == 3)
    return (6);
  if (c == 4)
    return (8);
  if (c == 5)
    return (10);
  if (c == 6)
    return (12);
  if (c == 7)
    return (14);
  if (c == 8)
    return (16);
}

int             get_x_abc(char c)
{
  if (c == 'A')
    return (1);
  if (c == 'B')
    return (2);
  if (c == 'C')
    return (3);
  if (c == 'D')
    return (4);
  if (c == 'E')
    return (5);
  if (c == 'F')
    return (6);
  if (c == 'G')
    return (7);
  if (c == 'H')
    return (8);
}

void		fill_boat_ib(infos_boat *ib, char *str)
{
  ib->size = str[0] - 48;
  ib->x = get_x_abc(str[2]);
  ib->x2 = get_x_abc(str[5]);
  ib->y = str[3] - 48 + 2;
  ib->y2 = str[6] - 48 + 2;
}

int             check_ib(infos_boat ib)
{
  if (ib.x != ib.x2 && ib.y != ib.y2)
    return (84);
  if (ib.x == ib.x2)
    {
      if (ib.y > ib.y2)
        if (ib.y - ib.y2 + 1!= ib.size)
          return (84);
      if (ib.y2 > ib.y)
        if (ib.y2 - ib.y + 1 != ib.size)
          return (84);
    }
  if (ib.y == ib.y2)
    {
      if (ib.x > ib.x2)
        if (ib.x - ib.x2 + 1 != ib.size)
	  return (84);
      if (ib.x2 > ib.x)
        if (ib.x2 - ib.x + 1 != ib.size)
          return (84);
    }
  return (0);
}
