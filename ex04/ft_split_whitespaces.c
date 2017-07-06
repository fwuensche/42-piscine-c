/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:58:26 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/06 14:37:40 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define WHITESPACE(x) x == '\t' || x == '\n' || x == ' '

int				ft_word_count(char *str)
{
	int word_count;
	int i;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		while (WHITESPACE(str[i]) && str[i] != '\0')
			i++;
		while (!(WHITESPACE(str[i])) && str[i] != '\0')
			i++;
		while (WHITESPACE(str[i]) && str[i] != '\0')
			i++;
		word_count++;
	}
	return (word_count);
}

int				ft_word_size(char *str)
{
	int i;

	i = 0;
	while (WHITESPACE(str[i]) && str[i] != '\0')
		str++;
	while (!(WHITESPACE(str[i])) && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int str_it;
	int i;
	int j;
	i = 0;
	j = 0;

	char **arr;
	arr = (char**)malloc(sizeof(char*) * ft_word_count(str));
	arr[0] = (char*)malloc(sizeof(char) * 6);
	arr[1] = (char*)malloc(sizeof(char) * 6);
	arr[2] = (char*)malloc(sizeof(char) * 6);
	arr[3] = (char*)malloc(sizeof(char) * 1);
	str_it = 0;
	while (str[str_it] != '\0')
	{
		if (str[str_it] == ' ' || str[str_it] == '\n' || str[str_it] == '\t')
		{
			arr[i][j] = '\0';
			if (j != 0)
			{
				i++;
			}
			j = 0;
		}
		else
		{
			arr[i][j] = str[str_it];
			j++;
		}
		str_it++;
	}
	i++;
	arr[i][0] = '\0';
	return (arr);
}

int main()
{
	char name[] = "Caioza Flavio Gaucho";
	char **ret;
	int i;

	ret = ft_split_whitespaces(name);
	i = 0;
	while (i < 4)
	{
		printf("%s\n", ret[i]);
		i++;
	}
	return (0);
}
