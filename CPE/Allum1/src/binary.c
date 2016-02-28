/*
** binary.c for binari gest in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Thu Feb  4 12:11:14 2016 Pablo Berenguel
** Last update Thu Feb 11 19:52:02 2016 Pablo Berenguel
*/

#include <math.h>

int	decimal_to_bin(int n)
{
  int	rem;
  int	i;
  int	binary;

  i = 1;
  binary = 0;
  while (n != 0)
    {
      rem = n % 2;
      n /= 2;
      binary += rem * i;
      i *= 10;
    }
  return (binary);
}

int	power(int x, unsigned int y)
{
  if (y == 0)
    return (1);
  else if (y % 2 == 0)
    return (power(x, y / 2) * power(x, y / 2));
  else
    return (x * power(x, y / 2) * power(x, y / 2));
}

int     b_t_d(int n)

{
  int   decimal;
  int   i;
  int   rem;

  i = 0;
  decimal = 0;
  while (n != 0)
    {
      rem = n % 10;
      n /= 10;
      decimal += rem * power(2, i);
      ++i;
    }
  return (decimal);
}

int	bin_to_decimal(int n)

{
  int	decimal;
  int	i;
  int	rem;

  i = 0;
  decimal = 0;
  while (n != 0)
    {
      rem = n % 10;
      n /= 10;
      decimal += rem * power(2, i);
      ++i;
    }
  return (decimal);
}
