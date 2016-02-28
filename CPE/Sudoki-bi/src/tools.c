/*
** tools.c for some tools in /home/bereng_a/CPE/sudoki-bi
** 
** Made by pablo
** Login   <bereng_a@epitech.net>
** 
** Started on  Sat Feb 27 10:48:54 2016 pablo
** Last update Sat Feb 27 18:38:43 2016 pablo
*/

#include "include/my.h"

void		display_wrong_map()
{
  printf("|------------------|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("| X X X X X X X X X|\n");
  printf("|------------------|\n");
}

int		free_tab_1(int *tab)
{
  free(tab);
  return (1);
}

void            free_map(char **map)
{
  int           y;

  y = 0;
  if (map != NULL)
    {
      while (y != 11)
	{
	  if (map[y] != NULL)
	    free(map[y]);
	  y++;
	}
    }
  if (map != NULL)
    free(map);
}

void		display_map(char **map)
{
  int		y;

  y = 0;
  while (y != 11)
    {
      printf("%s\n", map[y]);
      y++;
    }
}
