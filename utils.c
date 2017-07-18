/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:44:53 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/17 21:50:23 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(const char *str)
{
	int n;

	n = 0;
	while ('0' <= *str && *str <= '9')
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return n;
}

char	ft_get_empty_char(char *str)
{
	while ('0' <= *str && *str <= '9')
		str++;
	return (*str);
}

char	ft_get_obstacle_char(char *str)
{
	while ('0' <= *str && *str <= '9')
		str++;
	str++;
	return (*str);
}

char	ft_get_full_char(char *str)
{
	while ('0' <= *str && *str <= '9')
		str++;
	str++;
	str++;
	return (*str);
}

// char	ft_get_number_of_lines(char *str)
// {
// }

int		ft_count_map_lines(char *str)
{
	int lines;

	lines = 0;
	while (*str)
	{
		if (*str == '\n')
			lines++;
		str++;
	}
	return (lines - 1);
}

int		is_only_empty_or_obstacle(char *str, char e, char o)
{
	// skip first line
	while (*str != '\n')
		str++;
	while (*str)
	{
		if (*str != e && *str != o && *str != '\n')
			return (0);
		str++;
	}
	return (1);
}

int		ft_lines_have_same_width(char *str)
{
	// skip first line
	while (*str != '\n')
		str++;
	str++;

	int w;
	w = 0;
	// count nb of columns
	while (*str != '\n')
	{
		w++;
		str++;
	}
	printf("Map width is: %d\n", w);

	int i;
	while (*str)
	{
		i = 0;
		while (i < w && *str)
		{
			str++;
			if (*str == '\n')
			{
				printf("Found a line break before expected.\n");
				return (0);
			}
			i++;
		}
		str++;
		if (*str != '\n' && *str)
		{
			printf("Didn't find a line break where expected. Found: %c\n", *str);
			return (0);
		}
	}
	printf("All lines have the same width.\n");
	return (1);
}
