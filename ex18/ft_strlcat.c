/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 22:10:53 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 22:43:41 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		if (j < size - 1)
			dest[j] = src[i];
		j++;
		i++;
	}
	dest[j - 1] = '\0';
	return (j);
}
