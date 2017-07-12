# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 19:39:04 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/11 23:17:52 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = awesome_calculator

OUT = do-op

SRC = awesome_calculator.c awesome_operations.c

all: $(PROGRAM)

$(PROGRAM):
	gcc -Wall -Wextra -Werror $(SRC) -o $(OUT)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(OUT)

re: fclean all
