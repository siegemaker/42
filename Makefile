NAME = TESTER
SRC = TESTER.c \
../get_next_line.c \
../get_next_line_utils.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
ifdef BUFFER_SIZE
	FLAGS += -DBUFFER_SIZE=$(BUFFER_SIZE)
endif

all: $(NAME)

$(NAME):
	@cc  $(FLAGS) $(SRC) -o $(NAME)
	@valgrind ./$(NAME)
	@make -s fclean

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
