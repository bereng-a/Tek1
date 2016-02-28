/*
** zain.c for Here begin in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Mon Feb  1 09:42:59 2016 Pablo Berenguel
** Last update Thu Feb 11 15:51:08 2016 Pablo Berenguel
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include "./include/my.h"

char	*global = "-1";

void			get_signal_start(int sig, siginfo_t *siginfo, void *context)
{
  if (char_to_int(global) == -1)
    global = int_to_char(siginfo->si_pid);
  else if (my_strcmp(global, int_to_char(siginfo->si_pid)) == 0)
    global = int_to_char(123);
}

int			first_zain(pid_t my_pid, char **my_map)
{
  struct sigaction      ok;
  char			**enemy_map;
  int			enemy_pid;

  ok.sa_sigaction = &get_signal_start;
  ok.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &ok, NULL);
  show_pid1(my_pid);
  my_putstr("\nwaiting for enemy...\n\n");
  while (my_strcmp(global, "-1") == 0);
  enemy_pid = char_to_int(global);
  my_putstr("enemy connected\n");
  send_sig(char_to_int(global), 1);
  if ((enemy_map = create_map()) == NULL)
    return (84);
  show_map(my_map, enemy_map);
  phase1(my_pid, enemy_pid, my_map, enemy_map);
  show_map1(my_map, enemy_map);
  display_winner(enemy_map);
}

int			second_zain(int pid, int my_pid, char **my_map)
{
  struct sigaction      ok;
  char			**enemy_map;

  global = int_to_char(pid);
  if ((enemy_map = create_map()) == NULL)
    return (84);
  ok.sa_sigaction = &get_signal_start;
  ok.sa_flags = SA_SIGINFO;
  sigaction(SIGUSR1, &ok, NULL);
  send_sig(pid, 1);
  if (char_to_int(global) == pid)
    return (84);
  show_pid1(my_pid);
  my_putstr("\nsuccessfully connected to enemy\n");
  show_map(my_map, enemy_map);
  global = int_to_char(0);
  phase2(my_pid, pid, my_map, enemy_map);
  show_map1(my_map, enemy_map);
  display_winner(enemy_map);
}

int			main(int ac, char **av)
{
  pid_t			pid;
  char			**map;

  map = create_map();
  if (map == NULL)
    return (1);
  if (check(ac, av, map) == 84)
    return (1);
   pid = getpid();
   if (ac == 2)
     if (first_zain(pid, map) == 84)
       return (1);
  if (ac == 3)
    if (second_zain(char_to_int(av[1]), pid, map) == 84)
      return (1);
  return (0);
}
