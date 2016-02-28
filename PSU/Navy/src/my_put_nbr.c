/*
** my_put_nbr.c for my put nbr in /home/bereng_a/Piscine_C_J07/lyb/my
** 
** Made by pablo berenguel
** Login   <bereng_a@epitech.net>
** 
** Started on  Wed Oct  7 10:45:26 2015 pablo berenguel
** Last update Sat Dec 12 17:20:55 2015 Pablo
*/

int     my_put_nbrlong(long int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    my_putchar(nb + 48);
}

int	my_put_nbrlongl(long long int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    my_putchar(nb + 48);
}

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    my_putchar(nb + 48);
}

int	my_put_nbr2(unsigned int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    my_putchar(nb + 48);
}
