# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 19:11:15 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/13 19:27:05 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra ft_cat.c -o $(NAME)

clean:
	rm -f ft_cat.o

fclean: clean
	rm -f $(NAME)

re: fclean all
