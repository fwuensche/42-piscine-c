# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 14:13:30 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/18 12:31:36 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = *.c
OUTS = *.o
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	rm -f $(OUTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
