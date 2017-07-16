# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnila <mnila@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/15 20:30:21 by mnila             #+#    #+#              #
#    Updated: 2017/07/16 16:49:55 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
TARGET = rush-2
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRC = $(addprefix ./srcs/, $(FILES))
FILES = find_rush.c utils.c main.c ft_rushes.c
OUTS = find_rush.o utils.o main.o ft_rushes.o
OBJS = $(FILES:.c=.c)

all: $(TARGET)

$(TARGET):
	@mkdir -p ./bin
	@$(CC) $(CFLAGS) $(INCLUDE) -c $(SRC)
	@$(CC) $(OUTS) -o $(TARGET)
	@mv $(OUTS) ./bin

clean:
	@rm -f $(OUTS)
	@rm -f ./bin/$(OUTS)

fclean: clean
	@rm -rf ./bin
	@rm -f $(TARGET)

re: fclean all
