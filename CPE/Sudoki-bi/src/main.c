/*
** main.c for Here come the fuck. in /home/bereng_a/CPE/sudoki-bi
** 
** Made by pablo
** Login   <bereng_a@epitech.net>
** 
** Started on  Sat Feb 27 09:32:10 2016 pablo
** Last update Sat Feb 27 19:08:59 2016 pablo
*/

#include "include/my.h"

void		convert_mapchar_to_int(char **map, int tab[9][9])
{
  int		i;
  int		j;

  j = 0;
  while (j < 9)
    {
      i = 0;
      while (i < 9)
	{
	  if (map[j + 1][(i + 1) * 2] == ' ')
	    tab[j][i] = 0;
	  else
	    tab[j][i] = map[j + 1][(i + 1) * 2] - 48;
	  i++;
	}
      j++;
    }
}

int		cut_main(char **map, int tab[9][9], int retu)
{
  while (1)
    {
      retu = main_check(map, retu);
      if (retu == 1)
	return (1);
      if (retu == 2)
	{
	  printf("MAP ERROR\n");
	  return (1);
	}
      if (retu == 3)
	display_wrong_map();
      else
	{
	  convert_mapchar_to_int(map, tab);
	  complete_it(tab);
	  aff_map(tab);
	}
      retu++;
    }
}

int		main()
{
  char		**map;
  int		tab[9][9];
  int		retu;

  retu = 0;
  if ((map = malloc_map(map)) == NULL)
    return (1);
  retu = cut_main(map, tab, retu);
  return (retu);
}
