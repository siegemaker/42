# -C specifies directory of action
# hey i'm getting the hang of this! o:
# cc -Werror -Wextra -Wall -o $@ $^ $(LIB)
# flags are turned off for testing purposes, re-add the variable to the compiling line to enable them

NAME = tester
SRC = tester.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C ..
	gcc tester.c ../libftprintf.a -o $(NAME)

clean:
	make -C .. clean
	rm -f $(SRC:.c=.o)

fclean:	clean
	make -C .. fclean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re