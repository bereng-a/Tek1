/*
** tools_board.c for tools in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb 10 14:26:40 2016 Pablo Berenguel
** Last update Wed Feb 17 12:13:37 2016 Pablo Berenguel
*/

#include "./include/my.h"

int	check_board(char **tab)
{
  int	i;
  int	x;
  int	y;

  y = 0;
  i = 0;
  while (y != 4)
    {
      x = 0;
      while (x != 7)
	{
	  if (tab[y][x] == '|')
	    return (0);
	  x++;
	}
      y++;
    }
  return (84);
}

char    **fill_tab(char **tab)
{
  int   i;
  int   y;

  y = 0;
  while (y != 4)
    {
      i = -1;
      while (++i != 7)
        tab[y][i] = ' ';
      y++;
    }
  i = -1;
  while (++i != 7)
    tab[3][i] = '|';
  i = 1;
  while (++i != 5)
    tab[1][i] = '|';
  i = 0;
  while (++i != 6)
    tab[2][i] ='|';
  tab[0][3] = '|';
  return (tab);
}

void    show_tab(char **tab)
{
  int   y;
  int   i;

  i = -1;
  y = 0;
  while (++i != 9)
    my_putchar('*');
  my_putchar('\n');
  while (y != 4)
    {
      my_putchar('*');
      my_putstr(tab[y]);
      my_putchar('*');
      my_putchar('\n');
      y++;
    }
  i = -1;
  while (++i != 9)
    my_putchar('*');
  my_putchar('\n');
}

char    **rm_match(char **tab, int line, int nb, int p)
{
  int   i;
  int   f;
  int	tmp;

  tmp = nb;
  while (nb != 0)
    {
      f = 0;
      i = 8;
      while (f != 1)
        {
          while (tab[line - 1][i] != '|')
            i--;
          tab[line - 1][i] = ' ';
          f = 1;
        }
      nb--;
    }
  display_rm(p, line, tmp);
  return (tab);
}

char    **make_board(char **tab)
{
  int   i;
  int   y;

  tab = malloc(sizeof(char *) * 3);
  if (tab == NULL)
    return (NULL);
  y = 0;
  while (y != 4)
    {
      tab[y] = malloc(sizeof(char) * 8);
      if (tab[y] == NULL)
	return (NULL);
      y++;
    }
  return (fill_tab(tab));
}
