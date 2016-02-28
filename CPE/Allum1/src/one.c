/*
** one.c for oneee in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Tue Feb 16 11:43:34 2016 Pablo Berenguel
** Last update Thu Feb 18 15:32:45 2016 Pablo Berenguel
*/

#include "include/my.h"

void		one_one_one(char **map)
{
  if (get_nb_match1(map, 3, map) == 4)
    rm_match(map, 4, 1, 0);
  else if (get_nb_match1(map, 2) == 5)
    rm_match(map, 3, 3, 0);
  else if (get_nb_match1(map, 2, map) == 4)
    rm_match(map, 3, 1, 0);
  else if (get_nb_match1(map, 3, map) >= 6)
    rm_match(map, 4, 5, 0);
  else if (get_nb_match1(map, 3) == 5)
    rm_match(map, 4, 3, 0);
  else if (get_nb_match1(map, 3, map) <= 4)
    rm_match(map, 4, 1, 0);
  else if (get_nb_match1(map, 3) == 7)
    rm_match(map, 4, 7, 0);
}

char		**zero_one_zero(char **map)
{
  if (get_nb_match1(map, 3) >= 6)
    map = rm_match(map, 4, 2, 0);
  else if (get_nb_match1(map, 2) >= 2 && get_nb_match1(map, 2) < 4)
    map = rm_match(map, 3, 2, 0);
  else if (get_nb_match1(map, 3) >= 2 && get_nb_match1(map, 3) < 4)
    map = rm_match(map, 4, 2, 0);
  else if (get_nb_match1(map, 1) >= 2)
    map = rm_match(map, 2, 2, 0);
}

void		one_one_zero(char **map)
{
  if (get_nb_match1(map, 2) == 4)
    map = rm_match(map, 3, 2, 0);
  else if (get_nb_match1(map, 3) >= 6)
    map = rm_match(map, 4, 6, 0);
  else if (get_nb_match1(map, 2) >= 5)
    map = rm_match(map, 3, 2, 0);
  else if (get_nb_match1(map, 3) >= 4)
    map = rm_match(map, 4, 2, 0);
}

void		one_zero_one(char **map)
{
  if (get_nb_match1(map, 3) == 4)
    map = rm_match(map, 4, 3, 0);
  else if (get_nb_match1(map, 2) == 4)
    map = rm_match(map, 3, 3, 0);
  else if (get_nb_match1(map, 2) == 5)
    map = rm_match(map, 3, 5, 0);
  else if (get_nb_match1(map, 3) >= 5)
    map = rm_match(map, 4, 5, 0);
}

void		zero_zero_zero(char **map)
{
  if (get_nb_match1(map, 3) == 2)
    map = rm_match(map, 4, 1, 0);
  else if (get_nb_match1(map, 2) == 3)
    map = rm_match(map, 3, 2, 0);
}
