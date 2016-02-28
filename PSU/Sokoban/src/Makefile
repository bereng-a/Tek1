##
## Makefile for Makefile in /home/pab/Piscine_C_J10/lib/my
## 
## Made by bereng_a
## Login   <pab@epitech.net>
## 
## Started on  Fri Oct  9 14:57:19 2015 Pablo
## Last update Sun Feb 28 11:43:57 2016 pablo
##

NAME = my_sokoban

SRC =	my_putchar.c \
	inttochar.c \
	get_next_line.c \
	binary.c \
	my_strcmp.c \
	check_tools.c \
	check_tools2.c \
	display.c \
	mooves.c\
	mooves_cut.c\
	tools.c \
	tools2.c \
	chartoint.c \
	re_malloc.c \
	my_strlen.c \
	my_putstr.c \
	my_put_nbr.c \
	zain.c

OBJ = $(SRC:.c=.o)

RM = rm -f

CC = cc

all: $(NAME)

$(NAME) :	$(OBJ)
	$(CC) -o $(NAME) $(SRC) -lncurses

clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(OBJ) $(NAME)

re : fclean all
