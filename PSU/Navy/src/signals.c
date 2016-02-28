/*
** signals.c for signals in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Fri Feb  5 16:09:07 2016 Pablo Berenguel
** Last update Thu Feb 11 13:15:09 2016 Pablo Berenguel
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include "./include/my.h"

void            recpt1(int pid)
{
  if (global == NULL)
    {
      global = malloc(sizeof(char) * 1);
      global[0] = '0';
    }
  else
    global = re_malloc(global, "0");
}

void            recpt2(int pid)
{
  if (global == NULL)
    {
      global = malloc(sizeof(char) * 1);
      global[0] = '1';
    }
  else
    global = re_malloc(global, "1");
}

void            send_sig1(int pid, int sig, int i)
{
  my_putstr("\nresult: ");
  ping_map_check_show(i);
  if (sig == 1)
    {
      kill(pid, SIGUSR1);
      my_putstr(":hit\n");
    }
  if (sig == 2)
    {
      kill(pid, SIGUSR2);
      my_putstr(":missed\n");
    }
  usleep(1600);
}

void            send_sig(int pid, int sig)
{
  if (sig == 1)
    {
      kill(pid, SIGUSR1);
    }
  if (sig == 2)
    {
      kill(pid, SIGUSR2);
    }
  usleep(1600);
}
