/*
** tools_board2.c for suite in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb 17 12:12:03 2016 Pablo Berenguel
** Last update Wed Feb 17 12:13:24 2016 Pablo Berenguel
*/

#include "./include/my.h"

void	display_rm(int p, int line, int tmp)
{
  if (p == 1)
    my_putstr("Player");
  else
    my_putstr("AI");
  my_putstr(" removed ");
  my_put_nbr(tmp);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putchar('\n');
}
