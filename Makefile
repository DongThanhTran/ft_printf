# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dtran <dtran@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/25 12:45:20 by dtran         #+#    #+#                  #
#    Updated: 2021/11/25 12:45:22 by dtran         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -c
INCL	=	-Ilibft
AR		=	ar rcs

SRCS	=	ft_printf.c

OBJ		= 	$(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INCL) -o $@ $<

clean:
	rm -rf $(OBJ)
	$(MAKE) clean -C libft

fclean: clean
	rm -rf $(NAME)
	$(MAKE) fclean -C libft

re: fclean all

.PHONY: all, clean, fclean, re
