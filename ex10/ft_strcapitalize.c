/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 20:37:02 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 20:56:51 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (ft_is_alphanumeric(str[i]))
		str[i] = str[i] + 'A' - 'a';
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i]) && !ft_is_alphanumeric(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] + 'A' - 'a';
		}
		i++;
	}
}
