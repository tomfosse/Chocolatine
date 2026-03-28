##
## EPITECH PROJECT, 2025
## MY_TOP
## File description:
## This is the makefile of the project my_top.
##

CC := epiclang

SRC =  main.c

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
	rm -f libmy.a
	rm -f $(EXEC)
	make -C lib/my fclean

debug: fclean
	epiclang $(SRC) -o $(EXEC) $(CFLAGS)

