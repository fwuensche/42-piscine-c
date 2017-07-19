/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:30:38 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/09 23:22:01 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}

int		line_is_valid(char *str)
{
	if (ft_strlen(str) != 9)
	{
		return (0);
	}
	while (*str)
	{
		if (('1' <= *str && *str <= '9') || *str == '.')
			str++;
		else
			return (0);
	}
	return (1);
}

int		input_is_valid(int argc, char **argv)
{
	int		i;

	if (argc != 10)
	{
		return (0);
	}
	i = 1;
	while (i < 10)
	{
		if (!(line_is_valid(argv[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
