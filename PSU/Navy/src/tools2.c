/*
** tools2.c for tolls2 in /home/pab/PSU/PSU_2015_navy
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Mon Feb  8 11:42:02 2016 Pablo Berenguel
** Last update Thu Feb 11 13:36:52 2016 Pablo Berenguel
*/

void            free_buffer1(char *str)
{
  int           i;

  i = 0;
  my_putstr("\nwrong position\n\n");
  while (i != 4095)
    {
      str[i] = 0;
      i++;
    }
}

void		free_buffer2(char *str)
{
  int           i;

  i = 0;
  while (i != 4095)
    {
      str[i] = 0;
      i++;
    }
  free_global();
}
