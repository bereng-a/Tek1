/*
** chartoint.c for char to int in /home/bereng_a/Documents/Wolf 3D
** 
** Made by pablo berenguel
** Login   <bereng_a@epitech.net>
** 
** Started on  Fri Dec 18 14:21:46 2015 pablo berenguel
** Last update Wed Feb  3 16:35:59 2016 Pablo Berenguel
*/

int	char_to_int(char *str)
{
  int	i;
  int	resulta;
  int	f;
  int	negatif;

  negatif = 0;
  i = 0;
  if (str[i] == '-')
    {
      negatif++;
      i++;
    }
  f = 0;
  resulta = 0;
  while (str[i] != '\0')
    {
      if (f == 1)
       resulta = resulta * 10;
      resulta = resulta + (str[i] - 48);
      f = 1;
      i++;
    }
  if (negatif == 1)
    resulta = resulta * -1;
  return (resulta);
}
