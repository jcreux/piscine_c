/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 02:14:13 by jcreux            #+#    #+#             */
/*   Updated: 2018/07/14 16:23:58 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int back;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			back = i;
			while (to_find[j] != '\0' && to_find[j] == str[back])
			{
				j++;
				back++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			back = 0;
		}
		i++;
	}
	return (0);
}
