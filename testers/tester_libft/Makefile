# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 14:07:05 by mpeters           #+#    #+#              #
#    Updated: 2024/10/28 15:43:52 by mpeters          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# my own Libft tester
# cc creates objects from .c
# ar compiles the objects into executable
# $@ = name of target.		 in $(NAME): $(SRC:%=%.o) this would be $(NAME)
# $^ = current prerequisite. in $(NAME): $(SRC:%=%.o) this would be $(SRC:%=%.o)
# -o = name of exeutable
# -L = folder to look for library in
# -l = library name (has no space because reasons)

NAME = tester
SRC = tester.c

all: $(NAME)

$(NAME): $(SRC:%.c=%.o)
	cc -Werror -Wextra -Wall -o $@ $^ ../libft.a

clean:
	rm -f $(SRC:%.c=%.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re