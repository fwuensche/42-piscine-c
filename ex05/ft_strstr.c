/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:08:00 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 17:30:16 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strstr(char *str, char *to_find)
{
	char *result;
	char *query;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		result = str;
		query = to_find;
		while (*str != '\0' && *query != '\0' && *str == *query)
		{
			str++;
			query++;
		}
		if (!*query)
			return (result);
		str = result + 1;
	}
	return (0);
}
