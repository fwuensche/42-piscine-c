/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:14:15 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/18 21:12:57 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Takes entire input as string, and solves problem.
*/

void	do_solve(char *str)
{
	int		box_size;
	char	**map;
	int		**pt_sums;
	int		i;
	int		j;

	map = build_map(str);
	pt_sums = count_array(map, ft_get_obstacle_char(str),
			ft_get_lines_width(str));
	print_int_array(pt_sums, ft_get_lines_width(str));
	if ((box_size = bsq(pt_sums, ft_get_lines_width(str), &i, &j)))
		print_solution(str, box_size, i, j);
	else
		write(2, "map error\n", 10);
	free_chararr(map);
	free_intarr(pt_sums);
}

void	print_int_array(int **arr, int length)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (arr[i])
	{
		j = 0;
		while (j < length)
			j++;
		i++;
	}
}

void	read_from_stdin(void)
{
	char *str;

	if ((str = read_file(0)) && *str && is_valid_input(str))
		do_solve(str);
	else
		ft_map_error();
	free(str);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*str;

	i = 1;
	while (argc > 1 && i < argc)
	{
		if ((fd = open(argv[i++], O_RDONLY)) < 0)
			ft_map_error();
		if (fd < 0)
			continue;
		if (((str = read_file(fd)) || 1) && *str && is_valid_input(str))
			do_solve(str);
		else
			ft_map_error();
		free(str);
	}
	if (argc <= 1)
		read_from_stdin();
	return (0);
}
