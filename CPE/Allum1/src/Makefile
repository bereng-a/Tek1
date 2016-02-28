##
## Makefile for Makefile in /home/pab/Piscine_C_J10/lib/my
## 
## Made by bereng_a
## Login   <pab@epitech.net>
## 
## Started on  Fri Oct  9 14:57:19 2015 Pablo
## Last update Wed Feb 17 15:58:20 2016 Pablo Berenguel
##

NAME = allum1

SRC =	my_putchar.c \
	one.c \
	one2.c \
	ia.c \
	ia2.c \
	tools_ia.c \
	tools_ia2.c \
	inttochar.c \
	get_next_line.c \
	binary.c \
	my_strcmp.c \
	parsing_input.c \
	get_attack_human.c \
	tools_board.c \
	tools_board2.c \
	check_tools.c \
	output_error.c \
	output_error2.c \
	tools.c \
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
	$(CC) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(OBJ) $(NAME)

re : fclean all
