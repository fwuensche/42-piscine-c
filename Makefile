# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 14:13:30 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/17 15:47:20 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = *.c
OUTS = *.o

all: $(NAME)

$(NAME):
	gcc *.c -o $(NAME)

clean:
	rm -f $(OUTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
