/*
** get_attack_human.c for get atttack in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb 10 16:04:00 2016 Pablo Berenguel
** Last update Thu Feb 18 15:56:38 2016 Pablo Berenguel
*/

#include "include/my.h"

void	utils_human(int *i)
{
  my_putstr("Line: ");
  *i = 0;
}

int	get_human_attack2(char **tab, int line, int match)
{
  tab = rm_match(tab, line, match, 1);
  show_tab(tab);
  if (check_board(tab) == 84)
    return (83);
  else
    return (0);
}

int	get_human_attack(char *str, char **tab)
{
  int	line;
  int	match;
  int	f;

  f = 84;
  while (f == 84)
    {
      utils_human(&f);
      while (pars_line(str = get_next_line(0), tab) == 84)
        my_putstr("Line: ");
      if (str == NULL)
	return (70);
      line = char_to_int(str);
      str = get_next_line(0);
      if (str == NULL)
	return (70);
      if (pars_match(str, line, tab) == 83)
        out_2(&f);
      if (pars_match(str, line, tab) == 84)
        out_1(&f);
      if (pars_match(str, line, tab) == 85)
        out_3(&f);
    }
  match = char_to_int(str);
  return (get_human_attack2(tab, line, match));
}
