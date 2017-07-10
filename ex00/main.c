/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:16:12 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/09 19:23:01 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// void	solve_sudoku(int **tab)
// {
// 	// run through the table
// 		// if value == 0
// 			// get possible values
// 			// if no possible value, return 0
// 			// for each possible value
// 				// fill the current value in the table
// 				// return function pointing to the next place
// 	while (i < 10)
// 		while (j < 10)
// 			if (tab[i][j] == 0)
// 				get_possible_values(i, j);
// }

void	**build_table(char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
			{
				argv[i][j] = '0';
			}
			j++;
		}
		i++;
	}
	return (0);
}

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

void	print_table(char **tab)
{
	int		i;
	int		j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 8)
		{
			write(1, &tab[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, &tab[i][j], 1);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (!(input_is_valid(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}

	build_table(argv);
	// solution = solve_sudoku(**tab);

	// if (solution)
	print_table(argv);
	// else
	// {
	// 	write(1, "Error\n", 6);
	// 	return (0);
	// }

	return (0);
}
