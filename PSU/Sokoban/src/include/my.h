/*
** my.h for my for h in /home/pab/Documents/PSU_2015_filter/include
** 
** Made by bereng_a
** Login   <pab@epitech.net>
** 
** Started on  Mon Dec 14 16:46:59 2015 Pablo
** Last update Sun Feb 28 11:44:15 2016 pablo
*/

#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>

#ifndef READ_SIZE
# define READ_SIZE (1)

void		my_putchar(char c);
int		my_put_nbrlong(long int nb);
int		my_put_nbrlongl(long long int nb);
int		my_put_nbr(int nb);
int		my_put_nbr2(unsigned int nb);
int	        my_strn(char *str);
int	        my_strlen(char *str);
int		my_putstr(char *str);
char            *int_to_char();
char            *re_malloc(char *str, char *str2);
int             check_numbers(char *str);
char		*get_next_line(const int fd);
char		**check_map(int ac, char **av, int *n);
int		to_up(char **map, char **bmap, int size);
int		to_down(char **map, char **bmap, int size);
int             to_left(char **map,  char **bmap, int size);
int             to_right(char **map, char **bmap, int size);
int		get_y_p(char **map, int size);
int		get_x_p(char **map, int size);
int		check_game(char **map, int size_y, char **bmap);
void		just_print(char **map, int size, int *i2);
int		to_right_cut(char **map, char **bmap, int y, int x);
int		to_left_cut(char **map, char **bmap, int y, int x);
int		to_up_cut(char **map, char **bmap, int y, int x);
char	        **check_map_cut(int fd, char **map, int *n);
int		to_down_cut(char **map, char **bmap, int y, int x);
int		display_thing(char **map, int size, char **bmap, int *tuch);
int		check_buffer(char *str);
void		just_lignes(char **map, int size, int *cols);
char		**cp_map(char **map, int size);
int		free_map(char **map, int size);
int		check_close_map(char **map, int size);
void            set_yx_zero(int *y, int *x);

#endif /* READ_SIZE */
