/*
** start_game.c for start the game in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb  3 16:12:19 2016 Pablo Berenguel
** Last update Thu Feb 11 19:53:56 2016 Pablo Berenguel
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include "./include/my.h"

int             my_wait2()
{
  my_putstr("\nwaiting for enemy\'s attack...\n");
  signal(SIGUSR1, recpt1);
  signal(SIGUSR2, recpt2);
  while (my_strlen(global) != 7)
    {
      if (my_strlen(global) == 7)
        {
          usleep(2600);
          return (0);
        }
    }
  usleep(2600);
}

int		my_wait()
{
  my_putstr("waiting for enemy\'s attack...\n");
  signal(SIGUSR1, recpt1);
  signal(SIGUSR2, recpt2);
  while (my_strlen(global) != 7)
    {
      if (my_strlen(global) == 7)
	{
	  usleep(2600);
	  return (0);
	}
    }
  usleep(2600);
}

int		phase2(int my_pid, int enemy_pid, char **my_map, char **enemy_map)
{
  char          buffer[4096];

  while (check_game(enemy_map) != 84)
    {
      free_global();
      free_buffer(buffer);
      my_wait();
      if (ping_map(my_map, bin_to_decimal(char_to_int(global))) == 1)
	send_sig1(enemy_pid, 2, bin_to_decimal(char_to_int(global)));
      else
	send_sig1(enemy_pid, 1, bin_to_decimal(char_to_int(global)));
      if (check_game(enemy_map) == 84 || check_game(my_map) == 84)
	return (who_won());
      free_global();
      my_putstr("\n");
      while (get_pos_attack(buffer, enemy_map) == 84)
        {
          my_putstr("attack: ");
          read(0, &buffer, 4095);
          if (get_pos_attack(buffer, enemy_map) == 84)
            free_buffer1(buffer);
        }
      cut_it(enemy_pid, buffer, enemy_map, my_map);
    }
}

int		phase1(int my_pid, int enemy_pid, char **my_map, char **enemy_map)
{
  char		buffer[4096];

  while (check_game(enemy_map) != 84 && check_game(my_map) != 84)
    {
      free_buffer2(buffer);
      while (get_pos_attack(buffer, enemy_map) == 84)
	{
	  my_putstr("attack: ");
	  read(0, &buffer, 4095);
	  if (get_pos_attack(buffer, enemy_map) == 84)
	    free_buffer1(buffer);
	}
      cut_it1(enemy_pid, buffer, enemy_map, my_map);
      free_buffer2(buffer);
      if (check_game(enemy_map) == 84 || check_game(my_map) == 84)
        return (who_won());
      if (my_wait2() == 0 && ping_map(my_map, b_t_d(char_to_int(global))) == 1)
        send_sig1(enemy_pid, 2, bin_to_decimal(char_to_int(global)));
      else
        send_sig1(enemy_pid, 1, bin_to_decimal(char_to_int(global)));
      if (check_game(enemy_map) != 84 && check_game(my_map) != 84)
	show_map(my_map, enemy_map);
      else
	my_putstr("\n");
    }
}
