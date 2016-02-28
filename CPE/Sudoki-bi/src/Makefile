##
## Makefile for Makefile in /home/pab/Piscine_C_J10/lib/my
## 
## Made by bereng_a
## Login   <pab@epitech.net>
## 
## Started on  Fri Oct  9 14:57:19 2015 Pablo
## Last update Sun Feb 28 19:39:10 2016 pablo
##

NAME = sudoki-bi

SRC =	check.c \
	check2.c \
	check3.c \
	tools.c \
	list.c \
	sudoku.c \
	utilities.c \
	main.c

OBJ = $(SRC:.c=.o)

RM = rm -f

CC = cc

all: $(NAME)

$(NAME) :	$(OBJ)
	$(CC) -o $(NAME) $(SRC)
	mv $(NAME) bin/
clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(OBJ) bin/$(NAME)

re : fclean all
