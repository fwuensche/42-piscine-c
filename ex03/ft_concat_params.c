/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:54:51 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/05 22:17:54 by fwuensch         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *args;
	int i;
	int mem;

	i = 1;
	mem = 0;
	while (i < argc)
	{
		mem += ft_strlen(argv[i]) + 1;
		i++;
	}
	mem--;
	args = (char*)malloc(sizeof(char) * mem);
	i = 1;
	while (i < argc - 1)
	{
		ft_strcat(argv[1], argv[i + 1]);
		i++;
	}
	return (args);
}
