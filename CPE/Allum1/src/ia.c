/*
** ia.c for Ia in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Sun Feb 14 10:14:30 2016 Pablo Berenguel
** Last update Wed Feb 17 14:02:23 2016 Pablo Berenguel
*/

#include "include/my.h"

void		rm_match_one(char **map, l_ia base)
{
  if (base.one == 1)
    map = rm_match(map, 1, 1, 0);
  else if (base.two == 1)
    map = rm_match(map, 2, 1, 0);
  else if (base.three == 1)
    map = rm_match(map, 3, 1, 0);
  else if (base.fourth == 1)
    map = rm_match(map, 4, 1, 0);
}

int		how_many_one(l_ia base)
{
  int		i;

  i = 0;
  if (bin_to_decimal(base.one) == 1)
    i++;
  if (bin_to_decimal(base.two)== 1)
    i++;
  if (bin_to_decimal(base.three)== 1)
    i++;
  if (bin_to_decimal(base.fourth)== 1)
    i++;
  return (i);
}

void		moove_2(char **map, l_ia base)
{
  int		ones;

  ones = how_many_one(base);
  if (bin_to_decimal(base.one) != 1 && bin_to_decimal(base.one) != 0)
    {
      if (ones % 2 == 0)
	map = rm_match(map, 1, get_nb_match1(map, 0) - 1, 0);
      else
	map = rm_match(map, 1, get_nb_match1(map, 0), 0);
    }
  else if (bin_to_decimal(base.two) != 1 && bin_to_decimal(base.two) != 0)
    {
      if (ones % 2 == 0)
	map = rm_match(map, 2, get_nb_match1(map, 1) - 1, 0);
      else
       map = rm_match(map, 2, get_nb_match1(map, 1), 0);
    }
  else
    moove_22(map, base, ones);
}

void		moove_1(char **map, char *da)
{
  if (da[0] == '0' && da[1] == '0' && da[2] == '1')
    zero_zero_one(map);
  else if (da[0] == '0' && da[1] == '1' && da[2] == '1')
    zero_one_one(map);
  else if (da[0] == '1' && da[1] == '1' && da[2] == '1')
    one_one_one(map);
  else if (da[0] == '0' && da[1] == '1' && da[2] == '0')
    zero_one_zero(map);
  else if (da[0] == '1' && da[1] == '1' && da[2] == '0')
    one_one_zero(map);
  else if (da[0] == '1' && da[1] == '0' && da[2] == '1')
    one_zero_one(map);
  else if (da[0] == '0' && da[1] == '0' && da[2] == '0')
    zero_zero_zero(map);
  else if (da[0] == '1' && da[1] == '0' && da[2] == '0')
    one_zero_zero(map);
}

int		ia(char **map)
{
  l_ia		base;
  char		*da;

  base.one = get_nb_match(0, map);
  base.two = get_nb_match(1, map);
  base.three = get_nb_match(2, map);
  base.fourth = get_nb_match(3, map);
  da = to_add_bin(base, da);
  if (da == NULL)
    return (70);
  if (check_moove(base) == 1)
    moove_1(map, da);
  else
    moove_2(map, base);
  show_tab(map);
  if (check_board(map) == 84)
    return (84);
  else
    return (0);
}
