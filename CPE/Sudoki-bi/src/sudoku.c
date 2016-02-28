/*
** sudoku.c for sudo in /home/ripoll_g/test/sudoku
** 
** Made by guillaume ripolles
** Login   <ripoll_g@epitech.net>
** 
** Started on  Sat Feb 27 10:30:24 2016 guillaume ripolles
** Last update Sun Feb 28 15:01:39 2016 pablo
*/

#include "include/my.h"

int	save_map(int grid[9][9], t_map *pos)
{
  int	i;
  int	j;
  int	nb;

  if (pos == NULL)
    return (0);
  j = pos->j;
  i = pos->i;
  nb = 1;
  while (nb <= 9)
    {
      if (in_block(grid, i, j, nb) == 0
	  && in_line(grid, j, nb) == 0 && in_col(grid, i, nb) == 0)
	{
	  grid[j][i] = nb;
	  if (save_map(grid, pos->next) == 0)
	    return (0);
	}
      nb++;
    }
  grid[j][i] = 0;
  return (1);
}

int	workable(int grid[9][9], int i, int j)
{
  int	nb;
  int	cpt;

  nb = 0;
  cpt = 0;
  while (cpt < 9)
    {
      if (in_block(grid, i, j, cpt) == 0
          && in_line(grid, j, cpt) == 0 && in_col(grid, i, cpt) == 0)
	nb++;
      cpt++;
    }
  return (nb);
}

void	complete_it(int grid[9][9])
{
  t_map	*pos;
  int	i;
  int	j;

  pos = NULL;
  j = 0;
  while (j < 9)
    {
      i = 8;
      while (i >= 0)
	{
	  if (grid[j][i] == 0)
	    head_list(&pos, i, j, workable(grid, i, j));
	  i--;
	}
      j++;
    }
  pos = sorting(pos);
  save_map(grid, pos);
  clean_list(&pos);
}

void	aff_map(int grid[9][9])
{
  int	i;
  int	j;

  printf("|------------------|\n");
  j = 0;
  while (j < 9)
    {
      i = 0;
      printf("| ");
      while (i < 9)
	{
	  if (i != 8)
	    printf("%c ", grid[j][i] + 48);
	  i++;
	}
      printf("%c|\n", grid[j][i - 1] + 48);
      j++;
    }
  printf("|------------------|\n");
}
