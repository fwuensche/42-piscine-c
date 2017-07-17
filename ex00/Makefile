# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/16 20:53:41 by fwuensch          #+#    #+#              #
#    Updated: 2017/07/16 23:36:21 by fwuensch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@echo 'set -f; echo $$1 | bc' > eval_expr
	@chmod 755 eval_expr

clean:
	@chmod 755 Makefile

fclean: clean
	@rm -f eval_expr

re: fclean all
