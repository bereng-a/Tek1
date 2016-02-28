/*
** check3.c for Now check the square in /home/bereng_a/CPE/sudoki-bi
** 
** Made by pablo
** Login   <bereng_a@epitech.net>
** 
** Started on  Sat Feb 27 14:22:04 2016 pablo
** Last update Sat Feb 27 15:31:41 2016 pablo
*/

#include "include/my.h"

int             check_double_number_square3(char **map, int *tab)
{
  int           tab_yxs[3];

  tab_yxs[0] = 0;
  while (tab_yxs[0] != 9)
    {
      tab_yxs[1] = 7;
      empty_tab(tab);
      while (tab_yxs[1] != 10)
	{
	  tab_yxs[2] = 2 + tab_yxs[0];
	  while (tab_yxs[2] != 8 + tab_yxs[0])
	    {
	      if (map[tab_yxs[1]][tab_yxs[2] + tab_yxs[0]] != ' ')
		add_the_number(tab, map[tab_yxs[1]][tab_yxs[2] + tab_yxs[0]]);
	      tab_yxs[2] += 2;
	    }
	  tab_yxs[1]++;
	}
      if (tab[0] > 1 || tab[1] > 1 || tab[2] > 1 || tab[3] > 1
	  ||  tab[4] > 1 || tab[5] > 1 || tab[6] > 1 || tab[7] > 1 || tab[8] > 1)
	return (free_tab_1(tab));
      tab_yxs[0] += 3;
    }
  free(tab);
  return (0);
}

int             check_double_number_square2(char **map, int *tab)
{
  int           tab_yxs[3];

  tab_yxs[0] = 0;
  while (tab_yxs[0] != 9)
    {
      tab_yxs[1] = 4;
      empty_tab(tab);
      while (tab_yxs[1] != 7)
	{
	  tab_yxs[2] = 2 + tab_yxs[0];
	  while (tab_yxs[2] != 8 + tab_yxs[0])
	    {
	      if (map[tab_yxs[1]][tab_yxs[2] + tab_yxs[0]] != ' ')
		add_the_number(tab, map[tab_yxs[1]][tab_yxs[2] + tab_yxs[0]]);
	      tab_yxs[2] += 2;
	    }
	  tab_yxs[1]++;
	}
      if (tab[0] > 1 || tab[1] > 1 || tab[2] > 1 || tab[3] > 1
	  ||  tab[4] > 1 || tab[5] > 1 || tab[6] > 1 || tab[7] > 1 || tab[8] > 1)
	return (free_tab_1(tab));
      tab_yxs[0] += 3;
    }
  return (check_double_number_square3(map, tab));
}

int             check_double_number_square(char **map, int *tab)
{
  int		tab_yxs[3];

  tab_yxs[0] = 0;
  while (tab_yxs[0] != 9)
    {
      tab_yxs[1] = 1;
      empty_tab(tab);
      while (tab_yxs[1] != 4)
	{
	  tab_yxs[2] = 2 + tab_yxs[0];
	  while (tab_yxs[2] != 8 + tab_yxs[0])
	    {
	      if (map[tab_yxs[1]][tab_yxs[2] + tab_yxs[0]] != ' ')
		add_the_number(tab, map[tab_yxs[1]][tab_yxs[2] + tab_yxs[0]]);
	      tab_yxs[2] += 2;
	    }
	  tab_yxs[1]++;
	}
      if (tab[0] > 1 || tab[1] > 1 || tab[2] > 1 || tab[3] > 1
	  ||  tab[4] > 1 || tab[5] > 1 || tab[6] > 1 || tab[7] > 1 || tab[8] > 1)
	return (free_tab_1(tab));
      tab_yxs[0] += 3;
    }
  return (check_double_number_square2(map, tab));
}
