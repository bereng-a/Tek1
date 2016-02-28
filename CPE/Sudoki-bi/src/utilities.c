/*
** utilities.c for utilities in /home/ripoll_g/test/sudoku
** 
** Made by guillaume ripolles
** Login   <ripoll_g@epitech.net>
** 
** Started on  Sat Feb 27 15:28:26 2016 guillaume ripolles
** Last update Sat Feb 27 16:39:29 2016 pablo
*/

#include "include/my.h"

int     in_line(int grid[9][9], int line, int nb)
{
  int   i;

  i = 0;
  while (i < 9)
    {
      if (grid[line][i] == nb)
        return (1);
      i++;
    }
  return (0);
}

int     in_col(int grid[9][9], int col, int nb)
{
  int   i;

  i = 0;
  while (i < 9)
    {
      if (grid[i][col] == nb)
        return (1);
      i++;
    }
  return (0);
}

int     in_block(int grid[9][9], int posx, int posy, int nb)
{
  int   i;
  int   j;
  int   limx;
  int   limy;

  limx = posx - (posx % 3) + 3;
  limy = posy - (posy % 3) + 3;
  j = posy - (posy % 3);
  while (j < limy)
    {
      i = posx - (posx % 3);
      while (i < limx)
        {
          if (grid[j][i] == nb)
            return (1);
          i++;
        }
      j++;
    }
  return (0);
}
