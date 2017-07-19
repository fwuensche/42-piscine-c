/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 13:19:40 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/18 21:12:03 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 4096

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		**count_array(char **map, char obs, int size);
int		bsq(int **pt_sums, int width, int *ri, int *rj);
int		val(int **pt_sums, int i, int j);
void	print_int_array(int **arr, int length);
int		is_valid_input(char *filename);
int		ft_count_map_lines(char *str);
int		ft_get_number_of_lines(const char *str);
int		is_only_empty_or_obstacle(char *str, char e, char o);
char	ft_get_empty_char(char *str);
char	ft_get_obstacle_char(char *str);
char	ft_get_full_char(char *str);
int		ft_lines_have_same_width(char *str);
int		is_first_line_valid(char *str);
void	ft_map_error(void);
int		ft_get_lines_width(char *str);
void	ft_putchar(char c);
void	free_chararr(char **map);
void	free_intarr(int **arr);
char	**build_map(char *str);
void	print_solution(char *str, int size, int i, int j);
int		is_valid_square(int **map, int i, int j, int size);
void	read_from_stdin();
char	*read_file(int fd);
char	*realloc_and_strcat(char *s1, char *s2);
int		ft_strlen(char *str);

#endif
