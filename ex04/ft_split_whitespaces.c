/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:58:26 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/06 19:11:36 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_word_count(char *str)
{
	int word_count;
	int i;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (ft_is_whitespace(str[i]) && str[i] != '\0')
			i++;
		while (!(ft_is_whitespace(str[i])) && str[i] != '\0')
			i++;
		while (ft_is_whitespace(str[i]) && str[i] != '\0')
			i++;
		word_count++;
	}
	return (word_count);
}

char	**ft_allocate_memory(char *str, int word_count, int i, int j)
{
	char	**arr;

	arr = (char**)malloc(sizeof(char*) * (word_count + 1));
	while (ft_is_whitespace(*str))
		str++;
	while (*str)
	{
		if (ft_is_whitespace(*str))
		{
			arr[i++] = (char*)malloc(sizeof(char) * (j + 1));
			while (ft_is_whitespace(*str))
				str++;
			str--;
			j = 0;
		}
		else
			j++;
		if (*(str++ + 1) == '\0')
			arr[i] = (char*)malloc(sizeof(char) * (j + 1));
	}
	if (!(ft_is_whitespace(*(str - 1))))
		i++;
	arr[i] = 0;
	return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		word_count;
	char	**arr;

	i = 0;
	j = 0;
	word_count = ft_word_count(str);
	arr = ft_allocate_memory(str, word_count, 0, 0);
	while (ft_is_whitespace(*str))
		str++;
	while (i < word_count)
	{
		if (ft_is_whitespace(*str))
		{
			while (ft_is_whitespace(*str))
				str++;
			arr[i][j] = '\0';
			i += (j != 0) ? 1 : 0;
			j = 0;
		}
		else
			arr[i][j++] = *str++;
	}
	return (arr);
}
