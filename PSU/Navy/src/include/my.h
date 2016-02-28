/*
** my.h for my for h in /home/pab/Documents/PSU_2015_filter/include
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Mon Dec 14 16:46:59 2015 Pablo
** Last update Fri Feb  5 19:41:27 2016 Pablo Berenguel
*/

#ifndef LIST_H_
# define LIST_H_

extern char	*global;

typedef struct	boat_lenght
{
  int		two;
  int		three;
  int		fourth;
  int		five;
} lenght_boat;

typedef struct	boat_infos
{
  int           size;
  int           x;
  int           x2;
  int           y;
  int           y2;
} infos_boat;

char            **create_map();
char            *int_to_char(int i);
char            *inttochar_next(char *erase, int i, int lenght);
char            *re_malloc(char *str, char *str2);
char            *attack(int pid, char *str);
void            recpt1(int pid);
void            recpt2(int pid);

#endif /* LIST_H_ */
