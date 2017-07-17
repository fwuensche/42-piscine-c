# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnila <mnila@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/15 20:30:21 by mnila             #+#    #+#              #
#    Updated: 2017/07/16 17:15:23 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = rush-2
FLAG = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRC = $(addprefix ./srcs/, $(SRCS))
SRCS = find_rush.c utils.c main.c ft_rushes.c
OUTS = find_rush.o utils.o main.o ft_rushes.o
OBJS = $(SRCS:.c=.c)

all: $(NAME)

$(NAME):
	@mkdir -p ./bin
	@$(CC) $(FLAG) $(INCLUDE) $(SRC) -o $(NAME)

clean:
	@rm -f $(OUTS)
	@rm -f ./bin/$(OUTS)

fclean: clean
	@rm -rf ./bin
	@rm -f $(NAME)

re: fclean all
