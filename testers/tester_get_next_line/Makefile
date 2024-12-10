NAME = TESTER
SRC = TESTER.c \
../get_next_line.c \
../get_next_line_utils.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@cc  $(FLAGS) -D BUFFER_SIZE=43 $(SRC) -o $(NAME)
	@./$(NAME)
	@make -s fclean

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re