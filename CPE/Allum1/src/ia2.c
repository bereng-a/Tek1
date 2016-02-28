/*
** ia2.c for suite in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb 17 14:01:57 2016 Pablo Berenguel
** Last update Wed Feb 17 14:02:35 2016 Pablo Berenguel
*/

#include "include/my.h"

void            moove_22(char **map, l_ia base, int ones)
{
  if (bin_to_decimal(base.three) != 1 && bin_to_decimal(base.three) != 0)
    {
      if (ones % 2 == 0)
        map = rm_match(map, 3, get_nb_match1(map, 2) - 1, 0);
      else
        map = rm_match(map, 3, get_nb_match1(map, 2), 0);
    }
  else if (bin_to_decimal(base.fourth) != 1
           && bin_to_decimal(base.fourth) != 0)
    {
      if (ones % 2 == 0)
        map = rm_match(map, 4, get_nb_match1(map, 3) - 1, 0);
      else
        map = rm_match(map, 4, get_nb_match1(map, 3), 0);
    }
  else
    rm_match_one(map, base);
}
