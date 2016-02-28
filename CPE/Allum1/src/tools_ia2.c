/*
** tools_ia2.c for suite in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Tue Feb 16 19:57:54 2016 Pablo Berenguel
** Last update Tue Feb 16 19:58:22 2016 Pablo Berenguel
*/

#include "include/my.h"

char            *right_bin1(int pos)
{
  char          *bi;
  int           tmp;

  if (my_strlen(int_to_char(pos)) == 1)
    bi = re_malloc("00", int_to_char(pos));
  else if (my_strlen(int_to_char(pos)) == 2)
    bi = re_malloc("0", int_to_char(pos));
  else
    bi = int_to_char(pos);
  if (bi == NULL)
    return (NULL);
  return (bi);
}
