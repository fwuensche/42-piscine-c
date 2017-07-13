# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 13:56:15 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/13 14:34:52 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
SRCS = main.c ft_display_file.c includes.c
OUTS = main.o ft_display_file.o includes.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRCS)
	gcc $(OUTS) -o $(NAME)

clean:
	rm -f $(OUTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
