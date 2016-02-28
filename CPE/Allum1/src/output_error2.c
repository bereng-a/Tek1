/*
** output_error2.c for outpuut2 in /home/pab/CPE/CPE_2015_Allum1
** 
** Made by Pablo Berenguel
** Login   <pablo.berenguel@epitech.net>
** 
** Started on  Wed Feb 17 10:25:38 2016 Pablo Berenguel
** Last update Wed Feb 17 10:25:47 2016 Pablo Berenguel
*/

int     out_3(int *f)
{
  *f = 84;
  my_putstr("Error: invalid input (positive number expected)\n");
  return (84);
}

int     out_line3()
{
  my_putstr("Error: this line is empty\n");
  return (84);
}
