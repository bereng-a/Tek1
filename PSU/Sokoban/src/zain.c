/*
** zain.c for test in /home/pab/Lib/my
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Sat Jan  9 16:23:18 2016 Pablo
** Last update Sun Feb 28 18:55:39 2016 pablo
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

int	end_game(int i)
{
  if (endwin() == ERR)
    return (1);
  if (i == ERR)
     return (1);
  return (0);
}

void	core_game_cut(char **map, int size, char **bmap, int i)
{
  if (i == 67)
    to_right(map, bmap, size);
  if (i == 68)
    to_left(map, bmap, size);
  if (i == 65)
    to_down(map, bmap, size);
  if (i == 66)
    to_up(map, bmap, size);
}

int	core_game(char **map, int size, char **bmap, char *path)
{
  int	i;
  int	cols;

  clear();
  cols = LINES;
  if (my_strlen(map[0]) < COLS && size < LINES)
    just_print(map, size, &i);
  else
    i = display_thing(map, size, bmap, &i);
  while (check_game(map, size, bmap) == 84 && i != ERR)
    {
      i = getch();
      if (cols != LINES)
	just_lignes(map, size, &cols);
      if (my_strlen(map[0]) > COLS || size > LINES)
      i = display_thing(map, size, bmap, &i);
      if (i == 67 || i == 68 || i == 69 || i == 65 || i == 66)
	core_game_cut(map, size, bmap, i);
      if (i == 32)
	if (free_map(map, size) == 0 && (map = cp_map(bmap, size)) == NULL)
	  return (1);
    }
  return (end_game(i));
}

int	main(int ac, char **av)
{
  int	i;
  char	**bmap;
  char	**map;
  int	size;

  if ((bmap = check_map(ac, av, &size)) == NULL || initscr() == NULL
      || noecho() == ERR || curs_set(FALSE) == ERR)
    return (1);
  map = cp_map(bmap, size);
  i = core_game(map, size, bmap, av[1]);
  if (curs_set(TRUE) == ERR)
    return (1);
  endwin();
  return (i);
}
