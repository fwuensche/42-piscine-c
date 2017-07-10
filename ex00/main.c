/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 16:16:12 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/09 23:13:24 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
 * Checks to see if a particular value is presently valid in a
 * given position.
 */
int		is_valid(char number, char grid[9][9], int row, int column) {
	int i = 0;
	int sectorRow = 3 * (row / 3);
	int sectorCol = 3 * (column / 3);
	int row1 = (row + 2) % 3;
	int row2 = (row + 4) % 3;
	int col1 = (column + 2) % 3;
	int col2 = (column + 4) % 3;

	/* Check for the value in the given row and column */
	while (i < 9)
	{
		if (grid[i][column] == number)
			return (0);
		if (grid[row][i] == number)
			return (0);
		i++;
	}

	/* Check the remaining four spaces in this sector */
	if (grid[row1 + sectorRow][col1 + sectorCol] == number)
		return 0;
	if (grid[row2 + sectorRow][col1 + sectorCol] == number)
		return 0;
	if (grid[row1 + sectorRow][col2 + sectorCol] == number)
		return 0;
	if (grid[row2 + sectorRow][col2 + sectorCol] == number)
		return 0;
	return 1;
}

int		solve_sudoku(char grid[9][9], int i, int j)
{
	char	n;

	if (i == 9)
		return (1);

	if (grid[i][j] != '0') {
		if (j == 8) {
			if (solve_sudoku(grid, i + 1, 0)) return 1;
		} else {
			if (solve_sudoku(grid, i, j + 1)) return 1;
		}
		return (0);
	}

	n = '1';
	while (n <= '9')
	{
		if(is_valid(n, grid, i, j)) {
			grid[i][j] = n;
			if (j == 8) {
				if (solve_sudoku(grid, i + 1, 0))
					return (1);
			} else {
				if (solve_sudoku(grid, i, j + 1))
					return (1);
			}
			grid[i][j] = '0';
		}
		n++;
	}
	return (0);
}

void		build_table(char **argv, char grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				grid[i][j] = '0';
			else
				grid[i][j] = argv[i][j];
			j++;
		}
		i++;
	}
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

void	print_table(char grid[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			write(1, &grid[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, &grid[i][j], 1);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	grid[9][9];

	if (!(input_is_valid(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}

	build_table(argv + 1, grid);
	solve_sudoku(grid, 0, 0);

	// if (solution)
	print_table(grid);
	// else
	// {
	// 	write(1, "Error\n", 6);
	// 	return (0);
	// }

	return (0);
}
