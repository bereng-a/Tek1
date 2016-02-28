/*
** tools_ia.c for tools ia in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Mon Feb 15 09:49:12 2016 Pablo Berenguel
** Last update Tue Feb 16 19:58:20 2016 Pablo Berenguel
*/

#include "include/my.h"

int             get_nb_match(int line, char **tab)
{
  int           i;
  int           nb;

  nb = 0;
  i = 0;
  while (tab[line][i] != '\0')
    {
      if (tab[line][i] == '|')
        nb++;
      i++;
    }
  return (decimal_to_bin(nb));
}

int             get_nb_match1(char **tab, int line)
{
  int           i;
  int           nb;

  nb = 0;
  i = 0;
  while (tab[line][i] != '\0')
    {
      if (tab[line][i] == '|')
        nb++;
      i++;
    }
  return (nb);
}

char		*true_or_not(char *str, char *str2)
{
  char		*retu;

  retu = malloc(sizeof(char) * 3);
  if (str == NULL || str2 == NULL)
    return (NULL);
  if (retu == NULL)
    return (NULL);
  if ((str[0] == '0' && str2[0] == '0') || (str[0] == '1' && str2[0] == '1'))
    retu[0] = '0';
  else
    retu[0] = '1';
  if ((str[1] == '0' && str2[1] == '0') || (str[1] == '1' && str2[1] == '1'))
    retu[1] = '0';
  else
    retu[1] = '1';
  if ((str[2] == '0' && str2[2] == '0') || (str[2] == '1' && str2[2] == '1'))
    retu[2] = '0';
  else
    retu[2] = '1';
  return (retu);
}

int		check_moove(l_ia base)
{
  int		one;
  int		more;

  more = 0;
  if (base.one > 1)
    more++;
  if (base.two > 1)
    more++;
  if (base.three > 1)
    more++;
  if (base.fourth > 1)
    more++;
  if (more > 1)
    return (1);
  else
    return (2);
}

char            *to_add_bin(l_ia base, char *res)
{
  char          *str;
  char          *str2;
  char          *str3;
  char          *str4;

  res = malloc(sizeof(char) * 3);
  str = right_bin1(base.one);
  str2 = right_bin1(base.two);
  str3 = right_bin1(base.three);
  str4 = right_bin1(base.fourth);
  if (res == NULL || str == NULL || str2 == NULL ||
      str3 == NULL || str4 == NULL)
    return (NULL);
  res = true_or_not(str, true_or_not(str2, true_or_not(str3, str4)));
  if (res == NULL)
    return (NULL);
  return (res);
}
