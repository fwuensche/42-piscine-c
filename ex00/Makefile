# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/16 20:53:41 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/16 23:23:58 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=eval_expr

all:
	@echo 'set -f; echo $$1 | bc' > $(NAME)
	@chmod 755 eval_expr

clean:
	@rm -f eval_expr

fclean: clean

re: fclean all
