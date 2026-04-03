##
## EPITECH PROJECT, 2025
## MY_TOP
## File description:
## This is the makefile of the project my_top.
##

CC := clang

SRC =  mai.c

OBJ = $(SRC:%.c=%.o)

NAME = libmy.a

EXEC = mysh

CFLAG = -Wall -Wextra

all: $(NAME)


$(NAME):
	$(CC) $(SRC) -o $(EXEC) $(CFLAG)

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(EXEC)

debug: fclean
	epiclang $(SRC) -o $(EXEC) $(CFLAGS)

