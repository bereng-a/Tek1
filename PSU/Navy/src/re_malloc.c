/*
** re_malloc.c for re malloc in /home/pab/PSU/PSU_2015_genealogy
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Tue Jan 12 13:53:53 2016 Pablo
** Last update Tue Jan 12 13:58:42 2016 Pablo
*/

#include <stdlib.h>

char            *re_malloc(char *str, char *str2)
{
  int           i;
  int           i2;
  int           tmp;
  char          *newstr;

  i = 0;
  i2 = 0;
  newstr = malloc(sizeof(char) * my_strlen(str) + my_strlen(str2) + 1);
  while (str[i] != '\0')
    {
      newstr[i] = str[i];
      if (str[i] != '\0')
        i++;
    }
  while (i2 != my_strlen(str2))
    {
      newstr[i] = str2[i2];
      if (str2[i2] != '\0')
        i++;
      i2++;
    }
  newstr[i] = '\0';
  return (newstr);
}
