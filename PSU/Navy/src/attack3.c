/*
** attack3.c for foloowatt in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Sat Feb  6 20:23:52 2016 Pablo Berenguel
** Last update Thu Feb 11 14:28:26 2016 Pablo Berenguel
*/

void                     ping_map_ok2(char **map, int y, int x)
{
  map[y][x] = 'x';
}

void                     ping_map_ok(char **map, int pos)
{
  if (pos <= 8)
    ping_map_ok2(map, 2, pos * 2);
  else if (pos <= 16)
    ping_map_ok2(map, 3, pos * 2 - 8 * 2);
  else if (pos <= 24)
    ping_map_ok2(map, 4, pos * 2 - 16 * 2);
  else if (pos <= 32)
    ping_map_ok2(map, 5, pos * 2 - 24 * 2);
  else if (pos <= 40)
    ping_map_ok2(map, 6, pos * 2 - 32 * 2);
  else if (pos <= 48)
    ping_map_ok2(map, 7, pos * 2 - 40 * 2);
  else if (pos <= 56)
    ping_map_ok2(map, 8, pos * 2 - 48 * 2);
  else if (pos <= 64)
    ping_map_ok2(map, 9, pos * 2 - 56 * 2);
}

void                     ping_map_nok2(char **map, int y, int x)
{
  if (map[y][x] != 'x')
    map[y][x] = 'o';
}

void                     ping_map_nok(char **map, int pos)
{
  if (pos <= 8)
    ping_map_nok2(map, 2, pos * 2);
  else if (pos <= 16)
    ping_map_nok2(map, 3, pos * 2 - 8 * 2);
  else if (pos <= 24)
    ping_map_nok2(map, 4, pos * 2 - 16 * 2);
  else if (pos <= 32)
    ping_map_nok2(map, 5, pos * 2 - 24 * 2);
  else if (pos <= 40)
    ping_map_nok2(map, 6, pos * 2 - 32 * 2);
  else if (pos <= 48)
    ping_map_nok2(map, 7, pos * 2 - 40 * 2);
  else if (pos <= 56)
    ping_map_nok2(map, 8, pos * 2 - 48 * 2);
  else if (pos <= 64)
    ping_map_nok2(map, 9, pos * 2 - 56 * 2);
}
