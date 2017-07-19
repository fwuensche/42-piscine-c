/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 22:10:08 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/30 16:06:55 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*res;
	char	*beg;
	char	*end;
	char	buf;

	res = str;
	beg = str;
	end = str;
	while (*end != '\0')
		end++;
	end--;
	while (beg < end)
	{
		buf = *beg;
		*beg = *end;
		*end = buf;
		beg++;
		end--;
	}
	return (res);
}
