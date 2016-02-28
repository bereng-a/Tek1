/*
** my.h for my for h in /home/pab/Documents/PSU_2015_filter/include
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Mon Dec 14 16:46:59 2015 Pablo
** Last update Sat Feb 27 18:39:17 2016 pablo
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef READ_SIZE
# define READ_SIZE

typedef struct  s_map
{
  int           i;
  int           j;
  int           nb;
  struct s_map  *next;
}               t_map;

void            free_map(char **map);
void		display_map(char **map);
char            **malloc_map(char **map);
int             main_check(char **map, int retu);
int             check_double_number(char **map);
int             free_tab_1(int *tab);
int             check_double_number_square(char **map, int *tab);
void            add_the_number(int *tab, char c);
void            empty_tab(int *tab);
t_map		*new_elem(int i, int j, int nb);
void		clean_list(t_map **list);
void		head_list(t_map **list, int i, int j, int nb);
t_map		*sorting(t_map *list);
void		insertion(t_map **list, t_map *elem);
int		save_map(int grid[9][9], t_map *pos);
int		workable(int grid[9][9], int i, int j);
void		complete_it(int grid[9][9]);
void		aff_map(int grid[9][9]);
int		in_line(int grid[9][9], int line, int nb);
int		in_col(int grid[9][9], int col, int nb);
int		in_block(int grid[9][9], int posx, int posy, int nb);
void            display_wrong_map();

#endif /* READ_SIZE */
