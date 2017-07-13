# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 13:56:15 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/13 14:56:41 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
SRCS = ft_display_file.c utils.c
OUTS = ft_display_file.o utils.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRCS)
	gcc $(OUTS) -o $(NAME)

clean:
	rm -f $(OUTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
