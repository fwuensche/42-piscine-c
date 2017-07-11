# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 20:45:50 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/10 21:07:32 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE_FILES = ./srcs/ft_*.c

HEADER_DIR = ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCE_FILES) -I $(HEADER_DIR)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *o

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all
