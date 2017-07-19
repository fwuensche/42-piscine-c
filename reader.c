/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:00:53 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/18 11:01:00 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*read_file(int fd)
{
	char	*s1;
	char	*s2;
	int		ret;

	s1 = (char*)malloc(sizeof(char));
	s1[0] = '\0';
	s2 = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
	while ((ret = read(fd, s2, BUF_SIZE)))
	{
		s2[ret] = '\0';
		s1 = realloc_and_strcat(s1, s2);
	}
	free(s2);
	close(fd);
	return (s1);
}

char	*realloc_and_strcat(char *s1, char *s2)
{
	char	*ret;
	int		i;
	int		j;

	ret = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		ret[j++] = s1[i++];
	free(s1);
	i = 0;
	while (s2[i] != '\0')
		ret[j++] = s2[i++];
	ret[j] = '\0';
	return (ret);
}

int		ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}
