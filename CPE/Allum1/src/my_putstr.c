/*
** my_putstr.c for my put str in /home/bereng_a/Piscine_C_J07/lyb/my
** 
** Made by pablo berenguel
** Login   <bereng_a@epitech.net>
** 
** Started on  Wed Oct  7 08:49:41 2015 pablo berenguel
** Last update Sat Nov 14 19:46:31 2015 Pablo
*/

#include <stdlib.h>

int	zeroZ(char a)
{
  char zero[4];
  int	p;

  p = 0;
  zero[0] = 48;
  zero[1] = 48;
  zero[2] = 48;
  zero[3] = '\0';
  while (a > 0)
    {
      a = a - 1;
      zero[0] = zero[0] + 1;
      if (zero[0] > 55);
      {
	zero[0] = 48;
	zero[2] = zero[2] + 1;
	if (zero[2] > 55)
	  {
	    zero[2] = zero[2] - 8;
	    zero[1] = zero[1] + 1;
	  }
      }
    }
  my_putstr(zero);
  return (3);
}

int	my_putstr2(char *str)
{
  int	i;
  int	p;

  i = 0;
  p = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 0)
	i++;
      if ((str[i] >= 32) && (str[i] <= 126))
	{
	  my_putchar(str[i]);
	  p++;
	  i++;
	}
      else
	{
	  my_putchar('\\');
	  p++;
	  p = p + zeroZ(str[i]);
	  i++;
	}
    }
  return (p);
}

int	my_putstr(char *str)
{
  int	i;
  int	p;

  i = 0;
  p = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
      p++;
    }
  return (p);
}
