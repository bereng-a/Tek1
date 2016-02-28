/*
** attack4.c for stllfolo in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Sat Feb  6 23:03:36 2016 Pablo Berenguel
** Last update Thu Feb 11 14:47:06 2016 Pablo Berenguel
*/

#include "./include/my.h"

void			my_put_pos(int i, char c)
{
  if (i == 1)
    my_putchar('A');
  else if (i == 2)
    my_putchar('B');
  else if (i == 3)
    my_putchar('C');
  else if (i == 4)
    my_putchar('D');
  else if (i == 5)
    my_putchar('E');
  else if (i == 6)
    my_putchar('F');
  else if (i == 7)
    my_putchar('G');
  else if (i == 8)
    my_putchar('H');
  my_putchar(c);
}

int                     ping_map_check_show(int pos)
{
  if (pos <= 8)
    my_put_pos(pos, '1');
  else if (pos > 8 && pos <= 16)
    my_put_pos(pos - 8, '2');
  else if (pos > 16 && pos <= 24)
    my_put_pos(pos - 16, '3');
  else if (pos > 24 && pos <= 32)
    my_put_pos(pos - 24, '4');
  else if (pos > 32 && pos <= 40)
    my_put_pos(pos - 32, '5');
  else if (pos > 40 && pos <= 48)
    my_put_pos(pos - 40, '6');
  else if (pos > 48 && pos <= 56)
    my_put_pos(pos - 48, '7');
  else if (pos > 56 && pos <= 64)
    my_put_pos(pos - 56, '8');
}
