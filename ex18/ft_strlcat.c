/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 22:10:53 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 22:49:49 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int src_size;
	int dst_size;
	int space_left;

	i = 0;
	dst_size = 0;
	space_left = size;
	while (src[i] != '\0')
		i++;
	src_size = i;
	while (dest[dst_size] != '\0' && space_left-- != 0)
		dst_size++;
	space_left = size - dst_size;
	if (space_left == 0)
		return (size + src_size);
	i = 0;
	j = dst_size;
	while (src[i] != 0 && space_left-- > 1)
		dest[j++] = src[i++];
	return (src_size + dst_size);
}
