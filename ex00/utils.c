/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:05:05 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 14:55:59 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		is_input_valid(int argc)
{
	if (argc == 1)
	{
		ft_puterror("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_puterror(char *str)
{
	write(2, str, ft_strlen(str));
}
