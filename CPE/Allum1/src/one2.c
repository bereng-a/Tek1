/*
** one2.c for one 2 in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Tue Feb 16 19:56:36 2016 Pablo Berenguel
** Last update Tue Feb 16 19:57:25 2016 Pablo Berenguel
*/

#include "include/my.h"

void            one_zero_zero(char **map)
{
  if (get_nb_match1(map, 3) <= 7)
    map = rm_match(map, 4, 1, 0);
}

void            zero_zero_one(char **map)
{
  if (get_nb_match1(map, 0) >= 1 && get_nb_match1(map, 0) % 2 == 1)
    map = rm_match(map, 1, 1, 0);
  else if (get_nb_match1(map, 1) >= 1
           && get_nb_match1(map, 1) % 2 == 1)
    map = rm_match(map, 2, 1, 0);
  else if (get_nb_match1(map, 2) >= 1
           && get_nb_match1(map, 2) % 2 == 1)
    map = rm_match(map, 3, 1, 0);
  else if (get_nb_match1(map, 3) >= 1
           && get_nb_match1(map, 3) % 2 == 1)
    map = rm_match(map, 4, 1, 0);
}

void            zero_one_one(char **map)
{
  if (get_nb_match1(map, 1) == 3)
    map = rm_match(map, 2, 3, 0);
  else if (get_nb_match1(map, 3) == 6)
    map = rm_match(map, 4, 1, 0);
  else if (get_nb_match1(map, 2) == 2)
    map = rm_match(map, 2, 1, 0);
  else if (get_nb_match1(map, 2) == 3)
    map = rm_match(map, 3, 3, 0);
  else if (get_nb_match1(map, 2) == 2)
    map = rm_match(map, 3, 1, 0);
  else if (get_nb_match1(map, 3) == 3)
    map = rm_match(map, 4, 3, 0);
  else if (get_nb_match1(map, 3) == 2)
    map = rm_match(map, 4, 1, 0);
  else if (get_nb_match1(map, 3) == 7)
    map = rm_match(map, 4, 3, 0);
  else if (get_nb_match1(map, 1) == 2)
    map = rm_match(map, 2, 1, 0);
}
