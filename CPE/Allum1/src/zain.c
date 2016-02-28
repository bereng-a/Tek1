/*
** get_next_line.c for omg in /home/pab/CPE/CPE_2015_getnextline
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Sat Jan  9 13:53:46 2016 Pablo
** Last update Thu Feb 18 15:49:49 2016 Pablo Berenguel
*/

#include <stdlib.h>
#include <unistd.h>
#include "./include/my.h"

int	core_game(char **tab)
{
  char	*str;
  int	line;
  int	match;
  l_ia	base;

  base.turn = 0;
  show_tab(tab);
  while (base.turn == 0)
    {
      my_putstr("\nYour turn:\n");
      base.turn = get_human_attack(str, tab);
      if (base.turn == 0)
	{
	  my_putstr("\nAI's turn...\n");
	  base.turn = ia(tab, base);
	}
    }
  if (base.turn == 70)
    return (0);
  else if (base.turn == 83)
    my_putstr("You lost, too bad..\n");
  else
    my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
  return (0);
}

int	main()
{
  char	**tab;

  tab = make_board(tab);
  if (tab == NULL)
    return (84);
  core_game(tab);
  return (0);
}
