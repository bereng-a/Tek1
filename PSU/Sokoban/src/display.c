/*
** zain.c for test in /home/pab/Lib/my
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Sat Jan  9 16:23:18 2016 Pablo
** Last update Sun Feb 28 13:10:31 2016 pablo
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"

void	clean_screen()
{
  int	bcp;

  bcp = 0;
  while (bcp != COLS * LINES * 2)
    {
      mvprintw(bcp, 0, "                       ");
      mvprintw(bcp, 20, "                       ");
      mvprintw(bcp, 40, "                       ");
      mvprintw(bcp, 60, "                       ");
      mvprintw(bcp, 80, "                       ");
      mvprintw(bcp, 100, "                       ");
      mvprintw(bcp, 120, "                       ");
      bcp++;
    }
}

void	just_lignes(char **map, int size, int *cols)
{
  int	i;

  clear();
  while (size > LINES)
    {
      clean_screen();
      if (COLS < my_strlen("Please resize"))
	mvprintw(LINES / 2, COLS / 2
		 - my_strlen("/!\\") / 2, "/!\\");
      else
	mvprintw(LINES / 2, COLS / 2
		 - my_strlen("Please resize") / 2, "Please resize");
      refresh();
    }
  clear();
  just_print(map, size, &i);
  *cols = LINES;
}

int	display_thing(char **map, int size, char **bmap, int *tuch)
{
  int	i;
  int	tras;

  clear();
  noecho();
  if (*tuch == 67 || *tuch == 68 || *tuch == 69 || *tuch == 65 || *tuch == 66)
    *tuch = 1996;
    while ((my_strlen(map[0]) > COLS || size > LINES) && i == 0)
    {
      clean_screen();
      if (COLS < my_strlen("Please resize"))
	mvprintw(LINES / 2, COLS / 2
		 - my_strlen("/!\\") / 2, "/!\\");
      else
	mvprintw(LINES / 2, COLS / 2
		 - my_strlen("Please resize") / 2, "Please resize");
      refresh();
      if (*tuch == ERR)
	return ((i = *tuch));
    }
  clear();
  just_print(map, size, &tras);
  return ((i = *tuch));
}
