/*
** zain.c for test in /home/pab/Lib/my
**
** Made by bereng_a
** Login   <pab@epitech.net>
**
** Started on  Sat Jan  9 16:23:18 2016 Pablo
** Last update Wed Feb 24 20:48:01 2016 pablo
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

int	to_right(char **map, char **bmap, int size)
{
  int	y;
  int	x;

  y = get_y_p(map, size);
  x = get_x_p(map, size);
  if (map[y][x + 1] != '#' && map[y][x + 1] != 'X')
    {
      if (bmap[y][x] == 'O')
	{
	  mvaddch(y, x, 'O');
	  mvaddch(y, x + 1, 'P');
	  map[y][x] = 'O';
	  map[y][x + 1] = 'P';
	}
      else
	{
	  mvaddch(y, x, ' ');
	  mvaddch(y, x + 1, 'P');
	  map[y][x] = ' ';
	  map[y][x + 1] = 'P';
	}
    }
  else
    to_right_cut(map, bmap, y, x);
  refresh();
}

int     to_left(char **map, char **bmap, int size)
{
  int	y;
  int	x;

  y = get_y_p(map, size);
  x = get_x_p(map, size);
  if (map[y][x - 1] != '#' && map[y][x - 1] != 'X')
    {
      if (bmap[y][x] == 'O')
	{
	  mvaddch(y, x, 'O');
	  mvaddch(y, x - 1, 'P');
	  map[y][x] = 'O';
	  map[y][x - 1] = 'P';
	}
      else
	{
	  mvaddch(y, x, ' ');
	  mvaddch(y, x - 1, 'P');
	  map[y][x] = ' ';
	  map[y][x - 1] = 'P';
	}
    }
  else
    to_left_cut(map, bmap, y, x);
  refresh();
}

int	to_down(char **map, char **bmap, int size)
{
  int	y;
  int	x;

  y = get_y_p(map, size);
  x = get_x_p(map, size);
  if (map[y - 1][x] != '#' && map[y - 1][x] != 'X')
    {
      if (bmap[y][x] == 'O')
	{
	  mvaddch(y, x, 'O');
	  mvaddch(y - 1, x, 'P');
	  map[y][x] = 'O';
	  map[y - 1][x] = 'P';
	}
      else
	{
	  mvaddch(y, x, ' ');
	  mvaddch(y - 1, x, 'P');
	  map[y][x] = ' ';
	  map[y - 1][x] = 'P';
	}
    }
  else
    to_down_cut(map, bmap, y, x);
  refresh();
}

int	to_up(char **map, char **bmap, int size)
{
  int	y;
  int	x;

  y = get_y_p(map, size);
  x = get_x_p(map, size);
  if (map[y + 1][x] != '#' && map[y + 1][x] != 'X')
    {
      if (bmap[y][x] == 'O')
	{
	  mvaddch(y, x, 'O');
	  mvaddch(y + 1, x, 'P');
	  map[y][x] = 'O';
	  map[y + 1][x] = 'P';
	}
      else
	{
	  mvaddch(y, x, ' ');
	  mvaddch(y + 1, x, 'P');
	  map[y][x] = ' ';
	  map[y + 1][x] = 'P';
	}
    }
  else
    to_up_cut(map, bmap, y, x);
  refresh();
}
