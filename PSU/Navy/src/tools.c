/*
** tools.c for tools. in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Mon Feb  1 14:37:47 2016 Pablo Berenguel
** Last update Thu Feb 11 14:40:34 2016 Pablo Berenguel
*/

#include <stdlib.h>
#include "./include/my.h"

void		free_global()
{
  if ((global = malloc(sizeof(char) * 1)) != NULL)
    free(global);
}

void		display_winner(char **enemy_map)
{
  if (check_game(enemy_map) != 84)
    my_putstr("Enemy won\n");
  else
    my_putstr("I won\n");
}

void		fill_lb(lenght_boat *lb)
{
  lb->two = 0;
  lb->three = 0;
  lb->fourth = 0;
  lb->five = 0;
}

void		show_pid1(int i)
{
  my_putstr("my_pid: ");
  my_put_nbr(i);
  my_putstr("\n");
}

void		free_buffer(char *str)
{
  int		i;

  i = 0;
  while (i != 4095)
    {
      str[i] = 0;
      i++;
    }
}
