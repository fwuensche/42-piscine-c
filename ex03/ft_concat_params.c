/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:54:51 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/05 23:02:03 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *args;
	int i;
	int j;
	int k;
	int mem;

	mem = 0;
	i = 1;
	while (i < argc)
	{
		mem += ft_strlen(argv[i]) + 1;
		i++;
	}
	args = (char*)malloc(sizeof(char) * mem);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			args[k] = argv[i][j];
			j++;
			k++;
		}
		if (i == argc - 1)
			args[k] = '\0';
		else
			args[k] = '\n';
		k++;
		i++;
	}
	return (args);
}
