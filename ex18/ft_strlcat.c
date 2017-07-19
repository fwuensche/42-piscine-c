/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 22:56:27 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/04 23:40:40 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int src_size;
	int dest_size;
	int space_left;

	i = 0;
	dest_size = 0;
	space_left = size;
	while (src[i] != '\0')
		i++;
	src_size = i;
	while (dest[dest_size] != '\0' && space_left-- != 0)
		dest_size++;
	space_left = size - dest_size;
	if (space_left == 0)
		return (size + src_size);
	i = 0;
	j = dest_size;
	while (src[i] != 0 && space_left-- > 1)
		dest[j++] = src[i++];
	return (src_size + dest_size);
}
