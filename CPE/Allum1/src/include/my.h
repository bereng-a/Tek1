/*
** my.h for my for h in /home/pab/Documents/PSU_2015_filter/include
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Mon Dec 14 16:46:59 2015 Pablo
** Last update Tue Feb 16 19:54:39 2016 Pablo Berenguel
*/


#include <unistd.h>
#include <stdlib.h>

#ifndef READ_SIZE
# define READ_SIZE (1)

typedef struct  result_l
{
  int           one;
  int           two;
  int           three;
} l_result;

typedef struct  ia_l
{
  int           one;
  int           two;
  int           three;
  int           fourth;
  int           turn;
} l_ia;

char            *to_add_bin(l_ia base, char *res);
void            fill_da(char *da, l_result res);
char            *right_bin(int *pos);
char            *right_bin1(int pos);
int	        my_strlen(char *str);
char            *int_to_char();
char            *re_malloc(char *str, char *str2);
char            **make_board(char **tab);
int             check_numbers(char *str);
char            **rm_match(char **tab, int line, int nb, int p);
char		*get_next_line(const int fd);

#endif /* READ_SIZE */
