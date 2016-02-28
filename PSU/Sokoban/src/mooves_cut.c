/*
** zain.c for test in /home/pab/Lib/my
**
** Made by bereng_a
** Login   <pab@epitech.net>
**
** Started on  Sat Jan  9 16:23:18 2016 Pablo
** Last update Thu Feb 25 22:17:39 2016 pablo
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

int     to_right_cut(char **map, char **bmap, int y, int x)
{
  if (map[y][x + 1] != '#' && map[y][x + 2] != '#'
      && map[y][x + 1] == 'X' && map[y][x + 2] != 'X')
    {
      if (bmap[y][x] != 'O')
	{
	  mvaddch(y, x, ' ');
	  mvaddch(y, x + 1, 'P');
	  mvaddch(y, x + 2, 'X');
	  map[y][x] = ' ';
	  map[y][x + 1] = 'P';
	  map[y][x + 2] = 'X';
	}
      else
	{
	  mvaddch(y, x, 'O');
	  mvaddch(y, x + 1, 'P');
	  mvaddch(y, x + 2, 'X');
	  map[y][x] = 'O';
	  map[y][x + 1] = 'P';
	  map[y][x + 2] = 'X';
	}
    }
}
int     to_left_cut(char **map, char **bmap, int y, int x)
{
  if (map[y][x - 1] != '#' && map[y][x - 2] != '#'
      && map[y][x - 1] == 'X' && map[y][x - 2] != 'X')
    {
      if (bmap[y][x] != 'O')
	{
	  mvaddch(y, x, ' ');
	  mvaddch(y, x - 1, 'P');
	  mvaddch(y, x - 2, 'X');
	  map[y][x] = ' ';
	  map[y][x - 1] = 'P';
	  map[y][x - 2] = 'X';
	}
      else
	{
	  mvaddch(y, x, 'O');
	  mvaddch(y, x - 1, 'P');
	  mvaddch(y, x - 2, 'X');
	  map[y][x] = 'O';
	  map[y][x - 1] = 'P';
	  map[y][x - 2] = 'X';
	}
    }
}

int     to_up_cut(char **map, char **bmap, int y, int x)
{
  if (map[y + 1][x] != '#' && map[y + 2][x] != '#'
      && map[y + 1][x] == 'X' && map[y + 2][x] != 'X')
    {
      if (bmap[y][x] != 'O')
	{
	  mvaddch(y, x, ' ');
	  mvaddch(y + 1, x, 'P');
	  mvaddch(y + 2, x, 'X');
	  map[y][x] = ' ';
	  map[y + 1][x] = 'P';
	  map[y + 2][x] = 'X';
	}
      else
	{
	  mvaddch(y, x, 'O');
	  mvaddch(y + 1, x, 'P');
	  mvaddch(y + 2, x, 'X');
	  map[y][x] = 'O';
	  map[y + 1][x] = 'P';
	  map[y + 2][x] = 'X';
	}
    }
}
int     to_down_cut(char **map, char **bmap, int y, int x)
{
  if (map[y - 1][x] != '#' && map[y - 2][x] != '#'
      && map[y - 1][x] == 'X' && map[y - 2][x] != 'X')
    {
      if (bmap[y][x] != 'O')
	{
	  mvaddch(y, x, ' ');
	  mvaddch(y - 1, x, 'P');
	  mvaddch(y - 2, x, 'X');
	  map[y][x] = ' ';
	  map[y - 1][x] = 'P';
	  map[y - 2][x] = 'X';
	}
      else
	{
	  mvaddch(y, x, 'O');
	  mvaddch(y - 1, x, 'P');
	  mvaddch(y - 2, x, 'X');
	  map[y][x] = 'O';
	  map[y - 1][x] = 'P';
	  map[y - 2][x] = 'X';
	}
    }
}
