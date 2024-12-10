# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 17:37:53 by mpeters           #+#    #+#              #
#    Updated: 2024/11/29 13:46:34 by mpeters          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# they said no global variables but they said NAME was a yes and due to circumstances
# i have no choice but to assume this 'SRC' use of a globalvar is allowed
# also dont forget to remove your commentary and reminders so you won't look deranged during evaluations

NAME =	libft.a
SRC	=	ft_atoi	\
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_strlen \
		ft_tolower \
		ft_toupper \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_strlcpy	\
		ft_strlcat \
		ft_strnstr \
		ft_memset \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_bzero \
		ft_strdup \
		ft_calloc \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split	\
		ft_itoa	\
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putnbr_fd \
		ft_putendl_fd

OBJDIR = ./obj
OBJ = $(SRC:%=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	cc -Werror -Wextra -Wall -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJDIR)

re: fclean all

.PHONY: all clean fclean re