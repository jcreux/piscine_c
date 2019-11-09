/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 07:12:34 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/11 21:41:04 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	min_only(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_maj(str[i]) == 1)
			str[i] = str[i] - 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_maj(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && is_min(str[i]) == 1)
			str[i] = str[i] - 32;
		else if (is_min(str[i]) == 1 && is_maj(str[i - 1]) == 0
				&& is_min(str[i - 1]) == 0 && is_nbr(str[i - 1]) == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
