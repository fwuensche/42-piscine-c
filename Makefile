# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 14:13:30 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/18 17:13:29 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = bsq.c build_map.c count_array.c free_arrays.c main.c map_getters.c \
			print_solution.c reader.c utils.c validations.c
OUTS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OUTS)
	$(CC) $(CFLAGS) $(OUTS) -o $(NAME)

$(OUTS): ft.h

clean:
	-rm -f $(OUTS)

fclean: clean
	-rm -f $(NAME)

re: fclean all
