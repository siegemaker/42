# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 00:46:55 by mpeters           #+#    #+#              #
#    Updated: 2024/11/29 15:59:29 by mpeters          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# YES YOU HAVE TO LINK THE OBJECTS IN AS WELL!!!!!!!!!!!!

NAME = libftprintf.a
SRC =	ft_printf.c \
		ft_itoa_base.c \
		ft_print_hex.c \
		ft_print_int.c \
		ft_print_pointer.c \
		ft_print_unsigned_int.c
OBJDIR = ./obj
OBJ = $(SRC:%.c=$(OBJDIR)/%.o)
LIBPATH = ./libft
LIB	= $(LIBPATH)/libft.a
LIBOBJ = $(LIBPATH)/obj/*.o

all: $(LIB) $(NAME)

$(LIB):
	make -C $(LIBPATH)

$(NAME): $(OBJ) $(LIB)
	ar rcs $(NAME) $(OBJ) $(LIBOBJ)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	cc -Werror -Wextra -Wall -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	make -C $(LIBPATH) clean
	rm -f $(OBJ)

fclean:	clean
	make -C $(LIBPATH) fclean
	rm -f $(NAME)
	rm -rf $(OBJDIR)

re:	fclean all

.PHONY: all clean fclean re