# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnila <manuel.nila@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/15 20:30:21 by mnila             #+#    #+#              #
#    Updated: 2017/07/15 21:41:43 by mnila            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
TARGET = rush-02
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRC = $(addprefix ./srcs/ $(FILES))
FILES = find_rush.c utils.c main.c
OBJS = $(FILES:.c=.c)

all:
	@mkdir -p ./bin
	@$(CC) $(CFLAGS) $(INCLUDE) -c $(SRC)
	@$(CC) *.o -o $(TARGET)
	@mv *.o ./bin

clean:
	@rm -f *.o
	@rm -f ./bin/*.o

fclean: clean
	@rm -rf ./bin
	@rm -f $(TARGET)

re: fclean all
