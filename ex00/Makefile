# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnila <manuel.nila@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/15 20:30:21 by mnila             #+#    #+#              #
#    Updated: 2017/07/15 20:45:48 by mnila            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
TARGET = rush-02
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRC = ./srcs
FILES = find_rush.c utils.c main.c
OBJS = $(FILES:.c=.c)

all:
	mkdir -p ./bin
	$(CC) $(CFLAGS) $(INCLUDE) -c $(FILES)

clean:
	rm ./bin/*.o

fclean: clean
	rm -rf ./bin
	rm $(TARGET)

re: fclean all
