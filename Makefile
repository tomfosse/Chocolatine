##
## EPITECH PROJECT, 2025
## MY_TOP
## File description:
## This is the makefile of the project my_top.
##

CC := clang

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

tests_run: all
	epiclang tests/*.c $(SRC) --coverage -lcriterion -o unit_tests -std=gnu99
	./unit_tests

fclean: clean
	rm -f $(EXEC)

debug: fclean
	epiclang $(SRC) -o $(EXEC) $(CFLAGS)

