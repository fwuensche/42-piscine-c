/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_getters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:39:01 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/18 16:11:16 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_get_number_of_lines(const char *str)
{
	int n;
	int digits;
	int i;

	digits = 0;
	while (str[digits] != '\n')
		digits++;
	digits -= 3;
	i = 1;
	n = 0;
	while ('0' <= *str && *str <= '9' && i <= digits)
	{
		n = n * 10 + *str - '0';
		str++;
		i++;
	}
	return (n);
}

char	ft_get_empty_char(char *str)
{
	while (*str != '\n')
		str++;
	str--;
	str--;
	str--;
	return (*str);
}

char	ft_get_obstacle_char(char *str)
{
	while (*str != '\n')
		str++;
	str--;
	str--;
	return (*str);
}

char	ft_get_full_char(char *str)
{
	while (*str != '\n')
		str++;
	str--;
	return (*str);
}

int		ft_get_lines_width(char *str)
{
	int width;

	while (*str != '\n')
		str++;
	str++;
	width = 0;
	while (*str != '\n')
	{
		width++;
		str++;
	}
	return (width);
}
