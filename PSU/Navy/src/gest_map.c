/*
** gest_map.c for map in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Mon Feb  1 12:42:50 2016 Pablo Berenguel
** Last update Thu Feb 11 15:53:27 2016 Pablo Berenguel
*/

#include <stdlib.h>

void            show_map1(char **tab, char **tab1)
{
  int           i;

  i = 0;
  my_putstr("my navy:\n");
  while (i != 10)
    {
      my_putstr(tab[i]);
      i++;
    }
  my_putstr("\nenemy navy:\n");
  i = 0;
  while (i != 10)
    {
      my_putstr(tab1[i]);
      i++;
    }
  my_putstr("\n");
}

void		show_map(char **tab, char **tab1)
{
  int		i;

  i = 0;
  my_putstr("\nmy navy:\n");
  while (i != 10)
    {
      my_putstr(tab[i]);
      i++;
    }
  my_putstr("\nenemy navy:\n");
  i = 0;
  while (i != 10)
    {
      my_putstr(tab1[i]);
      i++;
    }
  my_putstr("\n");
}

void		fill_cart(char **tab, int i)
{
  tab[i][0] = i + 48 - 1;
  tab[i][1] = '|';
  tab[i][2] = '.';
  tab[i][3] = ' ';
  tab[i][4] = '.';
  tab[i][5] = ' ';
  tab[i][6] = '.';
  tab[i][7] = ' ';
  tab[i][8] = '.';
  tab[i][9] = ' ';
  tab[i][10] = '.';
  tab[i][11] = ' ';
  tab[i][12] = '.';
  tab[i][13] = ' ';
  tab[i][14] = '.';
  tab[i][15] = ' ';
  tab[i][16] = '.';
  tab[i][17] = '\n';
}

void		fill_top(char **tab)
{
  tab[0] = " |A B C D E F G H\n";
  tab[1] = "-+---------------\n";
}

char		**create_map()
{
  int		i;
  char		**map;

  i = 0;
  map = malloc(sizeof(char *) * 12);
  if (map == NULL)
    return (NULL);
  while (i != 10)
    {
      map[i] = malloc(sizeof(char) * 18);
      if (map[i] == NULL)
	return (NULL);
      i++;
    }
  fill_top(map);
  i = 2;
  while (i != 10)
    {
      fill_cart(map, i);
      i++;
    }
  return (map);
}
