/*
** cut.c for cutted in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Mon Feb  8 10:58:28 2016 Pablo Berenguel
** Last update Thu Feb 11 19:51:14 2016 Pablo Berenguel
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/my.h"

void            cut_it1(int enemy_pid, char *buffer, char **enemy_map,
                       char **my_map)
{
  char          *morc;

  my_putstr("\n");
  if (buffer[0] != 0)
    {
      morc = attack(enemy_pid, buffer);
      send_sig_attack(enemy_pid, morc, enemy_map);
      result_attack(buffer, enemy_map, bin_to_decimal(char_to_int(morc)));
    }
}

void		cut_it(int enemy_pid, char *buffer, char **enemy_map,
		       char **my_map)
{
  char		*morc;

  my_putstr("\n");
  if (buffer[0] != 0)
    {
      morc = attack(enemy_pid, buffer);
      send_sig_attack(enemy_pid, morc, enemy_map);
      result_attack(buffer, enemy_map, bin_to_decimal(char_to_int(morc)));
      if (check_game(enemy_map) != 84 && check_game(my_map) != 84)
	show_map(my_map, enemy_map);
      if (check_game(enemy_map) == 84)
	my_putstr("\n");
    }
}
