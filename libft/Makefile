# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dtran <dtran@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/14 12:49:20 by dtran         #+#    #+#                  #
#    Updated: 2021/12/10 11:58:00 by dtran         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -c -o
AR		=	ar rcs

include source.mk

MKDIR	=	mkdir -p obj
RMDIR	=	rmdir -p obj

OBJ		=	$(SRCS:src/%.c=obj/%.o)

all: obj $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

obj/%.o: src/%.c
	$(CC) $(CFLAGS) $@ $< -I .

obj:
	@$(MKDIR)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@$(RMDIR)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
