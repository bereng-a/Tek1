/*
** attack.c for attack thigs in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Fri Feb  5 13:17:44 2016 Pablo Berenguel
** Last update Thu Feb 11 14:44:38 2016 Pablo Berenguel
*/

#include <stdlib.h>
#include "./include/my.h"

char            *attack(int pid, char *str)
{
  int           pos;
  char          *bi;

  pos = get_pos_attack(str);
  pos = decimal_to_bin(pos);
  if (my_strlen(int_to_char(pos)) == 1)
    bi = re_malloc("000000", int_to_char(pos));
  else if (my_strlen(int_to_char(pos)) == 2)
    bi = re_malloc("00000", int_to_char(pos));
  else if (my_strlen(int_to_char(pos)) == 3)
    bi = re_malloc("0000", int_to_char(pos));
  else if (my_strlen(int_to_char(pos)) == 4)
    bi = re_malloc("000", int_to_char(pos));
  else if (my_strlen(int_to_char(pos)) == 5)
    bi = re_malloc("00", int_to_char(pos));
  else if (my_strlen(int_to_char(pos)) == 6)
    bi = re_malloc("0", int_to_char(pos));
  if (my_strlen(int_to_char(pos)) == 7)
    bi = int_to_char(pos);
  return (bi);
}

int                     ping_map2(char **map, int y, int x)
{
  if (map[y][x] == '.')
    {
      map[y][x] = 'o';
      return (1);
    }
  else if (map[y][x] == '2' ||  map[y][x] == '3' ||
	   map[y][x] == '4' || map[y][x] == '5')
    {
      map[y][x] = 'x';
      return (0);
    }
  return (1);
}

int                     ping_map(char **map, int pos)
{
  if (pos <= 8)
    return (ping_map2(map, 2, pos * 2));
  else if (pos <= 16)
    return (ping_map2(map, 3, pos * 2 - 8 * 2));
  else if (pos <= 24)
    return (ping_map2(map, 4, pos * 2 - 16 * 2));
  else if (pos <= 32)
    return (ping_map2(map, 5, pos * 2 - 24 * 2));
  else if (pos <= 40)
    return (ping_map2(map, 6, pos * 2 - 32 * 2));
  else if (pos <= 48)
    return (ping_map2(map, 7, pos * 2 - 40 * 2));
  else if (pos <= 56)
    return (ping_map2(map, 8, pos * 2 - 48 * 2));
  else if (pos <= 64)
    return (ping_map2(map, 9, pos * 2 - 56 * 2));
}

int                     get_pos_1_attack(char c)
{
  if (c == 'A')
    return (1);
  if (c == 'B')
    return (2);
  if (c == 'C')
    return (3);
  if (c == 'D')
    return (4);
  if (c == 'E')
    return (5);
  if (c == 'F')
    return (6);
  if (c == 'G')
    return (7);
  if (c == 'H')
    return (8);
}

int                     get_pos_attack(char *str, char **map)
{
  int                   pos;

  if (str == NULL)
    return (84);
  if (my_strlen(str) != 3)
    return (84);
  if (str[0] < 'A' || str[0] > 'H')
    return (84);
  if (str[1] < '1' || str[1] > '8')
    return (84);
  pos = get_pos_1_attack(str[0]);
  pos = pos + (8 * (str[1] - 49));
  return (pos);
}
