/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 17:13:46 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/18 14:20:37 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Moves the string pointer to the beginning of the next line.
*/

char	*mv_next_line(char *str)
{
	while (*str != '\n')
		str++;
	str++;
	return (str);
}

/*
** Duplicates newline-terminated line into null-terminated copy.
*/

void	line_dup(char *copy, char *line)
{
	int i;

	i = 0;
	while (line[i] != '\n')
	{
		copy[i] = line[i];
		i++;
	}
	copy[i] = '\0';
}

char	**build_map(char *str)
{
	char	**map;
	char	*line;
	int		numlines;
	int		i;
	int		line_width;

	numlines = ft_get_number_of_lines(str);
	line_width = ft_get_lines_width(str);
	map = malloc(sizeof(*map) * (numlines + 1));
	str = mv_next_line(str);
	i = 0;
	while (i < numlines)
	{
		line = malloc(sizeof(*line) * (line_width + 1));
		line_dup(line, str);
		str += line_width + 1;
		map[i] = line;
		i++;
	}
	map[i] = 0;
	return (map);
}
