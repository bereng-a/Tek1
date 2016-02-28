/*
** output_error.c for outputing in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb 10 14:29:28 2016 Pablo Berenguel
** Last update Wed Feb 17 10:25:52 2016 Pablo Berenguel
*/

int     out_2(int *f)
{
  *f = 84;
  my_putstr("Error: you have to remove at least one match\n");
}

int     out_1(int *f)
{
  *f = 84;
  my_putstr("Error: not enough matches on this line\n");
}

int	out_line2()
{
  my_putstr("Error: invalid input (positive number expected)\n");
  return (84);
}

int	out_line1()
{
  my_putstr("Error: this line is out of range\n");
  return (84);
}
