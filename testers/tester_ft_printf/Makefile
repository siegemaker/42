NAME = TESTER
SRC = tester.c

all: $(NAME)

$(NAME):
	@make -s -C ..
	@cc -w TESTER.c ../libftprintf.a -o $(NAME)
	@./$(NAME)
	@make -s fclean

clean:
	@make -C .. clean
	@rm -f $(SRC:.c=.o)

fclean:	clean
	@make -C .. fclean
	@rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
