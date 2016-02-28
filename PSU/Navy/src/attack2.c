/*
** attack2.c for following attack in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Sat Feb  6 12:14:00 2016 Pablo Berenguel
** Last update Mon Feb  8 12:51:33 2016 Pablo Berenguel
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include "./include/my.h"

void            hurt(int sig)
{
  global = "hurt";
}

void            not_hurt(int sig)
{
  global = "missed";
}

void	result_attack(char *buffer, char **enemy_map, int pos)
{
  int	i;

  i = 0;
  if (my_strcmp(global, "hurt") == 0)
    {
      my_putstr("result: ");
      while (i != 2)
        {
          my_putchar(buffer[i]);
          i++;
        }
      my_putstr(":hit\n");
      ping_map_ok(enemy_map, pos);
    }
  else
    {
      my_putstr("result: ");
      while (i != 2)
        {
          my_putchar(buffer[i]);
          i++;
        }
      my_putstr(":missed\n");
      ping_map_nok(enemy_map, pos);
    }
}

void            send_sig_attack(int enemy_pid, char *morc, char **enemy_map)
{
  int           i;

  i = 0;
  while (morc[i] != '\0')
    {
      if (morc[i] == '0')
        {
          send_sig(enemy_pid, 1);
        }
      if (morc[i] == '1')
        {
          send_sig(enemy_pid, 2);
        }
      i++;
    }
  signal(SIGUSR1, hurt);
  signal(SIGUSR2, not_hurt);
  while (my_strcmp(global, "hurt") != 0 && my_strcmp(global, "missed") != 0);
}
