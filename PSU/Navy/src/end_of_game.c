/*
** end_of_game.c for end it in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Sat Feb  6 20:07:55 2016 Pablo Berenguel
** Last update Thu Feb 11 11:47:08 2016 Pablo Berenguel
*/

int		who_won()
{
  my_putstr("\n");
  return (0);
}

int		check_game(char **map)
{
  int		i;
  int		y;
  int		x;

  y = 2;
  i = 0;
  while (y != 10)
    {
      x = 2;
      while (x != 17)
	{
	  if (map[y][x] == 'x')
	    i++;
	  x++;
	}
      y++;
    }
  if (i == 14)
    return (84);
  return (0);
}
