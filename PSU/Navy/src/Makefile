##
## Makefile for Makefile in /home/pab/Piscine_C_J10/lib/my
## 
## Made by bereng_a
## Login   <pab@epitech.net>
## 
## Started on  Fri Oct  9 14:57:19 2015 Pablo
## Last update Mon Feb  8 11:44:09 2016 Pablo Berenguel
##

NAME = navy

SRC =	my_putchar.c \
	re_malloc.c \
	end_of_game.c \
	cut.c \
	my_putstr.c \
	binary.c \
	signals.c \
	attack3.c \
	attack4.c \
	attack2.c \
	attack.c  \
	chartoint.c \
	start_game.c \
	inttochar.c \
	my_strcmp.c \
	fill_map.c \
	fill_map2.c \
	tools_boat.c \
	check_tools.c \
	checks.c \
	gest_map.c \
	my_put_nbr.c \
	my_strlen.c \
	tools.c \
	tools2.c \
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
